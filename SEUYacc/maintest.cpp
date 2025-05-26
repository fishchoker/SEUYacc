#include <iostream>
#include <fstream>
#include "YaccParser.h"
#include "symbolList.h"
#include "YaccDFA.h"
#include "LRTableBuilder.h"
#include "ParserDriver.h"

using namespace std;

// ���л���������
void serializeLRTable(const LRTableBuilder& builder, const string& filename);
bool deserializeLRTable(LRTableBuilder& builder, const string& filename);
//���ļ��ж�ȡ�ʷ��������
vector<int> readTokens(string filename);
void test() {
    //��ӡ�ս��
    cout << "�ս����\n";
    for (const auto& pair : terminal) {
        cout << pair.first << ", ID: " << pair.second << endl;
    }
    //��ӡ���ս��
    cout << "���ս����\n";
    for (const auto& pair : nonterminal) {
        cout << pair.first << ", ID: " << pair.second << endl;
    }
    //��ӡ����ʽ
    for (int i = 0; i < producerList.size(); i++) {
        producerList[i].print(); cout << endl;
    }
    //��ӡfirst��
    printFirsts();
}

int main() {
    /*
    * �����﷨����
    */
    YaccParser parser;
    parser.parsingYacc();
    parser.getNonterminal();
    //test();
    init(); // ��ɷ��ŵ�������˫��ӳ��
    First();

    // �����ļ���
    const string cacheFile = "lrtable_cache.bin";
    LRTableBuilder* builder = nullptr;
    LRDFA dfa;


    // ���Դӻ������
    bool cacheValid = false;
    ifstream cacheTest(cacheFile, ios::binary);
    if (cacheTest.good()) {
        cacheValid = true;
        cacheTest.close();
    }

    if (cacheValid) {
        cout << "\n���Դӻ������LRTable..." << endl;
        builder = new LRTableBuilder(dfa); // ��Ҫ�ȹ������
        if (deserializeLRTable(*builder, cacheFile)) {
            cout << "�ɹ��ӻ������LRTable" << endl;
        }
        else {
            cout << "�������ʧ�ܣ����¹���LRTable" << endl;
            dfa.generateLRDFA();
            delete builder;
            builder = new LRTableBuilder(dfa);
            builder->endSymbol = 0;
            builder->buildTables();
            serializeLRTable(*builder, cacheFile);
        }
    }
    else {
        cout << "\nδ�ҵ���Ч���棬����LRTable..." << endl;
        dfa.generateLRDFA();
        builder = new LRTableBuilder(dfa);
        builder->endSymbol = 0;
        builder->buildTables();
        serializeLRTable(*builder, cacheFile);
    }

   //printActionTable(*builder);
   //printGotoTable(*builder);

    // ====== ���� ParserDriver ======
    string tokens = "./rule/token1.txt";
    vector<int> tokenStream = readTokens(tokens);
    //std::vector<int> tokenStream = { 301, 302, 302, 0 }; // ģ�����룺c d d $
    ParserDriver driver(*builder, numproducerList);

    // ====== �����﷨�� ======
    cout << id2symbol(501) << endl;
    auto syntaxTree = driver.parse(tokenStream);

    if (syntaxTree) {
        cout << "\n=== �﷨���ṹ ===" << endl;
        driver.printSyntaxTree(syntaxTree);
    }
    else {
        cout << "����ʧ��!" << endl;
    }

    delete builder; // �ͷ��ڴ�
    return 0;
}

// LRTable���л�����
void serializeLRTable(const LRTableBuilder& builder, const string& filename) {
    ofstream outFile(filename, ios::binary);
    if (!outFile) {
        cerr << "�޷����������ļ�" << endl;
        return;
    }

    // ���л�ACTION��
    size_t actionSize = builder.ACTION.size();
    outFile.write(reinterpret_cast<const char*>(&actionSize), sizeof(actionSize));

    for (const auto& stateActions : builder.ACTION) {
        size_t numActions = stateActions.size();
        outFile.write(reinterpret_cast<const char*>(&numActions), sizeof(numActions));

        for (const auto& actionPair : stateActions) {
            outFile.write(reinterpret_cast<const char*>(&actionPair.first), sizeof(actionPair.first));
            outFile.write(reinterpret_cast<const char*>(&actionPair.second.type), sizeof(actionPair.second.type));
            outFile.write(reinterpret_cast<const char*>(&actionPair.second.target), sizeof(actionPair.second.target));
        }
    }

    // ���л�GOTO��
    size_t gotoSize = builder.GOTO.size();
    outFile.write(reinterpret_cast<const char*>(&gotoSize), sizeof(gotoSize));

    for (const auto& stateGotos : builder.GOTO) {
        size_t numGotos = stateGotos.size();
        outFile.write(reinterpret_cast<const char*>(&numGotos), sizeof(numGotos));

        for (const auto& gotoPair : stateGotos) {
            outFile.write(reinterpret_cast<const char*>(&gotoPair.first), sizeof(gotoPair.first));
            outFile.write(reinterpret_cast<const char*>(&gotoPair.second), sizeof(gotoPair.second));
        }
    }

    outFile.close();
    cout << "LRTable�ѻ��浽�ļ�: " << filename << endl;
}

// LRTable�����л�����
bool deserializeLRTable(LRTableBuilder& builder, const string& filename) {
    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cerr << "�޷��򿪻����ļ�" << endl;
        return false;
    }

    try {
        // �����л�ACTION��
        size_t actionSize;
        inFile.read(reinterpret_cast<char*>(&actionSize), sizeof(actionSize));
        builder.ACTION.resize(actionSize);

        for (auto& stateActions : builder.ACTION) {
            size_t numActions;
            inFile.read(reinterpret_cast<char*>(&numActions), sizeof(numActions));

            for (size_t i = 0; i < numActions; ++i) {
                int symbol;
                Action action;
                inFile.read(reinterpret_cast<char*>(&symbol), sizeof(symbol));
                inFile.read(reinterpret_cast<char*>(&action.type), sizeof(action.type));
                inFile.read(reinterpret_cast<char*>(&action.target), sizeof(action.target));
                stateActions[symbol] = action;
            }
        }

        // �����л�GOTO��
        size_t gotoSize;
        inFile.read(reinterpret_cast<char*>(&gotoSize), sizeof(gotoSize));
        builder.GOTO.resize(gotoSize);

        for (auto& stateGotos : builder.GOTO) {
            size_t numGotos;
            inFile.read(reinterpret_cast<char*>(&numGotos), sizeof(numGotos));

            for (size_t i = 0; i < numGotos; ++i) {
                int symbol;
                int targetState;
                inFile.read(reinterpret_cast<char*>(&symbol), sizeof(symbol));
                inFile.read(reinterpret_cast<char*>(&targetState), sizeof(targetState));
                stateGotos[symbol] = targetState;
            }
        }

        inFile.close();
        return true;
    }
    catch (...) {
        cerr << "�����ļ���" << endl;
        return false;
    }
}
vector<int> readTokens(string filename) {
    ifstream file(filename);
    string line;
    vector<int> ids;

    if (!file.is_open()) {
        cerr << "�޷����ļ�: " << filename << endl;
        return ids;
    }

    while (getline(file, line)) {
        stringstream ss(line);
        string word;

        // �����ȡ����
        while (ss >> word) {

            // ���word���ǿ��ַ�����ӳ���ID����ӵ�vector��
            if (!word.empty()) {
                if (word[0] < 65 || word[0] > 90) {//�����Զ���Ĵ�д�ս��
                    word = "'" + word + "'";
                }
                int id = symbol2id(word);
                ids.push_back(id);
            }
        }
    }
    ids.push_back(0);
    cout << "��ȡ�ɹ�" << endl;
    file.close();
    return ids;
}

//#include<iostream>
//#include"YaccParser.h"
//#include"symbolList.h"
//#include"YaccDFA.h"
//#include "LRTableBuilder.h" 
//#include "ParserDriver.h"
//  
//using namespace std;
//void test() {
//	//��ӡ�ս��
//	cout << "�ս����\n";
//	for (const auto& pair : terminal) {
//		cout << pair.first << ", ID: " << pair.second << endl;
//	}
//	//��ӡ���ս��
//	cout << "���ս����\n";
//	for (const auto& pair : nonterminal) {
//		cout << pair.first << ", ID: " << pair.second << endl;
//	}
//	//��ӡ����ʽ
//	for (int i = 0; i < producerList.size(); i++)
//	{
//		producerList[i].print(); cout << endl;
//
//	}
//	//��ӡfirst��
//	printFirsts();
//}
//
//int main() {
//	/*
//	* �����﷨����
//	*/
//	
//	YaccParser parser;
//	parser.parsingYacc();
//	parser.getNonterminal();
//	test();
//	init();//��ɷ��ŵ�������˫��ӳ��
//	cout << isTerminalid(301) << endl;
//	First();
//	
//	LRDFA dfa;
//	dfa.generateLRDFA();
//
//	LRTableBuilder builder(dfa);
//	builder.endSymbol = 0;
//	builder.buildTables();
//
//	printActionTable(builder);
//	printGotoTable(builder);
//
//	// ====== ���� ParserDriver ======
//	std::vector<int> tokenStream = { 301, 302, 302,0 }; // ģ�����룺c d d $
//	ParserDriver driver(builder, numproducerList);
//	// ====== �����﷨�� ======
//	auto syntaxTree = driver.parse(tokenStream);
//
//	if (syntaxTree) {
//		cout << "\n=== �﷨���ṹ ===" << endl;
//		driver.printSyntaxTree(syntaxTree);
//	}
//	else {
//		cout << "����ʧ��!" << endl;
//	}
//	return 0;
//}

////
////int main() {
////    YaccParser parser;
////    parser.parsingYacc();
////    parser.getNonterminal();
////    test();
////
////    init(); // ��ʼ���ս��/���ս��ӳ��
////    First(); // ���� FIRST ��
////
////    std::unique_ptr<LRTableBuilder> builder;
////
////    ifstream fin("lrtable.dat", ios::binary);
////    if (fin.good()) {
////        cout << "[INFO] ��⵽�����ļ������ط�����..." << endl;
////        builder = std::make_unique<LRTableBuilder>();
////        LRTableSerializer::load(*builder, "lrtable.dat");
////    }
////    else {
////        cout << "[INFO] δ��⵽�����ļ������¹���������..." << endl;
////        LRDFA dfa;
////        builder = std::make_unique<LRTableBuilder>(dfa);
////        builder->endSymbol = 0;
////        builder->buildTables();
////
////        printActionTable(*builder);
////        printGotoTable(*builder);
////
////        LRTableSerializer::save(*builder, "lrtable.dat");
////        cout << "[INFO] �����������" << endl;
////    }
////
////    vector<int> tokenStream = { 301, 302, 302, 0 }; // ʾ������ token
////    ParserDriver driver(*builder, numproducerList);
////    auto syntaxTree = driver.parse(tokenStream);
////
////    if (syntaxTree) {
////        cout << "\n=== �﷨���ṹ ===" << endl;
////        driver.printSyntaxTree(syntaxTree);
////    }
////    else {
////        cout << "����ʧ��!" << endl;
////    }
////
////    return 0;
////}


