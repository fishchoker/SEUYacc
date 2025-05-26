#pragma once
#include<iostream>
#include<unordered_map>
#include"YaccParser.h"
using namespace std;
#ifndef SYMBOL_LIST_H
#define SYMBOL_LIST_H
extern unordered_map<string, int> terminal;
extern unordered_map<string, int> nonterminal;
extern unordered_map<int, string> IdTerminal;
extern unordered_map<int, string> IdNonterminal;
using numProducer = std::pair< int, vector<int> >;
extern vector<numProducer> numproducerList;
void init();
string id2symbol(int ID);
int symbol2id(string symbol);

bool isTerminalid(int id);
bool isNonterminalid(int id);
void creatHead();
#endif // SYMBOL_LIST_H