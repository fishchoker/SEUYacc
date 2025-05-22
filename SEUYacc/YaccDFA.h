#pragma once
#ifndef YACCDFA_H
#define YACCDFA_H
#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include"YaccParser.h"
#include"symbolList.h"
using namespace std;
struct LRItem {
	int positionInt = 0;//点的位置
	int gramarInt = -1;//产生式标号
	int predictiveSymbol;//预测符
	bool operator < (const LRItem& t) const {
		if (gramarInt == t.gramarInt) {
			if (positionInt == t.positionInt) return predictiveSymbol < t.predictiveSymbol;
			return positionInt < t.positionInt;
		}
		return gramarInt < t.gramarInt;
	}
	LRItem(int gramar, int position, int predictive)
		: gramarInt(gramar), positionInt(position), predictiveSymbol(predictive) {}
};
struct LRState {
	int numberInt = -1;//状态号
	unordered_map<int, int> edgesMap;//移进ID得到新状态号
	//<发出边上符号，状态号>
	set<LRItem> LRItemsSet;
	//其中的edgesMap用于表示发出边，对于一个状态来说，每个类型的字符只可能有一种移进，所以使用普通的map 
	// 带参数的构造函数
};
struct LRDFA {
	int startState = 0;
	vector<LRState> statesVec;  //存储所有的LRState，状态集
	LRDFA();
	//
	void extendState(LRState state);
};
extern vector< Producer> producerList;//产生式列表
extern unordered_map<int, set<int> > firsts;
void First();
void printFirsts();
void printLRState(const LRState& state);
#endif // !YACCDFA_H
