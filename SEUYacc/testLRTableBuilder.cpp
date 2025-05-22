#include <iostream>
#include "YaccParser.h"
#include "symbolList.h"
#include "YaccDFA.h"
#include "LRTableBuilder.h" // 你的 buildLRTable 实现放在这里

using namespace std;

// ACTION 与 GOTO 打印
//void printActionTable() {
//    cout << "\n===== ACTION 表 =====" << endl;
//    for (size_t state = 0; state < ACTION.size(); ++state) {
//        for (const auto& entry : ACTION[state]) {
//            cout << "ACTION[" << state << "][" << id2symbol(entry.first) << "] = ";
//            if (entry.second.first == SHIFT)
//                cout << "S" << entry.second.second;
//            else if (entry.second.first == REDUCE)
//                cout << "r" << entry.second.second;
//            else if (entry.second.first == ACCEPT)
//                cout << "acc";
//            else
//                cout << "?";
//            cout << endl;
//        }
//    }
//}

void printGotoTable() {
    cout << "\n===== GOTO 表 =====" << endl;
    for (size_t state = 0; state < GOTO.size(); ++state) {
        for (const auto& entry : GOTO[state]) {
            cout << "GOTO[" << state << "][" << id2symbol(entry.first) << "] = "
                << entry.second << endl;
        }
    }
}

int main() {
    // 初始化终结符与非终结符
    terminal["NUM"] = 300;
    terminal["PLUS"] = 301;
    terminal["$"] = 1000;
    IdTerminal[300] = "NUM";
    IdTerminal[301] = "PLUS";
    IdTerminal[1000] = "$";

    nonterminal["E"] = 500;
    IdNonterminal[500] = "E";

    // 设置产生式
    // E -> E PLUS NUM
    // E -> NUM
    producerList.push_back({ "E", {"E", "PLUS", "NUM"} });   // 编号 0
    producerList.push_back({ "E", {"NUM"} });                // 编号 1

    // 编号版产生式
    numproducerList.push_back({ nonterminal["E"], {nonterminal["E"], terminal["PLUS"], terminal["NUM"]} });
    numproducerList.push_back({ nonterminal["E"], {terminal["NUM"]} });

    // 构造简化 DFA 手动填充
    LRDFA dfa;
    dfa.startState = 0;

    // 状态0
    LRState s0;
    s0.numberInt = 0;
    s0.LRItemsSet.insert(LRItem(0, 0, terminal["$"])); // [E → • E PLUS NUM, $]
    s0.LRItemsSet.insert(LRItem(1, 0, terminal["$"])); // [E → • NUM, $]
    s0.edgesMap[terminal["NUM"]] = 1;    // NUM -> s1
    s0.edgesMap[nonterminal["E"]] = 2;   // E   -> s2

    // 状态1
    LRState s1;
    s1.numberInt = 1;
    s1.LRItemsSet.insert(LRItem(1, 1, terminal["$"])); // [E → NUM •, $]

    // 状态2
    LRState s2;
    s2.numberInt = 2;
    s2.LRItemsSet.insert(LRItem(0, 1, terminal["$"])); // [E → E • PLUS NUM, $]
    s2.edgesMap[terminal["PLUS"]] = 3;

    // 状态3
    LRState s3;
    s3.numberInt = 3;
    s3.LRItemsSet.insert(LRItem(0, 2, terminal["$"])); // [E → E PLUS • NUM, $]
    s3.edgesMap[terminal["NUM"]] = 4;

    // 状态4
    LRState s4;
    s4.numberInt = 4;
    s4.LRItemsSet.insert(LRItem(0, 3, terminal["$"])); // [E → E PLUS NUM •, $]

    // 装入DFA
    dfa.statesVec = { s0, s1, s2, s3, s4 };

    // 构造分析表
    buildLRTable(dfa);

    // 输出结果
    //printActionTable();
    printGotoTable();

    return 0;
}
