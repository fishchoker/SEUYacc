package com.seu.lex.lexer;

import java.io.*;
import java.util.*;
import com.seu.lex.model.Token;

public class Lexer {
    private final Reader reader;
    private final StringBuilder buffer;
    private int currentState;
    private int lastAcceptState;
    private int lastAcceptPosition;
    private int currentPosition;
    private int bufferStart;
    private int bufferEnd;
    private static final int BUFFER_SIZE = 8192;
    private char[] charBuffer;
    private boolean eof;

    // 状态转移表
    private static String ALPHABET;
    private static int[][] TRANSITION_TABLE;
    private static String[] ACTION_TABLE;
    private static int[] PRIORITY_TABLE;

    // 用于测试的初始化方法
    public static void initializeForTest(String alphabet, int[][] transitionTable, 
                                       String[] actionTable, int[] priorityTable) {
        ALPHABET = alphabet;
        TRANSITION_TABLE = transitionTable;
        ACTION_TABLE = actionTable;
        PRIORITY_TABLE = priorityTable;
    }

    public Lexer(Reader reader) {
        this.reader = reader;
        this.buffer = new StringBuilder();
        this.charBuffer = new char[BUFFER_SIZE];
        this.currentState = 0;
        this.lastAcceptState = -1;
        this.lastAcceptPosition = -1;
        this.currentPosition = 0;
        this.bufferStart = 0;
        this.bufferEnd = 0;
        this.eof = false;
    }

    public Token nextToken() throws IOException {
        currentState = 0;
        lastAcceptState = -1;
        lastAcceptPosition = -1;
        currentPosition = bufferStart;

        while (true) {
            char c = nextChar();
            if (c == '\0') {
                break;
            }

            int nextState = getNextState(currentState, c);
            if (nextState == -1) {
                break;
            }

            currentState = nextState;
            if (isAcceptState(currentState)) {
                lastAcceptState = currentState;
                lastAcceptPosition = currentPosition;
            }
            currentPosition++;
        }

        if (lastAcceptState != -1) {
            String action = ACTION_TABLE[lastAcceptState];
            String lexeme = getLexeme(lastAcceptPosition);
            bufferStart = lastAcceptPosition + 1;
            return new Token(action, lexeme);
        }

        if (eof) {
            return null;
        }

        throw new LexerException("Invalid token at position " + currentPosition);
    }

    private char nextChar() throws IOException {
        if (currentPosition >= bufferEnd) {
            if (eof) {
                return '\0';
            }
            int read = reader.read(charBuffer);
            if (read == -1) {
                eof = true;
                return '\0';
            }
            buffer.append(charBuffer, 0, read);
            bufferEnd += read;
        }
        return buffer.charAt(currentPosition);
    }

    private String getLexeme(int endPosition) {
        return buffer.substring(bufferStart, endPosition + 1);
    }

    private int getNextState(int state, char c) {
        int charIndex = getCharIndex(c);
        if (charIndex == -1) {
            return -1;
        }
        return TRANSITION_TABLE[state][charIndex];
    }

    private int getCharIndex(char c) {
        // 将字符映射到字母表索引
        return ALPHABET.indexOf(c);
    }

    private boolean isAcceptState(int state) {
        return ACTION_TABLE[state] != null && !ACTION_TABLE[state].isEmpty();
    }

    public static class LexerException extends RuntimeException {
        public LexerException(String message) {
            super(message);
        }
    }
} 