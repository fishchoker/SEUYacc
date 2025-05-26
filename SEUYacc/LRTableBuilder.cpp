#include "LRTableBuilder.h"
#include <iostream>
#include <iomanip>  // for std::setw

LRTableBuilder::LRTableBuilder(const LRDFA& dfa) : dfa(dfa) {
    int stateCount = (int)dfa.states.size();
    ACTION.resize(stateCount);
    GOTO.resize(stateCount);
}

bool LRTableBuilder::isReduceItem(const LRItem& item) const {
    const Producer& prod = producerList[item.gramarInt];
    bool res = (item.positionInt == (int)prod.right.size());
    if (res) {
        std::cout << "[isReduceItem] Item (prod #" << item.gramarInt << ") is reduce item." << std::endl;
    }
    return res;
}

bool LRTableBuilder::isAcceptItem(const LRItem& item) const {
    if (item.gramarInt != numproducerList.size()-1) 
        return false;
    if (!isReduceItem(item)) return false;
    int dollarId = symbol2id("$");
    return item.predictiveSymbol.find(dollarId) != item.predictiveSymbol.end();
}

void LRTableBuilder::buildTables() {
    int dollarId = symbol2id("$");

    // ������������ȼ� (��ֵԽ�����ȼ�Խ��)
    std::unordered_map<int, int> precedence = {
        {symbol2id("||"), 1},
        {symbol2id("&&"), 2},
        {symbol2id("|"), 3},
        {symbol2id("^"), 4},
        {symbol2id("&"), 5},
        {symbol2id("=="), 6}, {symbol2id("!="), 6},
        {symbol2id("<"), 7}, {symbol2id("<="), 7}, {symbol2id(">"), 7}, {symbol2id(">="), 7},
        {symbol2id("<<"), 8}, {symbol2id(">>"), 8},
        {symbol2id("+"), 9}, {symbol2id("-"), 9},
        {symbol2id("*"), 10}, {symbol2id("/"), 10}, {symbol2id("%"), 10},
        {symbol2id("!"), 11}, {symbol2id("~"), 11}, {symbol2id("++"), 11}, {symbol2id("--"), 11}
    };

    // �������������� (0=�޽���ԣ�1=���ϣ�2=�ҽ��)
    std::unordered_map<int, int> associativity = {
        {symbol2id("||"), 1}, {symbol2id("&&"), 1},
        {symbol2id("|"), 1}, {symbol2id("^"), 1}, {symbol2id("&"), 1},
        {symbol2id("=="), 1}, {symbol2id("!="), 1},
        {symbol2id("<"), 1}, {symbol2id("<="), 1}, {symbol2id(">"), 1}, {symbol2id(">="), 1},
        {symbol2id("<<"), 1}, {symbol2id(">>"), 1},
        {symbol2id("+"), 1}, {symbol2id("-"), 1},
        {symbol2id("*"), 1}, {symbol2id("/"), 1}, {symbol2id("%"), 1},
        {symbol2id("!"), 0}, {symbol2id("~"), 0}, {symbol2id("++"), 0}, {symbol2id("--"), 0},
        {symbol2id("="), 2}, {symbol2id("+="), 2}, {symbol2id("-="), 2}, {symbol2id("*="), 2},
        {symbol2id("/="), 2}, {symbol2id("%="), 2}, {symbol2id("&="), 2}, {symbol2id("|="), 2},
        {symbol2id("^="), 2}, {symbol2id("<<="), 2}, {symbol2id(">>="), 2}
    };

    for (int stateId = 0; stateId < (int)dfa.states.size(); ++stateId) {
        const LRState& state = dfa.states[stateId];

        std::cout << "Processing State " << stateId << ":\n";

        // 1. �Ȳ����ƽ���SHIFT����ת�ƣ�GOTO������
        for (const auto& edge : state.edgesMap) {
            int symbolId = edge.first;
            int toState = edge.second;

            if (isTerminalid(symbolId)) {
                std::cout << "  Adding SHIFT action on terminal '" << id2symbol(symbolId) << "' to state " << toState << std::endl;
                ACTION[stateId][symbolId] = Action(ActionType::SHIFT, toState);
            }
            else if (isNonterminalid(symbolId)) {
                std::cout << "  Adding GOTO on nonterminal '" << id2symbol(symbolId) << "' to state " << toState << std::endl;
                GOTO[stateId][symbolId] = toState;
            }
        }

        // 2. �����Լ�ͽ��ܶ���
        for (const LRItem& item : state.LRItemsSet) {
            if (isReduceItem(item)) {
                std::cout << "  State " << stateId << " has reduce item: prod #" << item.gramarInt << ", lookaheads: ";
                for (int la : item.predictiveSymbol) {
                    std::cout << id2symbol(la) << " ";
                }
                std::cout << std::endl;

                if (isAcceptItem(item)) {
                    std::cout << "    Adding ACCEPT action on '$'" << std::endl;
                    ACTION[stateId][dollarId] = Action(ActionType::ACCEPT, numproducerList.size() - 1);
                }
                else {
                    for (int lookahead : item.predictiveSymbol) {
                        if (!isTerminalid(lookahead)) continue;

                        // ��ȡ��ǰ����ʽ�����ȼ�
                        int reducePrec = 0;
                        if (precedence.count(lookahead)) {
                            reducePrec = precedence[lookahead];
                        }

                        if (ACTION[stateId].count(lookahead)) {
                            auto& oldAction = ACTION[stateId][lookahead];

                            // �����ƽ�-��Լ��ͻ
                            if (oldAction.type == ActionType::SHIFT) {
                                // ��ȡ�ƽ����ŵ����ȼ�
                                int shiftPrec = 0;
                                if (precedence.count(lookahead)) {
                                    shiftPrec = precedence[lookahead];
                                }

                                // �������ȼ��ͽ���Խ����ͻ
                                if (reducePrec > shiftPrec) {
                                    // ��Լ���ȼ����ߣ�ѡ���Լ
                                    std::cout << "    Resolving conflict: REDUCE by prod " << item.gramarInt
                                        << " (prec " << reducePrec << ") over SHIFT (prec " << shiftPrec << ")" << std::endl;
                                    ACTION[stateId][lookahead] = Action(ActionType::REDUCE, item.gramarInt);
                                }
                                else if (reducePrec == shiftPrec) {
                                    // ���ȼ���ͬ�����ݽ���Ծ���
                                    if (associativity.count(lookahead)) {
                                        if (associativity[lookahead] == 1) {
                                            // ���ϣ�ѡ���Լ
                                            std::cout << "    Resolving conflict: REDUCE by prod " << item.gramarInt
                                                << " (left-associative)" << std::endl;
                                            ACTION[stateId][lookahead] = Action(ActionType::REDUCE, item.gramarInt);
                                        }
                                        else if (associativity[lookahead] == 2) {
                                            // �ҽ�ϣ�ѡ���ƽ�
                                            std::cout << "    Resolving conflict: SHIFT (right-associative)" << std::endl;
                                            // ����ԭ����SHIFT����
                                        }
                                        else {
                                            // �޽���ԣ�����
                                            std::cerr << "Error: Non-associative operator " << id2symbol(lookahead)
                                                << " in conflict at state " << stateId << std::endl;
                                        }
                                    }
                                    else {
                                        // Ĭ������
                                        std::cout << "    Resolving conflict: REDUCE by prod " << item.gramarInt
                                            << " (default left-associative)" << std::endl;
                                        ACTION[stateId][lookahead] = Action(ActionType::REDUCE, item.gramarInt);
                                    }
                                }
                                else {
                                    // �ƽ����ȼ����ߣ�����SHIFT
                                    std::cout << "    Resolving conflict: SHIFT (prec " << shiftPrec
                                        << ") over REDUCE (prec " << reducePrec << ")" << std::endl;
                                }
                            }
                            else if (oldAction.type == ActionType::REDUCE) {
                                // ��Լ-��Լ��ͻ��ѡ���һ������ʽ���������������
                                std::cerr << "Reduce-Reduce conflict: State " << stateId << " on terminal " << id2symbol(lookahead)
                                    << " between prod " << oldAction.target << " and prod " << item.gramarInt << std::endl;
                            }
                        }
                        else {
                            std::cout << "    Adding REDUCE by prod " << item.gramarInt << " on terminal '" << id2symbol(lookahead) << "'" << std::endl;
                            ACTION[stateId][lookahead] = Action(ActionType::REDUCE, item.gramarInt);
                        }
                    }
                }
            }
        }
    }
}

void printActionTable(const LRTableBuilder& builder) {
    std::cout << "==== ACTION Table ====" << std::endl;
    for (int i = 0; i < (int)builder.ACTION.size(); ++i) {
        std::cout << "State " << i << ":\n";
        for (auto& p : builder.ACTION[i]) {
            std::cout << "  On terminal " << id2symbol(p.first) << " => ";
            Action act = p.second;
            switch (act.type) {
            case ActionType::SHIFT:
                std::cout << "SHIFT " << act.target << std::endl; break;
            case ActionType::REDUCE:
                std::cout << "REDUCE by prod " << act.target << std::endl; break;
            case ActionType::ACCEPT:
                std::cout << "ACCEPT" << std::endl; break;
            default:
                std::cout << "ERROR" << std::endl; break;
            }
        }
    }
}

void printGotoTable(const LRTableBuilder& builder) {
    std::cout << "==== GOTO Table ====" << std::endl;
    for (int i = 0; i < (int)builder.GOTO.size(); ++i) {
        std::cout << "State " << i << ":\n";
        for (auto& p : builder.GOTO[i]) {
            std::cout << "  On nonterminal " << id2symbol(p.first) << " => " << p.second << std::endl;
        }
    }
}

