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
    int target; // SHIFT: ��һ��״̬��REDUCE: ����ʽ��ţ�ACCEPT��ERROR������

    Action() : type(ActionType::ERROR), target(-1) {}
    Action(ActionType t, int trg) : type(t), target(trg) {}
};

class LRTableBuilder {
public:
    // ACTION�� ״̬�� -> �ս��ID -> Action
    std::vector<std::unordered_map<int, Action>> ACTION;
    // GOTO�� ״̬�� -> ���ս��ID -> ״̬��
    std::vector<std::unordered_map<int, int>> GOTO;

    LRTableBuilder(const LRDFA& dfa);

    // ���� ACTION �� GOTO ��
    void buildTables();
    // �� LRTableBuilder.h �����
    int endSymbol;

private:
    const LRDFA& dfa;

    // �ж�ĳ��LRItem�Ƿ�Ϊ��Լ��Ŀ�������ڲ���ʽĩβ��
    bool isReduceItem(const LRItem& item) const;

    // �ж�ĳ��LRItem�Ƿ�Ϊ������Ŀ
    bool isAcceptItem(const LRItem& item) const;
};

void printActionTable(const LRTableBuilder& builder);
void printGotoTable(const LRTableBuilder& builder);