#include<iostream>
#include"YaccParser.h"
#include"symbolList.h"
#include"YaccDFA.h"
#include "LRTableBuilder.h" 
#include "ParserDriver.h"
  
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
	test();
	init();//完成符号到整数的双向映射
	cout << isTerminalid(301) << endl;
	First();
	
	LRDFA dfa;

	LRTableBuilder builder(dfa);
	builder.endSymbol = 0;
	builder.buildTables();

	printActionTable(builder);
	printGotoTable(builder);

	// ====== 测试 ParserDriver ======
	std::vector<int> tokenStream = { 301, 302, 302,0 }; // 模拟输入：c d d $
	ParserDriver driver(builder, numproducerList);
	// ====== 测试语法树 ======
	auto syntaxTree = driver.parse(tokenStream);

	if (syntaxTree) {
		cout << "\n=== 语法树结构 ===" << endl;
		driver.printSyntaxTree(syntaxTree);
	}
	else {
		cout << "解析失败!" << endl;
	}
	return 0;
}