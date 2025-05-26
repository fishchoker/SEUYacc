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
	////添加一个产生式 从一个其他非终结符1000到文法开始符号
	nonterminal["start"] = 1000;
	IdNonterminal[1000] = "start";
	vector<int> right;
	right.push_back(startId);
	numproducerList.push_back(numProducer(1000, right));
	vector<string> r;
	r.push_back(startSymbol);
	Producer p;
	p.left = "start";
	p.right = r;
	producerList.push_back(p);

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
void creatHead() {
	const string& output_file = "./token.h";
	// 将 terminal 映射转换为可排序的 vector
	std::vector<std::pair<std::string, int>> token_list;
	for (auto it = terminal.begin(); it != terminal.end(); ++it) {
		token_list.emplace_back(it->first, it->second);
	}

	// 按 token 值升序排序
	std::sort(token_list.begin(), token_list.end(),
		[](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
			return a.second < b.second;
		});

	// 生成 Bison 格式声明并输出到文件
	std::ofstream outfile(output_file);
	if (!outfile.is_open()) {
		std::cerr << "Failed to open the file for writing!" << std::endl;
		return ;
	}

	for (size_t i = 0; i < token_list.size(); ++i) {
		const std::pair<std::string, int>& token = token_list[i];
		int value = token.second;

		// 跳过单字符 token (ASCII 0-255)
		if (value < 256) continue;

		// 构建 %token 行并写入文件
		outfile << "%token " << token.first << " " << value << "\n";
	}

	outfile.close();
	cout << "导出！\n";
	return ;
}
