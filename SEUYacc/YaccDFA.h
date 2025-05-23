#pragma once
#ifndef YACCDFA_H
#define YACCDFA_H
#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include <queue>
#include <functional>
#include"YaccParser.h"
#include"symbolList.h"
using namespace std;
//提供自定义结构体的哈希函数实现 简化比较操作

struct LRItem {
	int positionInt = 0;//点的位置
	int gramarInt = -1;//产生式标号
	unordered_set<int> predictiveSymbol;//预测符
	bool operator < (const LRItem& t) const {
		if (gramarInt == t.gramarInt) {
			if (positionInt == t.positionInt) {
				// 将预测符从 unordered_set 转换为 vector，并进行排序
				vector<int> this_symbols(predictiveSymbol.begin(), predictiveSymbol.end());
				vector<int> that_symbols(t.predictiveSymbol.begin(), t.predictiveSymbol.end());
				sort(this_symbols.begin(), this_symbols.end());
				sort(that_symbols.begin(), that_symbols.end());
				return this_symbols < that_symbols;
			}
			return positionInt < t.positionInt;
		}
		return gramarInt < t.gramarInt;
	}
	LRItem(int position, int gramar, const std::unordered_set<int>& predictive)
		: positionInt(position), gramarInt(gramar), predictiveSymbol(predictive) {}
	
};
struct LRState {
	int numberInt = -1;//状态号
	unordered_map<int, int> edgesMap;//移进ID得到新状态号
	//<发出边上符号，状态号>
	unordered_set<LRItem> LRItemsSet;
	//其中的edgesMap用于表示发出边，对于一个状态来说，每个类型的字符只可能有一种移进，所以使用普通的map 
	LRState()
		: numberInt(-1) { // 初始化numberInt为-1，其他成员会自动使用默认构造函数
		// edgesMap 和 LRItemsSet 会被默认构造为各自的空容器
	}
	LRState(const LRState& other)
		: numberInt(other.numberInt),
		edgesMap(other.edgesMap),
		LRItemsSet(other.LRItemsSet) {
		// 直接拷贝成员变量，unordered_map和set会自动拷贝它们的内容
	}

};
struct LRDFA {
	int startState = 0;//每新建一个状态就取用 然后自增 
	unordered_map<int, LRState>  states;//存储所有的LRState，状态集 映射状态号和状态 存储的是拷贝而非引用
	void generateState(LRState& state);
	void extendState(LRState& state, queue<int>& que);
	LRDFA();
	int findExistingState(const LRState& newState);
};

extern vector< Producer> producerList;//产生式列表
extern unordered_map<int, set<int> > firsts;

void First();
void printFirsts();
void printLRItem(const LRItem& item);
void printLRState(const LRState& state);
// 为自定义类型 LRItem 和 LRState 定义哈希函数
namespace std {
	template <>
	struct hash<LRItem> {
		size_t operator()(const LRItem& item) const {
			size_t hash_value = 0;
			hash<int> hasher;

			// 计算 positionInt 和 gramarInt 的哈希值
			hash_value ^= hasher(item.positionInt);
			hash_value ^= hasher(item.gramarInt);

			// 将 unordered_set<int> 转换为 vector<int> 并排序
			vector<int> sortedSymbols(item.predictiveSymbol.begin(), item.predictiveSymbol.end());
			sort(sortedSymbols.begin(), sortedSymbols.end());

			// 计算 predictiveSymbol 集合的哈希值
			for (const auto& symbol : sortedSymbols) {
				hash_value ^= hasher(symbol); // 对每个元素进行哈希并与现有值合并
			}

			return hash_value;
		}
	};
	//新状态没有状态转移 只要LR项相同就是相同状态
	template <>
	struct hash<LRState> {
		size_t operator()(const LRState& state) const {
			size_t hash_value = 0;

			// 只基于LRItemsSet计算哈希值
			for (const auto& item : state.LRItemsSet) {
				hash_value ^= std::hash<LRItem>()(item);
			}
			return hash_value;
		}
	};
}
#endif // !YACCDFA_H
