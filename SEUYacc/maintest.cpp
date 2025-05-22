#include<iostream>
#include"YaccParser.h"
#include"symbolList.h"
#include"YaccDFA.h"
using namespace std;
void test() {
	//打印终结符
	cout << "终结符：\n";
	for (const auto& pair : terminal) {
		cout << pair.first << ", ID: " << pair.second << endl;
	}
	//打印非终结符
	cout << "非终结符：\n";
	for (const auto& pair : nonterminal) {
		cout << pair.first << ", ID: " << pair.second << endl;
	}
	//打印产生式
	for (int i = 0; i < producerList.size(); i++)
	{
		producerList[i].print(); cout << endl;

	}
	//打印first集
	printFirsts();
}

int main() {
	/*
	* 解析语法规则
	*/
	YaccParser parser;
	parser.parsingYacc();
	parser.getNonterminal();
	init();//完成符号到整数的双向映射
	First();
	test();
	LRDFA dfa;
	return 0;
}