#include<iostream>
#include"YaccParser.h"
#include"symbolList.h"
#include"YaccDFA.h"
using namespace std;
void test() {
	//��ӡ�ս��
	cout << "�ս����\n";
	for (const auto& pair : terminal) {
		cout << pair.first << ", ID: " << pair.second << endl;
	}
	//��ӡ���ս��
	cout << "���ս����\n";
	for (const auto& pair : nonterminal) {
		cout << pair.first << ", ID: " << pair.second << endl;
	}
	//��ӡ����ʽ
	for (int i = 0; i < producerList.size(); i++)
	{
		producerList[i].print(); cout << endl;

	}
	//��ӡfirst��
	printFirsts();
}

int main() {
	/*
	* �����﷨����
	*/
	YaccParser parser;
	parser.parsingYacc();
	parser.getNonterminal();
	init();//��ɷ��ŵ�������˫��ӳ��
	First();
	test();
	LRDFA dfa;
	return 0;
}