// ParserDriver.h
#pragma once
#include "LRTableBuilder.h"
#include "YaccParser.h"
#include <vector>
#include <stack>

#ifndef PARSERDRIVER_H
#define PARSERDRIVER_H

struct ParseNode {
    int symbol_id;
    vector<ParseNode*> children;
};

ParseNode* parseTokens(const vector<int>& tokenStream); // ����token���У�����﷨��

#endif
