#pragma once
#include <vector>
#include <unordered_map>
#include "YaccDFA.h"
#include "symbolList.h"

enum class ActionType {
    SHIFT,
    REDUCE,
    ACCEPT,
    ERROR
};

struct Action {
    ActionType type;
    int target; // SHIFT: 下一个状态，REDUCE: 产生式编号，ACCEPT和ERROR无意义

    Action() : type(ActionType::ERROR), target(-1) {}
    Action(ActionType t, int trg) : type(t), target(trg) {}
};

class LRTableBuilder {
public:
    // ACTION表： 状态号 -> 终结符ID -> Action
    std::vector<std::unordered_map<int, Action>> ACTION;
    // GOTO表： 状态号 -> 非终结符ID -> 状态号
    std::vector<std::unordered_map<int, int>> GOTO;

    LRTableBuilder(const LRDFA& dfa);

    // 构造 ACTION 和 GOTO 表
    void buildTables();
    // 在 LRTableBuilder.h 中添加
    int endSymbol;

private:
    const LRDFA& dfa;

    // 判断某个LRItem是否为规约项目（点已在产生式末尾）
    bool isReduceItem(const LRItem& item) const;

    // 判断某个LRItem是否为接受项目
    bool isAcceptItem(const LRItem& item) const;
};

void printActionTable(const LRTableBuilder& builder);
void printGotoTable(const LRTableBuilder& builder);