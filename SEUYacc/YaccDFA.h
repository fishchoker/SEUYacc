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
//�ṩ�Զ���ṹ��Ĺ�ϣ����ʵ�� �򻯱Ƚϲ���
struct LRItem {
	int positionInt = 0;//���λ��
	int gramarInt = -1;//����ʽ���
	unordered_set<int> predictiveSymbol;//Ԥ���
	bool operator < (const LRItem& t) const {
		if (gramarInt == t.gramarInt) {
			if (positionInt == t.positionInt) {
				// ��Ԥ����� unordered_set ת��Ϊ vector������������
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
		// �Ƚ� positionInt
		if (positionInt != t.positionInt) return false;

		// �Ƚ� gramarInt
		if (gramarInt != t.gramarInt) return false;

		// �Ƚ� predictiveSymbol
		if (predictiveSymbol != t.predictiveSymbol) return false;

		// �������������Ա����ȣ����� true
		return true;
	}
	LRItem(int position, int gramar, const std::unordered_set<int>& predictive)
		: positionInt(position), gramarInt(gramar), predictiveSymbol(predictive) {}
	
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
	int startState = 0;//ÿ�½�һ��״̬��ȡ�� Ȼ������ 
	vector<LRState>  states;//�洢���е�LRState��״̬�� ӳ��״̬�ź�״̬ �洢���ǿ�����������
	void generateState(LRState& state);
	void extendState(LRState& state, queue<int>& que);
	void generateLRDFA();
	int findExistingState(const LRState& newState);
};

extern vector< Producer> producerList;//����ʽ�б�
extern unordered_map<int, set<int> > firsts;

void First();
void printFirsts();
void printLRItem(const LRItem& item);
void printLRState(const LRState& state);

#endif // !YACCDFA_H
