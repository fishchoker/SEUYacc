package com.seu.lex.nfa;

import java.util.HashSet;
import java.util.Set;
import com.seu.lex.nfa.NFAState.Transition;

/**
 * 非确定有限自动机
 * 包含开始状态和结束状态
 */
public class NFA {
    private static int nextStateId = 0;  // 用于生成唯一的状态ID
    private NFAState start;              // 开始状态
    private NFAState end;                // 结束状态

    /**
     * 私有构造函数，用于内部创建基本NFA
     */
    private NFA() {
        this.start = createState();
        this.end = createState();
    }

    /**
     * 公开构造函数，用于创建自定义NFA
     */
    public NFA(NFAState start, NFAState end) {
        this.start = start;
        this.end = end;
    }

    /**
     * 创建一个新的状态
     */
    public static NFAState createState() {
        return new NFAState(nextStateId++);
    }

    /**
     * 创建一个基本的NFA，用于匹配单个字符
     */
    public static NFA createSingleCharNFA(String symbol) {
        NFA nfa = new NFA();
        nfa.start.addTransition(symbol, nfa.end);
        nfa.end.markAsAccept();
        return nfa;
    }

    // 创建ε转移NFA
    public static NFA createEpsilonNFA() {
        NFA nfa = new NFA();
        nfa.start.addEpsilonTransition(nfa.end);
        nfa.end.markAsAccept();
        return nfa;
    }

    /**
     * 创建一个字符串的NFA，用于匹配整个字符串（支持多字符元字符）
     */
    public static NFA createStringNFA(String str) {
        NFA nfa = new NFA();
        nfa.start.addTransition(str, nfa.end);
        nfa.end.markAsAccept();
        return nfa;
    }

    // Getters
    public NFAState getStart() {
        return start;
    }

    public NFAState getEnd() {
        return end;
    }

    // 获取所有状态
    public Set<NFAState> getAllStates() {
        Set<NFAState> states = new HashSet<>();
        if (start != null) {
            collectStates(start, states);
        }
        return states;
    }

    // 递归收集所有状态
    private void collectStates(NFAState state, Set<NFAState> states) {
        if (state == null || states.contains(state)) {
            return;
        }
        states.add(state);
        for (Transition t : state.getTransitions()) {
            collectStates(t.getNext(), states);
        }
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("NFA:\n");
        sb.append("Start: ").append(start.getId()).append("\n");
        sb.append("End: ").append(end.getId()).append("\n");
        return sb.toString();
    }

    /**
     * 可视化打印NFA的每个状态及其转移
     */
    public String toVisualString() {
        StringBuilder sb = new StringBuilder();
        sb.append("NFA 可视化：\n");
        sb.append("开始状态: ").append(start.getId()).append("\n");
        sb.append("接受状态: ").append(end.getId()).append("\n");
        Set<NFAState> allStates = getAllStates();
        for (NFAState state : allStates) {
            sb.append("[状态 ").append(state.getId());
            if (state == start) sb.append(" (start)");
            if (state == end) sb.append(" (accept)");
            if (state.isAccept() && state != end) sb.append(" (accept)");
            sb.append("] 转移: ");
            if (state.getTransitions().isEmpty()) {
                sb.append("无");
            } else {
                for (Transition t : state.getTransitions()) {
                    if (t.getSymbol().equals("\0")) {
                        sb.append(" --ε--> ").append(t.getNext().getId());
                    } else {
                        sb.append(" --").append(t.getSymbol()).append("--> ").append(t.getNext().getId());
                    }
                }
            }
            sb.append("\n");
        }
        return sb.toString();
    }

    // 用于DFA的构建
    // 获取字母表
    public Set<String> getAlphabet() {
        Set<String> alphabet = new HashSet<>();
        for (NFAState state : getAllStates()) {
            for (NFAState.Transition t : state.getTransitions()) {
                if (!t.getSymbol().equals("\0")) {  // 不是ε转移
                    // 直接使用转移符号
                    alphabet.add(t.getSymbol());
                }
            }
        }
        return alphabet;
    }

    // 根据ID获取状态
    public NFAState getState(int id) {
        for (NFAState state : getAllStates()) {
            if (state.getId() == id) {
                return state;
            }
        }
        return null;
    }
} 