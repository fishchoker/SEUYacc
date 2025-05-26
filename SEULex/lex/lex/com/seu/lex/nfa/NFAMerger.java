package com.seu.lex.nfa;

import java.util.*;

/**
 * NFA合并器
 * 提供各种NFA操作：连接、或、闭包等
 */
public class NFAMerger {
    
    /**
     * 连接两个NFA
     * 将第一个NFA的结束状态连接到第二个NFA的开始状态
     */
    public static NFA concat(NFA first, NFA second) {
        first.getEnd().addEpsilonTransition(second.getStart());
        first.getEnd().unmarkAsAccept();
        return new NFA(first.getStart(), second.getEnd());
    }
    
    /**
     * 创建两个NFA的或操作
     * 创建新的开始和结束状态，通过ε转移连接
     */
    public static NFA union(NFA first, NFA second) {
        NFAState newStart = NFA.createState();
        NFAState newEnd = NFA.createState();
        
        newStart.addEpsilonTransition(first.getStart());
        newStart.addEpsilonTransition(second.getStart());
        
        first.getEnd().addEpsilonTransition(newEnd);
        second.getEnd().addEpsilonTransition(newEnd);
        
        first.getEnd().unmarkAsAccept();
        second.getEnd().unmarkAsAccept();
        newEnd.markAsAccept();
        
        return new NFA(newStart, newEnd);
    }
    
    /**
     * 创建NFA的闭包操作（Kleene星）
     * 创建新的开始和结束状态，通过ε转移连接
     */
    public static NFA closure(NFA nfa) {
        NFAState newStart = NFA.createState();
        NFAState newEnd = NFA.createState();
        
        newStart.addEpsilonTransition(nfa.getStart());
        newStart.addEpsilonTransition(newEnd);
        
        nfa.getEnd().addEpsilonTransition(nfa.getStart());
        nfa.getEnd().addEpsilonTransition(newEnd);
        
        nfa.getEnd().unmarkAsAccept();
        newEnd.markAsAccept();
        
        return new NFA(newStart, newEnd);
    }

    /**
     * 将后缀表达式转换为NFA
     * @param postfix 后缀表达式
     * @return 对应的NFA
     */
    public static NFA convertPostfixToNFA(List<String> postfix) {
        Stack<NFA> stack = new Stack<>();
        for (String token : postfix) {
            if (token.equals(".")) {
                NFA second = stack.pop();
                NFA first = stack.pop();
                stack.push(concat(first, second));
            } else if (token.equals("|")) {
                NFA second = stack.pop();
                NFA first = stack.pop();
                stack.push(union(first, second));
            } else if (token.equals("*")) {
                NFA nfa = stack.pop();
                stack.push(closure(nfa));
            } else {
                // 将整个token视为一个元字符
                stack.push(NFA.createStringNFA(token));
            }
        }
        return stack.pop();
    }

    /**
     * 合并多个NFA为一个统一的NFA
     * 只统一开始状态，保留每个NFA的接受状态
     */
    public static NFA mergeNFAs(List<NFA> nfas) {
        NFAState globalStart = NFA.createState();

        for (NFA nfa : nfas) {
            // 添加ε边：globalStart -> nfa.start
            globalStart.addEpsilonTransition(nfa.getStart());
        }

        // 使用第一个NFA的结束状态作为全局结束状态（仅用于返回）
        return new NFA(globalStart, nfas.get(0).getEnd());
    }
} 