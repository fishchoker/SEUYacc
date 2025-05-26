package com.seu.lex.dfa;

import com.seu.lex.nfa.NFA;
import com.seu.lex.nfa.NFAState;

import java.util.*;

public class NFAToDFAConverter {
    private NFA nfa;
    private DFA dfa;
    private Map<Set<Integer>, Integer> stateMap;  // NFA状态集合到DFA状态编号的映射
    private Map<Integer, Integer> rulePriorities;  // NFA状态ID到规则优先级的映射

    public NFAToDFAConverter(NFA nfa, Map<Integer, Integer> rulePriorities) {
        this.nfa = nfa;
        this.dfa = new DFA();
        this.stateMap = new HashMap<>();
        this.rulePriorities = rulePriorities;
    }

    public DFA convert() {
        // 1. 初始化DFA
    	System.out.println("\n=== 初始化DFA ===");
        Set<Integer> initialStates = epsilonClosure(Collections.singleton(nfa.getStart().getId()));
        DFAState initialState = createDFAState(initialStates);
        dfa.setStartState(initialState.getNumber());
        dfa.addState(initialState);

        // 2. 使用队列处理未处理的DFA状态
        System.out.println("\n=== 队列处理DFA状态===");
        Queue<DFAState> unprocessed = new LinkedList<>();
        unprocessed.add(initialState);

        while (!unprocessed.isEmpty()) {
            DFAState current = unprocessed.poll();
            Set<Integer> currentNfaStates = current.getIdentitySet();

            // 3. 对每个输入字符计算转移
            System.out.println("\n=== 状态转移 ===");
            for (String symbol : nfa.getAlphabet()) {
            	System.out.println("\n=== symbol ==="+symbol);
                Set<Integer> moveResult = move(currentNfaStates, symbol);
                if (!moveResult.isEmpty()) {
                    Set<Integer> nextStates = epsilonClosure(moveResult);
                    
                    // 4. 检查是否存在等价的接受状态
                    boolean foundEquivalent = false;
                    for (DFAState existingState : dfa.getStatesVec()) {
                        if (existingState.isAccept() && 
                            nextStates.contains(nfa.getEnd().getId()) && 
                            existingState.getIdentitySet().contains(nfa.getEnd().getId())) {
                            // 如果新状态集合包含接受状态，且已存在一个包含相同接受状态的DFA状态
                            current.addTransition(symbol, existingState.getNumber());
                            foundEquivalent = true;
                            break;
                        }
                    }
                    
                    if (!foundEquivalent) {
                        // 5. 查找或创建新的DFA状态
                        DFAState nextState = getOrCreateDFAState(nextStates);
                        
                        // 6. 添加转移
                        current.addTransition(symbol, nextState.getNumber());
                        
                        // 7. 如果是新状态，加入处理队列
                        if (!dfa.getStatesVec().contains(nextState)) {
                            dfa.addState(nextState);
                            unprocessed.add(nextState);
                        }
                    }
                }
            }
        }

        // 8. 标记接受状态
        markAcceptStates();

        // 9. 设置字母表
        System.out.println("\n=== 字母表传递过程 ===");
        System.out.println("NFA的字母表: " + nfa.getAlphabet());
        dfa.setAlphabet(nfa.getAlphabet());
        System.out.println("DFA的字母表: " + dfa.getAlphabet());

        // 调试输出：stateMap的所有key内容
        System.out.println("stateMap keys:");
        for (Set<Integer> key : stateMap.keySet()) {
            System.out.println(key);
        }

        return dfa;
    }

    private Set<Integer> epsilonClosure(Set<Integer> states) {
        Set<Integer> closure = new HashSet<>(states);
        Stack<Integer> stack = new Stack<>();
        states.forEach(stack::push);

        while (!stack.isEmpty()) {
            int state = stack.pop();
            NFAState nfaState = nfa.getState(state);
            
            // 获取所有ε转移
            for (NFAState next : nfaState.getEpsilonNext()) {
                if (!closure.contains(next.getId())) {
                    closure.add(next.getId());
                    stack.push(next.getId());
                }
            }
        }

        return closure;
    }

    private Set<Integer> move(Set<Integer> states, String symbol) {
        Set<Integer> result = new HashSet<>();
        for (int state : states) {
            NFAState nfaState = nfa.getState(state);
            for (NFAState.Transition t : nfaState.getTransitions()) {
                if (t.getSymbol().equals(symbol)) {
                    result.add(t.getNext().getId());
                }
            }
        }
        return result;
    }

    private DFAState getOrCreateDFAState(Set<Integer> nfaStates) {
        // 使用新的HashSet实例作为key
        Set<Integer> key = new HashSet<>(nfaStates);
        Integer stateNumber = stateMap.get(key);
        if (stateNumber == null) {
            DFAState newState = createDFAState(nfaStates);
            stateNumber = newState.getNumber();
            stateMap.put(key, stateNumber);
            return newState;
        }
        return dfa.getState(stateNumber);
    }

    private DFAState createDFAState(Set<Integer> nfaStates) {
        DFAState state = new DFAState(dfa.getStateCount());
        state.setIdentitySet(nfaStates);
        // 使用新的HashSet实例作为key
        stateMap.put(new HashSet<>(nfaStates), state.getNumber());
        return state;
    }

    private void markAcceptStates() {
        for (DFAState state : dfa.getStatesVec()) {
            Set<Integer> nfaStates = state.getIdentitySet();
            // 检查是否包含NFA的接受状态
            for (int nfaState : nfaStates) {
                NFAState nfaStateObj = nfa.getState(nfaState);
                if (nfaStateObj.isAccept()) {
                    state.setAccept(true);
                    // 获取规则优先级，如果没有设置则使用默认值（最大优先级）
                    int priority = rulePriorities.getOrDefault(nfaState, Integer.MAX_VALUE);
                    // 只有当新状态的优先级更高时才更新动作
                    if (state.getAction() == null || priority < state.getPriority()) {
                        state.setAction(nfaStateObj.getAction(), priority);
                    }
                }
            }
        }
    }
} 