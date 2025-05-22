#include"YaccParser.h"
vector<Producer> producerList;  // 定义全局的产生式列表
unordered_map<int, set<int> > proList;//整数表示的产生式列表
// Producer 的 print 函数实现
void Producer::print() {
    cout << left << "->";
    for (int i = 0; i < right.size(); i++)
        cout << right[i] << " ";
}
