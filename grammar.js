/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'format_string',

  extras: _ => [],

  rules: {
    text: $ => repeat(choice('{{', '}}', $.replacement, /[^{}]+/)),

    replacement: $ => seq(
      '{',
      optional(field('argument', $._expression)),
      optional(field('conversion', $.conversion)),
      optional(field('format', $.format_specification)),
      '}'
    ),

    conversion: _ => token(seq('!', choice('r', 's', 'a'))),

    attribute_expression: $ => seq(
      field('object', $._expression),
      '.',
      field('attribute', $.identifier),
    ),
    item_expression: $ => seq(
      field('object', $._expression),
      '[',
      field('item', choice($.integer, $.item_string)),
      ']',
    ),
    _expression: $ => choice(
      $.integer,
      $.identifier,
      $.attribute_expression,
      $.item_expression,
    ),

    // TODO: Could be more specific, but might cause problems with
    // conflicting grammar rules between python and rust, simple for now
    format_specification: _ => seq(':', /[^}]+/),

    // TODO: Python uses a wider range of characters for its identifiers
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    integer: _ => /[0-9]+/,
    item_string: _ => /[^\]]+/,
  }
});
