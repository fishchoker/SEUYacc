package com.seu.lex.model;

/**
 * 词法规则类，用于表示词法分析器中的一条规则。
 * 每条规则包含一个正则表达式模式(pattern)和对应的动作(action)。
 * 当输入匹配模式时，将执行相应的动作。
 */
public class Rule {
    /** 正则表达式模式 */
    private String pattern;
    /** 匹配成功时执行的动作 */
    private String action;


    public Rule(String pattern, String action) {
        this.pattern = pattern;
        this.action = action;
    }


    public String getPattern() {
        return pattern;
    }


    public String getAction() {
        return action;
    }


    @Override
    public String toString() {
        return "Rule{" +
                "pattern='" + pattern + '\'' +
                ", action='" + action + '\'' +
                '}';
    }
} 