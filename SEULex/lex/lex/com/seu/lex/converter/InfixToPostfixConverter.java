package com.seu.lex.converter;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.HashMap;
import java.util.Map;
import java.util.List;
import java.util.ArrayList;

public class InfixToPostfixConverter {

    private static final Map<Character, Integer> PRECEDENCE = new HashMap<>();
    static {
        PRECEDENCE.put('|', 1); // Alternation
        PRECEDENCE.put('.', 2); // Concatenation
        PRECEDENCE.put('*', 3); // Kleene star
        // Other operators like '+' (one or more) and '?' (zero or one) 
        // would typically have precedence similar to '*'.
        // For this implementation, we are focusing on the basic set.
    }

    /**
     * 将规范化的中缀正则表达式转换为后缀表达式。
     * 输入的正则表达式应已由 RENormalizer 处理，明确包含连接符 '.'
     *
     * @param infixRE 规范化的中缀正则表达式字符串
     * @return 后缀表达式字符串，操作数和运算符之间用空格分隔，或者是一个List<String>
     *         为了更好地处理多字符操作数（如字符集），返回List<String>更佳。
     */
    public List<String> convert(String infixRE) {
        List<String> postfixOutput = new ArrayList<>();
        Deque<Character> operatorStack = new ArrayDeque<>();

        for (int i = 0; i < infixRE.length(); i++) {
            char c = infixRE.charAt(i);

            if (c == '\\') { // Escaped character
                if (i + 1 < infixRE.length()) {
                    postfixOutput.add("\\" + infixRE.charAt(i + 1));
                    i++; // Move past the escaped character
                } else {
                    // Dangling backslash, treat as a literal backslash operand (or could be error)
                    postfixOutput.add("\\"); 
                }
            } else if (c == '[') { // Character set
                int closingBracketIndex = findClosingBracket(infixRE, i);
                if (closingBracketIndex != -1) {
                    postfixOutput.add(infixRE.substring(i, closingBracketIndex + 1));
                    i = closingBracketIndex; // Move past the character set
                } else {
                    // Unclosed character set, treat as literal '[' (or could be error)
                    postfixOutput.add("["); 
                }
            } else if (isOperator(c)) {
                while (!operatorStack.isEmpty() && 
                       operatorStack.peek() != '(' &&
                       getPrecedence(operatorStack.peek()) >= getPrecedence(c)) {
                    postfixOutput.add(String.valueOf(operatorStack.pop()));
                }
                operatorStack.push(c);
            } else if (c == '(') {
                operatorStack.push(c);
            } else if (c == ')') {
                while (!operatorStack.isEmpty() && operatorStack.peek() != '(') {
                    postfixOutput.add(String.valueOf(operatorStack.pop()));
                }
                if (!operatorStack.isEmpty() && operatorStack.peek() == '(') {
                    operatorStack.pop(); // Pop the '('
                } else {
                    // Mismatched parentheses error, for now, we assume valid input or ignore
                    // In a full robust parser, this would throw an exception.
                }
            } else { // Operand (literal character not part of other constructs)
                postfixOutput.add(String.valueOf(c));
            }
        }

        while (!operatorStack.isEmpty()) {
            if (operatorStack.peek() == '(') {
                // Mismatched parentheses error
                // This indicates an unmatched '(' was left on the stack.
                // For now, just pop it. A robust parser would error.
                operatorStack.pop(); 
            } else {
                postfixOutput.add(String.valueOf(operatorStack.pop()));
            }
        }
        return postfixOutput;
    }

    // Finds the matching closing bracket for a character set, handling escaped brackets.
    private int findClosingBracket(String regex, int startIndex) {
        // Assumes startIndex is the position of '['
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
        return -1; // Closing bracket not found
    }

    // 辅助方法，用于判断字符是否为操作符
    private boolean isOperator(char c) {
        return PRECEDENCE.containsKey(c);
    }

    // 辅助方法，获取操作符优先级
    private int getPrecedence(char op) {
        return PRECEDENCE.getOrDefault(op, 0);
    }

} 