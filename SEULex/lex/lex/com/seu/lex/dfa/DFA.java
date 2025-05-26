package com.seu.lex.dfa;

import java.util.*;

public class DFA {
    private int startState;  // 开始状态编号
    private Map<Integer, String> endStatesMap;  // 终态到规则的映射（状态编号→动作）
    private List<DFAState> statesVec;  // 按顺序存储所有DFA状态
    private Set<String> alphabet;  // 输入字符集

    public DFA() {
        this.startState = 0;
        this.endStatesMap = new HashMap<>();
        this.statesVec = new ArrayList<>();
        this.alphabet = new HashSet<>();
    }

    // Getters and setters
    public int getStartState() {
        return startState;
    }

    public void setStartState(int startState) {
        this.startState = startState;
    }

    public Map<Integer, String> getEndStatesMap() {
        return endStatesMap;
    }

    public void addEndState(int stateNumber, String action) {
        endStatesMap.put(stateNumber, action);
    }

    public List<DFAState> getStatesVec() {
        return statesVec;
    }

    public void addState(DFAState state) {
        statesVec.add(state);
    }

    public Set<String> getAlphabet() {
        return alphabet;
    }

    public void setAlphabet(Set<String> alphabet) {
        this.alphabet = new HashSet<>(alphabet);
    }

    public DFAState getState(int number) {
        return statesVec.get(number);
    }

    public int getStateCount() {
        return statesVec.size();
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("DFA{\n");
        sb.append("  startState=").append(startState).append("\n");
        sb.append("  endStatesMap=").append(endStatesMap).append("\n");
        sb.append("  statesVec=[\n");
        for (DFAState state : statesVec) {
            sb.append("    ").append(state).append("\n");
        }
        sb.append("  ]\n");
        sb.append("  alphabet=").append(alphabet).append("\n");
        sb.append("}");
        return sb.toString();
    }

    /**
     * 将DFA结构转换为可视化字符串
     */
    public String toVisualString() {
        StringBuilder sb = new StringBuilder();
        sb.append("开始状态: ").append(startState).append("\n\n");
        sb.append("状态列表:\n");
        
        for (DFAState state : statesVec) {
            sb.append("\n状态 ").append(state.getNumber()).append(":\n");
            if (state.isAccept()) {
                sb.append("  接受状态 - 动作: ").append(state.getAction()).append("\n");
                sb.append("  优先级: ").append(state.getPriority()).append("\n");
            }
            sb.append("  转移:\n");
            for (Map.Entry<String, Integer> entry : state.getExEdgesMap().entrySet()) {
                String symbol = entry.getKey();
                int targetState = entry.getValue();
                sb.append(String.format("    '%s' -> 状态 %d%n", symbol, targetState));
            }
        }
        
        return sb.toString();
    }
} 