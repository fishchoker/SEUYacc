/**
 * @file Generate.h
 * @brief 生成词法分析器的 C++ 代码。
 * @details 该模块负责将 DFA 的状态转移表和其他辅助函数写入一个 C++ 文件中，生成词法分析器的代码。
 * @author ufu
 * @date 2025-05-25
 */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include "structs.h"
using namespace std;

/**
 * @brief 打印数组到文件中。
 * @param name 数组名称。
 * @param size 数组大小。
 * @param value 数组值。
 * @param out 输出文件流。
 */
static void print_vector(const string& name, int size, const int* value, ofstream& out) {
    const int* array_buf = value;
    out << "static int " << name << "[" << size << "] = {";
    for (int i = 0; i < size; ++i) {
        if (i % 10 == 0 && i != 0) out << endl;
        out << setw(4) << left << array_buf[i];
        if (i != size - 1) out << ",";
    }
    out << "};\n";
}

/**
 * @brief 生成词法分析器的 C++ 代码。
 * @param vecs 包含 DFA 状态转移表和其他数组的向量。
 * @param endVec 包含 DFA 终态动作的向量。
 * @param part1 辅助定义部分的代码。
 * @param part4 用户子程序部分的代码。
 * @param startState DFA 的起始状态。
 * @return 生成成功返回 0，否则返回 -1。
 */
int generate_c_code(const vector<pair<int*, int>>& vecs, const vector<Rules>& endVec, const vector<string>& part1, const vector<string>& part4, int startState) {
    ofstream out("yylex.cpp");
    if (!out) {
        cerr << "Failed to open output file!" << endl;
        return -1;
    }

    // 检查 vecs 的大小是否为 4
    if (vecs.size() != 4) {
        return -1;
    }

    // 输出头部文件
    out << "// 生成的词法分析器代码\n";
    out << "#include <stdlib.h>\n";
    out << "#include <string.h>\n";
    out << "#include <fstream>\n";
    out << "using namespace std;\n";
    out << "#define START_STATE " << startState << "\n";

    // 输出辅助定义部分
    for (const auto& line : part1) {
        out << line << "\n";
    }

    // 输出辅助函数声明
    out << "char* getCharPtr(char* fileName);\n";
    out << "string findAction(int action);\n";

    // 输出状态转移表和其他数组
    vector<string> vec_names = { "yy_edge_col", "yy_state_row", "yy_next", "yy_accept" };
    for (size_t i = 0; i < vecs.size(); ++i) {
        print_vector(vec_names[i], vecs[i].second, vecs[i].first, out);
    }

    // 定义变量
    out << "int yy_current_state = START_STATE; // 当前状态号\n";
    out << "int yy_last_accepting_state = -1; // 最近一次接受的状态\n";
    out << "char *yy_cp = NULL; // 字符指针\n";
    out << "char *yy_last_accepting_cpos = NULL; // 最近一次接受时字符指针的位置\n";
    out << "int yy_act = 0; // 动作\n";
    out << "int isEnd = 0; // 是否读到文件尾部\n";
    out << "int yy_c = -1; // 字符指针指向字符的 ASCII 码\n";
    out << "int correct = 1; // 是否正确\n";

    // 初始化函数
    out << "void lex_init(char* fileName) {\n";
    out << "    yy_cp = getCharPtr(fileName);\n";
    out << "}\n";

    // 主函数
    out << "int main(int argc, char** argv) {\n";
    out << "    if (argc != 2) {\n";
    out << "        printf(\"ERROR: invalid argument!\\n\");\n";
    out << "        return -1;\n";
    out << "    }\n";
    out << "    lex_init(argv[1]);\n";

    out << "    ofstream printfile(\"/Users/gutingxuan/Desktop/SeuLex&SeuYacc/LexRun/print_tokens.txt\");\n";
    out << "    ofstream tokens(\"/Users/gutingxuan/Desktop/SeuLex&SeuYacc/LexRun/tokens.txt\");\n";
    out << "    string result;\n";

    out << "    while (*yy_cp != 0) {\n";
    out << "        if (*yy_cp == '\\n') {\n";
    out << "            yy_cp++;\n";
    out << "            continue;\n";
    out << "        }\n";
    out << "        yy_c = yy_edge_col[(int)*yy_cp];\n";
    out << "        if (yy_accept[yy_current_state]) {\n";
    out << "            yy_last_accepting_state = yy_current_state;\n";
    out << "            yy_last_accepting_cpos = yy_cp;\n";
    out << "        }\n";
    out << "        if (yy_next[yy_state_row[yy_current_state] + yy_c] == -1 && yy_last_accepting_state != -1) {\n";
    out << "            yy_current_state = yy_last_accepting_state;\n";
    out << "            yy_cp = yy_last_accepting_cpos;\n";
    out << "            yy_act = yy_accept[yy_current_state];\n";
    out << "            result = findAction(yy_act);\n";
    out << "            printfile << result;\n";
    out << "            if (result != \" \") {\n";
    out << "                tokens << result;\n";
    out << "                printf(\"%s\\n\", result.c_str());\n";
    out << "                tokens << \"\\n\";\n";
    out << "            }\n";
    out << "            if (*(yy_cp - 1) == '\\n') {\n";
    out << "                printfile << *(yy_cp - 1);\n";
    out << "            }\n";
    out << "            yy_current_state = START_STATE;\n";
    out << "            yy_last_accepting_state = -1;\n";
    out << "            yy_c = yy_edge_col[(int)*yy_cp];\n";
    out << "            yy_current_state = yy_next[yy_state_row[yy_current_state] + yy_c];\n";
    out << "            ++yy_cp;\n";
    out << "            continue;\n";
    out << "        }\n";
    out << "        if (yy_next[yy_state_row[yy_current_state] + yy_c] == -1 && yy_last_accepting_state == -1) {\n";
    out << "            printf(\"ERROR DETECTED IN INPUT FILE!\\n\");\n";
    out << "            return -1;\n";
    out << "        }\n";
    out << "        if (yy_next[yy_state_row[yy_current_state] + yy_c] != -1) {\n";
    out << "            yy_current_state = yy_next[yy_state_row[yy_current_state] + yy_c];\n";
    out << "            ++yy_cp;\n";
    out << "        }\n";
    out << "    }\n";

    out << "    if (*yy_cp == 0) {\n";
    out << "        isEnd = 1;\n";
    out << "        if (yy_accept[yy_current_state]) {\n";
    out << "            yy_act = yy_accept[yy_current_state];\n";
    out << "            result = findAction(yy_act);\n";
    out << "            printfile << result;\n";
    out << "            if (result != \" \") {\n";
    out << "                tokens << result;\n";
    out << "            }\n";
    out << "        } else {\n";
    out << "            printf(\"ERROR DETECTED IN INPUT FILE!\\n\");\n";
    out << "            correct = 0;\n";
    out << "            return -1;\n";
    out << "        }\n";
    out << "    }\n";
    out << "    return 0;\n";
    out << "}\n";

    // findAction 函数
    out << "string findAction(int action) {\n";
    out << "    switch (action) {\n";
    out << "    case 0: break;\n";
    for (size_t i = 0; i < endVec.size(); ++i) {
        out << "    case " << i + 1 << ":\n";
        for (const auto& action : endVec[i].actions) {
            out << "        " << action << "\n";
        }
        out << "        break;\n";
    }
    out << "    default: break;\n";
    out << "    }\n";
    out << "    return \"DONE\";\n";
    out << "}\n";

    // getCharPtr 函数
    out << "char* getCharPtr(char* fileName) {\n";
    out << "    char* cp = NULL;\n";
    out << "    FILE *fp = fopen(fileName, \"r\");\n";
    out << "    if (fp == NULL) {\n";
    out << "        printf(\"can't open file\");\n";
    out << "        exit(0);\n";
    out << "    }\n";
    out << "    fseek(fp, 0, SEEK_END);\n";
    out << "    int flen = ftell(fp);\n";
    out << "    cp = (char *)malloc(flen + 1);\n";
    out << "    if (cp == NULL) {\n";
    out << "        fclose(fp);\n";
    out << "        return 0;\n";
    out << "    }\n";
    out << "    rewind(fp);\n";
    out << "    memset(cp, 0, flen + 1);\n";
    out << "    fread(cp, sizeof(char), flen, fp);\n";
    out << "    cp[flen] = 0;\n";
    out << "    return cp;\n";
    out << "}\n";

    // 输出用户子程序部分
    for (const auto& line : part4) {
        out << line << "\n";
    }

    out.close();
    return 0;
}