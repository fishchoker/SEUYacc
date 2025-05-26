#pragma once
#include <vector>
#include <stack>
#include <utility>
#include <memory>
#include "LRTableBuilder.h"

// �﷨���ڵ�ṹ
struct ParseTreeNode {
    int symbol;  // ���ű�ţ��ս������ս����
    std::vector<std::shared_ptr<ParseTreeNode>> children; // �ӽڵ�

    ParseTreeNode(int sym) : symbol(sym) {}
};

class ParserDriver {
public:
    ParserDriver(const LRTableBuilder& builder,
        const std::vector<numProducer>& prods);

    // �޸ķ���ֵΪ�﷨�����ڵ㣬ʹ������ָ������ڴ�
    std::shared_ptr<ParseTreeNode> parse(const std::vector<int>& tokenStream);

    // ��������ӡ�﷨������
    void printSyntaxTree(const std::shared_ptr<ParseTreeNode>& node, int depth = 0);

private:
    const LRTableBuilder& table;
    const std::vector<numProducer>& productions;

    std::stack<int> stateStack;   // ״̬ջ
    std::stack<std::shared_ptr<ParseTreeNode>> nodeStack;

    void reduce(int productionId);
    void printStacks();
};
