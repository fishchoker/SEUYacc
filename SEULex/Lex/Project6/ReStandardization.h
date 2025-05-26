/**
 * @file ReStandardization.h
 * @brief 将.l文件中非规范的正规表达式标准化。
 * @details 该模块负责将Lex文件中的正则表达式转换为规范形式，以便后续处理。
 * @author ufu
 * @date 2025-05-25
 */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include "structs.h"
#include "GlobalData.h"
using namespace std;

// 处理引号，移除多余的引号
void handle_quote(string& exp)
{
    // 处理表达式为"""的情况
    if (exp == "\"\"\"")
        exp = "\"";
    // 移除exp字符串中所有的引号
    else
        exp.erase(remove(exp.begin(), exp.end(), '"'), exp.end());
}

// 替换{X}，比如{letter} -> [a-zA-Z]
void replace_brace(string& exp, map<string, string>& reMap)
{
    string reName; // 正则表达式的名字
    string newExp; // 规范化后的表达式
    if (exp.length() == 1)
        return;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '{')
        {
            // 提取表达式名字
            reName = exp.substr(i + 1, exp.find_first_of('}', i + 1) - i - 1);
            // 在辅助定义表中找所需要的表达式
            auto find = reMap.find(reName);
            // 构建规范化的表达式
            newExp += find->second;
            i = exp.find_first_of('}', i + 1);
        }
        else
            // 处理没有大括号的表达式
            newExp += exp[i];
    }
    exp = newExp;
}

// 替换[X]，比如[a-zA-Z] -> (a|b|c|...|Z)
void replace_square_brackets(string& exp)
{
    string newExp; // 规范化后的表达式
    if (exp.length() == 1)
        return;
    for (int i = 0; i < exp.length(); i++)
    {
        // 处理[a-zA-Z]
        if (exp[i] == '[' && exp[i + 1] == 'a')
        {
            // 将表达式扩展成完整的
            newExp += '(';
            for (int j = ALLSET.find_first_of('a'); j < ALLSET.find_first_of('Z'); j++)
            {
                newExp += ALLSET[j];
                newExp += '|';
            }
            newExp += "Z)";
            i = exp.find_first_of(']', i + 1);
        }
        // 处理[0-9]
        else if (exp[i] == '[' && exp[i + 1] == '0')
        {
            newExp += '(';
            for (int j = ALLSET.find_first_of('0'); j < ALLSET.find_first_of('9'); j++)
            {
                newExp += ALLSET[j];
                newExp += '|';
            }
            newExp += "9)";
            i = exp.find_first_of(']', i + 1);
        }
        // 处理[+-]
        else if (exp[i] == '[' && exp[i + 1] == '+')
        {
            newExp += "(+|-)";
            i = exp.find_first_of(']', i + 1);
        }
        else
            newExp += exp[i];
    }
    exp = newExp;
}

// 替换?和+
void replace_question_and_add(string& exp)
{
    string newExp;
    vector<int> leftParPos; // 存储左括号位置
    for (int i = 0; i < exp.length(); i++)
    {
        newExp += exp[i];
        if (exp[i] == '(')
        {
            // 读到左括号，则将左括号的位置保存下来
            leftParPos.push_back(newExp.length() - 1);
        }
        else if (exp[i] == ')' && i + 1 < exp.length() && exp[i + 1] == '?')
        {
            // 处理x? 问号操作符表示操作数出现0次或一次
            // 替换形式为x? -> (@|x)
            // 使用@表示epsilon符号
            string temp;
            temp += "(@|";
            // 将原表达式中从最后一个左括号开始的表达式内容记录下来，包括左右括号
            temp += newExp.substr(leftParPos.back());
            temp += ')';
            // 将原来的表达式内最后一个左括号开始的表达式全都删除
            newExp.erase(leftParPos.back(), 100);
            // 替换成新的表达式
            newExp += temp;
            // 弹出最后一个左括号位置
            leftParPos.pop_back();
            i = i + 1;
        }
        else if (exp[i] == ')' && i + 1 < exp.length() && exp[i + 1] == '+')
        {
            // 处理x+ 替换形式为x+ -> xx*
            string temp;
            // 将原表达式中从最后一个左括号开始的表达式内容记录下来，包括左右括号
            temp += newExp.substr(leftParPos.back());
            temp += newExp.substr(leftParPos.back());
            temp += '*';
            // 将原来的表达式内最后一个左括号开始的表达式全都删除
            newExp.erase(leftParPos.back(), 100);
            // 替换成新的表达式
            newExp += temp;
            // 弹出最后一个左括号位置
            leftParPos.pop_back();
            i = i + 1;
        }
    }
    exp = newExp;
}

// 加点，处理连接操作
void add_dot(string& exp)
{
    string newExp;
    for (int i = 0; i < exp.length(); i++)
    {
        newExp += exp[i];
        if (i == exp.length() - 1)
            continue; // 当前字符为最后一个字符，不加点
        else if (exp[i] == '(')
            continue; // 当前字符为(，不加点
        else if (i + 1 < exp.length() && exp[i] == '|' && exp[i + 1] == '|')
            newExp += '$'; // ||情况需要加点
        else if (i + 1 < exp.length() && exp[i] == '|' && exp[i + 1] != '|')
            continue; // 当前字符为|，且不是||情况，不加点
        else if (i + 1 < exp.length() && exp[i] == '/' && exp[i + 1] == '*')
            newExp += '$'; // /*情况需要加点
        else if (i + 1 < exp.length() && (exp[i + 1] == '|' || exp[i + 1] == ')' || exp[i + 1] == '*'))
            continue; // 其余不加点情况，下一个字符为操作符或右括号
        else
            newExp += '$'; // 加点
    }
    exp = newExp;
}

// 标准化正则表达式
void re_standardize(vector<Rules>& rules, map<string, string>& reMap)
{
    // 先处理辅助定义 reMap
    for (auto& p : reMap)
    {
        // 替换大括号，比如{letter} -> [a-zA-Z]
        replace_brace(p.second, reMap);
        // 替换[]，比如[a-zA-Z] -> (a|b|c|...|Z)
        replace_square_brackets(p.second);
        // 处理问号和加号
        replace_question_and_add(p.second);
    }

    // 再处理规则 rules
    for (auto& e : rules)
    {
        // 处理引号
        handle_quote(e.pattern);
        // 替换大括号，利用{}内的部分去辅助定义map里找，此时该map里的内容已被替换
        replace_brace(e.pattern, reMap);
        // 加点
        add_dot(e.pattern);
    }
}