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
	LRItem(int gramar, int position, int predictive)
		: gramarInt(gramar), positionInt(position), predictiveSymbol(predictive) {}
};
struct LRState {
	int numberInt = -1;//״̬��
	unordered_map<int, int> edgesMap;//�ƽ�ID�õ���״̬��
	//<�������Ϸ��ţ�״̬��>
	set<LRItem> LRItemsSet;
	//���е�edgesMap���ڱ�ʾ�����ߣ�����һ��״̬��˵��ÿ�����͵��ַ�ֻ������һ���ƽ�������ʹ����ͨ��map 
	// �������Ĺ��캯��
};
struct LRDFA {
	int startState = 0;
	vector<LRState> statesVec;  //�洢���е�LRState��״̬��
	LRDFA();
	//
	void extendState(LRState state);
};
extern vector< Producer> producerList;//����ʽ�б�
extern unordered_map<int, set<int> > firsts;
void First();
void printFirsts();
void printLRState(const LRState& state);
#endif // !YACCDFA_H
