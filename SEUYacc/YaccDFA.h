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
	bool operator==(const LRItem& t) const {
		// 比较 positionInt
		if (positionInt != t.positionInt) return false;

		// 比较 gramarInt
		if (gramarInt != t.gramarInt) return false;

		// 比较 predictiveSymbol
		if (predictiveSymbol != t.predictiveSymbol) return false;

		// 如果以上三个成员都相等，返回 true
		return true;
	}
	LRItem(int position, int gramar, const std::unordered_set<int>& predictive)
		: positionInt(position), gramarInt(gramar), predictiveSymbol(predictive) {}
	
};
struct LRState {
	int numberInt = -1;//状态号
	unordered_map<int, int> edgesMap;//移进ID得到新状态号
	//<发出边上符号，状态号>
	set<LRItem> LRItemsSet;
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
	vector<LRState>  states;//存储所有的LRState，状态集 映射状态号和状态 存储的是拷贝而非引用
	void generateState(LRState& state);
	void extendState(LRState& state, queue<int>& que);
	void generateLRDFA();
	int findExistingState(const LRState& newState);
};

extern vector< Producer> producerList;//产生式列表
extern unordered_map<int, set<int> > firsts;

void First();
void printFirsts();
void printLRItem(const LRItem& item);
void printLRState(const LRState& state);

#endif // !YACCDFA_H
