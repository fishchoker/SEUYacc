#include"YaccParser.h"
vector<Producer> producerList;  // ����ȫ�ֵĲ���ʽ�б�
unordered_map<int, set<int> > proList;//������ʾ�Ĳ���ʽ�б�
// Producer �� print ����ʵ��
void Producer::print() {
    cout << left << "->";
    for (int i = 0; i < right.size(); i++)
        cout << right[i] << " ";
}
