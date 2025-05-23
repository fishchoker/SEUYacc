#include "SymbolList.h"
unordered_map<string, int> terminal;
unordered_map<string, int> nonterminal;
unordered_map<int, string> IdTerminal;
unordered_map<int, string> IdNonterminal;

extern vector<Producer> producerList;  // 产生式列表
vector<numProducer> numproducerList;  // 产生式列表
string startSymbol;//文法开始符号
int startId;//文法开始符号的ID
/*
* 定义空集（非终结符）的ID为-1，结束符的ID为0
*/
void init() {
	startId = symbol2id(startSymbol);
	terminal["ε"] = -1;
	IdTerminal[-1] = "ε";
	terminal["$"] = 0;
	IdTerminal[0] = "$";
	for (auto it = terminal.begin(); it != terminal.end(); ++it) {
		auto i = IdTerminal.find(it->second);
		if (i == IdTerminal.end())
			IdTerminal[it->second] = it->first;
	}
	for (auto it = nonterminal.begin(); it != nonterminal.end(); ++it) {
		auto i = IdNonterminal.find(it->second);
		if (i == IdNonterminal.end())
			IdNonterminal[it->second] = it->first;
	}
	for (auto& producer : producerList) {
		int left = symbol2id(producer.left);
		vector<int> right;
		for (int i = 0; i < producer.right.size(); i++) {
			right.push_back(symbol2id(producer.right[i]));
		}
		//存储新产生式
		numproducerList.push_back(numProducer(left, right));
	}
}
string id2symbol(int ID) {
	if (ID < 500)//终结符
	{
		auto it = IdTerminal.find(ID);
		if (it != IdTerminal.end())
			return IdTerminal[ID];
	}
	else {
		auto it = IdNonterminal.find(ID);
		if (it != IdNonterminal.end())
			return IdNonterminal[ID];
	}
	return NULL;
}
int symbol2id(string symbol) {
	auto it = terminal.find(symbol);
	if (it != terminal.end())
		return terminal[symbol];
	it = nonterminal.find(symbol);
	if (it != nonterminal.end())
		return nonterminal[symbol];
	return NULL;
}
//判断是否是已有的终结符
bool isTerminal(string s) {
	return terminal.find(s) != terminal.end();
}
//判断是否是已有的非终结符
bool isNonterminal(string s) {
	return nonterminal.find(s) != nonterminal.end();
}

bool isTerminalid(int id)
{
	auto it = IdTerminal.find(id);
	if (it != IdTerminal.end()) {
		return true;
	}
	return false;
}

bool isNonterminalid(int id)
{
	auto it = IdNonterminal.find(id);
	if (it != IdNonterminal.end()) {
		return true;
	}
	return false;
}
