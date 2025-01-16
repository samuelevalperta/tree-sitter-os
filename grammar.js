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
    source_file: $ => repeat(choice(
      $.keyword,
      $.ignored
    )),

    keyword: $ => choice(
      'for',
      'do',
      'end',
      'if',
      'end-for',
      'var',
      'then',
      'to',
      'in',
      'return',
      'endif',
      'endfor',
      'foreach',
      'type',
      'Integer',
      'String',
      'false',
      'true',
      'else',
      'not',
      '.'    
    ),

    ignored: $ => /.+/,

  }
});

