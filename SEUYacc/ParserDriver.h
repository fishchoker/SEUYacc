#pragma once
#include <vector>
#include <stack>
#include <utility>
#include <memory>
#include "LRTableBuilder.h"

// 语法树节点结构
struct ParseTreeNode {
    int symbol;  // 符号编号（终结符或非终结符）
    std::vector<std::shared_ptr<ParseTreeNode>> children; // 子节点

    ParseTreeNode(int sym) : symbol(sym) {}
};

class ParserDriver {
public:
    ParserDriver(const LRTableBuilder& builder,
        const std::vector<numProducer>& prods);

    // 修改返回值为语法树根节点，使用智能指针管理内存
    std::shared_ptr<ParseTreeNode> parse(const std::vector<int>& tokenStream);

    // 新增：打印语法树方法
    void printSyntaxTree(const std::shared_ptr<ParseTreeNode>& node, int depth = 0);

private:
    const LRTableBuilder& table;
    const std::vector<numProducer>& productions;

    std::stack<int> stateStack;   // 状态栈
    std::stack<std::shared_ptr<ParseTreeNode>> nodeStack;

    void reduce(int productionId);
    void printStacks();
};
