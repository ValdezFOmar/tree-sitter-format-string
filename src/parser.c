#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  aux_sym_text_token1 = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym_conversion = 6,
  anon_sym_DOT = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_COLON = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  anon_sym_EQ = 13,
  anon_sym_CARET = 14,
  aux_sym_align_token1 = 15,
  aux_sym_align_token2 = 16,
  sym_identifier = 17,
  sym_integer = 18,
  sym_item_string = 19,
  sym_text = 20,
  sym_replacement = 21,
  sym_attribute_expression = 22,
  sym_item_expression = 23,
  sym__expression = 24,
  sym_format_spec = 25,
  sym_align = 26,
  sym_sign = 27,
  aux_sym_text_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_conversion] = "conversion",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_CARET] = "^",
  [aux_sym_align_token1] = "align_token1",
  [aux_sym_align_token2] = "character",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_item_string] = "item_string",
  [sym_text] = "text",
  [sym_replacement] = "replacement",
  [sym_attribute_expression] = "attribute_expression",
  [sym_item_expression] = "item_expression",
  [sym__expression] = "_expression",
  [sym_format_spec] = "format_spec",
  [sym_align] = "align",
  [sym_sign] = "sign",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_conversion] = sym_conversion,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_align_token1] = aux_sym_align_token1,
  [aux_sym_align_token2] = aux_sym_align_token2,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_item_string] = sym_item_string,
  [sym_text] = sym_text,
  [sym_replacement] = sym_replacement,
  [sym_attribute_expression] = sym_attribute_expression,
  [sym_item_expression] = sym_item_expression,
  [sym__expression] = sym__expression,
  [sym_format_spec] = sym_format_spec,
  [sym_align] = sym_align,
  [sym_sign] = sym_sign,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_conversion] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_align_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_align_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_item_string] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_item_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_format_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_align] = {
    .visible = true,
    .named = true,
  },
  [sym_sign] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_attribute = 2,
  field_conversion = 3,
  field_fill = 4,
  field_format = 5,
  field_item = 6,
  field_object = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_attribute] = "attribute",
  [field_conversion] = "conversion",
  [field_fill] = "fill",
  [field_format] = "format",
  [field_item] = "item",
  [field_object] = "object",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_conversion, 1},
  [1] =
    {field_argument, 1},
  [2] =
    {field_format, 1},
  [3] =
    {field_conversion, 1},
    {field_format, 2},
  [5] =
    {field_fill, 0},
  [6] =
    {field_argument, 1},
    {field_conversion, 2},
  [8] =
    {field_attribute, 2},
    {field_object, 0},
  [10] =
    {field_argument, 1},
    {field_format, 2},
  [12] =
    {field_argument, 1},
    {field_conversion, 2},
    {field_format, 3},
  [15] =
    {field_item, 2},
    {field_object, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = aux_sym_align_token2,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '!', 24,
        '.', 14,
        ':', 17,
        '<', 18,
        '=', 20,
        '>', 19,
        '[', 15,
        ']', 16,
        '^', 21,
        '{', 11,
        '}', 12,
        ' ', 22,
        '+', 22,
        '-', 22,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '}') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '<', 18,
        '=', 20,
        '>', 19,
        '^', 21,
        '}', 12,
        ' ', 22,
        '+', 22,
        '-', 22,
      );
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '}') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'a' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(13);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_conversion);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_align_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_align_token2);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_align_token2);
      if (lookahead == 'a' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(13);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_align_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_align_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_item_string);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_conversion] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_align_token1] = ACTIONS(1),
    [aux_sym_align_token2] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_text] = STATE(25),
    [sym_replacement] = STATE(4),
    [aux_sym_text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      sym_conversion,
    ACTIONS(13), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym_format_spec,
    ACTIONS(15), 2,
      sym_identifier,
      sym_integer,
    STATE(6), 3,
      sym_attribute_expression,
      sym_item_expression,
      sym__expression,
  [22] = 6,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      aux_sym_align_token1,
    ACTIONS(23), 1,
      aux_sym_align_token2,
    STATE(20), 1,
      sym_align,
    STATE(27), 1,
      sym_sign,
    ACTIONS(19), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_CARET,
  [44] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_replacement,
      aux_sym_text_repeat1,
    ACTIONS(27), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [60] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    STATE(5), 2,
      sym_replacement,
      aux_sym_text_repeat1,
    ACTIONS(31), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [76] = 6,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_conversion,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_format_spec,
  [95] = 2,
    ACTIONS(45), 2,
      anon_sym_RBRACE,
      aux_sym_align_token1,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_CARET,
  [106] = 2,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [116] = 2,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_CARET,
  [126] = 2,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [136] = 2,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [146] = 1,
    ACTIONS(63), 5,
      anon_sym_RBRACE,
      sym_conversion,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COLON,
  [154] = 2,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [164] = 2,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [174] = 2,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [184] = 1,
    ACTIONS(77), 5,
      anon_sym_RBRACE,
      sym_conversion,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COLON,
  [192] = 2,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [202] = 2,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [212] = 1,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_CARET,
  [219] = 3,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      aux_sym_align_token1,
    STATE(33), 1,
      sym_sign,
  [229] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_format_spec,
  [239] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_format_spec,
  [249] = 1,
    ACTIONS(95), 2,
      sym_integer,
      sym_item_string,
  [254] = 1,
    ACTIONS(97), 2,
      anon_sym_RBRACE,
      aux_sym_align_token1,
  [259] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [263] = 1,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
  [267] = 1,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
  [271] = 1,
    ACTIONS(103), 1,
      sym_identifier,
  [275] = 1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
  [279] = 1,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
  [283] = 1,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
  [287] = 1,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
  [291] = 1,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
  [295] = 1,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 146,
  [SMALL_STATE(13)] = 154,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 184,
  [SMALL_STATE(17)] = 192,
  [SMALL_STATE(18)] = 202,
  [SMALL_STATE(19)] = 212,
  [SMALL_STATE(20)] = 219,
  [SMALL_STATE(21)] = 229,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 249,
  [SMALL_STATE(24)] = 254,
  [SMALL_STATE(25)] = 259,
  [SMALL_STATE(26)] = 263,
  [SMALL_STATE(27)] = 267,
  [SMALL_STATE(28)] = 271,
  [SMALL_STATE(29)] = 275,
  [SMALL_STATE(30)] = 279,
  [SMALL_STATE(31)] = 283,
  [SMALL_STATE(32)] = 287,
  [SMALL_STATE(33)] = 291,
  [SMALL_STATE(34)] = 295,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_spec, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 4, 0, 6),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 4, 0, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sign, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 3, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 3, 0, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 3, 0, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_expression, 4, 0, 10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 3, 0, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 3, 0, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 4, 0, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 4, 0, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_expression, 3, 0, 7),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 5, 0, 9),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 5, 0, 9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 4, 0, 8),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 4, 0, 8),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_spec, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align, 2, 0, 5),
  [99] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_spec, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_format_string(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
