package com.seu.lex;

import com.seu.lex.model.Rule;
import com.seu.lex.normalizer.AliasExpander;
import com.seu.lex.normalizer.RENormalizer;
import com.seu.lex.parser.LexFileParser;
import com.seu.lex.converter.InfixToPostfixConverter;
import com.seu.lex.nfa.NFAMerger;
import com.seu.lex.nfa.NFA;
import com.seu.lex.dfa.NFAToDFAConverter;
import com.seu.lex.dfa.DFA;
import com.seu.lex.dfa.DFAState;
import com.seu.lex.dfa.DFAMinimizer;
import com.seu.lex.generator.LexerGenerator;

import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Main {

    // Helper method to escape regex metacharacters
    private static String escapeRegexMetaChars(String literalContent) {
        StringBuilder sb = new StringBuilder();
        for (char c : literalContent.toCharArray()) {
            // Metacharacters: . * + ? | ( ) [ ] { } \ ^ $ -
            // Note: '-' is special in char classes, but escaping it generally is safe.
            // '{' and '}' were handled by AliasExpander if they were aliases.
            // Here we escape them if they appear literally in a string pattern.
            if (c == '.' || c == '*' || c == '+' || c == '?' || c == '|' ||
                c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}' ||
                c == '\\' || c == '^' || c == '$' || c == '-') {
                sb.append('\\');
            }
            sb.append(c);
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        // try {
        //     System.setOut(new java.io.PrintStream(System.out, true, "UTF-8"));
        //     System.setErr(new java.io.PrintStream(System.err, true, "UTF-8"));
        // } catch (java.io.UnsupportedEncodingException e) {
        //     // 如果UTF-8不支持（不太可能），则继续使用默认编码
        //     System.err.println("Warning: UTF-8 encoding not supported, using default.");
        // }

		/*
		 * if (args.length != 1) {
		 * System.err.println("Usage: java -jar seu-lex.jar <lex-file>");
		 * System.exit(1); }
		 */

        String lexFilePath = "C:\\Users\\ajbjs\\Desktop\\编译原理\\实践\\SEUYacc\\SEUYacc\\SEUYacc\\rule\\c99.l";
        System.out.println("--- 开始解析文件: " + lexFilePath + " ---");

        try {
            LexFileParser parser = new LexFileParser();
            parser.parse(lexFilePath);

            Map<String, String> originalReDefinitions = parser.getReDefinitions();
            List<Rule> originalRules = parser.getRules();

            // AliasExpander 是静态的，不需要实例化，但为了风格统一，保留一个实例
            // AliasExpander aliasExpander = new AliasExpander(); 
            RENormalizer normalizer = new RENormalizer();
            InfixToPostfixConverter postfixConverter = new InfixToPostfixConverter();

            // --- 步骤 1: 处理正则表达式定义 (别名) ---
            System.out.println("\n=== 正则表达式定义 (别名) ===");
            Map<String, String> expandedReDefinitions = new HashMap<>();
            Map<String, String> normalizedReDefinitionsForPostfix = new HashMap<>();
            Map<String, List<String>> postfixReDefinitions = new HashMap<>();
            Map<String, NFA> nfaReDefinitions = new HashMap<>();

            for (Map.Entry<String, String> entry : originalReDefinitions.entrySet()) {
                String name = entry.getKey();
                String rawDefinition = entry.getValue();
                System.out.printf("原始定义: %s = %s%n", name, rawDefinition);
                try {
                    String expandedDefinition = AliasExpander.expand(rawDefinition, originalReDefinitions);
                    expandedReDefinitions.put(name, expandedDefinition);
                    System.out.printf("  展开后定义: %s = %s%n", name, expandedDefinition);

                    String normalizedDefinitionForDisplay;
                    String reForPostfixConversion = expandedDefinition;

                    if (expandedDefinition.startsWith("\"") && expandedDefinition.endsWith("\"") && expandedDefinition.length() >= 2) {
                        String content = expandedDefinition.substring(1, expandedDefinition.length() - 1);
                        normalizedDefinitionForDisplay = normalizer.normalize(content);
                        System.out.printf("  规范化定义 (字面量内容 '%s'): %s%n", content, normalizedDefinitionForDisplay);
                        reForPostfixConversion = normalizedDefinitionForDisplay; 

                    } else if (!expandedDefinition.matches("\\{[^}]+\\}")) {
                        normalizedDefinitionForDisplay = normalizer.normalize(expandedDefinition);
                        System.out.printf("  规范化定义: %s%n", normalizedDefinitionForDisplay);
                        reForPostfixConversion = normalizedDefinitionForDisplay;
                    } else {
                        System.out.printf("  (跳过对此别名定义的规范化和后缀转换，因其可能未完全展开: %s)%n", expandedDefinition);
                        normalizedReDefinitionsForPostfix.put(name, expandedDefinition);
                        reForPostfixConversion = null;
                    }

                    if (reForPostfixConversion != null) {
                        normalizedReDefinitionsForPostfix.put(name, reForPostfixConversion);
                        List<String> postfixDefinition = postfixConverter.convert(reForPostfixConversion);
                        postfixReDefinitions.put(name, postfixDefinition);
                        System.out.printf("%s 后缀表达式: %s\n", name, String.join(" ", postfixDefinition));
                        // 构建NFA
                        NFA nfa = NFAMerger.convertPostfixToNFA(postfixDefinition);
                        nfaReDefinitions.put(name, nfa);

                    }

                } catch (IllegalArgumentException e) {
                    System.err.printf("错误：处理别名 '%s' (原始定义: '%s') 时出错: %s%n", name, rawDefinition, e.getMessage());
                    expandedReDefinitions.put(name, rawDefinition); 
                    normalizedReDefinitionsForPostfix.put(name, rawDefinition);
                }
                 System.out.println();
            }
            
            // 不需要 setDefinitions，因为 expand 是静态的，每次都传入 Map
            // aliasExpander.setDefinitions(expandedReDefinitions); 

            // --- 步骤 2: 处理词法规则 ---
            System.out.println("\n=== 词法规则处理 ===");
            List<NFA> nfas = new ArrayList<>();  // 用于存储所有规则的NFA
            Rule wildcardRule = null;  // 单独保存通配符规则
            for (Rule rule : originalRules) {
                String rawPattern = rule.getPattern();
                String action = rule.getAction();
                System.out.println("规则:");
                System.out.printf("  原始模式: %s%n", rawPattern);
                
                try {
                    // 特殊处理通配符规则
                    if (rawPattern.equals(".")) {
                        System.out.printf("  展开后模式: %s%n", rawPattern);
                        System.out.printf("  规范化模式: %s%n", rawPattern);
                        System.out.printf("  后缀形式模式: %s%n", rawPattern);
                        wildcardRule = rule;  // 单独保存通配符规则
                    } else {
                        // 展开别名
                        String expandedPattern = AliasExpander.expand(rawPattern, originalReDefinitions);
                        System.out.printf("  展开后模式: %s%n", expandedPattern);
                        
                        String normalizedPattern;
                        String patternForPostfixConversion;

                        if (expandedPattern.startsWith("\"") && expandedPattern.endsWith("\"") && expandedPattern.length() >= 2) {
                            String literalContent = expandedPattern.substring(1, expandedPattern.length() - 1);
                            String escapedLiteralContent = escapeRegexMetaChars(literalContent);
                            System.out.printf("  字面量内容 (原始): '%s'%n", literalContent);
                            System.out.printf("  字面量内容 (转义后): '%s'%n", escapedLiteralContent);
                            
                            normalizedPattern = normalizer.normalize(escapedLiteralContent);
                            System.out.printf("  规范化模式 (基于转义字面量): %s%n", normalizedPattern);
                            patternForPostfixConversion = normalizedPattern;
                        } else {
                            normalizedPattern = normalizer.normalize(expandedPattern);
                            System.out.printf("  规范化模式: %s%n", normalizedPattern);
                            patternForPostfixConversion = normalizedPattern;
                        }
                        
                        // 转换为后缀形式
                        List<String> postfixPatternList = postfixConverter.convert(patternForPostfixConversion);
                        String postfixPattern = String.join(" ", postfixPatternList);
                        System.out.printf("  后缀形式模式: %s%n", postfixPattern);
                        
                        // 构建NFA
                        NFA nfa = NFAMerger.convertPostfixToNFA(postfixPatternList);
                        nfa.getEnd().setAction(action);  // 为接受状态设置动作
                        nfas.add(nfa);
                        // System.out.println(nfa.toVisualString());  // 删除NFA可视化信息
                    }

                } catch (IllegalArgumentException e) {
                    System.err.printf("  错误：处理模式 '%s' 时出错: %s%n", rawPattern, e.getMessage());
                } catch (Exception e) {
                    System.err.printf("  严重错误：处理模式 '%s' 时发生意外: %s%n", rawPattern, e.getMessage());
                    e.printStackTrace();
                }
                System.out.printf("  动作    : %s%n%n", action.trim());
            }
            
            // --- 步骤 3: 打印其他解析部分 (C代码, 用户子程序) ---
            System.out.println("\n=== C代码部分 ===");
            System.out.println(parser.getCCode());
            System.out.println("\n=== 用户子程序 ===");
            System.out.println(parser.getUserCode());

            System.out.println("\n--- 处理完成 --- ");

            // 合并所有NFA
            NFA mergedNFA = NFAMerger.mergeNFAs(nfas);
            System.out.println("\n=== 合并后的NFA ===");
            System.out.println(mergedNFA.toVisualString());

            // --- 步骤 4: NFA转DFA ---
            System.out.println("\n=== NFA转DFA ===");
            
            // 创建状态优先级映射，优先级定义为NFA的结束状态的ID
            Map<Integer, Integer> statePriorities = new HashMap<>();
            for (int i = 0; i < nfas.size(); i++) {
                statePriorities.put(nfas.get(i).getEnd().getId(), i);
            }
            
            // 创建转换器并执行转换
            NFAToDFAConverter converter = new NFAToDFAConverter(mergedNFA, statePriorities);
            DFA dfa = converter.convert();
            
            // 输出原始DFA结构
            System.out.println("\n=== 原始DFA结构 ===");
            System.out.println(dfa.toVisualString());

            // --- 步骤 5: DFA最小化 ---
            System.out.println("\n=== DFA最小化 ===");
            DFAMinimizer minimizer = new DFAMinimizer(dfa);
            DFA minimizedDFA = minimizer.minimize();
            
            // 输出最小化后的DFA结构
            System.out.println("\n=== 最小化后的DFA结构 ===");
            System.out.println(minimizedDFA.toVisualString());

            // --- 步骤 6: 生成词法分析器代码 ---
            System.out.println("\n=== 生成词法分析器代码 ===");
            LexerGenerator generator = new LexerGenerator(minimizedDFA, parser.getCCode(), parser.getUserCode());
            String lexerCCode = generator.generateLexerCode();

            // 输出生成的代码到文件
            String outputFile = lexFilePath.substring(0, lexFilePath.lastIndexOf('.')) + ".c";
            try (java.io.PrintWriter out = new java.io.PrintWriter(outputFile, "UTF-8")) {
                out.print(lexerCCode);
                System.out.println("词法分析器代码已生成到: " + outputFile);
            } catch (java.io.IOException e) {
                System.err.println("生成词法分析器代码时出错: " + e.getMessage());
            }

            // 后续处理（词法分析等）
            // TODO: 实现词法分析，通配符规则作为default分支处理
            if (wildcardRule != null) {
                System.out.println("\n=== 通配符规则（作为default分支） ===");
                System.out.println("原始模式: " + wildcardRule.getPattern());
                System.out.println("动作: " + wildcardRule.getAction());
            }

        } catch (IOException e) {
            System.err.println("文件解析错误 ('" + lexFilePath + "'): " + e.getMessage());
            System.exit(1);
        } catch (Exception e) {
            System.err.println("处理过程中发生意外错误: " + e.getMessage());
            e.printStackTrace();
            System.exit(1);
        }
    }
} 