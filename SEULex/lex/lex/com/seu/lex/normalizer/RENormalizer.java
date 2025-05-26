package com.seu.lex.normalizer;

/**
 * 正则表达式规范化器。
 * 主要功能是在适当的位置为正则表达式添加显式的连接符 '.'，
 * 以及将宏如 X+ 和 X? 展开为其基本形式。
 * 输入的正则表达式假定所有别名（如 {name}）已经被展开。
 * 它将处理字符集 [...] 和转义字符 \X 作为原子单元。
 */
public class RENormalizer {

    private static final char EPSILON_CHAR = '€'; // 使用欧元符号代表Epsilon

    /**
     * 对输入的、已展开别名的正则表达式字符串进行规范化处理。
     * <p>
     * 规范化的核心规则包括：
     * 1. 在两个相邻的、可以连接的项之间插入 '.' 连接符。
     *    可以连接的项包括：
     *    - 字母/数字 (普通字符)
     *    - 转义字符 (如 \(, \., \*)
     *    - 闭包操作 (*, +, ?)
     *    - 右括号 ")" (代表一个子表达式的结束)
     *    - 字符集 "[...]"
     *    - 其他被视为操作数的单个字符（例如，现在被视为普通字符的 { 和 } ）
     * 2. 连接符 '.' 的优先级低于闭包操作，高于或操作 '|'。
     * 3. 或操作符 '|' 两侧不应插入连接符。
     * 4. 括号会影响连接范围。
     * <p>
     * 例如 (输入已无别名引用):
     *  "ab" -> "a.b"
     *  "a*b" -> "a*.b"
     *  "(a|b)c" -> "(a|b).c"
     *  "[abc]d" -> "[abc].d"
     *  "a\\*b" -> "a.\\*.b" 
     *
     * @param regex 输入的已展开别名的正则表达式。
     * @return 规范化后的正则表达式，添加了显式的连接符 '.'。
     */
    public String normalize(String regex) {
        if (regex == null || regex.isEmpty()) {
            return "";
        }

        String expandedRegex = expandMacros(regex);

        StringBuilder result = new StringBuilder();
        boolean prevTokenCanConnect = false; 

        for (int i = 0; i < expandedRegex.length(); i++) {
            char currentChar = expandedRegex.charAt(i);

            if (currentChar == '[') { 
                int endBracketIndex = findClosingBracket(expandedRegex, i);
                if (endBracketIndex == -1) { 
                    if (prevTokenCanConnect) {
                        result.append('.');
                    }
                    result.append(currentChar); 
                    prevTokenCanConnect = true; 
                } else {
                    String charSet = expandedRegex.substring(i, endBracketIndex + 1);
                    if (prevTokenCanConnect) {
                        result.append('.');
                    }
                    result.append(charSet);
                    prevTokenCanConnect = true;
                    i = endBracketIndex;
                }
            } else if (currentChar == '\\') { 
                // 处理转义字符整体为一个单元
                if (i + 1 < expandedRegex.length()) {
                    String escapedUnit = "" + currentChar + expandedRegex.charAt(i + 1);
                    if (prevTokenCanConnect && result.length() > 0) {
                        result.append('.');
                    }
                    result.append(escapedUnit);
                    prevTokenCanConnect = true;
                    i++; // 跳过下一个字符
                } else {
                    // 悬空的反斜杠，按原样处理
                    if (prevTokenCanConnect && result.length() > 0) {
                        result.append('.');
                    }
                    result.append(currentChar);
                    prevTokenCanConnect = true;
                }
            } else if (currentChar == '.') {
                // 连接符，直接追加，不插入点号
                result.append('.');
                prevTokenCanConnect = false; // 点号后不立即插入点号
            } else if (isOperand(currentChar)) {
                if (prevTokenCanConnect) {
                    result.append('.');
                }
                result.append(currentChar);
                prevTokenCanConnect = true;
            } else if (currentChar == '(') {
                if (prevTokenCanConnect) {
                    result.append('.');
                }
                result.append(currentChar);
                prevTokenCanConnect = false; 
            } else if (currentChar == ')') {
                result.append(currentChar);
                prevTokenCanConnect = true; 
            } else if (currentChar == '*') { 
                result.append(currentChar);
                prevTokenCanConnect = true; 
            } else if (currentChar == '|') {
                result.append(currentChar);
                prevTokenCanConnect = false; 
            } else { 
                if (prevTokenCanConnect) {
                    result.append('.');
                }
                result.append(currentChar);
                prevTokenCanConnect = true;
            }
        }
        return result.toString();
    }

    /**
     * 找到与给定起始位置的 '(' 匹配的 ')'.
     * 处理嵌套括号和转义的括号 '\(' 和 '\)'.
     * @param text 输入字符串
     * @param startIndex 开始查找的 '(' 的索引
     * @return 匹配的 ')' 的索引，如果未找到则返回 -1.
     */
    private int findMatchingParen(String text, int startIndex) {
        if (startIndex >= text.length() || text.charAt(startIndex) != '(') {
            return -1; // 或者抛出异常，表明不是以'('开始
        }
        int balance = 0;
        boolean escaped = false;
        for (int i = startIndex; i < text.length(); i++) {
            char c = text.charAt(i);
            if (escaped) {
                escaped = false;
            } else if (c == '\\') {
                escaped = true;
            } else if (c == '(') {
                balance++;
            } else if (c == ')') {
                balance--;
                if (balance == 0) {
                    return i;
                }
            }
        }
        return -1; // 未找到匹配的右括号
    }

    /**
     * 改进版：找到与给定起始位置的 '[' 匹配的 ']'.
     * 处理字符集内部的转义 '\]' 和 '\\'.
     * @param regex 输入字符串
     * @param startIndex 开始查找的 '[' 的索引
     * @return 匹配的 ']' 的索引，如果未找到则返回 -1.
     */
    private int findClosingBracket(String regex, int startIndex) {
        if (startIndex >= regex.length() || regex.charAt(startIndex) != '[') {
            return -1;
        }
        boolean escaped = false;
        for (int i = startIndex + 1; i < regex.length(); i++) {
            char c = regex.charAt(i);
            if (escaped) {
                escaped = false;
            } else if (c == '\\') {
                escaped = true;
            } else if (c == ']') {
                return i;
            }
        }
        return -1; 
    }

    private boolean isOperand(char c) {
        return Character.isLetterOrDigit(c);
    }

    private String expandMacros(String regex) {
        if (regex == null || regex.isEmpty()) {
            return "";
        }
        StringBuilder result = new StringBuilder();
        int i = 0;
        while (i < regex.length()) {
            char c = regex.charAt(i);
            if (c == '[') {
                // 处理字符集
                int endBracketIndex = findClosingBracket(regex, i);
                if (endBracketIndex != -1) {
                    String charSet = regex.substring(i + 1, endBracketIndex);
                    StringBuilder expandedCharSet = new StringBuilder();
                    boolean first = true;
                    int j = 0;
                    while (j < charSet.length()) {
                        if (charSet.charAt(j) == '\\') {
                            // 处理转义字符
                            if (!first) {
                                expandedCharSet.append('|');
                            }
                            expandedCharSet.append('\\').append(charSet.charAt(j + 1));
                            first = false;
                            j += 2;
                        } else if (j + 2 < charSet.length() && charSet.charAt(j + 1) == '-') {
                            // 处理范围，如[a-z]
                            char start = charSet.charAt(j);
                            char end = charSet.charAt(j + 2);
                            for (char ch = start; ch <= end; ch++) {
                                if (!first) {
                                    expandedCharSet.append('|');
                                }
                                expandedCharSet.append(ch);
                                first = false;
                            }
                            j += 3;
                        } else {
                            // 处理单个字符
                            if (!first) {
                                expandedCharSet.append('|');
                            }
                            expandedCharSet.append(charSet.charAt(j));
                            first = false;
                            j++;
                        }
                    }
                    result.append('(').append(expandedCharSet).append(')');
                    i = endBracketIndex + 1;
                } else {
                    // 未找到匹配的右括号，按原样处理
                    result.append(c);
                    i++;
                }
            } else if (c == '\\') {
                // 处理转义元字符整体为一个单元
                if (i + 1 < regex.length()) {
                    String esc = "" + c + regex.charAt(i + 1);
                    i += 2;
                    // 检查后面是否有+或?
                    if (i < regex.length() && (regex.charAt(i) == '+' || regex.charAt(i) == '?')) {
                        char macro = regex.charAt(i);
                        if (macro == '+') {
                            result.append(esc).append('.').append(esc).append('*');
                        } else { // '?'
                            result.append('(').append(esc).append('|').append(EPSILON_CHAR).append(')');
                        }
                        i++;
                    } else {
                        result.append(esc);
                    }
                } else {
                    result.append(c);
                    i++;
                }
            } else if (c == '+' || c == '?') {
                // 回溯获取前一个完整单元
                StringBuilder unit = new StringBuilder();
                int j = result.length() - 1;
                if (j < 0) {
                    i++;
                    continue;
                }
                // 1. 先判断是否是转义元字符
                if (result.charAt(j) == '\\') {
                    unit.insert(0, result.charAt(j - 1));
                    unit.append(result.charAt(j));
                    result.delete(j - 1, result.length());
                } else if (result.charAt(j) == ']') {
                    int k = j;
                    while (k >= 0 && result.charAt(k) != '[') k--;
                    unit.append(result.substring(k, j + 1));
                    result.delete(k, result.length());
                } else if (result.charAt(j) == ')') {
                    int k = j;
                    int balance = 0;
                    while (k >= 0) {
                        if (result.charAt(k) == ')') balance++;
                        else if (result.charAt(k) == '(') balance--;
                        if (balance == 0 && result.charAt(k) == '(') break;
                        k--;
                    }
                    unit.append(result.substring(k, j + 1));
                    result.delete(k, result.length());
                } else {
                    unit.append(result.charAt(j));
                    result.delete(j, result.length());
                }
                if (c == '+') {
                    result.append(unit).append('.').append(unit).append('*');
                } else { // '?'
                    result.append('(').append(unit).append('|').append(EPSILON_CHAR).append(')');
                }
                i++;
            } else {
                result.append(c);
                i++;
            }
        }
        return result.toString();
    }
} 