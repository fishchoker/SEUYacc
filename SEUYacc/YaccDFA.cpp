#include"YaccDFA.h"
#include<queue>
unordered_map<int, set<int> > firsts;
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
void printLRState(const LRState& state) {
	// 打印状态号
	std::cout << "State " << state.numberInt << ":\n";

	// 打印所有LR项目
	std::cout << "  LR Items:\n";
	for (const auto& item : state.LRItemsSet) {
		const auto& prod = numproducerList[item.gramarInt];

		// 打印产生式左部
		std::cout << "    [" << prod.first << " → ";

		// 打印产生式右部，标注点的位置
		for (int i = 0; i < prod.second.size(); ++i) {
			if (i == item.positionInt) std::cout << "• ";
			std::cout << prod.second[i] << " ";
		}
		if (item.positionInt == prod.second.size()) std::cout << "•";

		// 打印向前看符号
		std::cout << ", " << item.predictiveSymbol << "]\n";
	}

	// 打印转移边
	std::cout << "  Transitions:\n";
	for (const auto& edge : state.edgesMap) {
		std::cout << "    On " << edge.first << " goto State " << edge.second << "\n";
	}
	std::cout << std::endl;
}
/*
* 状态内扩展
*/
void generateState(LRState state) {
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
		if (p.positionInt >= right.size()) producers.pop();//已经分析完毕 弹出
		//点后是终结符
		//取出点后字符
		int after = right[p.positionInt];
		if (isTerminalid(after)) producers.pop();//点后是终结符 弹出
		//对点后是非终结符的项目进行扩展 计算向前看符号
		//找到非终结符的所有产生式
		set<int> lookaheads;
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
			lookaheads.insert(p.predictiveSymbol);
		}
		//根据当前的文法产生式和预测符号（lookahead）生成新的 LR 项目（LRItem）
		for (int i = 0; i < numproducerList.size(); ++i) {//遍历产生式 找到当前（点后非终结符）在左边的所有产生式
			if (numproducerList[i].first == after) {
				for (int lookahead : lookaheads) {//遍历可能的预测符
					//针对每一个向前看符号生成一个新的 LR 项目
					// 
					LRItem item(0, i, lookahead);
					if (state.LRItemsSet.count(item) == 0) 
						{
							state.LRItemsSet.insert(item);//状态内扩展 重复插入会自动去重？
							producers.push(item); // 继续处理新项目
						}

				}
			}

		}
	}
}
/*
* 状态间扩展
*/
void LRDFA::extendState(LRState state) {
	unordered_map<int, LRState> newStates;
	//遍历当前状态的项集
	for (auto& item : state.LRItemsSet) {
		//取出产生式
		auto& producer = numproducerList[item.gramarInt];
		vector<int> right = producer.second;
		//判断点的位置
		if (item.positionInt >= right.size()) continue;
		//移进什么符号
		int next = right[item.positionInt];
		//查表
		int nextState = state.edgesMap[next];//移进状态
		LRItem newItem(item.positionInt + 1, item.gramarInt, item.predictiveSymbol);//移进后得到的新项
		//需要新建新状态
		if (newStates.find(nextState) == newStates.end()) {
			LRState newState;
			newState.LRItemsSet.insert(newItem);//项目加入新状态
			newState.numberInt = nextState;
			newStates[nextState] = newState; // 将新状态添加到状态集合
		}


	}
}
/*
* 生成DFA 定义空集（非终结符）的ID为-1，结束符的ID为1000
*/
LRDFA::LRDFA() {
	auto& dfa = *this;//取当前dfa
	//初始化第一个项集 文法开始符号的产生式
	LRItem item0(0, 0, -2);
	//得到first集
	First();
	//将待处理状态入队
	//初始化一个状态
	LRState state;
	state.numberInt = 0;//0号状态
	queue<int> que;
	que.push(0);//0状态入栈
	//将状态添加到dfa的状态集中
	//statesVec.push_back(0);
	while (!que.empty()) {
		//取出待处理状态
		int currentState = que.front();
		//状态内部扩展
		generateState(statesVec[currentState]);
		printLRState(statesVec[currentState]);
		//将新生成的状态入队

	}
}