// LRTableBuilder.cpp
#include "LRTableBuilder.h"
#include "symbolList.h"
#include <iostream>

vector<unordered_map<int, Action>> ACTION;//int表示对应的符号编号，Action为对应的动作
vector<unordered_map<int, int>> GOTO;

void buildLRTable(const LRDFA& dfa) {
    // 初始化大小
    ACTION.resize(dfa.statesVec.size());//ACTION表的长度和DFA的状态一致
    GOTO.resize(dfa.statesVec.size());

    for (const auto& state : dfa.statesVec) {//遍历dfa中的每一个状态
        for (const auto& item : state.LRItemsSet) {//遍历状态中的每一item
            const auto& prod = numproducerList[item.gramarInt];//取出item中对应的产生式
            if (item.positionInt < prod.second.size()) //如果点不在末尾（非规约态）
            {
                int symbol = prod.second[item.positionInt];//获取点后面的符号
                if (isTerminalid(symbol)) {//终结符
                    int target = state.edgesMap.at(symbol);
                    ACTION[state.numberInt][symbol] = { SHIFT, target };//添加SHIFT命令
                }
                else {//非终结符
                    int target = state.edgesMap.at(symbol);
                    GOTO[state.numberInt][symbol] = target;//添加goto命令
                }
            }
            else {//点在末尾，进行归约
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
