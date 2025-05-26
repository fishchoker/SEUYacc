/**
 * @file re2uffix.cpp
 * @brief 将规范化的正规表达式转换为后缀表达式（逆波兰表示法）。
 *
 * 该算法通过中缀转后缀的方式实现正规表达式的转换，使用栈和队列来辅助操作符优先级和括号的处理。
 * 支持三种主要操作符：星号(*)、美元符号($)和竖线(|)，并正确处理括号的优先级。
 *
 * 适用场景：用于正则表达式引擎的表达式转换，或者任何需要处理正规表达式的场景。
 */
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include "structs.h"


 // 中缀转后缀表达式
void re2suffix(std::vector<Rules>& rules)
{
    // 遍历每个规则
    for (auto& rule : rules)
    {
        std::string pattern = rule.pattern;  // 当前规则的正规表达式
        std::string temp;                    // 用于存储转换后的后缀表达式
        std::queue<char> q;                  // 存储最终的后缀表达式
        std::stack<char> s;                  // 存储操作符（栈）

        // 若表达式长度为1，说明是单个操作数，跳过处理
        if (pattern.length() == 1)
            continue;

        // 遍历表达式中的每个字符
        for (int i = 0; i < pattern.length(); i++)
        {
            char cur = pattern[i];  // 当前字符

            // 如果遇到左括号，直接压栈
            if (cur == '(')
            {
                s.push(cur);
            }
            // 如果遇到右括号，弹出栈中的操作符直到遇到左括号
            else if (cur == ')')
            {
                while (!s.empty() && s.top() != '(')
                {
                    q.push(s.top());
                    s.pop();
                }
                s.pop();  // 弹出左括号
            }
            // 如果是竖线操作符
            else if (cur == '|')
            {
                // 特殊情况：如果是|$|，则按优先级处理
                if (i + 2 < pattern.length() && pattern[i + 1] == '$' && pattern[i + 2] == '|')
                {
                    s.push('$');
                    s.push('|');
                    s.push('|');
                    i += 2;  // 跳过下一个字符
                    continue;
                }

                // 按优先级弹出栈中的元素（$、*、|），直到找到合适的位置
                while (!s.empty() && (s.top() == '$' || s.top() == '|' || s.top() == '*'))
                {
                    q.push(s.top());
                    s.pop();
                }
                s.push(cur);  // 将当前操作符压栈
            }
            // 如果是美元符号操作符
            else if (cur == '$')
            {
                // $的优先级较高，弹出栈中优先级不低于$的操作符
                while (!s.empty() && (s.top() == '$' || s.top() == '*'))
                {
                    q.push(s.top());
                    s.pop();
                }
                s.push(cur);  // 将$操作符压栈
            }
            // 如果是星号操作符
            else if (cur == '*')
            {
                s.push(cur);  // 星号操作符优先级最高，直接压栈
            }
            // 如果是操作数（字母），直接将其输出到队列
            else
            {
                q.push(cur);
            }
        }

        // 将栈中的剩余操作符弹出并添加到队列
        while (!s.empty())
        {
            q.push(s.top());
            s.pop();
        }

        // 从队列中获取后缀表达式
        while (!q.empty())
        {
            temp += q.front();
            q.pop();
        }

        // 更新规则的pattern为后缀表达式
        rule.pattern = temp;
    }
}
