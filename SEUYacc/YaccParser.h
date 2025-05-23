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
* �����ʷ������ļ�c99.y
*/
struct Producer {
	string left;  // ����ʽ���
	vector<string> right;  // ����ʽ�Ҷ�
	void print();
};
extern vector<Producer> producerList;  // ����ʽ�б�
extern unordered_map<string, int> terminal;
extern unordered_map<string, int> nonterminal;
extern string startSymbol;//�ķ���ʼ����
bool isTerminal(string s);
bool isNonterminal(string s);
extern int start;//�ķ���ʼ���ŵ�ID
struct YaccParser {
	int tID = 300;//�ս������ʼID
	int nID = 500;//���ս������ʼID
	//����ʽ
	//�ʷ������ļ�
	ifstream ifile;
	/*
	* ��������ʼ��
	*/
	YaccParser() {
		//��ȡ�ʷ������ļ�
		//string filename = "./rule/c99.y";
		string filename = "./rule/test.y";
		ifile.open(filename);
		//�ж��Ƿ�������ȡ
		if (!ifile.is_open()) {
			cout << "�ļ�" << filename << "��ʧ�ܣ�\n";
			return;
		}
	}
	/*
	* ��˳���ȡ�ļ�������ÿһ��
	*/
	void parsingYacc() {
		string line;
		int part = 0;
		//��ʱ����ʽ
		Producer temp;
		string left;
		bool flag=true;
		while (getline(ifile, line)) {  // ���ж�ȡ
			//cout << line << std::endl;
			//�жϵ�ǰ��λ��
			if (line == "")//�����հ���
				continue;
			if (line == "%%")//������һ������
			{
				part++;
				continue;
			}
			if (part == 0)//���ս���׶�
				getTerminal(line);
			else if (part == 1)//����ʽ����׶�
			{
				//�ж��Ƿ��ǲ���ʽ��ʼ
				if (flag) {
					left = line;//��ǰ����ʽ�����
					flag=false;

					continue;
				}
				temp.left = left;
				//cout << "temp.left" << temp.left << endl;
				//��ȡ����ʽ�Ҳ�
				//����ʽ����
				flag = getProducer(line, temp);
				if (!flag) {
					producerList.push_back(temp);//ע�����ʽ�б�
					temp = Producer();
				}
			}
			else
				return;//���� ������
		}
		
		ifile.close();
	}
	/*
	* ��ȡ�ս��
	*/
	void getTerminal(string line) {
		int pos = 0;
		string left;
		while (pos < line.length() && line[pos] != ' ') {
			//��ȡ�׸���
			left += line[pos];
			pos++;
		}
		if (left == "%start")//��ȡ�ķ���ʼ����
		{
			while (line[pos] == ' ') { pos++; }//�����ո�
			while (pos < line.length()) {
				if (line[pos] != ' ') {
					//��ǰ���ʻ�δ����
					startSymbol += line[pos];
				}
				else {
					return;
				}
				pos++;
			}
		}
			if (left != "%token") {
				//������
				return;
			}
			//�ս���� ���������пո�
			while (line[pos] == ' ') { pos++; }
			string temp;//ÿһ������
			while (pos < line.length()) {
				if (line[pos] != ' ') {
					//��ǰ���ʻ�δ����
					temp += line[pos];
				}
				else {
					//�����ս���б�
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
	* ��ȡ���ս�� ֻ�ܴӲ���ʽ�ж� 
	*/
	void getNonterminal() {
		//��������ʽ�б�
		for (int i = 0; i < producerList.size(); i++)
		{
			Producer pro = producerList[i];
			//���ж������ս���Ƿ���ڱ���
			if (!isNonterminal(pro.left)) {
				//����
				nID++;
				nonterminal[pro.left] = nID;
			}
			//�����Ҳ�
			for (int j = 0; j < pro.right.size(); j++) {
				//�ҵ��ս��
				string token = pro.right[j];
				if (isTerminal(token)|| isNonterminal(token)) {
					continue;
				}
				else {
					regex pattern("^'[^']*'$");
					//�ж��Ƿ��ս�������ս��
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
	* ��ȡ����ʽ ��ʱ��Ҫ��������ȡ
	*/
	bool getProducer(string line, Producer &temp) {
		int pos = 0;
		while (line[pos] == ' '|| line[pos] == '\t') { pos++; }
		if (line[pos] == ';')//��ǰ����ʽ�ѽ���
		{
			return true;
		}
		if (line[pos] == ':' || line[pos] == '|') //����ʽ�Ҳ�
		{
			pos++;
			string right;
			while (line[pos] == ' ' || line[pos] == '\t') { pos++; }
			while (pos < line.length()) {
				if (line[pos] != ' ') {
					//��ǰ���ʻ�δ����
					right += line[pos];
				}
				else {
					//�������ʽ���б�
					temp.right.push_back(right);
					right = "";
				}
				pos++;
			}
			//��ǰ�н���
			temp.right.push_back(right);
		}
		return false;

	}
	
};
#endif // YACCPARSER_H