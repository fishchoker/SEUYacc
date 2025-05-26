/*******************************************************************************
 * 文件名: ReadLex.cpp
 * 说明: 该文件用于读取并解析Lex (.l) 文件，其中包含了对Lex文件的分段处理和规则的提取。
 *       文件分为几个部分：辅助定义部分、正规表达式部分、识别规则部分、用户子程序部分。
 * 作者: ufu
 * 修改日期: 2025-05-25
 ******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include "structs.h"
#include "GlobalData.h"
using namespace std;

// 字符串分割函数，按照指定分隔符分割字符串
vector<string> split(const string& str, const string& delim);

// 去除字符串的首尾空格
string& trim(string& s);

// 读取并解析 Lex 文件，提取其中的规则和辅助定义
void read_and_parse_lex(vector<string>& P1, map<string, string>& reMap, vector<Rules>& rules, vector<string>& P4)
{
    // 读取 lex 文件
    string filePath = "c99.l";
    ifstream in(filePath);
    if (!in.is_open())
    {
        cerr << "ERROR: Failed to open lex.txt!" << endl;
        exit(1); // 文件打开失败，终止程序
    }

    string line;                // 存储每一行
    int state = 0;              // 当前状态，决定文件解析的不同部分
    vector<string> splitResult; // 临时存储分割后的结果
    bool hasError = false;      // 错误标识，若发生错误则终止解析
    string leftString;          // 存储规则左部
    string rightString;         // 存储规则右部
    vector<string> action;      // 存储规则动作

    while (getline(in, line) && !hasError)
    {
        // 如果当前行为空，跳过
        if (line.empty()) continue;

        // 根据当前状态解析不同的部分
        switch (state)
        {
        case 0: // 初始状态，寻找辅助定义部分
            if (line.find("%{") == 0)
                state = 1; // 进入辅助定义部分
            else
            {
                cerr << "ERROR: Missing entry sign %{" << endl;
                hasError = true;
            }
            break;

        case 1: // 解析辅助定义部分
            if (line.find("%}") == 0)
                state = 2; // 结束辅助定义，进入正规表达式部分
            else
            {
                P1.push_back(line); // 存储辅助定义部分的内容
            }
            break;

        case 2: // 解析正规表达式部分
            if (line.find("%%") == 0)
                state = 3; // 进入识别规则部分
            else
            {
                // 将每一行的正规表达式分割成两部分并存入映射表
                splitResult = split(line, " ");
                if (splitResult.size() == 2)
                    reMap[splitResult[0]] = trim(splitResult[1]);
            }
            break;

        case 3: // 解析识别规则部分
            if (line.find("%%") == 0)
                state = 4; // 结束识别规则，进入用户子程序部分
            else
            {
                // 处理规则左部为字符的情况
                if (line[0] == '"')
                {
                    int i = 1;
                    while (i < line.size() && line[i] != '"')
                        i++;
                    leftString = line.substr(0, i + 1); // 提取左部内容

                    // 特别处理左部为 """ 的情况
                    if (line.substr(0, 3) == "\"\"\"")
                    {
                        leftString = "\"\"\"";
                        i++; // 跳过第二个引号
                    }

                    rightString = line.substr(i + 1);
                    trim(rightString); // 去除右部的空白字符

                    // 处理右部包含多个动作的情况
                    if (rightString[0] == '{')
                    {
                        rightString = rightString.substr(1, rightString.find_first_of('}') - 1); // 去掉大括号
                        size_t spacePos = rightString.find_first_of(' ');
                        action.push_back(rightString.substr(0, spacePos)); // 提取第一个动作
                        action.push_back(rightString.substr(spacePos + 1)); // 提取第二个动作
                    }
                    else
                    {
                        action.push_back(rightString); // 单一动作
                    }
                }
                // 处理规则左部为表达式的情况
                else if (line[0] == '{')
                {
                    int i = 1;
                    while (i < line.size() && line[i] != '}')
                        i++;
                    leftString = line.substr(0, i + 1); // 提取左部
                    rightString = line.substr(i + 1);
                    trim(rightString); // 去除右部的空白字符
                    action.push_back(rightString); // 存储动作
                }

                // 创建规则对象，并将其加入规则列表
                Rules rule;
                rule.pattern = leftString;
                rule.actions = action;
                rules.push_back(rule);
                action.clear(); // 清空动作，准备下一条规则
            }
            break;

        case 4: // 解析用户子程序部分
            P4.push_back(line); // 存储用户子程序部分的内容
            break;
        }
    }

    in.close(); // 关闭文件流
}

// 字符串分割函数，按照指定分隔符分割字符串
vector<string> split(const string& str, const string& delim)
{
    vector<string> res;
    if (str.empty()) return res;

    // 使用 stringstream 更简洁地实现分割功能
    stringstream ss(str);
    string token;
    while (getline(ss, token, delim[0])) // 假设只有一个字符分隔符
    {
        res.push_back(trim(token)); // 分割后去除每个部分的首尾空格
    }
    return res;
}

// 去除字符串的首尾空格
string& trim(string& s)
{
    // 使用 find_first_not_of 和 find_last_not_of 更高效地去除空格
    s.erase(0, s.find_first_not_of(" \t\r\n"));
    s.erase(s.find_last_not_of(" \t\r\n") + 1);
    return s;
}
