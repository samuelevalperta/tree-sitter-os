#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 5
#define ALIAS_COUNT 0
#define TOKEN_COUNT 3
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_keyword = 1,
  sym_ignored = 2,
  sym_source_file = 3,
  aux_sym_source_file_repeat1 = 4,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [sym_ignored] = "ignored",
  [sym_source_file] = "source_file",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [sym_ignored] = sym_ignored,
  [sym_source_file] = sym_source_file,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_ignored] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      ADVANCE_MAP(
        '.', 4,
        'I', 25,
        'S', 37,
        'd', 27,
        'e', 22,
        'f', 5,
        'i', 42,
        'n', 28,
        'r', 14,
        't', 20,
        'v', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'g') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'g') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'h') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'f' ||
          lookahead == 'n') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(43);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_ignored] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_keyword] = ACTIONS(5),
    [sym_ignored] = ACTIONS(5),
  },
  [2] = {
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_keyword] = ACTIONS(9),
    [sym_ignored] = ACTIONS(9),
  },
  [3] = {
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [sym_ignored] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [16] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
