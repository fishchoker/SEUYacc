#include "SymbolList.h"
unordered_map<string, int> terminal;
unordered_map<string, int> nonterminal;
unordered_map<int, string> IdTerminal;
unordered_map<int, string> IdNonterminal;

extern vector<Producer> producerList;  // ����ʽ�б�
vector<numProducer> numproducerList;  // ����ʽ�б�
string startSymbol;//�ķ���ʼ����
int startId;//�ķ���ʼ���ŵ�ID
/*
* ����ռ������ս������IDΪ-1����������IDΪ0
*/
void init() {
	startId = symbol2id(startSymbol);
	terminal["��"] = -1;
	IdTerminal[-1] = "��";
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
		//�洢�²���ʽ
		numproducerList.push_back(numProducer(left, right));
	}
	////���һ������ʽ ��һ���������ս��1000���ķ���ʼ����
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
	if (ID < 500)//�ս��
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
//�ж��Ƿ������е��ս��
bool isTerminal(string s) {
	return terminal.find(s) != terminal.end();
}
//�ж��Ƿ������еķ��ս��
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
	// �� terminal ӳ��ת��Ϊ������� vector
	std::vector<std::pair<std::string, int>> token_list;
	for (auto it = terminal.begin(); it != terminal.end(); ++it) {
		token_list.emplace_back(it->first, it->second);
	}

	// �� token ֵ��������
	std::sort(token_list.begin(), token_list.end(),
		[](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
			return a.second < b.second;
		});

	// ���� Bison ��ʽ������������ļ�
	std::ofstream outfile(output_file);
	if (!outfile.is_open()) {
		std::cerr << "Failed to open the file for writing!" << std::endl;
		return ;
	}

	for (size_t i = 0; i < token_list.size(); ++i) {
		const std::pair<std::string, int>& token = token_list[i];
		int value = token.second;

		// �������ַ� token (ASCII 0-255)
		if (value < 256) continue;

		// ���� %token �в�д���ļ�
		outfile << "%token " << token.first << " " << value << "\n";
	}

	outfile.close();
	cout << "������\n";
	return ;
}
