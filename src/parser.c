#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_SQUOTE = 2,
  anon_sym_DQUOTE = 3,
  sym_string = 4,
  anon_sym_LTchar_GT = 5,
  anon_sym_LTspace_GT = 6,
  anon_sym_LTwhitespace_GT = 7,
  anon_sym_LTnewline_GT = 8,
  anon_sym_LTtab_GT = 9,
  anon_sym_LTreturn_GT = 10,
  anon_sym_LTfeed_GT = 11,
  anon_sym_LTnull_GT = 12,
  anon_sym_LTdigit_GT = 13,
  anon_sym_LTvertical_GT = 14,
  anon_sym_LTword_GT = 15,
  anon_sym_LTalphabetic_GT = 16,
  anon_sym_LTalphanumeric_GT = 17,
  anon_sym_LTboundary_GT = 18,
  anon_sym_LTbackspace_GT = 19,
  anon_sym_LTstart_GT = 20,
  anon_sym_LTend_GT = 21,
  sym_source_file = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = "",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_string] = "string",
  [anon_sym_LTchar_GT] = "<char>",
  [anon_sym_LTspace_GT] = "<space>",
  [anon_sym_LTwhitespace_GT] = "<whitespace>",
  [anon_sym_LTnewline_GT] = "<newline>",
  [anon_sym_LTtab_GT] = "<tab>",
  [anon_sym_LTreturn_GT] = "<return>",
  [anon_sym_LTfeed_GT] = "<feed>",
  [anon_sym_LTnull_GT] = "<null>",
  [anon_sym_LTdigit_GT] = "<digit>",
  [anon_sym_LTvertical_GT] = "<vertical>",
  [anon_sym_LTword_GT] = "<word>",
  [anon_sym_LTalphabetic_GT] = "<alphabetic>",
  [anon_sym_LTalphanumeric_GT] = "<alphanumeric>",
  [anon_sym_LTboundary_GT] = "<boundary>",
  [anon_sym_LTbackspace_GT] = "<backspace>",
  [anon_sym_LTstart_GT] = "<start>",
  [anon_sym_LTend_GT] = "<end>",
  [sym_source_file] = "source_file",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string] = sym_string,
  [anon_sym_LTchar_GT] = anon_sym_LTchar_GT,
  [anon_sym_LTspace_GT] = anon_sym_LTspace_GT,
  [anon_sym_LTwhitespace_GT] = anon_sym_LTwhitespace_GT,
  [anon_sym_LTnewline_GT] = anon_sym_LTnewline_GT,
  [anon_sym_LTtab_GT] = anon_sym_LTtab_GT,
  [anon_sym_LTreturn_GT] = anon_sym_LTreturn_GT,
  [anon_sym_LTfeed_GT] = anon_sym_LTfeed_GT,
  [anon_sym_LTnull_GT] = anon_sym_LTnull_GT,
  [anon_sym_LTdigit_GT] = anon_sym_LTdigit_GT,
  [anon_sym_LTvertical_GT] = anon_sym_LTvertical_GT,
  [anon_sym_LTword_GT] = anon_sym_LTword_GT,
  [anon_sym_LTalphabetic_GT] = anon_sym_LTalphabetic_GT,
  [anon_sym_LTalphanumeric_GT] = anon_sym_LTalphanumeric_GT,
  [anon_sym_LTboundary_GT] = anon_sym_LTboundary_GT,
  [anon_sym_LTbackspace_GT] = anon_sym_LTbackspace_GT,
  [anon_sym_LTstart_GT] = anon_sym_LTstart_GT,
  [anon_sym_LTend_GT] = anon_sym_LTend_GT,
  [sym_source_file] = sym_source_file,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTchar_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTspace_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTwhitespace_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTnewline_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTtab_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTreturn_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTfeed_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTnull_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTdigit_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTvertical_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTword_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTalphabetic_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTalphanumeric_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTboundary_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTbackspace_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTstart_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTend_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(113);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(120);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(110);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(108);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(118);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(114);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(2);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 99:
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LTchar_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LTspace_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LTwhitespace_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LTnewline_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LTtab_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LTreturn_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LTfeed_GT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LTnull_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LTdigit_GT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LTvertical_GT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LTword_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LTalphabetic_GT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LTalphanumeric_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LTboundary_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LTbackspace_GT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LTstart_GT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LTend_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LTchar_GT] = ACTIONS(1),
    [anon_sym_LTspace_GT] = ACTIONS(1),
    [anon_sym_LTwhitespace_GT] = ACTIONS(1),
    [anon_sym_LTnewline_GT] = ACTIONS(1),
    [anon_sym_LTtab_GT] = ACTIONS(1),
    [anon_sym_LTreturn_GT] = ACTIONS(1),
    [anon_sym_LTfeed_GT] = ACTIONS(1),
    [anon_sym_LTnull_GT] = ACTIONS(1),
    [anon_sym_LTdigit_GT] = ACTIONS(1),
    [anon_sym_LTvertical_GT] = ACTIONS(1),
    [anon_sym_LTword_GT] = ACTIONS(1),
    [anon_sym_LTalphabetic_GT] = ACTIONS(1),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(1),
    [anon_sym_LTboundary_GT] = ACTIONS(1),
    [anon_sym_LTbackspace_GT] = ACTIONS(1),
    [anon_sym_LTstart_GT] = ACTIONS(1),
    [anon_sym_LTend_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [anon_sym_] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_melody(void) {
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
