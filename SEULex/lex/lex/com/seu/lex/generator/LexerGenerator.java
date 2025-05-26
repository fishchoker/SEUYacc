package com.seu.lex.generator;

import com.seu.lex.dfa.DFA;
import com.seu.lex.dfa.DFAState;
import java.util.*;

public class LexerGenerator {
    private final DFA dfa;
    private final String cCode;  // 头部C代码（%{...%}）
    private final String userCode;  // 用户自定义C代码（第二个%%后）
    private final Map<Integer, String> stateToAction;  // 状态到动作的映射
    private final Map<Integer, Integer> stateToPriority;  // 状态到优先级的映射

    public LexerGenerator(DFA dfa, String cCode, String userCode) {
        this.dfa = dfa;
        this.cCode = cCode;
        this.userCode = userCode;
        this.stateToAction = new HashMap<>();
        this.stateToPriority = new HashMap<>();
        initializeMappings();
    }

    private void initializeMappings() {
        // 初始化状态到动作和优先级的映射
        for (DFAState state : dfa.getStatesVec()) {
            if (state.isAccept()) {
                stateToAction.put(state.getNumber(), state.getAction());
                stateToPriority.put(state.getNumber(), state.getPriority());
            }
        }
    }

    public String generateLexerCode() {
        StringBuilder code = new StringBuilder();
        
        // 1. 添加必要的头文件（避免重复）
        code.append("/* 头部C代码 */\n");
        code.append("#include <stdio.h>\n");
        code.append("#include <stdlib.h>\n");
        code.append("#include <string.h>\n\n");
        
        // 2. 添加用户定义的C代码
        if (cCode != null && !cCode.trim().isEmpty()) {
            code.append(cCode).append("\n");
        }

        // 3. 定义Token结构体
        code.append("typedef struct {\n");
        code.append("    const char* type;\n");
        code.append("    char* lexeme;\n");
        code.append("} Token;\n\n");

        // 4. 定义全局变量（只定义一次）
        code.append("/* 全局变量定义 */\n");
        code.append("char yytext[1024] = {0};  // 用于存储当前识别的词素\n");
        code.append("FILE* input_file = NULL;   // 输入文件指针\n");
        code.append("char input_buffer[1024] = {0};  // 输入缓冲区\n");
        code.append("YYSTYPE yylval = {0};     // 语义值\n\n");

        // 5. 生成字母表
        Set<String> alphabet = dfa.getAlphabet();
        System.out.println("\n=== 生成C代码时的字母表 ===");
        System.out.println("DFA的字母表: " + alphabet);

        // 打印每个状态的转移
        System.out.println("\n=== DFA状态转移 ===");
        for (DFAState state : dfa.getStatesVec()) {
            System.out.println("状态 " + state.getNumber() + " 的转移: " + state.getExEdgesMap());
        }

        // 处理字符，包括转义字符
        List<Character> allChars = new ArrayList<>();
        for (String symbol : alphabet) {
            if (symbol.length() == 1) {
                allChars.add(symbol.charAt(0));
            } else if (symbol.length() == 2 && symbol.charAt(0) == '\\') {
                // 处理转义字符
                char ch = symbol.charAt(1);
                switch (ch) {
                    case 'n': allChars.add('\n'); break;
                    case 'r': allChars.add('\r'); break;
                    case 't': allChars.add('\t'); break;
                    case '+': allChars.add('+'); break;
                    case '-': allChars.add('-'); break;
                    default: allChars.add(ch);
                }
            }
        }
        Collections.sort(allChars);

        System.out.println("\n=== 处理后的字符列表 ===");
        System.out.println("字符列表: " + allChars);

        code.append("const char ALPHABET[] = {\n");
        for (char ch : allChars) {
            if (ch == '\'') {
                code.append("    '\\''").append(",\n");
            } else if (ch == '\\') {
                code.append("    '\\\\'").append(",\n");
            } else if (ch == '\n') {
                code.append("    '\\n'").append(",\n");
            } else if (ch == '\t') {
                code.append("    '\\t'").append(",\n");
            } else if (ch == '\r') {
                code.append("    '\\r'").append(",\n");
            } else if (ch == ' ') {
                code.append("    ' '").append(",\n");
            } else {
                code.append("    '").append(ch).append("'").append(",\n");
            }
        }
        code.append("};\n");
        code.append("#define ALPHABET_SIZE ").append(allChars.size()).append("\n");
        code.append("#define STATE_NUM ").append(dfa.getStateCount()).append("\n\n");

        // 6. 生成转换表
        code.append("int TRANSITION_TABLE[STATE_NUM][ALPHABET_SIZE] = {\n");

        // 创建字符到索引的映射
        Map<Character, Integer> charToIndex = new HashMap<>();
        int index = 0;
        for (char ch : allChars) {
            charToIndex.put(ch, index++);
        }

        System.out.println("字符映射: " + charToIndex);

        // 生成状态转换表
        for (int i = 0; i < dfa.getStateCount(); i++) {
            DFAState state = dfa.getState(i);
            code.append("    {");
            for (int j = 0; j < allChars.size(); j++) {
                char ch = allChars.get(j);
                String symbol = String.valueOf(ch);
                // 特殊处理换行符
                if (ch == '\n') {
                    symbol = "\\n";
                }
                Integer nextState = state.getExEdgesMap().get(symbol);
                if (nextState == null) {
                    nextState = 0;  // 如果没有转移，默认为0
                }
                code.append(nextState);
                if (j != allChars.size() - 1) {
                    code.append(", ");
                }
            }
            code.append("},\n");
        }
        code.append("};\n\n");

        // 7. 生成动作表
        code.append("const char* ACTION_TABLE[STATE_NUM] = {\n");
        for (int i = 0; i < dfa.getStateCount(); i++) {
            DFAState state = dfa.getState(i);
            if (state.isAccept()) {
                String action = state.getAction();
                // 将多行字符串转换为单行，并正确处理引号
                action = action.replace("\n", "\\n").replace("\"", "\\\"");
                code.append("    \"").append(action).append("\"");
            } else {
                code.append("    NULL");
            }
            code.append(",\n");
        }
        code.append("};\n\n");

        // 8. 生成优先级表
        code.append("int PRIORITY_TABLE[STATE_NUM] = {\n");
        for (int i = 0; i < dfa.getStateCount(); i++) {
            DFAState state = dfa.getState(i);
            code.append("    ").append(state.isAccept() ? "1" : "0").append(",\n");  // 接受状态优先级为1，否则为0
        }
        code.append("};\n\n");

        // 9. 生成辅助函数
        code.append("// 获取字符在字母表中的索引\n");
        code.append("int get_char_index(char c) {\n");
        code.append("    for (int i = 0; i < ALPHABET_SIZE; ++i) {\n");
        code.append("        if (ALPHABET[i] == c) return i;\n");
        code.append("    }\n");
        code.append("    return -1;\n");
        code.append("}\n\n");

        // 10. 生成next_token函数
        code.append("// 词法分析主函数\n");
        code.append("int yylex() {\n");
        code.append("    static int current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("    static int last_accept_state = -1;\n");
        code.append("    static int line_no = 1;\n");
        code.append("    static int last_accept_pos = 0;\n\n");

        code.append("    // 主循环：读取字符并在状态机上推进\n");
        code.append("    int c;\n");
        code.append("    int start_pos = ftell(input_file);\n");
        code.append("    while ((c = fgetc(input_file)) != EOF) {\n");
        code.append("        // 处理换行\n");
        code.append("        if (c == '\\n') {\n");
        code.append("            line_no++;\n");
        code.append("        }\n\n");

        code.append("        // 获取字符在字母表中的索引\n");
        code.append("        int idx = get_char_index(c);\n");
        code.append("        if (idx == -1) {\n");
        code.append("            printf(\"Error: Invalid character '%c' at line %d\\n\", c, line_no);\n");
        code.append("            // 重置状态并移动到下一个字符\n");
        code.append("            current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("            last_accept_state = -1;\n");
        code.append("            start_pos = ftell(input_file);\n");
        code.append("            continue;\n");
        code.append("        }\n\n");

        code.append("        // 在状态机上推进\n");
        code.append("        int next_state = TRANSITION_TABLE[current_state][idx];\n");
        code.append("        if (next_state == 0) {\n");
        code.append("            // 无法继续推进，检查是否有接受状态\n");
        code.append("            if (last_accept_state != -1) {\n");
        code.append("                // 读取token文本\n");
        code.append("                int token_len = last_accept_pos - start_pos;\n");
        code.append("                fseek(input_file, start_pos, SEEK_SET);\n");
        code.append("                fread(yytext, 1, token_len, input_file);\n");
        code.append("                yytext[token_len] = '\\0';\n");
        code.append("                \n");
        code.append("                // 执行动作\n");
        code.append("                const char* action = ACTION_TABLE[last_accept_state];\n");
        code.append("                if (action != NULL) {\n");
        code.append("                    // 处理特殊token类型\n");
        code.append("                    if (strstr(action, \"NAME\") != NULL) {\n");
        code.append("                        yylval.name = strdup(yytext);\n");
        code.append("                        // 重置状态并移动到下一个字符\n");
        code.append("                        current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                        last_accept_state = -1;\n");
        code.append("                        fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                        return NAME;\n");
        code.append("                    } else if (strstr(action, \"NUMBER\") != NULL) {\n");
        code.append("                        yylval.value = atoi(yytext);\n");
        code.append("                        // 重置状态并移动到下一个字符\n");
        code.append("                        current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                        last_accept_state = -1;\n");
        code.append("                        fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                        return NUMBER;\n");
        code.append("                    } else if (strstr(action, \"IF\") != NULL) {\n");
        code.append("                        // 重置状态并移动到下一个字符\n");
        code.append("                        current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                        last_accept_state = -1;\n");
        code.append("                        fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                        return IF;\n");
        code.append("                    } else if (strstr(action, \"PLUS\") != NULL) {\n");
        code.append("                        // 重置状态并移动到下一个字符\n");
        code.append("                        current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                        last_accept_state = -1;\n");
        code.append("                        fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                        return PLUS;\n");
        code.append("                    } else if (strstr(action, \"MINUS\") != NULL) {\n");
        code.append("                        // 重置状态并移动到下一个字符\n");
        code.append("                        current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                        last_accept_state = -1;\n");
        code.append("                        fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                        return MINUS;\n");
        code.append("                    }\n");
        code.append("                }\n");
        code.append("            } else {\n");
        code.append("                printf(\"Error: Invalid token at line %d\\n\", line_no);\n");
        code.append("                // 重置状态并移动到下一个字符\n");
        code.append("                current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                last_accept_state = -1;\n");
        code.append("                start_pos = ftell(input_file);\n");
        code.append("                continue;\n");
        code.append("            }\n");
        code.append("        }\n\n");

        code.append("        // 更新状态\n");
        code.append("        current_state = next_state;\n");
        code.append("        \n");
        code.append("        // 记录接受状态\n");
        code.append("        if (ACTION_TABLE[current_state] != NULL) {\n");
        code.append("            last_accept_state = current_state;\n");
        code.append("            last_accept_pos = ftell(input_file);\n");
        code.append("        }\n");
        code.append("    }\n\n");

        code.append("    // 处理文件结束\n");
        code.append("    if (last_accept_state != -1) {\n");
        code.append("        // 读取最后一个token\n");
        code.append("        int token_len = last_accept_pos - start_pos;\n");
        code.append("        fseek(input_file, start_pos, SEEK_SET);\n");
        code.append("        fread(yytext, 1, token_len, input_file);\n");
        code.append("        yytext[token_len] = '\\0';\n");
        code.append("        \n");
        code.append("        // 执行动作\n");
        code.append("        const char* action = ACTION_TABLE[last_accept_state];\n");
        code.append("        if (action != NULL) {\n");
        code.append("            if (strstr(action, \"NAME\") != NULL) {\n");
        code.append("                yylval.name = strdup(yytext);\n");
        code.append("                // 重置状态并移动到下一个字符\n");
        code.append("                current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                last_accept_state = -1;\n");
        code.append("                fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                return NAME;\n");
        code.append("            } else if (strstr(action, \"NUMBER\") != NULL) {\n");
        code.append("                yylval.value = atoi(yytext);\n");
        code.append("                // 重置状态并移动到下一个字符\n");
        code.append("                current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                last_accept_state = -1;\n");
        code.append("                fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                return NUMBER;\n");
        code.append("            } else if (strstr(action, \"IF\") != NULL) {\n");
        code.append("                // 重置状态并移动到下一个字符\n");
        code.append("                current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                last_accept_state = -1;\n");
        code.append("                fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                return IF;\n");
        code.append("            } else if (strstr(action, \"PLUS\") != NULL) {\n");
        code.append("                // 重置状态并移动到下一个字符\n");
        code.append("                current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                last_accept_state = -1;\n");
        code.append("                fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                return PLUS;\n");
        code.append("            } else if (strstr(action, \"MINUS\") != NULL) {\n");
        code.append("                // 重置状态并移动到下一个字符\n");
        code.append("                current_state = ").append(dfa.getStartState()).append(";\n");
        code.append("                last_accept_state = -1;\n");
        code.append("                fseek(input_file, last_accept_pos, SEEK_SET);\n");
        code.append("                return MINUS;\n");
        code.append("            }\n");
        code.append("        }\n");
        code.append("    }\n\n");

        code.append("    // 没有更多token\n");
        code.append("    return 0;\n");
        code.append("}\n\n");

        // 11. 生成get_next_word函数
        code.append("// 获取下一个字符\n");
        code.append("int get_next_word(const char* input, int* pos, char* word) {\n");
        code.append("    int i = *pos;\n");
        code.append("    int j = 0;\n");
        code.append("    \n");
        code.append("    // 如果到达行尾，返回0\n");
        code.append("    if (input[i] == '\\0') return 0;\n");
        code.append("    \n");
        code.append("    // 读取一个字符\n");
        code.append("    word[j++] = input[i++];\n");
        code.append("    word[j] = '\\0';\n");
        code.append("    *pos = i;\n");
        code.append("    return 1;\n");
        code.append("}\n\n");

        // 12. 添加用户代码
        if (userCode != null && !userCode.trim().isEmpty()) {
            code.append("/* 用户自定义C代码 */\n");
            code.append(userCode);
        }
        
        // 13. 生成main函数
        code.append("\nint main(int argc, char* argv[]) {\n");
        code.append("    if (argc != 2) {\n");
        code.append("        printf(\"Usage: %s <input_file>\\n\", argv[0]);\n");
        code.append("        return 1;\n");
        code.append("    }\n\n");

        code.append("    input_file = fopen(argv[1], \"r\");\n");
        code.append("    if (input_file == NULL) {\n");
        code.append("        printf(\"Cannot open file: %s\\n\", argv[1]);\n");
        code.append("        return 1;\n");
        code.append("    }\n\n");

        code.append("    int token;\n");
        code.append("    while ((token = yylex()) != 0) {\n");
        code.append("        const char* token_type = NULL;\n");
        code.append("        switch (token) {\n");
        
        // 动态生成token类型处理代码
        Set<String> processedTokens = new HashSet<>();
        for (DFAState state : dfa.getStatesVec()) {
            if (state.isAccept()) {
                String action = state.getAction();
                if (action.contains("return")) {
                    int returnIndex = action.indexOf("return");
                    int semicolonIndex = action.indexOf(";", returnIndex);
                    if (returnIndex != -1 && semicolonIndex != -1) {
                        String tokenName = action.substring(returnIndex + 7, semicolonIndex).trim();
                        if (!processedTokens.contains(tokenName)) {
                            code.append("            case ").append(tokenName).append(": token_type = \"").append(tokenName).append("\"; break;\n");
                            processedTokens.add(tokenName);
                        }
                    }
                }
            }
        }
        
        code.append("            default: token_type = \"UNKNOWN\"; break;\n");
        code.append("        }\n");
        code.append("        printf(\"Token: %s, Lexeme: %s\\n\", token_type, yytext);\n");
        code.append("    }\n\n");

        code.append("    fclose(input_file);\n");
        code.append("    return 0;\n");
        code.append("}\n");

        return code.toString();
    }
} 