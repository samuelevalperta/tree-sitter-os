#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 6
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_for = 1,
  anon_sym_do = 2,
  anon_sym_end = 3,
  anon_sym_if = 4,
  anon_sym_end_DASHfor = 5,
  anon_sym_var = 6,
  anon_sym_then = 7,
  anon_sym_to = 8,
  anon_sym_in = 9,
  anon_sym_return = 10,
  anon_sym_endif = 11,
  anon_sym_endfor = 12,
  anon_sym_foreach = 13,
  anon_sym_type = 14,
  anon_sym_Integer = 15,
  anon_sym_String = 16,
  anon_sym_false = 17,
  anon_sym_true = 18,
  anon_sym_else = 19,
  anon_sym_not = 20,
  anon_sym_DOT = 21,
  sym_source_file = 22,
  sym_keyword = 23,
  aux_sym_source_file_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_for] = "for",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_end_DASHfor] = "end-for",
  [anon_sym_var] = "var",
  [anon_sym_then] = "then",
  [anon_sym_to] = "to",
  [anon_sym_in] = "in",
  [anon_sym_return] = "return",
  [anon_sym_endif] = "endif",
  [anon_sym_endfor] = "endfor",
  [anon_sym_foreach] = "foreach",
  [anon_sym_type] = "type",
  [anon_sym_Integer] = "Integer",
  [anon_sym_String] = "String",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [anon_sym_else] = "else",
  [anon_sym_not] = "not",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym_keyword] = "keyword",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_end_DASHfor] = anon_sym_end_DASHfor,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym_keyword] = sym_keyword,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_DASHfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '.', 69,
        'I', 26,
        'S', 42,
        'd', 28,
        'e', 22,
        'f', 1,
        'i', 14,
        'n', 29,
        'r', 12,
        't', 20,
        'v', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_end_DASHfor);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_end_DASHfor] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym_keyword] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [anon_sym_end] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_end_DASHfor] = ACTIONS(7),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_then] = ACTIONS(7),
    [anon_sym_to] = ACTIONS(7),
    [anon_sym_in] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_endif] = ACTIONS(7),
    [anon_sym_endfor] = ACTIONS(7),
    [anon_sym_foreach] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_Integer] = ACTIONS(7),
    [anon_sym_String] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(7),
  },
  [2] = {
    [sym_keyword] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [anon_sym_end] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_end_DASHfor] = ACTIONS(7),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_then] = ACTIONS(7),
    [anon_sym_to] = ACTIONS(7),
    [anon_sym_in] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_endif] = ACTIONS(7),
    [anon_sym_endfor] = ACTIONS(7),
    [anon_sym_foreach] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_Integer] = ACTIONS(7),
    [anon_sym_String] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(7),
  },
  [3] = {
    [sym_keyword] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_end] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(16),
    [anon_sym_end_DASHfor] = ACTIONS(16),
    [anon_sym_var] = ACTIONS(16),
    [anon_sym_then] = ACTIONS(16),
    [anon_sym_to] = ACTIONS(16),
    [anon_sym_in] = ACTIONS(16),
    [anon_sym_return] = ACTIONS(16),
    [anon_sym_endif] = ACTIONS(16),
    [anon_sym_endfor] = ACTIONS(16),
    [anon_sym_foreach] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(16),
    [anon_sym_Integer] = ACTIONS(16),
    [anon_sym_String] = ACTIONS(16),
    [anon_sym_false] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(16),
    [anon_sym_else] = ACTIONS(16),
    [anon_sym_not] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_end_DASHfor] = ACTIONS(19),
    [anon_sym_var] = ACTIONS(19),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_to] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_endif] = ACTIONS(19),
    [anon_sym_endfor] = ACTIONS(19),
    [anon_sym_foreach] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_Integer] = ACTIONS(19),
    [anon_sym_String] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_os(void) {
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
