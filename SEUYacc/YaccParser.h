#pragma once
#include<iostream>
#include<unordered_map>
#include<fstream>
#include <string>
#include <regex>
#include<set>
#include"symbolList.h"
using namespace std;
#ifndef YACCPARSER_H
#define YACCPARSER_H
/*
* 解析词法规则文件c99.y
*/
struct Producer {
	string left;  // 产生式左端
	vector<string> right;  // 产生式右端
	void print();
};
extern vector<Producer> producerList;  // 产生式列表
extern unordered_map<string, int> terminal;
extern unordered_map<string, int> nonterminal;
extern string startSymbol;//文法开始符号
bool isTerminal(string s);
bool isNonterminal(string s);
extern int start;//文法开始符号的ID
struct YaccParser {
	int tID = 300;//终结符的起始ID
	int nID = 500;//非终结符的起始ID
	//产生式
	//词法规则文件
	ifstream ifile;
	/*
	* 解析器初始化
	*/
	YaccParser() {
		//读取词法规则文件
		//string filename = "./rule/c99.y";
		string filename = "./rule/test.y";
		ifile.open(filename);
		//判断是否正常读取
		if (!ifile.is_open()) {
			cout << "文件" << filename << "打开失败！\n";
			return;
		}
	}
	/*
	* 按顺序读取文件并解析每一行
	*/
	void parsingYacc() {
		string line;
		int part = 0;
		//临时产生式
		Producer temp;
		string left;
		bool flag=true;
		while (getline(ifile, line)) {  // 按行读取
			//cout << line << std::endl;
			//判断当前的位置
			if (line == "")//跳过空白行
				continue;
			if (line == "%%")//进入下一个部分
			{
				part++;
				continue;
			}
			if (part == 0)//非终结符阶段
				getTerminal(line);
			else if (part == 1)//产生式规则阶段
			{
				//判断是否是产生式开始
				if (flag) {
					left = line;//当前产生式的左侧
					flag=false;

					continue;
				}
				temp.left = left;
				//cout << "temp.left" << temp.left << endl;
				//读取产生式右侧
				//产生式结束
				flag = getProducer(line, temp);
				if (!flag) {
					producerList.push_back(temp);//注入产生式列表
					temp = Producer();
				}
			}
			else
				return;//结束 错误处理
		}
		
		ifile.close();
	}
	/*
	* 提取终结符
	*/
	void getTerminal(string line) {
		int pos = 0;
		string left;
		while (pos < line.length() && line[pos] != ' ') {
			//读取首个词
			left += line[pos];
			pos++;
		}
		if (left == "%start")//提取文法开始符号
		{
			while (line[pos] == ' ') { pos++; }//跳过空格
			while (pos < line.length()) {
				if (line[pos] != ' ') {
					//当前单词还未结束
					startSymbol += line[pos];
				}
				else {
					return;
				}
				pos++;
			}
		}
			if (left != "%token") {
				//错误处理
				return;
			}
			//终结符行 先跳过所有空格
			while (line[pos] == ' ') { pos++; }
			string temp;//每一个单词
			while (pos < line.length()) {
				if (line[pos] != ' ') {
					//当前单词还未结束
					temp += line[pos];
				}
				else {
					//放入终结符列表
					tID++;
					terminal[temp] = tID;
					temp = "";
				}
				pos++;
			}
			if (temp != "")
			{
				tID++;
				terminal[temp] = tID;
				temp = "";
			}
	}
	/*
	* 提取非终结符 只能从产生式判断 
	*/
	void getNonterminal() {
		//遍历产生式列表
		for (int i = 0; i < producerList.size(); i++)
		{
			Producer pro = producerList[i];
			//先判断左侧非终结符是否存在表中
			if (!isNonterminal(pro.left)) {
				//插入
				nID++;
				nonterminal[pro.left] = nID;
			}
			//遍历右侧
			for (int j = 0; j < pro.right.size(); j++) {
				//找到终结符
				string token = pro.right[j];
				if (isTerminal(token)|| isNonterminal(token)) {
					continue;
				}
				else {
					regex pattern("^'[^']*'$");
					//判断是非终结符还是终结符
					if (regex_match(token, pattern))
					{
						tID++;
						terminal[token] = tID;
					}
					else
					{
						nID++;
						nonterminal[token] = nID;
					}
				}
			}
		}
	}

	/*
	* 提取产生式 此时需要按符号提取
	*/
	bool getProducer(string line, Producer &temp) {
		int pos = 0;
		while (line[pos] == ' '|| line[pos] == '\t') { pos++; }
		if (line[pos] == ';')//当前产生式已结束
		{
			return true;
		}
		if (line[pos] == ':' || line[pos] == '|') //产生式右侧
		{
			pos++;
			string right;
			while (line[pos] == ' ' || line[pos] == '\t') { pos++; }
			while (pos < line.length()) {
				if (line[pos] != ' ') {
					//当前单词还未结束
					right += line[pos];
				}
				else {
					//放入产生式的列表
					temp.right.push_back(right);
					right = "";
				}
				pos++;
			}
			//当前行结束
			temp.right.push_back(right);
		}
		return false;

	}
	
};
#endif // YACCPARSER_H