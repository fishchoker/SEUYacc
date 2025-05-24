#include<iostream>
#include"YaccParser.h"
#include"symbolList.h"
#include"YaccDFA.h"
#include "LRTableBuilder.h" 
#include "ParserDriver.h"
  
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
	test();
	init();//��ɷ��ŵ�������˫��ӳ��
	cout << isTerminalid(301) << endl;
	First();
	
	LRDFA dfa;

	LRTableBuilder builder(dfa);
	builder.endSymbol = 0;
	builder.buildTables();

	printActionTable(builder);
	printGotoTable(builder);

	// ====== ���� ParserDriver ======
	std::vector<int> tokenStream = { 301, 302, 302,0 }; // ģ�����룺c d d $
	ParserDriver driver(builder, numproducerList);
	// ====== �����﷨�� ======
	auto syntaxTree = driver.parse(tokenStream);

	if (syntaxTree) {
		cout << "\n=== �﷨���ṹ ===" << endl;
		driver.printSyntaxTree(syntaxTree);
	}
	else {
		cout << "����ʧ��!" << endl;
	}
	return 0;
}