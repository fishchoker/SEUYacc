// LRTableBuilder.cpp
#include "LRTableBuilder.h"
#include "symbolList.h"
#include <iostream>

vector<unordered_map<int, Action>> ACTION;//int��ʾ��Ӧ�ķ��ű�ţ�ActionΪ��Ӧ�Ķ���
vector<unordered_map<int, int>> GOTO;

void buildLRTable(const LRDFA& dfa) {
    // ��ʼ����С
    ACTION.resize(dfa.statesVec.size());//ACTION��ĳ��Ⱥ�DFA��״̬һ��
    GOTO.resize(dfa.statesVec.size());

    for (const auto& state : dfa.statesVec) {//����dfa�е�ÿһ��״̬
        for (const auto& item : state.LRItemsSet) {//����״̬�е�ÿһitem
            const auto& prod = numproducerList[item.gramarInt];//ȡ��item�ж�Ӧ�Ĳ���ʽ
            if (item.positionInt < prod.second.size()) //����㲻��ĩβ���ǹ�Լ̬��
            {
                int symbol = prod.second[item.positionInt];//��ȡ�����ķ���
                if (isTerminalid(symbol)) {//�ս��
                    int target = state.edgesMap.at(symbol);
                    ACTION[state.numberInt][symbol] = { SHIFT, target };//���SHIFT����
                }
                else {//���ս��
                    int target = state.edgesMap.at(symbol);
                    GOTO[state.numberInt][symbol] = target;//���goto����
                }
            }
            else {//����ĩβ�����й�Լ
                if (prod.first == 0 && item.predictiveSymbol == terminal["$"]) {
                    ACTION[state.numberInt][terminal["$"]] = { ACCEPT, 0 };
                }
                else {
                    ACTION[state.numberInt][item.predictiveSymbol] = { REDUCE, item.gramarInt };
                }
            }
        }
    }
}
