#include "ParserDriver.h"
#include <iostream>

ParserDriver::ParserDriver(const LRTableBuilder& builder,
    const std::vector<numProducer>& prods)
    : table(builder), productions(prods) {
}

std::shared_ptr<ParseTreeNode> ParserDriver::parse(const std::vector<int>& tokenStream) {
    stateStack = std::stack<int>();
    nodeStack = std::stack<std::shared_ptr<ParseTreeNode>>();

    stateStack.push(0); // ��ʼ״̬
    size_t index = 0;   // ��ǰ���� tokenStream ����

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

            return newNode;  // ֱ�ӷ��ع���� S' �ڵ���Ϊ�����﷨��
        }


        default:
            std::cerr << "Unknown action type." << std::endl;
            return nullptr;
        }
    }
}

void ParserDriver::reduce(int productionId) {//�����Լ�Ĳ���ʽ���
    const numProducer& prod = productions[productionId];//��ȡ����ʽ
    int lhs = prod.first;//����ʽ�����ű��
    const std::vector<int>& rhs = prod.second;//����ʽ�Ҳ���ű������

    auto newNode = std::make_shared<ParseTreeNode>(lhs);//�����µķ��ս���ڵ�

    for (size_t i = 0; i < rhs.size(); ++i) {//����״̬ջ�ͽڵ�ջ�����������Ľڵ���Ϊ���ս���ڵ���ӽڵ�
        stateStack.pop();
        newNode->children.insert(newNode->children.begin(), nodeStack.top());
        nodeStack.pop();
    }

    int topState = stateStack.top();//��õ�ǰ״̬ջ��ջ��״̬
    auto gotoIt = table.GOTO[topState].find(lhs);//��GOTO���൱�ڶ����Լʽ�ķ��ս����ת����״̬
    if (gotoIt == table.GOTO[topState].end()) {
        std::cerr << "GOTO error: No transition for state " << topState << " on symbol " << lhs << std::endl;
        exit(1);
    }

    stateStack.push(gotoIt->second);//ѹ����״̬
    nodeStack.push(newNode);//ѹ����ս������Ľڵ�

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

    // ��ӡ����
    for (int i = 0; i < depth; ++i) {
        std::cout << (i == depth - 1 ? "������ " : "��   ");
    }

    // ��ӡ�ڵ���Ϣ
    std::cout << id2symbol(node->symbol);
    if (!node->children.empty()) {
        std::cout << " ��";
        for (const auto& child : node->children) {
            std::cout << " " << id2symbol(child->symbol);
        }
    }
    std::cout << std::endl;

    // �ݹ��ӡ�ӽڵ�
    for (const auto& child : node->children) {
        printSyntaxTree(child, depth + 1);
    }
}