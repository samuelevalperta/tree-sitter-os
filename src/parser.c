#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 6
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym_ignored = 22,
  sym_source_file = 23,
  sym_keyword = 24,
  aux_sym_source_file_repeat1 = 25,
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
  [sym_ignored] = "ignored",
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
  [sym_ignored] = sym_ignored,
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
  [sym_ignored] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(1);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'v') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_end_DASHfor);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_endif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_String);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_ignored);
      ADVANCE_MAP(
        '.', 22,
        'I', 49,
        'S', 65,
        'd', 51,
        'e', 45,
        'f', 24,
        'i', 37,
        'n', 52,
        'r', 35,
        't', 43,
        'v', 26,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(71);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'g') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 'y') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'o') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_ignored);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
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
    [sym_ignored] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym_keyword] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_end_DASHfor] = ACTIONS(5),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_then] = ACTIONS(5),
    [anon_sym_to] = ACTIONS(5),
    [anon_sym_in] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(5),
    [anon_sym_endif] = ACTIONS(5),
    [anon_sym_endfor] = ACTIONS(5),
    [anon_sym_foreach] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(5),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_String] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_else] = ACTIONS(5),
    [anon_sym_not] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(5),
    [sym_ignored] = ACTIONS(7),
  },
  [2] = {
    [sym_keyword] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_end_DASHfor] = ACTIONS(5),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_then] = ACTIONS(5),
    [anon_sym_to] = ACTIONS(5),
    [anon_sym_in] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(5),
    [anon_sym_endif] = ACTIONS(5),
    [anon_sym_endfor] = ACTIONS(5),
    [anon_sym_foreach] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(5),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_String] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_else] = ACTIONS(5),
    [anon_sym_not] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(5),
    [sym_ignored] = ACTIONS(11),
  },
  [3] = {
    [sym_keyword] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_end_DASHfor] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_then] = ACTIONS(15),
    [anon_sym_to] = ACTIONS(15),
    [anon_sym_in] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_endif] = ACTIONS(15),
    [anon_sym_endfor] = ACTIONS(15),
    [anon_sym_foreach] = ACTIONS(15),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_String] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_else] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(15),
    [sym_ignored] = ACTIONS(18),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_end_DASHfor] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_then] = ACTIONS(23),
    [anon_sym_to] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_endif] = ACTIONS(23),
    [anon_sym_endfor] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_Integer] = ACTIONS(23),
    [anon_sym_String] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(23),
    [sym_ignored] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(25), 1,
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
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
