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
    if (item.gramarInt != 0) return false;
    if (!isReduceItem(item)) return false;
    int dollarId = symbol2id("$");
    return item.predictiveSymbol.find(dollarId) != item.predictiveSymbol.end();
}

void LRTableBuilder::buildTables() {
    int dollarId = symbol2id("$");
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
                    ACTION[stateId][dollarId] = Action(ActionType::ACCEPT, 0);
                }
                else {
                    for (int lookahead : item.predictiveSymbol) {
                        if (!isTerminalid(lookahead)) continue;

                        if (ACTION[stateId].count(lookahead)) {
                            auto& oldAction = ACTION[stateId][lookahead];
                            std::cerr << "��ͻ���: ״̬ " << stateId << " ���ս�� " << id2symbol(lookahead)
                                << " ���ڶ��ֶ��������ж�������: "
                                << (oldAction.type == ActionType::SHIFT ? "SHIFT" :
                                    oldAction.type == ActionType::REDUCE ? "REDUCE" :
                                    oldAction.type == ActionType::ACCEPT ? "ACCEPT" : "UNKNOWN")
                                << ", ��ͼ���� REDUCE by prod " << item.gramarInt << std::endl;
                            // ������ʱѡ����ԭ����������
                            continue;
                        }
                        std::cout << "    Adding REDUCE by prod " << item.gramarInt << " on terminal '" << id2symbol(lookahead) << "'" << std::endl;
                        ACTION[stateId][lookahead] = Action(ActionType::REDUCE, item.gramarInt);
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

