#include <iostream>
#include <fstream>
#include "YaccParser.h"
#include "symbolList.h"
#include "YaccDFA.h"
#include "LRTableBuilder.h"
#include "ParserDriver.h"

using namespace std;

// 序列化函数声明
void serializeLRTable(const LRTableBuilder& builder, const string& filename);
bool deserializeLRTable(LRTableBuilder& builder, const string& filename);
//从文件中读取词法分析结果
vector<int> readTokens(string filename);
void test() {
    //打印终结符
    cout << "终结符：\n";
    for (const auto& pair : terminal) {
        cout << pair.first << ", ID: " << pair.second << endl;
    }
    //打印非终结符
    cout << "非终结符：\n";
    for (const auto& pair : nonterminal) {
        cout << pair.first << ", ID: " << pair.second << endl;
    }
    //打印产生式
    for (int i = 0; i < producerList.size(); i++) {
        producerList[i].print(); cout << endl;
    }
    //打印first集
    printFirsts();
}

int main() {
    /*
    * 解析语法规则
    */
    YaccParser parser;
    parser.parsingYacc();
    parser.getNonterminal();
    //test();
    init(); // 完成符号到整数的双向映射
    First();

    // 缓存文件名
    const string cacheFile = "lrtable_cache.bin";
    LRTableBuilder* builder = nullptr;
    LRDFA dfa;


    // 尝试从缓存加载
    bool cacheValid = false;
    ifstream cacheTest(cacheFile, ios::binary);
    if (cacheTest.good()) {
        cacheValid = true;
        cacheTest.close();
    }

    if (cacheValid) {
        cout << "\n尝试从缓存加载LRTable..." << endl;
        builder = new LRTableBuilder(dfa); // 需要先构造对象
        if (deserializeLRTable(*builder, cacheFile)) {
            cout << "成功从缓存加载LRTable" << endl;
        }
        else {
            cout << "缓存加载失败，重新构建LRTable" << endl;
            dfa.generateLRDFA();
            delete builder;
            builder = new LRTableBuilder(dfa);
            builder->endSymbol = 0;
            builder->buildTables();
            serializeLRTable(*builder, cacheFile);
        }
    }
    else {
        cout << "\n未找到有效缓存，构建LRTable..." << endl;
        dfa.generateLRDFA();
        builder = new LRTableBuilder(dfa);
        builder->endSymbol = 0;
        builder->buildTables();
        serializeLRTable(*builder, cacheFile);
    }

   //printActionTable(*builder);
   //printGotoTable(*builder);

    // ====== 测试 ParserDriver ======
    string tokens = "./rule/token1.txt";
    vector<int> tokenStream = readTokens(tokens);
    //std::vector<int> tokenStream = { 301, 302, 302, 0 }; // 模拟输入：c d d $
    ParserDriver driver(*builder, numproducerList);

    // ====== 测试语法树 ======
    cout << id2symbol(501) << endl;
    auto syntaxTree = driver.parse(tokenStream);

    if (syntaxTree) {
        cout << "\n=== 语法树结构 ===" << endl;
        driver.printSyntaxTree(syntaxTree);
    }
    else {
        cout << "解析失败!" << endl;
    }

    delete builder; // 释放内存
    return 0;
}

// LRTable序列化函数
void serializeLRTable(const LRTableBuilder& builder, const string& filename) {
    ofstream outFile(filename, ios::binary);
    if (!outFile) {
        cerr << "无法创建缓存文件" << endl;
        return;
    }

    // 序列化ACTION表
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

    // 序列化GOTO表
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
    cout << "LRTable已缓存到文件: " << filename << endl;
}

// LRTable反序列化函数
bool deserializeLRTable(LRTableBuilder& builder, const string& filename) {
    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cerr << "无法打开缓存文件" << endl;
        return false;
    }

    try {
        // 反序列化ACTION表
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

        // 反序列化GOTO表
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
        cerr << "缓存文件损坏" << endl;
        return false;
    }
}
vector<int> readTokens(string filename) {
    ifstream file(filename);
    string line;
    vector<int> ids;

    if (!file.is_open()) {
        cerr << "无法打开文件: " << filename << endl;
        return ids;
    }

    while (getline(file, line)) {
        stringstream ss(line);
        string word;

        // 逐个提取单词
        while (ss >> word) {

            // 如果word不是空字符串，映射成ID并添加到vector中
            if (!word.empty()) {
                if (word[0] < 65 || word[0] > 90) {//不是自定义的大写终结符
                    word = "'" + word + "'";
                }
                int id = symbol2id(word);
                ids.push_back(id);
            }
        }
    }
    ids.push_back(0);
    cout << "读取成功" << endl;
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
//	//打印终结符
//	cout << "终结符：\n";
//	for (const auto& pair : terminal) {
//		cout << pair.first << ", ID: " << pair.second << endl;
//	}
//	//打印非终结符
//	cout << "非终结符：\n";
//	for (const auto& pair : nonterminal) {
//		cout << pair.first << ", ID: " << pair.second << endl;
//	}
//	//打印产生式
//	for (int i = 0; i < producerList.size(); i++)
//	{
//		producerList[i].print(); cout << endl;
//
//	}
//	//打印first集
//	printFirsts();
//}
//
//int main() {
//	/*
//	* 解析语法规则
//	*/
//	
//	YaccParser parser;
//	parser.parsingYacc();
//	parser.getNonterminal();
//	test();
//	init();//完成符号到整数的双向映射
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
//	// ====== 测试 ParserDriver ======
//	std::vector<int> tokenStream = { 301, 302, 302,0 }; // 模拟输入：c d d $
//	ParserDriver driver(builder, numproducerList);
//	// ====== 测试语法树 ======
//	auto syntaxTree = driver.parse(tokenStream);
//
//	if (syntaxTree) {
//		cout << "\n=== 语法树结构 ===" << endl;
//		driver.printSyntaxTree(syntaxTree);
//	}
//	else {
//		cout << "解析失败!" << endl;
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
////    init(); // 初始化终结符/非终结符映射
////    First(); // 构造 FIRST 集
////
////    std::unique_ptr<LRTableBuilder> builder;
////
////    ifstream fin("lrtable.dat", ios::binary);
////    if (fin.good()) {
////        cout << "[INFO] 检测到缓存文件，加载分析表..." << endl;
////        builder = std::make_unique<LRTableBuilder>();
////        LRTableSerializer::load(*builder, "lrtable.dat");
////    }
////    else {
////        cout << "[INFO] 未检测到缓存文件，重新构建分析表..." << endl;
////        LRDFA dfa;
////        builder = std::make_unique<LRTableBuilder>(dfa);
////        builder->endSymbol = 0;
////        builder->buildTables();
////
////        printActionTable(*builder);
////        printGotoTable(*builder);
////
////        LRTableSerializer::save(*builder, "lrtable.dat");
////        cout << "[INFO] 分析表保存完成" << endl;
////    }
////
////    vector<int> tokenStream = { 301, 302, 302, 0 }; // 示例输入 token
////    ParserDriver driver(*builder, numproducerList);
////    auto syntaxTree = driver.parse(tokenStream);
////
////    if (syntaxTree) {
////        cout << "\n=== 语法树结构 ===" << endl;
////        driver.printSyntaxTree(syntaxTree);
////    }
////    else {
////        cout << "解析失败!" << endl;
////    }
////
////    return 0;
////}


