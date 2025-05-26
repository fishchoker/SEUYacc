//
//  后缀正则表达式转换为NFA并将多个NFA合并
//
//  该程序将输入的后缀正则表达式集合转换为一个NFA（非确定有限自动机）。
//  它支持常见的正则运算符，包括：连接符、或运算符('|')、星号运算符('*')。
//  最终，将多个NFA合并为一个大的NFA，形成完整的模式匹配机。
//
// 

#include "structs.h"
#include <stack>
#include <iostream>
using namespace std;

int num = 0;

/**
 * @brief 将后缀正则表达式转换为NFA，并将多个NFA合并为一个。
 *
 * @param suffixRules 输入的后缀正则表达式规则集合。
 * @param finalNFA 输出的合并后的NFA。
 */
void suffix_to_nfa(vector<Rules>& suffixRules, NFA& finalNFA)
{
    stack<NFA> NFAStack;  // 栈，用于存储中间生成的NFA

    // 遍历每个规则，生成NFA
    for (int i = 0; i < suffixRules.size(); i++)
    {
        string pattern = suffixRules[i].pattern;
        int tempActionInt = -1;  // 动作占位符

        // 逐字符处理当前正则表达式
        for (int j = 0; j < pattern.length(); j++)
        {
            NFA upNFA, downNFA;  // 用于存储操作数的NFA
            NFAstate start, end; // 临时状态，表示新生成的NFA的起始和终止状态
            char cur = pattern[j]; // 当前字符

            if (cur == '|' && j != 0 && j != 1)
            {
                // 处理"或"操作符（|）
                // 从栈中弹出两个NFA，合并它们
                upNFA = NFAStack.top();
                NFAStack.pop();
                downNFA = NFAStack.top();
                NFAStack.pop();

                // 新建连接NFA的起始状态和终止状态
                start.num = num++;
                end.num = num++;

                // 连接upNFA和downNFA的终态到新的终态
                upNFA.statesMap.find(upNFA.endStatesMap.begin()->first)->second.EdgeMultiMap.insert({ '@', end.num });
                downNFA.statesMap.find(downNFA.endStatesMap.begin()->first)->second.EdgeMultiMap.insert({ '@', end.num });

                // 新建起始状态，连接到upNFA和downNFA的初态
                start.EdgeMultiMap.insert({ '@', upNFA.startState });
                start.EdgeMultiMap.insert({ '@', downNFA.startState });

                // 更新downNFA状态集
                downNFA.statesMap.insert({ start.num, start });
                downNFA.statesMap.insert({ end.num, end });
                downNFA.statesMap.insert(upNFA.statesMap.begin(), upNFA.statesMap.end());

                // 更新downNFA的起始状态和终止状态
                downNFA.startState = start.num;
                downNFA.endStatesMap.clear();
                downNFA.endStatesMap.insert({ end.num, tempActionInt });

                NFAStack.push(downNFA);  // 将合并后的NFA压回栈中
            }
            else if (j - 1 > 0 && j + 1 < pattern.length() && cur == '*' && pattern[j - 1] != '/' && pattern[j + 1] != '=')
            {
                // 处理星号运算符（*），表示重复零次或多次
                // 取出栈顶的NFA并进行操作
                upNFA = NFAStack.top();
                NFAStack.pop();

                // 新建两个状态，连接upNFA
                start.num = num++;
                end.num = num++;

                start.EdgeMultiMap.insert({ '@', upNFA.startState });
                start.EdgeMultiMap.insert({ '@', end.num });

                upNFA.statesMap.find(upNFA.endStatesMap.begin()->first)->second.EdgeMultiMap.insert({ '@', upNFA.startState });
                upNFA.statesMap.find(upNFA.endStatesMap.begin()->first)->second.EdgeMultiMap.insert({ '@', end.num });

                upNFA.startState = start.num; // 更新upNFA的初态
                upNFA.statesMap.insert({ start.num, start });
                upNFA.statesMap.insert({ end.num, end });
                upNFA.endStatesMap.clear();
                upNFA.endStatesMap.insert({ end.num, tempActionInt });

                NFAStack.push(upNFA); // 压回栈
            }
            else if (cur == '$')
            {
                // 处理连接操作符（$），表示将两个NFA连接起来
                upNFA = NFAStack.top();
                NFAStack.pop();
                downNFA = NFAStack.top();
                NFAStack.pop();

                // 连接downNFA的终态到upNFA的起始状态
                downNFA.statesMap.find(downNFA.endStatesMap.begin()->first)->second.EdgeMultiMap.insert({ '@', upNFA.startState });

                // 更新downNFA的终态为upNFA的终态
                downNFA.endStatesMap.clear();
                downNFA.endStatesMap = upNFA.endStatesMap;

                // 合并upNFA的状态集到downNFA中
                downNFA.statesMap.insert(upNFA.statesMap.begin(), upNFA.statesMap.end());

                NFAStack.push(downNFA); // 压回栈
            }
            else
            {
                // 处理普通字符，创建一个单字符的NFA并压栈
                NFA pushNFA;

                start.num = num++;
                pushNFA.startState = start.num;

                end.num = num++;
                start.EdgeMultiMap.insert({ cur, end.num });

                pushNFA.statesMap.insert({ start.num, start });
                pushNFA.statesMap.insert({ end.num, end });
                pushNFA.endStatesMap.insert({ end.num, tempActionInt });

                NFAStack.push(pushNFA); // 压栈
            }
        }
        // 设置当前规则的动作
        NFAStack.top().endStatesMap.begin()->second = i;
    }

    // 合并所有生成的NFA为一个大的NFA
    finalNFA = NFAStack.top();
    NFA downNFA;
    NFAStack.pop();
    while (!NFAStack.empty())
    {
        NFAstate start;

        downNFA = NFAStack.top();
        NFAStack.pop();

        start.num = num++;

        // 将新的起始状态连接到finalNFA和downNFA的初态
        start.EdgeMultiMap.insert({ '@', finalNFA.startState });
        start.EdgeMultiMap.insert({ '@', downNFA.startState });

        finalNFA.startState = start.num;
        finalNFA.statesMap.insert({ start.num, start });

        // 将downNFA的终态插入到finalNFA的终态集合
        finalNFA.endStatesMap.insert(downNFA.endStatesMap.begin(), downNFA.endStatesMap.end());

        // 将downNFA的状态集合合并到finalNFA中
        finalNFA.statesMap.insert(downNFA.statesMap.begin(), downNFA.statesMap.end());
    }
}
