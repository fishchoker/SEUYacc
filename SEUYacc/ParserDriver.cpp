// ParserDriver.cpp
#include "ParserDriver.h"
#include <iostream>

ParseNode* parseTokens(const vector<int>& tokenStream) {
    stack<int> stateStack;
    stack<ParseNode*> nodeStack;
    vector<int> input = tokenStream;
    input.push_back(terminal["$"]);

    stateStack.push(0);
    int ip = 0;

    while (true) {
        int state = stateStack.top();
        int token = input[ip];

        if (ACTION[state].find(token) == ACTION[state].end()) {
            cerr << "Óï·¨´íÎó: token " << id2symbol(token) << endl;
            return nullptr;
        }

        Action act = ACTION[state][token];
        if (act.type == SHIFT) {
            stateStack.push(act.target);
            ParseNode* node = new ParseNode{ token, {} };
            nodeStack.push(node);
            ip++;
        }
        else if (act.type == REDUCE) {
            auto& prod = numproducerList[act.target];
            vector<ParseNode*> children;
            for (int i = 0; i < prod.second.size(); i++) {
                stateStack.pop();
                children.push_back(nodeStack.top());
                nodeStack.pop();
            }
            reverse(children.begin(), children.end());
            int A = prod.first;
            int t = stateStack.top();
            stateStack.push(GOTO[t][A]);
            ParseNode* node = new ParseNode{ A, children };
            nodeStack.push(node);
        }
        else if (act.type == ACCEPT) {
            return nodeStack.top();
        }
    }
}
