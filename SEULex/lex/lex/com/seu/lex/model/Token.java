package com.seu.lex.model;

/**
 * 表示词法分析器识别出的词法单元
 */
public class Token {
    private final String type;    // Token的类型（动作）
    private final String lexeme;  // Token的词素（实际匹配的文本）

    /**
     * 创建一个新的Token
     * @param type Token的类型（动作）
     * @param lexeme Token的词素
     */
    public Token(String type, String lexeme) {
        this.type = type;
        this.lexeme = lexeme;
    }

    /**
     * 获取Token的类型
     * @return Token的类型
     */
    public String getType() {
        return type;
    }

    /**
     * 获取Token的词素
     * @return Token的词素
     */
    public String getLexeme() {
        return lexeme;
    }

    @Override
    public String toString() {
        return String.format("Token{type='%s', lexeme='%s'}", type, lexeme);
    }
} 