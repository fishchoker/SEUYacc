package com.seu.lex.dfa;

import java.util.*;

/**
 * DFA最小化器
 * 使用等价划分法实现DFA的最小化
 */
public class DFAMinimizer {
    private final DFA originalDFA;
    private final Set<String> alphabet;

    public DFAMinimizer(DFA dfa) {
        this.originalDFA = dfa;
        this.alphabet = dfa.getAlphabet();
    }

    /**
     * 执行DFA最小化
     * @return 最小化后的DFA
     */
    public DFA minimize() {
        // 1. 初始划分：终态组和非终态组
        Set<Set<DFAState>> partitions = initialPartition();
        
        // 2. 迭代划分直到无法继续分裂
        boolean changed;
        do {
            changed = false;
            Set<Set<DFAState>> newPartitions = new HashSet<>();
            
            for (Set<DFAState> group : partitions) {
                if (group.size() <= 1) {
                    newPartitions.add(group);
                    continue;
                }
                
                // 按转移结果分裂当前组
                Map<String, Set<DFAState>> splitMap = new HashMap<>();
                for (DFAState state : group) {
                    String transitionKey = getTransitionKey(state, partitions);
                    splitMap.computeIfAbsent(transitionKey, k -> new HashSet<>()).add(state);
                }
                
                newPartitions.addAll(splitMap.values());
                if (splitMap.size() > 1) {
                    changed = true;
                }
            }
            
            partitions = newPartitions;
        } while (changed);
        
        // 3. 构建最小化DFA
        return buildMinimizedDFA(partitions);
    }

    /**
     * 初始划分：将状态分为非终态组和按(action, priority)细分的终态组
     */
    private Set<Set<DFAState>> initialPartition() {
        Map<String, Set<DFAState>> finalGroups = new HashMap<>();
        Set<DFAState> nonFinalStates = new HashSet<>();
        Set<DFAState> startStates = new HashSet<>();
        
        // 首先处理开始状态
        DFAState startState = originalDFA.getState(originalDFA.getStartState());
        startStates.add(startState);
        
        // 然后处理其他状态
        for (DFAState state : originalDFA.getStatesVec()) {
            if (state == startState) continue;  // 跳过开始状态
            
            if (state.isAccept()) {
                // 用动作和优先级作为key
                String key = state.getAction() + "#" + state.getPriority();
                finalGroups.computeIfAbsent(key, k -> new HashSet<>()).add(state);
            } else {
                nonFinalStates.add(state);
            }
        }
        
        Set<Set<DFAState>> partitions = new HashSet<>();
        partitions.add(startStates);  // 开始状态单独一组
        partitions.addAll(finalGroups.values());
        if (!nonFinalStates.isEmpty()) {
            partitions.add(nonFinalStates);
        }
        return partitions;
    }

    /**
     * 获取状态的转移键，用于分组
     */
    private String getTransitionKey(DFAState state, Set<Set<DFAState>> partitions) {
        StringBuilder key = new StringBuilder();
        for (String symbol : alphabet) {
            Integer targetState = state.getExEdgesMap().get(symbol);
            if (targetState != null) {
                // 找到目标状态所属的分区
                int partitionIndex = findPartitionIndex(partitions, originalDFA.getState(targetState));
                key.append(symbol).append(":").append(partitionIndex).append(";");
            }
        }
        return key.toString();
    }

    /**
     * 找到状态所属的分区索引
     */
    private int findPartitionIndex(Set<Set<DFAState>> partitions, DFAState state) {
        int index = 0;
        for (Set<DFAState> partition : partitions) {
            if (partition.contains(state)) {
                return index;
            }
            index++;
        }
        return -1;
    }

    /**
     * 构建最小化DFA，合并组时选择优先级最高的动作
     */
    private DFA buildMinimizedDFA(Set<Set<DFAState>> partitions) {
        DFA minimizedDFA = new DFA();
        Map<DFAState, DFAState> stateToRepresentative = new HashMap<>();
        
        // 设置字母表
        minimizedDFA.setAlphabet(originalDFA.getAlphabet());
        
        // 为每个分区选择代表状态
        for (Set<DFAState> partition : partitions) {
            DFAState newState = new DFAState(minimizedDFA.getStateCount());
            // 组内如有接受状态，选择优先级最高的动作
            String bestAction = null;
            int bestPriority = Integer.MAX_VALUE;
            boolean isAccept = false;
            for (DFAState s : partition) {
                if (s.isAccept()) {
                    isAccept = true;
                    if (s.getPriority() < bestPriority) {
                        bestPriority = s.getPriority();
                        bestAction = s.getAction();
                    }
                }
            }
            if (isAccept) {
                newState.setAccept(true);
                newState.setAction(bestAction, bestPriority);
            }
            minimizedDFA.addState(newState);
            for (DFAState oldState : partition) {
                stateToRepresentative.put(oldState, newState);
            }
        }

        // 设置转移关系
        for (Set<DFAState> partition : partitions) {
            DFAState newState = stateToRepresentative.get(partition.iterator().next());
            // 收集该分区所有状态的转移
            Map<String, Set<Integer>> transitions = new HashMap<>();
            for (DFAState oldState : partition) {
                for (Map.Entry<String, Integer> entry : oldState.getExEdgesMap().entrySet()) {
                    String symbol = entry.getKey();
                    DFAState oldTarget = originalDFA.getState(entry.getValue());
                    DFAState newTarget = stateToRepresentative.get(oldTarget);
                    transitions.computeIfAbsent(symbol, k -> new HashSet<>())
                             .add(newTarget.getNumber());
                }
            }
            // 为每个输入符号选择目标状态
            for (Map.Entry<String, Set<Integer>> entry : transitions.entrySet()) {
                String symbol = entry.getKey();
                Set<Integer> targetStates = entry.getValue();
                // 如果有多个目标状态，选择最合适的目标
                int targetState = -1;
                // 1. 优先选择接受状态
                for (int state : targetStates) {
                    DFAState candidate = minimizedDFA.getState(state);
                    if (candidate.isAccept()) {
                        targetState = state;
                        break;
                    }
                }
                // 2. 如果没有接受状态，选择编号最小的
                if (targetState == -1) {
                    targetState = targetStates.stream().min(Integer::compareTo).get();
                }
                // 3. 只有当目标状态有效时才添加转移
                if (targetState != -1) {
                    newState.addTransition(symbol, targetState);
                }
            }
        }

        // 设置开始状态
        DFAState oldStart = originalDFA.getState(originalDFA.getStartState());
        // 找到包含原始开始状态的分区
        for (Set<DFAState> partition : partitions) {
            if (partition.contains(oldStart)) {
                DFAState newStart = stateToRepresentative.get(partition.iterator().next());
                minimizedDFA.setStartState(newStart.getNumber());
                break;
            }
        }
        return minimizedDFA;
    }
} 