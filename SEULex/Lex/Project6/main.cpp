/**
 * @file main.cpp
 * @brief 词法分析器生成器的主程序。
 * @details 该程序负责读取和解析 lex 文件，将正则表达式标准化，转换为后缀形式，生成 NFA 和 DFA，并最终生成 lex.cpp 文件。
 * @author ufu
 * @date 2025-05-25
 */

#include "ReadLex.h"
#include "ReStandardization.h"
#include "Re2Suffix.h"
#include "Suffix2Nfa.h"
#include "NFA2DFA2VEC.h"
#include "Generate.h"
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

/**
 * @brief 主程序。
 * @details 该程序负责调用各个模块，完成词法分析器的生成。
 * @return 程序运行成功返回 0，否则返回 -1。
 */
int main() {
    NFA finalNFA;  // 最终生成的 NFA
    vector<string> P1;  // 辅助定义部分
    map<string, string> reMap;  // 正则表达式映射表
    vector<Rules> rules;  // 规则集合
    vector<string> P4;  // 用户子程序部分

    cout << "正在打开文件：lex.txt..." << endl;

    // 读取并解析 lex 文件
    read_and_parse_lex(P1, reMap, rules, P4);

    cout << "\n正在标准化正则表达式..." << endl;
    // 标准化正则表达式
    re_standardize(rules, reMap);

    cout << "\n正在将正则表达式转换为后缀形式..." << endl;
    // 将正则表达式转换为后缀形式
    re2suffix(rules);

    cout << "\n正在将后缀表达式转换为 NFA..." << endl;
    // 后缀表达式转换为 NFA
    suffix_to_nfa(rules, finalNFA);

    cout << "\n正在将 NFA 转换为 DFA..." << endl;
    // NFA 转换为 DFA
    NFA2DFA2VEC n2d2v(finalNFA);
    n2d2v.nfa2dfa();

    cout << "\n正在最小化 DFA..." << endl;
    // 最小化 DFA
    n2d2v.dfa_minimize();

    cout << "\n正在生成 yylex.cpp 文件..." << endl;
    // 生成 lex.cpp 文件
    n2d2v.dfa2vec(rules);
    auto minidfa = n2d2v.get_mini_dfa();
    auto vecs = n2d2v.get_vecs();
    auto endVec = n2d2v.get_endVec();
    generate_c_code(vecs, endVec, P1, P4, minidfa.startState);

    cout << "\n所有任务已完成！" << endl;

    return 0;
}