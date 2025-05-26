package com.seu.lex.normalizer;

import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 * 展开正则表达式模式中的别名。
 */
public class AliasExpander {

    // 正则表达式匹配 {alias_name}
    private static final Pattern ALIAS_PATTERN = Pattern.compile("\\{([a-zA-Z_][a-zA-Z0-9_]*)\\}");
    private static final int MAX_EXPANSION_DEPTH = 50; // 防止因非常深的嵌套或未检测到的循环导致堆栈溢出

    /**
     * 展开给定模式字符串中的所有别名。
     * 使用 reDefinitions Map 来查找别名的定义。
     * 能够处理递归展开，并包含循环定义检测。
     *
     * @param pattern         要展开的原始模式字符串。
     * @param reDefinitions   包含别名到其定义的映射。
     * @return 完全展开后的模式字符串。
     * @throws IllegalArgumentException 如果检测到循环定义或别名未定义，或超出最大展开深度。
     */
    public static String expand(String pattern, Map<String, String> reDefinitions) {
        return expandRecursive(pattern, reDefinitions, new HashSet<>(), 0);
    }

    private static String expandRecursive(String pattern,
                                          Map<String, String> reDefinitions,
                                          Set<String> currentlyExpanding,
                                          int depth) {
        if (depth > MAX_EXPANSION_DEPTH) {
            throw new IllegalArgumentException("Max expansion depth exceeded (" + depth + "), possible complex non-terminating recursion or very deep alias nesting for pattern: \"" + pattern + "\"");
        }

        Matcher matcher = ALIAS_PATTERN.matcher(pattern);
        StringBuffer sb = new StringBuffer();

        while (matcher.find()) {
            String aliasName = matcher.group(1);

            if (currentlyExpanding.contains(aliasName)) {
                throw new IllegalArgumentException("Circular alias definition detected: \"" + aliasName + "\" in expansion path: " + currentlyExpanding.toString());
            }

            if (!reDefinitions.containsKey(aliasName)) {
                throw new IllegalArgumentException("Undefined alias: \"" + aliasName + "\" in pattern: \"" + pattern + "\"");
            }

            currentlyExpanding.add(aliasName);
            String definition = reDefinitions.get(aliasName);
            // 递归展开别名的定义
            String expandedDefinition = expandRecursive(definition, reDefinitions, currentlyExpanding, depth + 1);
            currentlyExpanding.remove(aliasName);

            matcher.appendReplacement(sb, expandedDefinition);
        }
        matcher.appendTail(sb);

        return sb.toString();
    }
} 