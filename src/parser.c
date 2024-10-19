#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

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
  aux_sym_format_specification_token1 = 11,
  sym_identifier = 12,
  sym_integer = 13,
  sym_item_string = 14,
  sym_text = 15,
  sym_replacement = 16,
  sym_attribute_expression = 17,
  sym_item_expression = 18,
  sym__expression = 19,
  sym_format_specification = 20,
  aux_sym_text_repeat1 = 21,
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
  [aux_sym_format_specification_token1] = "format_specification_token1",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_item_string] = "item_string",
  [sym_text] = "text",
  [sym_replacement] = "replacement",
  [sym_attribute_expression] = "attribute_expression",
  [sym_item_expression] = "item_expression",
  [sym__expression] = "_expression",
  [sym_format_specification] = "format_specification",
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
  [aux_sym_format_specification_token1] = aux_sym_format_specification_token1,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_item_string] = sym_item_string,
  [sym_text] = sym_text,
  [sym_replacement] = sym_replacement,
  [sym_attribute_expression] = sym_attribute_expression,
  [sym_item_expression] = sym_item_expression,
  [sym__expression] = sym__expression,
  [sym_format_specification] = sym_format_specification,
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
  [aux_sym_format_specification_token1] = {
    .visible = false,
    .named = false,
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
  [sym_format_specification] = {
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
  field_format = 4,
  field_item = 5,
  field_object = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_attribute] = "attribute",
  [field_conversion] = "conversion",
  [field_format] = "format",
  [field_item] = "item",
  [field_object] = "object",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 2},
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
    {field_argument, 1},
    {field_conversion, 2},
  [7] =
    {field_attribute, 2},
    {field_object, 0},
  [9] =
    {field_argument, 1},
    {field_format, 2},
  [11] =
    {field_argument, 1},
    {field_conversion, 2},
    {field_format, 3},
  [14] =
    {field_item, 2},
    {field_object, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '}') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'a' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(1);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(7);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_conversion);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_format_specification_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_item_string);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
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
    [sym_identifier] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_text] = STATE(19),
    [sym_replacement] = STATE(3),
    [aux_sym_text_repeat1] = STATE(3),
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
    STATE(20), 1,
      sym_format_specification,
    ACTIONS(15), 2,
      sym_identifier,
      sym_integer,
    STATE(5), 3,
      sym_attribute_expression,
      sym_item_expression,
      sym__expression,
  [22] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_replacement,
      aux_sym_text_repeat1,
    ACTIONS(19), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [38] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    STATE(4), 2,
      sym_replacement,
      aux_sym_text_repeat1,
    ACTIONS(23), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [54] = 6,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_conversion,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_format_specification,
  [73] = 2,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [83] = 2,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [93] = 2,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [103] = 2,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [113] = 1,
    ACTIONS(53), 5,
      anon_sym_RBRACE,
      sym_conversion,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COLON,
  [121] = 2,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [131] = 2,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [141] = 2,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [151] = 2,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym_text_token1,
  [161] = 1,
    ACTIONS(71), 5,
      anon_sym_RBRACE,
      sym_conversion,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_COLON,
  [169] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_format_specification,
  [179] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_format_specification,
  [189] = 1,
    ACTIONS(77), 2,
      sym_integer,
      sym_item_string,
  [194] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [198] = 1,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
  [202] = 1,
    ACTIONS(83), 1,
      aux_sym_format_specification_token1,
  [206] = 1,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
  [210] = 1,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
  [214] = 1,
    ACTIONS(89), 1,
      sym_identifier,
  [218] = 1,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
  [222] = 1,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
  [226] = 1,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 131,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 151,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 169,
  [SMALL_STATE(17)] = 179,
  [SMALL_STATE(18)] = 189,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 198,
  [SMALL_STATE(21)] = 202,
  [SMALL_STATE(22)] = 206,
  [SMALL_STATE(23)] = 210,
  [SMALL_STATE(24)] = 214,
  [SMALL_STATE(25)] = 218,
  [SMALL_STATE(26)] = 222,
  [SMALL_STATE(27)] = 226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 3, 0, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 3, 0, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 3, 0, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 3, 0, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 4, 0, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 4, 0, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_expression, 3, 0, 6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 4, 0, 5),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 4, 0, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 4, 0, 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 4, 0, 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 3, 0, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 3, 0, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 5, 0, 8),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 5, 0, 8),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_expression, 4, 0, 9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_specification, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
