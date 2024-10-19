/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const ALIGN_OPTIONS = ['<', '>', '=', '^'];
const SIGN_PATTERN = /[-+ ]/;

module.exports = grammar({
  name: 'format_string',

  extras: _ => [],

  rules: {
    text: $ => repeat(choice('{{', '}}', $.replacement, /[^{}]+/)),

    replacement: $ => seq(
      '{',
      optional(field('argument', $._expression)),
      optional(field('conversion', $.conversion)),
      optional(field('format', $.format_spec)),
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

    format_spec: $ => seq(
      ':',
      optional($.align),
      optional($.sign),
    ),

    align: $ => seq(
      field('fill', alias(
        choice(
          ...ALIGN_OPTIONS,
          SIGN_PATTERN,
          optional(/[^{}]/)
        ),
        $.character
      )),
      choice(...ALIGN_OPTIONS),
    ),

    sign: _ => SIGN_PATTERN,

    // TODO: Python uses a wider range of characters for its identifiers
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    integer: _ => /[0-9]+/,
    item_string: _ => /[^\]]+/,
  },
});
