/**
 * @file format-string grammar for tree-sitter
 * @author Omar Valdez <omarantoniovaldezf2@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const ALIGN_OPTIONS = ['<', '>', '=', '^'];
const SIGN_PATTERN = /[-+ ]/;
const DIGIT = /\d/;
const SIGNED_ZERO_NORMALIZATION = 'z';
const ALTERNATE_FORM = '#';
const SINGLE_CHAR_TYPE_PATTERN = /[bcdeEfFgGnosxX%p?]/;
const MULTY_CHAR_TYPE_PATTERN = /[xX]\?/;
const GROUPING_OPTION_PATTERN = /[,_]/;

// Since any special characters can be a fill character,
// all of them need to be explicitly included in this array
// so tree-sitter can resolve when it's a special character or
// a fill character.
const FILL_CHARACTER = choice(
  '.',  // Dot for float precision
  ...ALIGN_OPTIONS,
  SIGN_PATTERN,
  SIGNED_ZERO_NORMALIZATION,
  ALTERNATE_FORM,
  DIGIT,
  GROUPING_OPTION_PATTERN,
  SINGLE_CHAR_TYPE_PATTERN,
  optional(/[^{}]/),
);

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
      optional($.zero_normalization),
      optional($.alternate_form),
      optional($.width),
      optional($.grouping_option),
      optional($.precision),
      optional($.type),
    ),

    align: $ => seq(
      field('fill', alias(FILL_CHARACTER , $.character)),
      field('option', choice(...ALIGN_OPTIONS)),
    ),

    sign: _ => SIGN_PATTERN,

    zero_normalization: _ => SIGNED_ZERO_NORMALIZATION,

    alternate_form: _ => ALTERNATE_FORM,

    width: $ => $._count,

    grouping_option: _ => GROUPING_OPTION_PATTERN,

    precision: $ => seq('.', choice($._count, '*')),

    type: _ => choice(SINGLE_CHAR_TYPE_PATTERN, MULTY_CHAR_TYPE_PATTERN),

    _count: $ => choice($.parameter, $.integer),

    parameter: $ => seq(choice($.identifier, $.integer), '$'),

    // TODO: Python uses a wider range of characters for its identifiers
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    integer: _ => repeat1(DIGIT),
    item_string: _ => /[^\]]+/,
  },
});
