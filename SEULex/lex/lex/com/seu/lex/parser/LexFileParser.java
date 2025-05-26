package com.seu.lex.parser;

import com.seu.lex.model.Rule;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * Lex文件解析器，专为解析特定格式的 test.l 文件设计。
 * 假设所有规则的动作都明确使用花括号 {} 包围，或者本身就是多行C代码块。
 * 假设输入文件格式高度规范，无需复杂错误处理。
 * 主要部分：
 * 1. C代码定义部分（%{...%}包裹）
 * 2. 正则表达式别名定义部分
 * 3. 词法规则定义部分（由%%分隔）
 * 4. 用户附加C代码部分（最后一个%%之后）
 */
public class LexFileParser {
    /** 解析出的C代码定义部分 */
    private String cCode;
    /** 正则表达式别名定义映射表，键为别名，值为对应的正则表达式 */
    private Map<String, String> reDefinitions;
    /** 解析出的词法规则列表 */
    private List<Rule> rules;
    /** 用户附加C代码部分 */
    private String userCode;

    private enum ParsingState {
        INITIAL, // 初始状态，或在RE定义区
        IN_C_CODE, // 在 %{ ... %} C代码定义区
        IN_RULES,  // 在第一个 %% 和第二个 %% 之间的规则定义区
        IN_USER_CODE // 在第二个 %% 之后的用户代码区
    }

    /**
     * 创建一个新的Lex文件解析器
     */
    public LexFileParser() {
        this.reDefinitions = new HashMap<>();
        this.rules = new ArrayList<>();
        this.cCode = "";
        this.userCode = "";
    }

    public void parse(String filePath) throws IOException {
        this.reDefinitions.clear();
        this.rules.clear();
        this.cCode = "";
        this.userCode = "";
        
        ParsingState currentState = ParsingState.INITIAL;
        StringBuilder currentBlockBuilder = new StringBuilder();

        try (BufferedReader reader = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = reader.readLine()) != null) {
                String trimmedLine = line.trim();

                // 状态机处理
                if (trimmedLine.startsWith("%{")) {// 处理 %{ ... %} 包裹的C代码块
                    if (currentState == ParsingState.INITIAL) {
                        // 如果 %{ 之前有内容，这部分属于RE定义（不规范，但先简单处理）
                        // 一般 %{ 会在新行开始，或者前面是空白
                        String contentBeforeMarker = line.substring(0, line.indexOf("%{"));
                        if (!contentBeforeMarker.trim().isEmpty()) {
                            parseREDefinitionLine(contentBeforeMarker.trim());
                        }
                        currentState = ParsingState.IN_C_CODE;
                        currentBlockBuilder.setLength(0); // 开始新的C代码块
                        String contentAfterMarker = line.substring(line.indexOf("%{") + 2);
                        // 处理 %{ code % } 在同一行的情况
                        if (contentAfterMarker.trim().endsWith("%}")){
                            currentBlockBuilder.append(contentAfterMarker.substring(0, contentAfterMarker.lastIndexOf("%}")).trim());
                            this.cCode = currentBlockBuilder.toString();
                            currentState = ParsingState.INITIAL; // C代码块结束
                        } else {
                            currentBlockBuilder.append(contentAfterMarker); // 可能包含换行
                        }
                    }
                    continue; // %{ 标记本身不加入任何块
                } else if (trimmedLine.startsWith("%}")) {// 遇见 %} 后的处理
                    if (currentState == ParsingState.IN_C_CODE) {
                        this.cCode = currentBlockBuilder.toString().trim();
                        currentState = ParsingState.INITIAL; // C代码块结束，回到RE定义区
                        //  处理 %} 后同一行的内容，理论上应属RE定义区或后续
                        String contentAfterMarker = line.substring(line.indexOf("%}") + 2);
                        if (!contentAfterMarker.trim().isEmpty()) {
                             // 简单地将 %} 之后的内容视为下一轮解析的开始行，或特定处理
                             // 这里我们假设 %} 之后是新内容，会由下一轮循环的line处理
                             // 如果需要更精确，可以再次调用一个处理函数或回退reader
                        }
                    }
                    continue; // %} 标记本身不加入任何块
                } else if (trimmedLine.equals("%%")) {
                    if (currentState == ParsingState.INITIAL || currentState == ParsingState.IN_C_CODE) {
                        // 从 C代码区 或 RE定义区 进入规则区
                        // 如果在IN_C_CODE状态遇到%%，说明%{...%}没有正常闭合，这是个错误，但按简化逻辑处理
                        currentState = ParsingState.IN_RULES;
                    } else if (currentState == ParsingState.IN_RULES) {
                        // 从规则区进入用户代码区
                        currentState = ParsingState.IN_USER_CODE;
                        currentBlockBuilder.setLength(0); // 开始新的用户代码块
                    }
                    continue; // %% 标记本身不加入任何块
                }

                switch (currentState) {
                    case IN_C_CODE:
                        currentBlockBuilder.append("\n").append(line); // 保留原始行（包括缩进）
                        break;
                    case IN_USER_CODE:
                        if (currentBlockBuilder.length() > 0) currentBlockBuilder.append("\n");
                        currentBlockBuilder.append(line);
                        break;
                    case IN_RULES:
                        if (trimmedLine.isEmpty() || trimmedLine.startsWith("/*")) {
                            continue;
                        }
                        Rule rule = parseRuleFromLines(line, reader);
                        if (rule != null) {
                            rules.add(rule);
                        }
                        break;
                    case INITIAL: // 处理RE定义
                    default: // 也视作RE定义或文件开始的空行
                        if (!trimmedLine.isEmpty() && !trimmedLine.startsWith("/*")) {
                            parseREDefinitionLine(trimmedLine);
                        }
                        break;
                }
            }
            // 文件结束，处理可能未保存的用户代码块
            if(currentState == ParsingState.IN_USER_CODE && currentBlockBuilder.length() >0){
                this.userCode = currentBlockBuilder.toString().trim();
            } else if (currentState == ParsingState.IN_C_CODE && currentBlockBuilder.length() > 0) {
                 // 如果文件在C代码块中结束且没有 %}，这也是不规范的
                 this.cCode = currentBlockBuilder.toString().trim(); 
            }

        }
    }

    private void parseREDefinitionLine(String line) {
        String[] parts = line.split("\\s+", 2);
        if (parts.length == 2) {
            reDefinitions.put(parts[0], parts[1]);
        }
    }

    private Rule parseRuleFromLines(String firstRuleLine, BufferedReader reader) throws IOException {
        StringBuilder fullRuleBlockBuilder = new StringBuilder(firstRuleLine);
        int openBraceCount = 0;
        boolean inString = false; // Tracks if currently inside a string literal across lines

        // Initial brace count from the first line, aware of strings
        for (int i = 0; i < firstRuleLine.length(); i++) {
            char c = firstRuleLine.charAt(i);
            if (c == '\\') { // Check for backslash
                i++; // Skip next character (the escaped one)
                continue;
            }
            if (c == '"') {
                inString = !inString;
            }
            if (!inString) {
                if (c == '{') {
                    openBraceCount++;
                } else if (c == '}') {
                    openBraceCount--;
                }
            }
        }

        String nextLine;
        // If braces are unbalanced, read more lines
        // The inString state persists across lines for brace counting purposes
        while (openBraceCount > 0 && (nextLine = reader.readLine()) != null) {
            fullRuleBlockBuilder.append("\n").append(nextLine);
            for (int i = 0; i < nextLine.length(); i++) {
                char c = nextLine.charAt(i);
                if (c == '\\') { // Check for backslash
                    i++; // Skip next character
                    continue;
                }
                if (c == '"') {
                    inString = !inString;
                }
                if (!inString) { // Only count braces if not in a string
                    if (c == '{') {
                        openBraceCount++;
                    } else if (c == '}') {
                        openBraceCount--;
                    }
                }
            }
        }
        
        String blockContent = fullRuleBlockBuilder.toString();
        
        int actionStartIndex = -1;
        // int actionEndIndex = -1; // Not strictly needed for substring if we find start

        // Find the last '}' as a candidate for action's end
        // This scan needs to be aware of strings to find the true structural brace
        int lastPotentialActionEnd = -1;
        boolean inStringScanBack = false;
        for (int i = blockContent.length() - 1; i >= 0; i--) {
            char c = blockContent.charAt(i);
            // A simple check for escaped quotes from the left is needed if we are to use inStringScanBack
            // For "c"}", the } is not in string. For "c}", the } is in string.
            // This is hard to do robustly scanning backwards without a full state.
            // Let's assume the initial multi-line read got the block mostly right.
            // The critical part is balancing from this last '}' to its '{'.
            
            // Simplified: find the very last '}' to start balancing from.
            // The string-aware multi-line read should have ensured this '}' is likely the action's true end.
            if (c == '}') {
                 // We need to check if this '}' is inside a string.
                 // To do this, we can count non-escaped quotes from its position to the end of blockContent.
                 // If odd number of quotes, it's in a string.
                 int quoteCount = 0;
                 for (int k = i + 1; k < blockContent.length(); k++) {
                     if (blockContent.charAt(k) == '"' && (k == 0 || blockContent.charAt(k-1) != '\\')) {
                         quoteCount++;
                     }
                 }
                 if (quoteCount % 2 == 0) { // Even quotes after charAt(i) means charAt(i) is NOT in a string.
                     lastPotentialActionEnd = i;
                     break;
                 }
            }
        }


        if (lastPotentialActionEnd != -1) {
            int braceBalance = 0;
            // Reset inString for the backward scan to find the opening brace of the action
            inStringScanBack = false; 

            for (int i = lastPotentialActionEnd; i >= 0; i--) {
                char c = blockContent.charAt(i);
                
                if (c == '"') {
                    // Check if this quote is escaped by looking at char before it
                    if (i > 0 && blockContent.charAt(i-1) == '\\') {
                        // This is an escaped quote " , it doesn't affect inStringScanBack status
                        // However, the `i--` in the loop means `blockContent.charAt(i-1)` was the `\`
                        // and `c` is `"`. So this quote is part of the content.
                    } else {
                        inStringScanBack = !inStringScanBack;
                    }
                }

                if (!inStringScanBack) { // Only consider braces if not inside a string
                    if (c == '}') {
                        braceBalance++;
                    } else if (c == '{') {
                        braceBalance--;
                        if (braceBalance == 0) {
                            actionStartIndex = i;
                            break;
                        }
                    }
                }
            }
        }

        if (actionStartIndex == -1) {
            // Fallback for safety, though ideally the above logic should work for assumed valid inputs.
            // This fallback is less robust against strings within the action block.
            // System.err.println("WARNING: Robust action block determination failed for content: \n" + blockContent + 
            //                      "\nAttempting fallback (less string-aware).");
            int originalActionEnd = blockContent.lastIndexOf('}');
            if (originalActionEnd != -1) {
                int depth = 0;
                for (int i = originalActionEnd; i >= 0; i--) {
                    char charAtI = blockContent.charAt(i);
                    // Basic string check for fallback: if we encounter a quote, skip to its pair
                    // This is very rudimentary.
                    if (charAtI == '"') {
                        boolean foundPair = false;
                        for (int j = i - 1; j >= 0; j--) {
                            if (blockContent.charAt(j) == '"' && (j == 0 || blockContent.charAt(j-1) != '\\')) {
                                i = j; // Skip to the opening quote
                                foundPair = true;
                                break;
                            }
                        }
                        if (!foundPair) { /* unterminated string, problem */ }
                        continue; 
                    }

                    if (charAtI == '}') depth++;
                    else if (charAtI == '{') {
                        depth--;
                        if (depth == 0) {
                            actionStartIndex = i;
                            break;
                        }
                    }
                }
            }
            if (actionStartIndex == -1) {
                 System.err.println("ERROR: Failed to parse rule structure for block (even with fallback): \n" + blockContent);
                 return null; 
            }
        }

        String patternStr = blockContent.substring(0, actionStartIndex).trim();
        String actionStr = blockContent.substring(actionStartIndex);
        
        return new Rule(patternStr, actionStr);
    }

    /**
     * 获取解析出的C代码定义部分。
     * @return C代码字符串
     */
    public String getCCode() {
        return cCode;
    }

    /**
     * 获取正则表达式别名定义映射表。
     * @return 正则表达式别名定义映射表
     */
    public Map<String, String> getReDefinitions() {
        return reDefinitions;
    }

    /**
     * 获取解析出的词法规则列表。
     * @return 词法规则列表
     */
    public List<Rule> getRules() {
        return rules;
    }

    /**
     * 获取用户附加C代码部分。
     * @return 用户附加C代码字符串
     */
    public String getUserCode() {
        return userCode;
    }
} 