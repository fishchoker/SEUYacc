package com.seu.lex.nfa;

import java.util.ArrayList;
import java.util.List;

/**
 * NFA状态节点
 * 支持多路转移：每个状态可以有多个普通转移和多个ε转移
 */
public class NFAState {
    private final int id;                    // 状态ID
    private boolean isAccept;                // 是否为接受状态
    private List<Transition> transitions;    // 转移列表
    private String action;  // 接受状态对应的动作

    public NFAState(int id) {
        this.id = id;
        this.isAccept = false;
        this.transitions = new ArrayList<>();
        this.action = null;
    }

    // 添加普通转移
    public void addTransition(String symbol, NFAState next) {
        transitions.add(new Transition(symbol, next));
    }

    // 添加ε转移
    public void addEpsilonTransition(NFAState next) {
        transitions.add(new Transition("\0", next));
    }

    // 标记为接受状态
    public void markAsAccept() {
        this.isAccept = true;
    }

    // 取消接受状态标记
    public void unmarkAsAccept() {
        this.isAccept = false;
    }

    // 获取所有转移（供外部遍历）
    public List<Transition> getTransitions() {
        return transitions;
    }

    public int getId() {
        return id;
    }

    public boolean isAccept() {
        return isAccept;
    }

    public List<NFAState> getNext(String symbol) {
        List<NFAState> nextStates = new ArrayList<>();
        for (Transition t : transitions) {
            if (t.getSymbol().equals(symbol)) {
                nextStates.add(t.getNext());
            }
        }
        return nextStates;
    }

    public List<NFAState> getEpsilonNext() {
        List<NFAState> nextStates = new ArrayList<>();
        for (Transition t : transitions) {
            if (t.getSymbol().equals("\0")) {
                nextStates.add(t.getNext());
            }
        }
        return nextStates;
    }

    public String getAction() {
        if (!isAccept) {
            throw new IllegalStateException("Cannot get action from non-accept state");
        }
        return action;
    }

    public void setAction(String action) {
        if (!isAccept) {
            throw new IllegalStateException("Cannot set action for non-accept state");
        }
        this.action = action;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("State ").append(id);
        if (isAccept) {
            sb.append(" (accept)");
        }
        for (Transition t : transitions) {
            if (t.getSymbol().equals("\0")) {
                sb.append(" --ε--> ").append(t.getNext().getId());
            } else {
                sb.append(" --").append(t.getSymbol()).append("--> ").append(t.getNext().getId());
            }
        }
        return sb.toString();
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        NFAState nfaState = (NFAState) o;
        return id == nfaState.id;
    }

    @Override
    public int hashCode() {
        return id;
    }

    // 内部转移类，保持私有，但getter为public
    public static class Transition {
        private String symbol;  // 修改为String类型
        private NFAState next;

        public Transition(String symbol, NFAState next) {
            this.symbol = symbol;
            this.next = next;
        }

        public String getSymbol() {
            return symbol;
        }

        public NFAState getNext() {
            return next;
        }

        @Override
        public String toString() {
            return symbol + " -> " + next.getId();
        }
    }
} 