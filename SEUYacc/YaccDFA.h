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
	LRItem(int position, int gramar, const std::unordered_set<int>& predictive)
		: positionInt(position), gramarInt(gramar), predictiveSymbol(predictive) {}
	
};
struct LRState {
	int numberInt = -1;//״̬��
	unordered_map<int, int> edgesMap;//�ƽ�ID�õ���״̬��
	//<�������Ϸ��ţ�״̬��>
	unordered_set<LRItem> LRItemsSet;
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
	unordered_map<int, LRState>  states;//�洢���е�LRState��״̬�� ӳ��״̬�ź�״̬ �洢���ǿ�����������
	void generateState(LRState& state);
	void extendState(LRState& state, queue<int>& que);
	LRDFA();
	int findExistingState(const LRState& newState);
};

extern vector< Producer> producerList;//����ʽ�б�
extern unordered_map<int, set<int> > firsts;

void First();
void printFirsts();
void printLRItem(const LRItem& item);
void printLRState(const LRState& state);
// Ϊ�Զ������� LRItem �� LRState �����ϣ����
namespace std {
	template <>
	struct hash<LRItem> {
		size_t operator()(const LRItem& item) const {
			size_t hash_value = 0;
			hash<int> hasher;

			// ���� positionInt �� gramarInt �Ĺ�ϣֵ
			hash_value ^= hasher(item.positionInt);
			hash_value ^= hasher(item.gramarInt);

			// �� unordered_set<int> ת��Ϊ vector<int> ������
			vector<int> sortedSymbols(item.predictiveSymbol.begin(), item.predictiveSymbol.end());
			sort(sortedSymbols.begin(), sortedSymbols.end());

			// ���� predictiveSymbol ���ϵĹ�ϣֵ
			for (const auto& symbol : sortedSymbols) {
				hash_value ^= hasher(symbol); // ��ÿ��Ԫ�ؽ��й�ϣ��������ֵ�ϲ�
			}

			return hash_value;
		}
	};
	//��״̬û��״̬ת�� ֻҪLR����ͬ������ͬ״̬
	template <>
	struct hash<LRState> {
		size_t operator()(const LRState& state) const {
			size_t hash_value = 0;

			// ֻ����LRItemsSet�����ϣֵ
			for (const auto& item : state.LRItemsSet) {
				hash_value ^= std::hash<LRItem>()(item);
			}
			return hash_value;
		}
	};
}
#endif // !YACCDFA_H
