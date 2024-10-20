/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const ALIGN_OPTIONS = ['<', '>', '=', '^'];
const SIGN_PATTERN = /[-+ ]/;
const DIGIT = /\d/;
const INTEGER = repeat1(DIGIT);
const TYPE_PATTERN = /[bcdeEfFgGnosxX%]/;
const GROUPING_OPTION_PATTERN = /[,_]/;

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
      optional('z'),
      optional('#'),
      optional($.width),
      optional($.grouping_option),
      optional($.precision),
      optional($.type),
    ),

    align: $ => seq(
      field('fill', alias(
        choice(
          ...ALIGN_OPTIONS,
          SIGN_PATTERN,
          'z',
          '#',
          DIGIT,
          GROUPING_OPTION_PATTERN,
          TYPE_PATTERN,
          optional(/[^{}]/)
        ),
        $.character
      )),
      choice(...ALIGN_OPTIONS),
    ),

    sign: _ => SIGN_PATTERN,

    width: _ => INTEGER,

    grouping_option: _ => GROUPING_OPTION_PATTERN,

    precision: _ => token(seq('.', INTEGER)),

    type: _ => TYPE_PATTERN,

    // TODO: Python uses a wider range of characters for its identifiers
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    integer: _ => INTEGER,
    item_string: _ => /[^\]]+/,
  },
});
