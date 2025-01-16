/**
 * @file Os grammar for tree-sitter
 * @author Samuele
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check


module.exports = grammar({
  name: "os",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($.keyword),

    keyword: $ => choice(
      'for',
      'do',
      'end'
    )
  }
});

