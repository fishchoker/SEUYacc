// LRTableBuilder.h
#pragma once
#include "YaccDFA.h"
#include <vector>
#include <unordered_map>
using namespace std;

#ifndef LRTABLEBUILDER_H
#define LRTABLEBUILDER_H

enum ActionType { SHIFT, REDUCE, ACCEPT, ERROR };

struct Action {
    ActionType type;
    int target; // 如果是SHIFT或GOTO，表示目标状态；REDUCE表示产生式编号
};

extern vector<unordered_map<int, Action>> ACTION; // ACTION[state][symbol_id]
extern vector<unordered_map<int, int>> GOTO;       // GOTO[state][nonterminal_id]

void buildLRTable(const LRDFA& dfa);

#endif
