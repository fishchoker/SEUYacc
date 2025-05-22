#include"YaccDFA.h"
#include<queue>
unordered_map<int, set<int> > firsts;
/*
* ����ս����first��
*/
void First() {
	//��ʼ���ս����Ϊ������
	for (auto& t : IdTerminal) {
		firsts[t.first] = { t.first };
	}
	//�ս���� �ȳ�ʼ��Ϊ��
	for (auto& t : IdNonterminal) {
		firsts[t.first] = {};
	}
	bool change=true;//������ս����first���Ƿ��и���
	while (change)//���и��� ��������
	{
		change = false;
		//��������ʽ����
		for (auto& producer : numproducerList) {
			int left = producer.first;//�õ�������
			if (isTerminalid(left)) continue;//�����ս��
			bool hasEpsilon = true;//���赱ǰ����ʽ���Ƴ��ռ�
			vector<int> right=producer.second;//�õ�����ʽ�Ҳ�
			//���� A �� �� �Ĳ���ʽ��right Ϊ�գ���ʱӦֱ����� ��
			if (right.empty()) {
				firsts[left].insert(-1);
				change = true;
				continue;
			}
			for (auto& item : right)//�����Ҳ����
			{
				//ȡ��ǰ���ŵ�first��
				auto& thisSet = firsts[item];
				//����ǰ���ŵ�FIRST��(������)�����󲿷��ŵ�FIRST��
				for (auto& i : thisSet) {
					if (i == -1) continue;//�����ռ�
					if (firsts[left].count(i) == 0) { // ���δ�����÷���
						change = true; // �����Ҫ��������
						firsts[left].insert(i); // ����FIRST��
					}
				}
				if (thisSet.count(-1) == 0) {
					hasEpsilon = false;
					break; // �����Ƴ��ţ���ֹ�����������
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
/*
* ״̬����չ
*/
void generateState(LRState state) {
	//�½�����
	queue<LRItem> producers;
	//�������ʽ
	for (auto& p : state.LRItemsSet)
		producers.push(p);
	while (!producers.empty()) {
		auto& p = producers.front();//ȡ����ǰ���LR��
		auto& producer = numproducerList[p.gramarInt];//ȡ�������Ӧ�Ĳ���ʽ
		vector<int> right = producer.second;
		//�жϵ��Ƿ���ĩβ
		if (p.positionInt >= right.size()) producers.pop();//�Ѿ�������� ����
		//������ս��
		//ȡ������ַ�
		int after = right[p.positionInt];
		if (isTerminalid(after)) producers.pop();//������ս�� ����
		//�Ե���Ƿ��ս������Ŀ������չ ������ǰ������
		//�ҵ����ս�������в���ʽ
		set<int> lookaheads;
		bool canDeriveEpsilon = true;//�Ƿ����Ƴ��մ�

		// ����²��ֵ�FIRST��������ʣ����ţ�
		for (int i = p.positionInt + 1; i < right.size(); ++i) {
			int symbol = right[i];
			auto& firstSet = firsts[symbol];//ȡ��first��

			// ����FIRST(symbol)�ķǦ�Ԫ�أ�-1��
			for (int terminal : firstSet) {
				if (terminal != -1) {
					lookaheads.insert(terminal);//
				}
			}
			//û��Ԫ�ػ��Ƴ��մ�
			if (firstSet.find(-1) == firstSet.end()) {
				canDeriveEpsilon = false;
				break;
			}
		}
		// ����Ƿ����Ƴ��� ���� �������ǵ�ǰ����ʽ��Ԥ���
		if (canDeriveEpsilon) {
			lookaheads.insert(p.predictiveSymbol);
		}
		//���ݵ�ǰ���ķ�����ʽ��Ԥ����ţ�lookahead�������µ� LR ��Ŀ��LRItem��
		for (int i = 0; i < numproducerList.size(); ++i) {//��������ʽ �ҵ���ǰ�������ս��������ߵ����в���ʽ
			if (numproducerList[i].first == after) {
				for (int lookahead : lookaheads) {//�������ܵ�Ԥ���
					//���ÿһ����ǰ����������һ���µ� LR ��Ŀ
					// 
					LRItem item(0, i, lookahead);
					if (state.LRItemsSet.count(item) == 0) 
						{
							state.LRItemsSet.insert(item);//״̬����չ �ظ�������Զ�ȥ�أ�
							producers.push(item); // ������������Ŀ
						}

				}
			}

		}
	}
}
/*
* ״̬����չ
*/
void LRDFA::extendState(LRState state) {
	unordered_map<int, LRState> newStates;
	//������ǰ״̬���
	for (auto& item : state.LRItemsSet) {
		//ȡ������ʽ
		auto& producer = numproducerList[item.gramarInt];
		vector<int> right = producer.second;
		//�жϵ��λ��
		if (item.positionInt >= right.size()) continue;
		//�ƽ�ʲô����
		int next = right[item.positionInt];
		//���
		int nextState = state.edgesMap[next];//�ƽ�״̬
		LRItem newItem(item.positionInt + 1, item.gramarInt, item.predictiveSymbol);//�ƽ���õ�������
		//��Ҫ�½���״̬
		if (newStates.find(nextState) == newStates.end()) {
			LRState newState;
			newState.LRItemsSet.insert(newItem);//��Ŀ������״̬
			newState.numberInt = nextState;
			newStates[nextState] = newState; // ����״̬��ӵ�״̬����
		}


	}
}
/*
* ����DFA ����ռ������ս������IDΪ-1����������IDΪ1000
*/
LRDFA::LRDFA() {
	auto& dfa = *this;//ȡ��ǰdfa
	//��ʼ����һ��� �ķ���ʼ���ŵĲ���ʽ
	LRItem item0(0, 0, -2);
	//�õ�first��
	First();
	//��������״̬���
	queue<int> que;
	que.push(0);//0״̬��ջ
	while (!que.empty()) {
		//ȡ��������״̬
		int currentState = que.front();
		//״̬�ڲ���չ

		//�������ɵ�״̬���

	}
}