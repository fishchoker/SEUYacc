#pragma once
#ifndef YACCDFA_H
#define YACCDFA_H
#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include <queue>
#include"YaccParser.h"
#include"symbolList.h"
using namespace std;
struct LRItem {
	int positionInt = 0;//���λ��
	int gramarInt = -1;//����ʽ���
	int predictiveSymbol;//Ԥ���
	bool operator < (const LRItem& t) const {
		if (gramarInt == t.gramarInt) {
			if (positionInt == t.positionInt) return predictiveSymbol < t.predictiveSymbol;
			return positionInt < t.positionInt;
		}
		return gramarInt < t.gramarInt;
	}
	LRItem(int position,int gramar, int predictive)
		:  positionInt(position),gramarInt(gramar), predictiveSymbol(predictive) {}
	
};
struct LRState {
	int numberInt = -1;//״̬��
	unordered_map<int, int> edgesMap;//�ƽ�ID�õ���״̬��
	//<�������Ϸ��ţ�״̬��>
	set<LRItem> LRItemsSet;
	//���е�edgesMap���ڱ�ʾ�����ߣ�����һ��״̬��˵��ÿ�����͵��ַ�ֻ������һ���ƽ�������ʹ����ͨ��map 
	LRState()
		: numberInt(-1) { // ��ʼ��numberIntΪ-1��������Ա���Զ�ʹ��Ĭ�Ϲ��캯��
		// edgesMap �� LRItemsSet �ᱻĬ�Ϲ���Ϊ���ԵĿ�����
	}
	LRState(const LRState& other)
		: numberInt(other.numberInt),
		edgesMap(other.edgesMap),
		LRItemsSet(other.LRItemsSet) {
		// ֱ�ӿ�����Ա������unordered_map��set���Զ��������ǵ�����
	}
};
struct LRDFA {
	int startState = 0;
	vector<LRState> statesVec;  //�洢���е�LRState��״̬��
	void extendState(LRState& state, queue<int>& que);
	LRDFA();
};
extern vector< Producer> producerList;//����ʽ�б�
extern unordered_map<int, set<int> > firsts;
void generateState(LRState& state);
void First();
void printFirsts();
void printLRItem(const LRItem& item);
void printLRState(const LRState& state);
#endif // !YACCDFA_H
