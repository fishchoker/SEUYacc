#include "ParserDriver.h"
#include <iostream>

ParserDriver::ParserDriver(const LRTableBuilder& builder,
    const std::vector<numProducer>& prods)
    : table(builder), productions(prods) {
}

std::shared_ptr<ParseTreeNode> ParserDriver::parse(const std::vector<int>& tokenStream) {
    stateStack = std::stack<int>();
    nodeStack = std::stack<std::shared_ptr<ParseTreeNode>>();

    stateStack.push(0); // 初始状态
    size_t index = 0;   // 当前输入 tokenStream 索引

    while (true) {
        int state = stateStack.top();
        int token = (index < tokenStream.size()) ? tokenStream[index] : table.endSymbol;

        auto& actionMap = table.ACTION[state];
        auto actionIt = actionMap.find(token);

        if (actionIt == actionMap.end()) {
            std::cerr << "Syntax Error: Unexpected token " << token << " at position " << index << std::endl;
            return nullptr;
        }

        Action action = actionIt->second;
        switch (action.type) {
        case ActionType::SHIFT:
            stateStack.push(action.target);
            nodeStack.push(std::make_shared<ParseTreeNode>(token));
            ++index;
            break;

        case ActionType::REDUCE:
            reduce(action.target);
            break;

        case ActionType::ACCEPT: {
            std::cout << "Parsing successful." << std::endl;
            if (nodeStack.size() != 1) {
                std::cerr << "Error: Final stack size incorrect." << std::endl;
                return nullptr;
            }
            return nodeStack.top();
        }

        default:
            std::cerr << "Unknown action type." << std::endl;
            return nullptr;
        }
    }
}

void ParserDriver::reduce(int productionId) {
    const numProducer& prod = productions[productionId];
    int lhs = prod.first;
    const std::vector<int>& rhs = prod.second;

    auto newNode = std::make_shared<ParseTreeNode>(lhs);

    for (size_t i = 0; i < rhs.size(); ++i) {
        stateStack.pop();
        newNode->children.insert(newNode->children.begin(), nodeStack.top());
        nodeStack.pop();
    }

    int topState = stateStack.top();
    auto gotoIt = table.GOTO[topState].find(lhs);
    if (gotoIt == table.GOTO[topState].end()) {
        std::cerr << "GOTO error: No transition for state " << topState << " on symbol " << lhs << std::endl;
        exit(1);
    }

    stateStack.push(gotoIt->second);
    nodeStack.push(newNode);

    std::cout << "Reduce by production " << productionId << std::endl;
    printStacks();
}

void ParserDriver::printStacks() {
    std::stack<int> tempState = stateStack;
    std::stack<std::shared_ptr<ParseTreeNode>> tempNode = nodeStack;

    std::vector<int> stateVec;
    std::vector<int> symbolVec;

    while (!tempState.empty()) {
        stateVec.push_back(tempState.top());
        tempState.pop();
    }
    while (!tempNode.empty()) {
        symbolVec.push_back(tempNode.top()->symbol);
        tempNode.pop();
    }

    std::cout << "State Stack (top -> bottom): ";
    for (auto it = stateVec.rbegin(); it != stateVec.rend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Symbol Stack (top -> bottom): ";
    for (auto it = symbolVec.rbegin(); it != symbolVec.rend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

// 新增：打印语法树实现
void ParserDriver::printSyntaxTree(const std::shared_ptr<ParseTreeNode>& node, int depth) {
    if (!node) return;

    for (int i = 0; i < depth; ++i) {
        std::cout << "  ";
    }

    std::cout << "Symbol: " << node->symbol;
    if (!node->children.empty()) {
        std::cout << " -> [";
        for (const auto& child : node->children) {
            std::cout << child->symbol << " ";
        }
        std::cout << "]";
    }
    std::cout << std::endl;

    for (const auto& child : node->children) {
        printSyntaxTree(child, depth + 1);
    }
}