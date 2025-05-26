package com.seu.lex.dfa;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class DFAState {
    private int number;  // 状态编号
    private Set<Integer> identitySet;  // 对应的NFA状态子集
    private Map<String, Integer> exEdgesMap;  // 转移函数（字符→目标状态编号）
    private boolean isAccept;  // 是否为接受状态
    private String action;  // 接受状态对应的动作
    private int priority;  // 规则优先级（数字越小优先级越高）

    public DFAState(int number) {
        this.number = number;
        this.identitySet = new HashSet<>();
        this.exEdgesMap = new HashMap<>();
        this.isAccept = false;
        this.action = null;
        this.priority = Integer.MAX_VALUE;  // 初始化为最大优先级
    }

    // Getters and setters
    public int getNumber() {
        return number;
    }

    public Set<Integer> getIdentitySet() {
        return identitySet;
    }

    public void setIdentitySet(Set<Integer> identitySet) {
        this.identitySet = identitySet;
    }

    public Map<String, Integer> getExEdgesMap() {
        return exEdgesMap;
    }

    public void addTransition(String symbol, int targetState) {
        exEdgesMap.put(symbol, targetState);
    }

    public boolean isAccept() {
        return isAccept;
    }

    public void setAccept(boolean accept) {
        isAccept = accept;
    }

    public String getAction() {
        if (!isAccept) {
            throw new IllegalStateException("Cannot get action from non-accept state");
        }
        return action;
    }

    public void setAction(String action, int priority) {
        if (!isAccept) {
            throw new IllegalStateException("Cannot set action for non-accept state");
        }
        // 如果当前状态没有动作，或者新动作的优先级更高，则更新动作
        if (this.action == null || priority < this.priority) {
            this.action = action;
            this.priority = priority;
        }
    }

    public int getPriority() {
        return priority;
    }

    @Override
    public String toString() {
        return "DFAState{" +
                "number=" + number +
                ", identitySet=" + identitySet +
                ", exEdgesMap=" + exEdgesMap +
                ", isAccept=" + isAccept +
                ", action=" + action +
                ", priority=" + priority +
                '}';
    }
} 