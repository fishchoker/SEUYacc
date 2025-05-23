#include"YaccDFA.h"
unordered_map<int, set<int> > firsts;
// 为自定义类型 LRItem 和 LRState 定义哈希函数

/*
* 求非终结符的first集
*/
void First() {
	//初始化终结符集为它本身
	for (auto& t : IdTerminal) {
		firsts[t.first] = { t.first };
	}
	//终结符集 先初始化为空
	for (auto& t : IdNonterminal) {
		firsts[t.first] = {};
	}
	bool change=true;//任意非终结符的first集是否有更新
	while (change)//如有更新 继续迭代
	{
		change = false;
		//遍历产生式集合
		for (auto& producer : numproducerList) {
			int left = producer.first;//得到左侧符号
			if (isTerminalid(left)) continue;//跳过终结符
			bool hasEpsilon = true;//假设当前产生式能推出空集
			vector<int> right=producer.second;//得到产生式右侧
			//对于 A → ε 的产生式，right 为空，此时应直接添加 ε
			if (right.empty()) {
				firsts[left].insert(-1);
				change = true;
				continue;
			}
			for (auto& item : right)//遍历右侧符号
			{
				//取当前符号的first集
				auto& thisSet = firsts[item];
				//将当前符号的FIRST集(除ε外)加入左部符号的FIRST集
				for (auto& i : thisSet) {
					if (i == -1) continue;//跳过空集
					if (firsts[left].count(i) == 0) { // 如果未包含该符号
						change = true; // 标记需要继续迭代
						firsts[left].insert(i); // 加入FIRST集
					}
				}
				if (thisSet.count(-1) == 0) {
					hasEpsilon = false;
					break; // 不能推出ε，终止处理后续符号
				}
			}
			if (hasEpsilon) {
				if (firsts[left].count(-1) == 0) {
					firsts[left].insert(-1);
					change = true;
				}
			}
		}
	}
}
void printFirsts() {
	for (auto& pair : firsts) {
		cout << id2symbol(pair.first) << pair.first << " : ";
		for (auto& value : pair.second) {
			cout <<id2symbol(value) << value << " ";
		}
		cout << "\n";
	}
}
void printLRItem(const LRItem& item) {
	// 获取产生式信息
	const auto& prod = numproducerList[item.gramarInt];

	// 打印产生式左部
	std::cout << "[" << id2symbol(prod.first)<< " → ";

	// 打印右部并标记点的位置
	for (int i = 0; i < prod.second.size(); ++i) {
		if (i == item.positionInt) std::cout << "·";
		std::cout << id2symbol(prod.second[i]) << " ";
	}

	// 处理点在末尾的情况
	if (item.positionInt == prod.second.size()) {
		std::cout << "·";
	}

	// 打印向前看符号
	// 打印向前看符号
	std::cout << ", ";

	// 输出所有预测符号
	bool first = true;
	for (const auto& symbol : item.predictiveSymbol) {
		if (!first) std::cout << " ";
		std::cout << id2symbol(symbol);
		first = false;
	}

	std::cout << "]";
}

void printLRState(const LRState& state) {
	// 打印状态号
	std::cout << "State " << state.numberInt << ":\n";

	// 打印所有LR项目
	std::cout << "  LR Items:\n";
	for (const auto& item : state.LRItemsSet) {
		printLRItem(item);
		cout << endl;
	}

	// 打印转移边
	std::cout << "  Transitions:\n";
	for (const auto& edge : state.edgesMap) {
		std::cout << "    On " << id2symbol(edge.first) <<edge.first << " goto State " << edge.second << "\n";
	}
	std::cout << std::endl;
}
/*
* 状态内扩展
*/
void LRDFA::generateState(LRState& state) {
	cout << state.numberInt<< "状态内部扩展\n";
	//新建队列
	queue<LRItem> producers;
	//加入产生式
	for (auto& p : state.LRItemsSet)
		producers.push(p);
	while (!producers.empty()) {
		auto& p = producers.front();//取出最前面的LR项
		auto& producer = numproducerList[p.gramarInt];//取出该项对应的产生式
		vector<int> right = producer.second;
		//判断点是否在末尾
		if (p.positionInt >= right.size()) { producers.pop(); continue; }//已经分析完毕 弹出
		//点后是终结符
		//取出点后字符
		int after = right[p.positionInt];
		if (isTerminalid(after)) { producers.pop(); continue; }//点后是终结符 弹出
		//对点后是非终结符的项目进行扩展 计算向前看符号
		//找到非终结符的所有产生式
		unordered_set<int> lookaheads;
		bool canDeriveEpsilon = true;//是否能推出空串

		// 计算β部分的FIRST集（点后的剩余符号）
		for (int i = p.positionInt + 1; i < right.size(); ++i) {
			int symbol = right[i];
			auto& firstSet = firsts[symbol];//取出first集

			// 加入FIRST(symbol)的非ε元素（-1）
			for (int terminal : firstSet) {
				if (terminal != -1) {
					lookaheads.insert(terminal);//
				}
			}
			//没有元素会推出空串
			if (firstSet.find(-1) == firstSet.end()) {
				canDeriveEpsilon = false;
				break;
			}
		}
		// 检查是否能推出ε 若能 则代表就是当前产生式的预测符
		if (canDeriveEpsilon) {
			for (int symbol : p.predictiveSymbol) {
				lookaheads.insert(symbol);
			}
		}
		//根据当前的文法产生式和预测符号（lookahead）生成新的 LR 项目（LRItem）
		for (int i = 0; i < numproducerList.size(); ++i) {//遍历产生式 找到当前（点后非终结符）在左边的所有产生式
			if (numproducerList[i].first == after) {
					//针对每一个向前看符号生成一个新的 LR 项目
					// 
					LRItem item(0, i, lookaheads);
					/*cout << "将要添加的LR项：\n";
					printLRItem(item);
					cout << endl;*/
					if (state.LRItemsSet.count(item) == 0) 
						{
							state.LRItemsSet.insert(item);//状态内扩展 重复插入会自动去重？
							producers.push(item); // 继续处理新项目
						}

			}

		}
		//弹出已经处理的项目
		producers.pop();
	}
	
	//如果不行临时状态 更新dfa中的状态 
	//printLRState(state);
	if(state.numberInt!=-1)
		states[state.numberInt] = state;
	
}
/*
* 状态间扩展
*/
void LRDFA::extendState(LRState& state, queue<int>& que) {
	//遍历当前状态的项集
	//printLRState(state);
	for (auto& item : state.LRItemsSet) {
		//取出产生式
		auto& producer = numproducerList[item.gramarInt];
		vector<int> right = producer.second;
		//判断点的位置 若在结尾跳过
		if (item.positionInt >= right.size()) continue;
		//移进什么符号
		int next = right[item.positionInt];
		/*
		- 获取将要移进的符号
		- 得到移进后的产生式
		- 如果该移进符号已经创建状态转移：加入产生式，对该状态重新做状态扩展，更新到dfa
		- 如果该移进符号还未创建状态转移：新建一个临时状态加入产生式，做状态扩展，判断状态是否已经存在，更新到dfa
		*/
		//cout << "移进前：\n";
		//printLRItem(item);
		//cout << endl;
		LRItem newItem(item.positionInt + 1, item.gramarInt, item.predictiveSymbol);//移进后得到的新项
		//cout << "移进后：\n";
		//printLRItem(newItem);
		//cout << endl;
		LRState newState;//可能的新状态
		if (state.edgesMap.find(next) == state.edgesMap.end()) {//该移进符号还未创建状态转移
			//需要新建新状态 新状态号->数组+1
			newState.LRItemsSet.insert(newItem);//项目加入新状态
			//对新生成的状态做内部扩展
			generateState(newState);
			//cout << "处理产生式：\n";
			//printLRItem(newItem);
			//cout <<"移进符号" << id2symbol(next) << "将转移到\n";
			//printLRState(newState);
			//cout << endl;
			//判断这个生成的新状态是否已经存在
			int isExist = findExistingState(newState);
			if (isExist != -1)//已经存在
			{
				//为当前状态添加状态转移
				//cout << "转移到已有状态：" << id2symbol(next) << "->" << "状态：" << isExist << endl;
				state.edgesMap[next] = isExist;
				//更新dfa中的状态
				states[isExist] = state;
			}
			else {//否则需要加入dfa的状态集中
				newState.numberInt = this->startState;//分配新状态号
				//cout << "生成新状态转移：" << id2symbol(next) << "->" << "状态：" << newState.numberInt << endl;
				state.edgesMap[next] = newState.numberInt;
				que.push(newState.numberInt);
				//添加到dfa的状态集
				//cout << "Before push_back: " << &statesVec[0] << endl;
				states.push_back(newState);
				this->startState = this->startState + 1;
				//cout << "After push_back: " << &statesVec[0] << endl;
			}
		}
		else {//该移进符号已经创建状态转移 拿到那个状态
			int stateId = state.edgesMap.find(next)->second;
			newState = states[stateId];
			//将产生式加入这个状态中
			newState.LRItemsSet.insert(newItem);
			generateState(newState);//状态扩展
			states[stateId] = newState;
		}

	}
}
//重复状态判断
/*
* 生成DFA 定义空集（非终结符）的ID为-1，结束符的ID为1000
*/
extern int startId;//文法开始符号的ID
LRDFA::LRDFA() {
	//初始化一个状态
	LRState start;
	//初始化第一个项集 放入文法开始符号的产生式
	for (int i=0;i<numproducerList.size();i++) {
		if (numproducerList[i].first == startId) {
			LRItem item0(0, i, unordered_set<int>{0});// 点位于起始 文法开始符号项 前瞻符为$
			start.LRItemsSet.insert(item0);
		}
	}
	//得到first集
	First();
	//将待处理状态入队

	start.numberInt = this->startState;  // 0号状态作为起始状态
	states.push_back(start);  // 将起始状态加入状态集合
	this->startState = this->startState + 1;  // 将起始状态加入状态集合
	//待处理队列
	queue<int> que;
	
	//起始状态内部扩展
	generateState(start); 
	que.push(start.numberInt);//0状态入栈

	while (!que.empty()) {
		//取出待处理状态
		int currentStateId = que.front();
		LRState currentState = states[currentStateId];
		//把状态内部扩展放在每次生成新状态之后
		//将新生成的状态入队
		extendState(currentState, que);
		printLRState(currentState);
		que.pop();
	}
}
//判断状态是否已经存在
int LRDFA::findExistingState(const LRState& newState) {
	for (const auto& state : states) {
		// 比较 LRItemsSet 是否一致
		if (state.LRItemsSet == newState.LRItemsSet) {
			// 如果一致，返回对应的状态号
			return state.numberInt;
		}
	}
	// 如果没有找到相同的状态，返回 -1 表示状态不存在
	return -1;
}