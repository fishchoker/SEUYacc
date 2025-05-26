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
            const numProducer& prod = productions[action.target];
            int lhs = prod.first;
            const std::vector<int>& rhs = prod.second;

            auto newNode = std::make_shared<ParseTreeNode>(lhs);
            for (size_t i = 0; i < rhs.size(); ++i) {
                stateStack.pop();
                newNode->children.insert(newNode->children.begin(), nodeStack.top());
                nodeStack.pop();
            }

            std::cout << "Accept with production " << action.target << std::endl;
            if (!nodeStack.empty()) {
                std::cerr << "Warning: nodeStack not empty before final push." << std::endl;
            }

            return newNode;  // 直接返回构造的 S' 节点作为整棵语法树
        }


        default:
            std::cerr << "Unknown action type." << std::endl;
            return nullptr;
        }
    }
}

void ParserDriver::reduce(int productionId) {//输入规约的产生式编号
    const numProducer& prod = productions[productionId];//获取产生式
    int lhs = prod.first;//产生式左侧符号编号
    const std::vector<int>& rhs = prod.second;//产生式右侧符号编号序列

    auto newNode = std::make_shared<ParseTreeNode>(lhs);//创建新的非终结符节点

    for (size_t i = 0; i < rhs.size(); ++i) {//弹出状态栈和节点栈，并将弹出的节点作为非终结符节点的子节点
        stateStack.pop();
        newNode->children.insert(newNode->children.begin(), nodeStack.top());
        nodeStack.pop();
    }

    int topState = stateStack.top();//获得当前状态栈的栈顶状态
    auto gotoIt = table.GOTO[topState].find(lhs);//查GOTO表，相当于读入规约式的非终结符，转入新状态
    if (gotoIt == table.GOTO[topState].end()) {
        std::cerr << "GOTO error: No transition for state " << topState << " on symbol " << lhs << std::endl;
        exit(1);
    }

    stateStack.push(gotoIt->second);//压入新状态
    nodeStack.push(newNode);//压入非终结符构造的节点

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

void ParserDriver::printSyntaxTree(const std::shared_ptr<ParseTreeNode>& node, int depth) {
    if (!node) return;

    // 打印缩进
    for (int i = 0; i < depth; ++i) {
        std::cout << (i == depth - 1 ? "├── " : "│   ");
    }

    // 打印节点信息
    std::cout << id2symbol(node->symbol);
    if (!node->children.empty()) {
        std::cout << " →";
        for (const auto& child : node->children) {
            std::cout << " " << id2symbol(child->symbol);
        }
    }
    std::cout << std::endl;

    // 递归打印子节点
    for (const auto& child : node->children) {
        printSyntaxTree(child, depth + 1);
    }
}