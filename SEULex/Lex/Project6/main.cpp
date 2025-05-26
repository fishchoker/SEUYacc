/**
 * @file main.cpp
 * @brief �ʷ���������������������
 * @details �ó������ȡ�ͽ��� lex �ļ�����������ʽ��׼����ת��Ϊ��׺��ʽ������ NFA �� DFA������������ lex.cpp �ļ���
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
 * @brief ������
 * @details �ó�������ø���ģ�飬��ɴʷ������������ɡ�
 * @return �������гɹ����� 0�����򷵻� -1��
 */
int main() {
    NFA finalNFA;  // �������ɵ� NFA
    vector<string> P1;  // �������岿��
    map<string, string> reMap;  // ������ʽӳ���
    vector<Rules> rules;  // ���򼯺�
    vector<string> P4;  // �û��ӳ��򲿷�

    cout << "���ڴ��ļ���lex.txt..." << endl;

    // ��ȡ������ lex �ļ�
    read_and_parse_lex(P1, reMap, rules, P4);

    cout << "\n���ڱ�׼��������ʽ..." << endl;
    // ��׼��������ʽ
    re_standardize(rules, reMap);

    cout << "\n���ڽ�������ʽת��Ϊ��׺��ʽ..." << endl;
    // ��������ʽת��Ϊ��׺��ʽ
    re2suffix(rules);

    cout << "\n���ڽ���׺���ʽת��Ϊ NFA..." << endl;
    // ��׺���ʽת��Ϊ NFA
    suffix_to_nfa(rules, finalNFA);

    cout << "\n���ڽ� NFA ת��Ϊ DFA..." << endl;
    // NFA ת��Ϊ DFA
    NFA2DFA2VEC n2d2v(finalNFA);
    n2d2v.nfa2dfa();

    cout << "\n������С�� DFA..." << endl;
    // ��С�� DFA
    n2d2v.dfa_minimize();

    cout << "\n�������� yylex.cpp �ļ�..." << endl;
    // ���� lex.cpp �ļ�
    n2d2v.dfa2vec(rules);
    auto minidfa = n2d2v.get_mini_dfa();
    auto vecs = n2d2v.get_vecs();
    auto endVec = n2d2v.get_endVec();
    generate_c_code(vecs, endVec, P1, P4, minidfa.startState);

    cout << "\n������������ɣ�" << endl;

    return 0;
}