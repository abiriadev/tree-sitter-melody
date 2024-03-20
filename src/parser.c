#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 45
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_lazy = 1,
  anon_sym_to = 2,
  anon_sym_some = 3,
  anon_sym_any = 4,
  anon_sym_over = 5,
  anon_sym_option = 6,
  anon_sym_of = 7,
  sym_amount = 8,
  sym_semicolon = 9,
  aux_sym_literal_token1 = 10,
  aux_sym_literal_token2 = 11,
  anon_sym_not = 12,
  aux_sym_range_token1 = 13,
  anon_sym_LTchar_GT = 14,
  anon_sym_LTspace_GT = 15,
  anon_sym_LTwhitespace_GT = 16,
  anon_sym_LTnewline_GT = 17,
  anon_sym_LTtab_GT = 18,
  anon_sym_LTreturn_GT = 19,
  anon_sym_LTfeed_GT = 20,
  anon_sym_LTnull_GT = 21,
  anon_sym_LTdigit_GT = 22,
  anon_sym_LTvertical_GT = 23,
  anon_sym_LTword_GT = 24,
  anon_sym_LTalphabetic_GT = 25,
  anon_sym_LTalphanumeric_GT = 26,
  anon_sym_LTboundary_GT = 27,
  anon_sym_LTbackspace_GT = 28,
  anon_sym_LTstart_GT = 29,
  anon_sym_LTend_GT = 30,
  anon_sym_LTcategory_COLON_COLONletter_GT = 31,
  anon_sym_LTcategory_COLON_COLONlowercase_letter_GT = 32,
  anon_sym_LTcategory_COLON_COLONuppercase_letter_GT = 33,
  anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT = 34,
  anon_sym_LTcategory_COLON_COLONcased_letter_GT = 35,
  anon_sym_LTcategory_COLON_COLONmodifier_letter_GT = 36,
  anon_sym_LTcategory_COLON_COLONother_letter_GT = 37,
  anon_sym_LTcategory_COLON_COLONmark_GT = 38,
  anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT = 39,
  anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT = 40,
  anon_sym_LTcategory_COLON_COLONenclosing_mark_GT = 41,
  anon_sym_LTcategory_COLON_COLONseparator_GT = 42,
  anon_sym_LTcategory_COLON_COLONspace_separator_GT = 43,
  anon_sym_LTcategory_COLON_COLONline_separator_GT = 44,
  anon_sym_LTcategory_COLON_COLONparagraph_separator_GT = 45,
  anon_sym_LTcategory_COLON_COLONsymbol_GT = 46,
  anon_sym_LTcategory_COLON_COLONmath_symbol_GT = 47,
  anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT = 48,
  anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT = 49,
  anon_sym_LTcategory_COLON_COLONother_symbol_GT = 50,
  anon_sym_LTcategory_COLON_COLONnumber_GT = 51,
  anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT = 52,
  anon_sym_LTcategory_COLON_COLONletter_number_GT = 53,
  anon_sym_LTcategory_COLON_COLONother_number_GT = 54,
  anon_sym_LTcategory_COLON_COLONpunctuation_GT = 55,
  anon_sym_LTcategory_COLON_COLONdash_punctuation_GT = 56,
  anon_sym_LTcategory_COLON_COLONopen_punctuation_GT = 57,
  anon_sym_LTcategory_COLON_COLONclose_punctuation_GT = 58,
  anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT = 59,
  anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT = 60,
  anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT = 61,
  anon_sym_LTcategory_COLON_COLONother_punctuation_GT = 62,
  anon_sym_LTcategory_COLON_COLONother_GT = 63,
  anon_sym_LTcategory_COLON_COLONcontrol_GT = 64,
  anon_sym_LTcategory_COLON_COLONformat_GT = 65,
  anon_sym_LTcategory_COLON_COLONprivate_use_GT = 66,
  anon_sym_LTcategory_COLON_COLONsurrogate_GT = 67,
  anon_sym_LTcategory_COLON_COLONunassigned_GT = 68,
  sym_raw = 69,
  aux_sym_negative_char_class_token1 = 70,
  anon_sym_DOT = 71,
  sym_identifier = 72,
  anon_sym_capture = 73,
  anon_sym_match = 74,
  anon_sym_either = 75,
  anon_sym_LBRACE = 76,
  anon_sym_RBRACE = 77,
  anon_sym_let = 78,
  anon_sym_EQ = 79,
  anon_sym_ahead = 80,
  anon_sym_behind = 81,
  sym_comment = 82,
  sym_source_file = 83,
  sym_statement = 84,
  sym_quantifier = 85,
  sym_atom = 86,
  sym_expression = 87,
  sym_literal = 88,
  sym_range = 89,
  sym_symbol = 90,
  sym_unicode_category = 91,
  sym_negative_char_class = 92,
  sym_variable = 93,
  sym_group = 94,
  sym_block = 95,
  sym_variable_declaration = 96,
  sym_assertion = 97,
  aux_sym_source_file_repeat1 = 98,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_lazy] = "lazy",
  [anon_sym_to] = "to",
  [anon_sym_some] = "some",
  [anon_sym_any] = "any",
  [anon_sym_over] = "over",
  [anon_sym_option] = "option",
  [anon_sym_of] = "of",
  [sym_amount] = "amount",
  [sym_semicolon] = "semicolon",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
  [anon_sym_not] = "not",
  [aux_sym_range_token1] = "range_token1",
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
  [anon_sym_LTcategory_COLON_COLONletter_GT] = "<category::letter>",
  [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = "<category::lowercase_letter>",
  [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = "<category::uppercase_letter>",
  [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = "<category::titlecase_letter>",
  [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = "<category::cased_letter>",
  [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = "<category::modifier_letter>",
  [anon_sym_LTcategory_COLON_COLONother_letter_GT] = "<category::other_letter>",
  [anon_sym_LTcategory_COLON_COLONmark_GT] = "<category::mark>",
  [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = "<category::non_spacing_mark>",
  [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = "<category::spacing_combining_mark>",
  [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = "<category::enclosing_mark>",
  [anon_sym_LTcategory_COLON_COLONseparator_GT] = "<category::separator>",
  [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = "<category::space_separator>",
  [anon_sym_LTcategory_COLON_COLONline_separator_GT] = "<category::line_separator>",
  [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = "<category::paragraph_separator>",
  [anon_sym_LTcategory_COLON_COLONsymbol_GT] = "<category::symbol>",
  [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = "<category::math_symbol>",
  [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = "<category::currency_symbol>",
  [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = "<category::modifier_symbol>",
  [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = "<category::other_symbol>",
  [anon_sym_LTcategory_COLON_COLONnumber_GT] = "<category::number>",
  [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = "<category::decimal_digit_number>",
  [anon_sym_LTcategory_COLON_COLONletter_number_GT] = "<category::letter_number>",
  [anon_sym_LTcategory_COLON_COLONother_number_GT] = "<category::other_number>",
  [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = "<category::punctuation>",
  [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = "<category::dash_punctuation>",
  [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = "<category::open_punctuation>",
  [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = "<category::close_punctuation>",
  [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = "<category::initial_punctuation>",
  [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = "<category::final_punctuation>",
  [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = "<category::connector_punctuation>",
  [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = "<category::other_punctuation>",
  [anon_sym_LTcategory_COLON_COLONother_GT] = "<category::other>",
  [anon_sym_LTcategory_COLON_COLONcontrol_GT] = "<category::control>",
  [anon_sym_LTcategory_COLON_COLONformat_GT] = "<category::format>",
  [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = "<category::private_use>",
  [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = "<category::surrogate>",
  [anon_sym_LTcategory_COLON_COLONunassigned_GT] = "<category::unassigned>",
  [sym_raw] = "raw",
  [aux_sym_negative_char_class_token1] = "negative_char_class_token1",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [anon_sym_capture] = "capture",
  [anon_sym_match] = "match",
  [anon_sym_either] = "either",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_ahead] = "ahead",
  [anon_sym_behind] = "behind",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_quantifier] = "quantifier",
  [sym_atom] = "atom",
  [sym_expression] = "expression",
  [sym_literal] = "literal",
  [sym_range] = "range",
  [sym_symbol] = "symbol",
  [sym_unicode_category] = "unicode_category",
  [sym_negative_char_class] = "negative_char_class",
  [sym_variable] = "variable",
  [sym_group] = "group",
  [sym_block] = "block",
  [sym_variable_declaration] = "variable_declaration",
  [sym_assertion] = "assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_lazy] = anon_sym_lazy,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_of] = anon_sym_of,
  [sym_amount] = sym_amount,
  [sym_semicolon] = sym_semicolon,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [anon_sym_not] = anon_sym_not,
  [aux_sym_range_token1] = aux_sym_range_token1,
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
  [anon_sym_LTcategory_COLON_COLONletter_GT] = anon_sym_LTcategory_COLON_COLONletter_GT,
  [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = anon_sym_LTcategory_COLON_COLONlowercase_letter_GT,
  [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = anon_sym_LTcategory_COLON_COLONuppercase_letter_GT,
  [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT,
  [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = anon_sym_LTcategory_COLON_COLONcased_letter_GT,
  [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = anon_sym_LTcategory_COLON_COLONmodifier_letter_GT,
  [anon_sym_LTcategory_COLON_COLONother_letter_GT] = anon_sym_LTcategory_COLON_COLONother_letter_GT,
  [anon_sym_LTcategory_COLON_COLONmark_GT] = anon_sym_LTcategory_COLON_COLONmark_GT,
  [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT,
  [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT,
  [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = anon_sym_LTcategory_COLON_COLONenclosing_mark_GT,
  [anon_sym_LTcategory_COLON_COLONseparator_GT] = anon_sym_LTcategory_COLON_COLONseparator_GT,
  [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = anon_sym_LTcategory_COLON_COLONspace_separator_GT,
  [anon_sym_LTcategory_COLON_COLONline_separator_GT] = anon_sym_LTcategory_COLON_COLONline_separator_GT,
  [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = anon_sym_LTcategory_COLON_COLONparagraph_separator_GT,
  [anon_sym_LTcategory_COLON_COLONsymbol_GT] = anon_sym_LTcategory_COLON_COLONsymbol_GT,
  [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = anon_sym_LTcategory_COLON_COLONmath_symbol_GT,
  [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT,
  [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT,
  [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = anon_sym_LTcategory_COLON_COLONother_symbol_GT,
  [anon_sym_LTcategory_COLON_COLONnumber_GT] = anon_sym_LTcategory_COLON_COLONnumber_GT,
  [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT,
  [anon_sym_LTcategory_COLON_COLONletter_number_GT] = anon_sym_LTcategory_COLON_COLONletter_number_GT,
  [anon_sym_LTcategory_COLON_COLONother_number_GT] = anon_sym_LTcategory_COLON_COLONother_number_GT,
  [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = anon_sym_LTcategory_COLON_COLONpunctuation_GT,
  [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = anon_sym_LTcategory_COLON_COLONdash_punctuation_GT,
  [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = anon_sym_LTcategory_COLON_COLONopen_punctuation_GT,
  [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = anon_sym_LTcategory_COLON_COLONclose_punctuation_GT,
  [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT,
  [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT,
  [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT,
  [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = anon_sym_LTcategory_COLON_COLONother_punctuation_GT,
  [anon_sym_LTcategory_COLON_COLONother_GT] = anon_sym_LTcategory_COLON_COLONother_GT,
  [anon_sym_LTcategory_COLON_COLONcontrol_GT] = anon_sym_LTcategory_COLON_COLONcontrol_GT,
  [anon_sym_LTcategory_COLON_COLONformat_GT] = anon_sym_LTcategory_COLON_COLONformat_GT,
  [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = anon_sym_LTcategory_COLON_COLONprivate_use_GT,
  [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = anon_sym_LTcategory_COLON_COLONsurrogate_GT,
  [anon_sym_LTcategory_COLON_COLONunassigned_GT] = anon_sym_LTcategory_COLON_COLONunassigned_GT,
  [sym_raw] = sym_raw,
  [aux_sym_negative_char_class_token1] = aux_sym_negative_char_class_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [anon_sym_capture] = anon_sym_capture,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_either] = anon_sym_either,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ahead] = anon_sym_ahead,
  [anon_sym_behind] = anon_sym_behind,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_quantifier] = sym_quantifier,
  [sym_atom] = sym_atom,
  [sym_expression] = sym_expression,
  [sym_literal] = sym_literal,
  [sym_range] = sym_range,
  [sym_symbol] = sym_symbol,
  [sym_unicode_category] = sym_unicode_category,
  [sym_negative_char_class] = sym_negative_char_class,
  [sym_variable] = sym_variable,
  [sym_group] = sym_group,
  [sym_block] = sym_block,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_assertion] = sym_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_lazy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_range_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_LTcategory_COLON_COLONletter_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONother_letter_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONmark_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONseparator_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONline_separator_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONsymbol_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONnumber_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONletter_number_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONother_number_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONother_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONcontrol_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONformat_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcategory_COLON_COLONunassigned_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_raw] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_negative_char_class_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_capture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_either] = {
    .visible = true,
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ahead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_behind] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_category] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_char_class] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assertion] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 11,
  [15] = 12,
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 19,
  [26] = 26,
  [27] = 22,
  [28] = 28,
  [29] = 29,
  [30] = 18,
  [31] = 20,
  [32] = 32,
  [33] = 17,
  [34] = 34,
  [35] = 26,
  [36] = 29,
  [37] = 37,
  [38] = 28,
  [39] = 21,
  [40] = 34,
  [41] = 37,
  [42] = 32,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 50,
  [56] = 54,
  [57] = 52,
  [58] = 53,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 49,
  [63] = 59,
  [64] = 64,
  [65] = 51,
  [66] = 60,
  [67] = 61,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 77,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 76,
  [90] = 90,
  [91] = 91,
  [92] = 74,
  [93] = 93,
  [94] = 94,
  [95] = 80,
  [96] = 82,
  [97] = 97,
  [98] = 94,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 73,
  [103] = 72,
  [104] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(608);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(709);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(618);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(717);
      if (lookahead == '`') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == '{') ADVANCE(714);
      if (lookahead == '}') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '\\') ADVANCE(561);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '.') ADVANCE(709);
      if (lookahead == '/') ADVANCE(627);
      if (lookahead == '<') ADVANCE(631);
      if (lookahead == '`') ADVANCE(630);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'b') ADVANCE(635);
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead == 'm') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead == '}') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (!eof && (0 <= lookahead && lookahead <= 127)) ADVANCE(622);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(620);
      if (lookahead == '\\') ADVANCE(578);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(723);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(722);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '{') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(710);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(627);
      if (lookahead == '<') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'b') ADVANCE(636);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (!eof && (0 <= lookahead && lookahead <= 31) ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('+' <= lookahead && lookahead <= '?') ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= 127)) ADVANCE(622);
      if (('!' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(627);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(629);
      if (!eof && (0 <= lookahead && lookahead <= 127)) ADVANCE(622);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(159);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(660);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(648);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(644);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(650);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(651);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(654);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(652);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(645);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(659);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(649);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(647);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(657);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(653);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(658);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(655);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(646);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(656);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(668);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '_') ADVANCE(330);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(695);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(661);
      if (lookahead == '_') ADVANCE(381);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(681);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(676);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(694);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(672);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(697);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(698);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(677);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(696);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(685);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(665);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(667);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(684);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(680);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(683);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(671);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(674);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(678);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(666);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(679);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(673);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(686);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(662);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(669);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(687);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(664);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(663);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(688);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(690);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(692);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(689);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(675);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(682);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(691);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(670);
      END_STATE();
    case 67:
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '`') ADVANCE(699);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '`') ADVANCE(700);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(331);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(425);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(567);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(194);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(329);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(167);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(497);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(500);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(349);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(502);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(383);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(333);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(334);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(436);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(503);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(505);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(438);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(439);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(440);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'v') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(275);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(598);
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == 'l') ADVANCE(403);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(477);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(525);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(544);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(407);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(290);
      END_STATE();
    case 149:
      if (lookahead == 'b') ADVANCE(220);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(232);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(411);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(414);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(416);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(237);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(419);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(597);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(554);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(558);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(718);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(720);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(458);
      if (lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 255:
      if (lookahead == 'f') ADVANCE(615);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 256:
      if (lookahead == 'f') ADVANCE(294);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(474);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(380);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(293);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 266:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(712);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 276:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 310:
      if (lookahead == 'k') ADVANCE(489);
      END_STATE();
    case 311:
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 312:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 313:
      if (lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 314:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == 'n') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(583);
      if (lookahead == 's') ADVANCE(594);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 349:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 350:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 351:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 388:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 392:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(579);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 429:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 436:
      if (lookahead == 'p') ADVANCE(580);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(581);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(582);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(584);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(585);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 478:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 480:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 481:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 482:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 483:
      if (lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 484:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 485:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 486:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 487:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(716);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 561:
      if (lookahead == 'u') ADVANCE(605);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(1);
      END_STATE();
    case 562:
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 563:
      if (lookahead == 'u') ADVANCE(456);
      END_STATE();
    case 564:
      if (lookahead == 'u') ADVANCE(358);
      END_STATE();
    case 565:
      if (lookahead == 'u') ADVANCE(342);
      END_STATE();
    case 566:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 567:
      if (lookahead == 'u') ADVANCE(499);
      END_STATE();
    case 568:
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 569:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 570:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 571:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 572:
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 573:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 574:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 575:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 576:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 577:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 578:
      if (lookahead == 'u') ADVANCE(606);
      if (lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(3);
      END_STATE();
    case 579:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 580:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 581:
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 582:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 583:
      if (lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 584:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 585:
      if (lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 586:
      if (lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 587:
      if (lookahead == 'w') ADVANCE(317);
      END_STATE();
    case 588:
      if (lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 589:
      if (lookahead == 'y') ADVANCE(612);
      END_STATE();
    case 590:
      if (lookahead == 'y') ADVANCE(609);
      END_STATE();
    case 591:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 592:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 593:
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 594:
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 595:
      if (lookahead == 'y') ADVANCE(352);
      END_STATE();
    case 596:
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 597:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 598:
      if (lookahead == 'z') ADVANCE(590);
      END_STATE();
    case 599:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1);
      END_STATE();
    case 600:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 601:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 602:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      END_STATE();
    case 603:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 604:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      END_STATE();
    case 605:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(603);
      END_STATE();
    case 606:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(604);
      END_STATE();
    case 607:
      if (eof) ADVANCE(608);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '.') ADVANCE(709);
      if (lookahead == '/') ADVANCE(627);
      if (lookahead == '<') ADVANCE(631);
      if (lookahead == '`') ADVANCE(630);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'b') ADVANCE(635);
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead == 'm') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead == 's') ADVANCE(640);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (!eof && (0 <= lookahead && lookahead <= 127)) ADVANCE(622);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_range_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '\\') ADVANCE(561);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '.') ADVANCE(709);
      if (lookahead == '/') ADVANCE(627);
      if (lookahead == '<') ADVANCE(631);
      if (lookahead == '`') ADVANCE(630);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'b') ADVANCE(635);
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead == 'm') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead == '}') ADVANCE(715);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (!eof && (0 <= lookahead && lookahead <= 127)) ADVANCE(622);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '.') ADVANCE(709);
      if (lookahead == '/') ADVANCE(627);
      if (lookahead == '<') ADVANCE(631);
      if (lookahead == '`') ADVANCE(630);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'b') ADVANCE(635);
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead == 'm') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead == 's') ADVANCE(640);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (!eof && (0 <= lookahead && lookahead <= 127)) ADVANCE(622);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '\'') ADVANCE(620);
      if (lookahead == '\\') ADVANCE(578);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(723);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '/') ADVANCE(627);
      if (lookahead == '<') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'b') ADVANCE(636);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (!eof && (0 <= lookahead && lookahead <= 31) ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('+' <= lookahead && lookahead <= '?') ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= 127)) ADVANCE(622);
      if (('!' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '/') ADVANCE(627);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(629);
      if (!eof && (0 <= lookahead && lookahead <= 127)) ADVANCE(622);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '`') ADVANCE(699);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'v') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(275);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'a') ADVANCE(598);
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'h') ADVANCE(704);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LTchar_GT);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LTspace_GT);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LTwhitespace_GT);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LTnewline_GT);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_LTtab_GT);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_LTreturn_GT);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LTfeed_GT);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LTnull_GT);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LTdigit_GT);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LTvertical_GT);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_LTword_GT);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_LTalphabetic_GT);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_LTalphanumeric_GT);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_LTboundary_GT);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_LTbackspace_GT);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_LTstart_GT);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_LTend_GT);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_GT);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONlowercase_letter_GT);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONuppercase_letter_GT);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcased_letter_GT);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_letter_GT);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_letter_GT);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmark_GT);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONenclosing_mark_GT);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONseparator_GT);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspace_separator_GT);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONline_separator_GT);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONparagraph_separator_GT);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsymbol_GT);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmath_symbol_GT);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_symbol_GT);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnumber_GT);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_number_GT);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_number_GT);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONpunctuation_GT);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdash_punctuation_GT);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONopen_punctuation_GT);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONclose_punctuation_GT);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_punctuation_GT);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_GT);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcontrol_GT);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONformat_GT);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONprivate_use_GT);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsurrogate_GT);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONunassigned_GT);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_raw);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_raw);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '`') ADVANCE(699);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'a') ADVANCE(702);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'h') ADVANCE(706);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_capture);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_either);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_ahead);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_behind);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(723);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 607},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 607},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 607},
  [7] = {.lex_state = 607},
  [8] = {.lex_state = 607},
  [9] = {.lex_state = 607},
  [10] = {.lex_state = 607},
  [11] = {.lex_state = 607},
  [12] = {.lex_state = 607},
  [13] = {.lex_state = 607},
  [14] = {.lex_state = 607},
  [15] = {.lex_state = 607},
  [16] = {.lex_state = 607},
  [17] = {.lex_state = 607},
  [18] = {.lex_state = 607},
  [19] = {.lex_state = 607},
  [20] = {.lex_state = 607},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 607},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 607},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 607},
  [35] = {.lex_state = 607},
  [36] = {.lex_state = 607},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 607},
  [39] = {.lex_state = 607},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 607},
  [42] = {.lex_state = 607},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_lazy] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_over] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [aux_sym_literal_token2] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(1),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(1),
    [sym_raw] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_capture] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_either] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_ahead] = ACTIONS(1),
    [anon_sym_behind] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym_statement] = STATE(6),
    [sym_quantifier] = STATE(17),
    [sym_atom] = STATE(20),
    [sym_expression] = STATE(17),
    [sym_literal] = STATE(84),
    [sym_range] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(84),
    [sym_variable] = STATE(84),
    [sym_group] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_assertion] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_lazy] = ACTIONS(7),
    [anon_sym_some] = ACTIONS(9),
    [anon_sym_any] = ACTIONS(9),
    [anon_sym_over] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(9),
    [sym_amount] = ACTIONS(13),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [2] = {
    [sym_statement] = STATE(5),
    [sym_quantifier] = STATE(33),
    [sym_atom] = STATE(31),
    [sym_expression] = STATE(33),
    [sym_literal] = STATE(77),
    [sym_range] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(77),
    [sym_variable] = STATE(77),
    [sym_group] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_assertion] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_lazy] = ACTIONS(39),
    [anon_sym_some] = ACTIONS(41),
    [anon_sym_any] = ACTIONS(41),
    [anon_sym_over] = ACTIONS(43),
    [anon_sym_option] = ACTIONS(41),
    [sym_amount] = ACTIONS(45),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(47),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_either] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_ahead] = ACTIONS(59),
    [anon_sym_behind] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [3] = {
    [sym_statement] = STATE(5),
    [sym_quantifier] = STATE(33),
    [sym_atom] = STATE(31),
    [sym_expression] = STATE(33),
    [sym_literal] = STATE(77),
    [sym_range] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(77),
    [sym_variable] = STATE(77),
    [sym_group] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_assertion] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_lazy] = ACTIONS(39),
    [anon_sym_some] = ACTIONS(41),
    [anon_sym_any] = ACTIONS(41),
    [anon_sym_over] = ACTIONS(43),
    [anon_sym_option] = ACTIONS(41),
    [sym_amount] = ACTIONS(45),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(47),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_either] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_ahead] = ACTIONS(59),
    [anon_sym_behind] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [4] = {
    [sym_statement] = STATE(4),
    [sym_quantifier] = STATE(17),
    [sym_atom] = STATE(20),
    [sym_expression] = STATE(17),
    [sym_literal] = STATE(84),
    [sym_range] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(84),
    [sym_variable] = STATE(84),
    [sym_group] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_assertion] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_lazy] = ACTIONS(65),
    [anon_sym_some] = ACTIONS(68),
    [anon_sym_any] = ACTIONS(68),
    [anon_sym_over] = ACTIONS(71),
    [anon_sym_option] = ACTIONS(68),
    [sym_amount] = ACTIONS(74),
    [aux_sym_literal_token1] = ACTIONS(77),
    [aux_sym_literal_token2] = ACTIONS(77),
    [anon_sym_not] = ACTIONS(80),
    [aux_sym_range_token1] = ACTIONS(83),
    [anon_sym_LTchar_GT] = ACTIONS(86),
    [anon_sym_LTspace_GT] = ACTIONS(86),
    [anon_sym_LTwhitespace_GT] = ACTIONS(86),
    [anon_sym_LTnewline_GT] = ACTIONS(86),
    [anon_sym_LTtab_GT] = ACTIONS(86),
    [anon_sym_LTreturn_GT] = ACTIONS(86),
    [anon_sym_LTfeed_GT] = ACTIONS(86),
    [anon_sym_LTnull_GT] = ACTIONS(86),
    [anon_sym_LTdigit_GT] = ACTIONS(86),
    [anon_sym_LTvertical_GT] = ACTIONS(86),
    [anon_sym_LTword_GT] = ACTIONS(86),
    [anon_sym_LTalphabetic_GT] = ACTIONS(86),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(86),
    [anon_sym_LTboundary_GT] = ACTIONS(86),
    [anon_sym_LTbackspace_GT] = ACTIONS(86),
    [anon_sym_LTstart_GT] = ACTIONS(86),
    [anon_sym_LTend_GT] = ACTIONS(86),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(89),
    [sym_raw] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_capture] = ACTIONS(98),
    [anon_sym_match] = ACTIONS(101),
    [anon_sym_either] = ACTIONS(101),
    [anon_sym_let] = ACTIONS(104),
    [anon_sym_ahead] = ACTIONS(107),
    [anon_sym_behind] = ACTIONS(107),
    [sym_comment] = ACTIONS(37),
  },
  [5] = {
    [sym_statement] = STATE(5),
    [sym_quantifier] = STATE(33),
    [sym_atom] = STATE(31),
    [sym_expression] = STATE(33),
    [sym_literal] = STATE(77),
    [sym_range] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(77),
    [sym_variable] = STATE(77),
    [sym_group] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_assertion] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_lazy] = ACTIONS(110),
    [anon_sym_some] = ACTIONS(113),
    [anon_sym_any] = ACTIONS(113),
    [anon_sym_over] = ACTIONS(116),
    [anon_sym_option] = ACTIONS(113),
    [sym_amount] = ACTIONS(119),
    [aux_sym_literal_token1] = ACTIONS(77),
    [aux_sym_literal_token2] = ACTIONS(77),
    [anon_sym_not] = ACTIONS(122),
    [aux_sym_range_token1] = ACTIONS(83),
    [anon_sym_LTchar_GT] = ACTIONS(86),
    [anon_sym_LTspace_GT] = ACTIONS(86),
    [anon_sym_LTwhitespace_GT] = ACTIONS(86),
    [anon_sym_LTnewline_GT] = ACTIONS(86),
    [anon_sym_LTtab_GT] = ACTIONS(86),
    [anon_sym_LTreturn_GT] = ACTIONS(86),
    [anon_sym_LTfeed_GT] = ACTIONS(86),
    [anon_sym_LTnull_GT] = ACTIONS(86),
    [anon_sym_LTdigit_GT] = ACTIONS(86),
    [anon_sym_LTvertical_GT] = ACTIONS(86),
    [anon_sym_LTword_GT] = ACTIONS(86),
    [anon_sym_LTalphabetic_GT] = ACTIONS(86),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(86),
    [anon_sym_LTboundary_GT] = ACTIONS(86),
    [anon_sym_LTbackspace_GT] = ACTIONS(86),
    [anon_sym_LTstart_GT] = ACTIONS(86),
    [anon_sym_LTend_GT] = ACTIONS(86),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(89),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(89),
    [sym_raw] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_capture] = ACTIONS(128),
    [anon_sym_match] = ACTIONS(131),
    [anon_sym_either] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_ahead] = ACTIONS(139),
    [anon_sym_behind] = ACTIONS(139),
    [sym_comment] = ACTIONS(37),
  },
  [6] = {
    [sym_statement] = STATE(4),
    [sym_quantifier] = STATE(17),
    [sym_atom] = STATE(20),
    [sym_expression] = STATE(17),
    [sym_literal] = STATE(84),
    [sym_range] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(84),
    [sym_variable] = STATE(84),
    [sym_group] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_assertion] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_lazy] = ACTIONS(7),
    [anon_sym_some] = ACTIONS(9),
    [anon_sym_any] = ACTIONS(9),
    [anon_sym_over] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(9),
    [sym_amount] = ACTIONS(13),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [7] = {
    [sym_statement] = STATE(2),
    [sym_quantifier] = STATE(33),
    [sym_atom] = STATE(31),
    [sym_expression] = STATE(33),
    [sym_literal] = STATE(77),
    [sym_range] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(77),
    [sym_variable] = STATE(77),
    [sym_group] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_assertion] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_lazy] = ACTIONS(39),
    [anon_sym_some] = ACTIONS(41),
    [anon_sym_any] = ACTIONS(41),
    [anon_sym_over] = ACTIONS(43),
    [anon_sym_option] = ACTIONS(41),
    [sym_amount] = ACTIONS(45),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(47),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_either] = ACTIONS(53),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_ahead] = ACTIONS(59),
    [anon_sym_behind] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [8] = {
    [sym_statement] = STATE(3),
    [sym_quantifier] = STATE(33),
    [sym_atom] = STATE(31),
    [sym_expression] = STATE(33),
    [sym_literal] = STATE(77),
    [sym_range] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(77),
    [sym_variable] = STATE(77),
    [sym_group] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_assertion] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_lazy] = ACTIONS(39),
    [anon_sym_some] = ACTIONS(41),
    [anon_sym_any] = ACTIONS(41),
    [anon_sym_over] = ACTIONS(43),
    [anon_sym_option] = ACTIONS(41),
    [sym_amount] = ACTIONS(45),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(47),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_either] = ACTIONS(53),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_ahead] = ACTIONS(59),
    [anon_sym_behind] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [9] = {
    [sym_atom] = STATE(20),
    [sym_expression] = STATE(35),
    [sym_literal] = STATE(84),
    [sym_range] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(84),
    [sym_variable] = STATE(84),
    [sym_group] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_assertion] = STATE(20),
    [sym_amount] = ACTIONS(144),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [10] = {
    [sym_atom] = STATE(31),
    [sym_expression] = STATE(40),
    [sym_literal] = STATE(77),
    [sym_range] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(77),
    [sym_variable] = STATE(77),
    [sym_group] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_assertion] = STATE(31),
    [sym_amount] = ACTIONS(144),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(47),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_either] = ACTIONS(53),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_ahead] = ACTIONS(59),
    [anon_sym_behind] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [11] = {
    [sym_atom] = STATE(31),
    [sym_expression] = STATE(37),
    [sym_literal] = STATE(77),
    [sym_range] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(77),
    [sym_variable] = STATE(77),
    [sym_group] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_assertion] = STATE(31),
    [sym_amount] = ACTIONS(144),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(47),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_either] = ACTIONS(53),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_ahead] = ACTIONS(59),
    [anon_sym_behind] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [12] = {
    [sym_atom] = STATE(31),
    [sym_expression] = STATE(22),
    [sym_literal] = STATE(77),
    [sym_range] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(77),
    [sym_variable] = STATE(77),
    [sym_group] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_assertion] = STATE(31),
    [sym_amount] = ACTIONS(144),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(47),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_either] = ACTIONS(53),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_ahead] = ACTIONS(59),
    [anon_sym_behind] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [13] = {
    [sym_atom] = STATE(31),
    [sym_expression] = STATE(26),
    [sym_literal] = STATE(77),
    [sym_range] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(77),
    [sym_variable] = STATE(77),
    [sym_group] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_assertion] = STATE(31),
    [sym_amount] = ACTIONS(144),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(47),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_either] = ACTIONS(53),
    [anon_sym_let] = ACTIONS(57),
    [anon_sym_ahead] = ACTIONS(59),
    [anon_sym_behind] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [14] = {
    [sym_atom] = STATE(20),
    [sym_expression] = STATE(41),
    [sym_literal] = STATE(84),
    [sym_range] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(84),
    [sym_variable] = STATE(84),
    [sym_group] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_assertion] = STATE(20),
    [sym_amount] = ACTIONS(144),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [15] = {
    [sym_atom] = STATE(20),
    [sym_expression] = STATE(27),
    [sym_literal] = STATE(84),
    [sym_range] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(84),
    [sym_variable] = STATE(84),
    [sym_group] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_assertion] = STATE(20),
    [sym_amount] = ACTIONS(144),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [16] = {
    [sym_atom] = STATE(20),
    [sym_expression] = STATE(34),
    [sym_literal] = STATE(84),
    [sym_range] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_unicode_category] = STATE(69),
    [sym_negative_char_class] = STATE(84),
    [sym_variable] = STATE(84),
    [sym_group] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_assertion] = STATE(20),
    [sym_amount] = ACTIONS(144),
    [aux_sym_literal_token1] = ACTIONS(15),
    [aux_sym_literal_token2] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [aux_sym_range_token1] = ACTIONS(19),
    [anon_sym_LTchar_GT] = ACTIONS(21),
    [anon_sym_LTspace_GT] = ACTIONS(21),
    [anon_sym_LTwhitespace_GT] = ACTIONS(21),
    [anon_sym_LTnewline_GT] = ACTIONS(21),
    [anon_sym_LTtab_GT] = ACTIONS(21),
    [anon_sym_LTreturn_GT] = ACTIONS(21),
    [anon_sym_LTfeed_GT] = ACTIONS(21),
    [anon_sym_LTnull_GT] = ACTIONS(21),
    [anon_sym_LTdigit_GT] = ACTIONS(21),
    [anon_sym_LTvertical_GT] = ACTIONS(21),
    [anon_sym_LTword_GT] = ACTIONS(21),
    [anon_sym_LTalphabetic_GT] = ACTIONS(21),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(21),
    [anon_sym_LTboundary_GT] = ACTIONS(21),
    [anon_sym_LTbackspace_GT] = ACTIONS(21),
    [anon_sym_LTstart_GT] = ACTIONS(21),
    [anon_sym_LTend_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [sym_raw] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_lazy] = ACTIONS(148),
    [anon_sym_some] = ACTIONS(148),
    [anon_sym_any] = ACTIONS(148),
    [anon_sym_over] = ACTIONS(148),
    [anon_sym_option] = ACTIONS(148),
    [sym_amount] = ACTIONS(148),
    [aux_sym_literal_token1] = ACTIONS(148),
    [aux_sym_literal_token2] = ACTIONS(148),
    [anon_sym_not] = ACTIONS(148),
    [aux_sym_range_token1] = ACTIONS(148),
    [anon_sym_LTchar_GT] = ACTIONS(148),
    [anon_sym_LTspace_GT] = ACTIONS(148),
    [anon_sym_LTwhitespace_GT] = ACTIONS(148),
    [anon_sym_LTnewline_GT] = ACTIONS(148),
    [anon_sym_LTtab_GT] = ACTIONS(148),
    [anon_sym_LTreturn_GT] = ACTIONS(148),
    [anon_sym_LTfeed_GT] = ACTIONS(148),
    [anon_sym_LTnull_GT] = ACTIONS(148),
    [anon_sym_LTdigit_GT] = ACTIONS(148),
    [anon_sym_LTvertical_GT] = ACTIONS(148),
    [anon_sym_LTword_GT] = ACTIONS(148),
    [anon_sym_LTalphabetic_GT] = ACTIONS(148),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(148),
    [anon_sym_LTboundary_GT] = ACTIONS(148),
    [anon_sym_LTbackspace_GT] = ACTIONS(148),
    [anon_sym_LTstart_GT] = ACTIONS(148),
    [anon_sym_LTend_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(148),
    [sym_raw] = ACTIONS(148),
    [anon_sym_DOT] = ACTIONS(148),
    [anon_sym_capture] = ACTIONS(148),
    [anon_sym_match] = ACTIONS(148),
    [anon_sym_either] = ACTIONS(148),
    [anon_sym_let] = ACTIONS(148),
    [anon_sym_ahead] = ACTIONS(148),
    [anon_sym_behind] = ACTIONS(148),
    [sym_comment] = ACTIONS(37),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_lazy] = ACTIONS(152),
    [anon_sym_some] = ACTIONS(152),
    [anon_sym_any] = ACTIONS(152),
    [anon_sym_over] = ACTIONS(152),
    [anon_sym_option] = ACTIONS(152),
    [sym_amount] = ACTIONS(152),
    [aux_sym_literal_token1] = ACTIONS(152),
    [aux_sym_literal_token2] = ACTIONS(152),
    [anon_sym_not] = ACTIONS(152),
    [aux_sym_range_token1] = ACTIONS(152),
    [anon_sym_LTchar_GT] = ACTIONS(152),
    [anon_sym_LTspace_GT] = ACTIONS(152),
    [anon_sym_LTwhitespace_GT] = ACTIONS(152),
    [anon_sym_LTnewline_GT] = ACTIONS(152),
    [anon_sym_LTtab_GT] = ACTIONS(152),
    [anon_sym_LTreturn_GT] = ACTIONS(152),
    [anon_sym_LTfeed_GT] = ACTIONS(152),
    [anon_sym_LTnull_GT] = ACTIONS(152),
    [anon_sym_LTdigit_GT] = ACTIONS(152),
    [anon_sym_LTvertical_GT] = ACTIONS(152),
    [anon_sym_LTword_GT] = ACTIONS(152),
    [anon_sym_LTalphabetic_GT] = ACTIONS(152),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(152),
    [anon_sym_LTboundary_GT] = ACTIONS(152),
    [anon_sym_LTbackspace_GT] = ACTIONS(152),
    [anon_sym_LTstart_GT] = ACTIONS(152),
    [anon_sym_LTend_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(152),
    [sym_raw] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_capture] = ACTIONS(152),
    [anon_sym_match] = ACTIONS(152),
    [anon_sym_either] = ACTIONS(152),
    [anon_sym_let] = ACTIONS(152),
    [anon_sym_ahead] = ACTIONS(152),
    [anon_sym_behind] = ACTIONS(152),
    [sym_comment] = ACTIONS(37),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_lazy] = ACTIONS(156),
    [anon_sym_some] = ACTIONS(156),
    [anon_sym_any] = ACTIONS(156),
    [anon_sym_over] = ACTIONS(156),
    [anon_sym_option] = ACTIONS(156),
    [sym_amount] = ACTIONS(156),
    [aux_sym_literal_token1] = ACTIONS(156),
    [aux_sym_literal_token2] = ACTIONS(156),
    [anon_sym_not] = ACTIONS(156),
    [aux_sym_range_token1] = ACTIONS(156),
    [anon_sym_LTchar_GT] = ACTIONS(156),
    [anon_sym_LTspace_GT] = ACTIONS(156),
    [anon_sym_LTwhitespace_GT] = ACTIONS(156),
    [anon_sym_LTnewline_GT] = ACTIONS(156),
    [anon_sym_LTtab_GT] = ACTIONS(156),
    [anon_sym_LTreturn_GT] = ACTIONS(156),
    [anon_sym_LTfeed_GT] = ACTIONS(156),
    [anon_sym_LTnull_GT] = ACTIONS(156),
    [anon_sym_LTdigit_GT] = ACTIONS(156),
    [anon_sym_LTvertical_GT] = ACTIONS(156),
    [anon_sym_LTword_GT] = ACTIONS(156),
    [anon_sym_LTalphabetic_GT] = ACTIONS(156),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(156),
    [anon_sym_LTboundary_GT] = ACTIONS(156),
    [anon_sym_LTbackspace_GT] = ACTIONS(156),
    [anon_sym_LTstart_GT] = ACTIONS(156),
    [anon_sym_LTend_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(156),
    [sym_raw] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_capture] = ACTIONS(156),
    [anon_sym_match] = ACTIONS(156),
    [anon_sym_either] = ACTIONS(156),
    [anon_sym_let] = ACTIONS(156),
    [anon_sym_ahead] = ACTIONS(156),
    [anon_sym_behind] = ACTIONS(156),
    [sym_comment] = ACTIONS(37),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_lazy] = ACTIONS(160),
    [anon_sym_some] = ACTIONS(160),
    [anon_sym_any] = ACTIONS(160),
    [anon_sym_over] = ACTIONS(160),
    [anon_sym_option] = ACTIONS(160),
    [sym_amount] = ACTIONS(160),
    [aux_sym_literal_token1] = ACTIONS(160),
    [aux_sym_literal_token2] = ACTIONS(160),
    [anon_sym_not] = ACTIONS(160),
    [aux_sym_range_token1] = ACTIONS(160),
    [anon_sym_LTchar_GT] = ACTIONS(160),
    [anon_sym_LTspace_GT] = ACTIONS(160),
    [anon_sym_LTwhitespace_GT] = ACTIONS(160),
    [anon_sym_LTnewline_GT] = ACTIONS(160),
    [anon_sym_LTtab_GT] = ACTIONS(160),
    [anon_sym_LTreturn_GT] = ACTIONS(160),
    [anon_sym_LTfeed_GT] = ACTIONS(160),
    [anon_sym_LTnull_GT] = ACTIONS(160),
    [anon_sym_LTdigit_GT] = ACTIONS(160),
    [anon_sym_LTvertical_GT] = ACTIONS(160),
    [anon_sym_LTword_GT] = ACTIONS(160),
    [anon_sym_LTalphabetic_GT] = ACTIONS(160),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(160),
    [anon_sym_LTboundary_GT] = ACTIONS(160),
    [anon_sym_LTbackspace_GT] = ACTIONS(160),
    [anon_sym_LTstart_GT] = ACTIONS(160),
    [anon_sym_LTend_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(160),
    [sym_raw] = ACTIONS(160),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_capture] = ACTIONS(160),
    [anon_sym_match] = ACTIONS(160),
    [anon_sym_either] = ACTIONS(160),
    [anon_sym_let] = ACTIONS(160),
    [anon_sym_ahead] = ACTIONS(160),
    [anon_sym_behind] = ACTIONS(160),
    [sym_comment] = ACTIONS(37),
  },
  [21] = {
    [anon_sym_lazy] = ACTIONS(162),
    [anon_sym_some] = ACTIONS(162),
    [anon_sym_any] = ACTIONS(162),
    [anon_sym_over] = ACTIONS(162),
    [anon_sym_option] = ACTIONS(162),
    [sym_amount] = ACTIONS(162),
    [aux_sym_literal_token1] = ACTIONS(162),
    [aux_sym_literal_token2] = ACTIONS(162),
    [anon_sym_not] = ACTIONS(162),
    [aux_sym_range_token1] = ACTIONS(162),
    [anon_sym_LTchar_GT] = ACTIONS(162),
    [anon_sym_LTspace_GT] = ACTIONS(162),
    [anon_sym_LTwhitespace_GT] = ACTIONS(162),
    [anon_sym_LTnewline_GT] = ACTIONS(162),
    [anon_sym_LTtab_GT] = ACTIONS(162),
    [anon_sym_LTreturn_GT] = ACTIONS(162),
    [anon_sym_LTfeed_GT] = ACTIONS(162),
    [anon_sym_LTnull_GT] = ACTIONS(162),
    [anon_sym_LTdigit_GT] = ACTIONS(162),
    [anon_sym_LTvertical_GT] = ACTIONS(162),
    [anon_sym_LTword_GT] = ACTIONS(162),
    [anon_sym_LTalphabetic_GT] = ACTIONS(162),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(162),
    [anon_sym_LTboundary_GT] = ACTIONS(162),
    [anon_sym_LTbackspace_GT] = ACTIONS(162),
    [anon_sym_LTstart_GT] = ACTIONS(162),
    [anon_sym_LTend_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(162),
    [sym_raw] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [anon_sym_capture] = ACTIONS(162),
    [anon_sym_match] = ACTIONS(162),
    [anon_sym_either] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_let] = ACTIONS(162),
    [anon_sym_ahead] = ACTIONS(162),
    [anon_sym_behind] = ACTIONS(162),
    [sym_comment] = ACTIONS(37),
  },
  [22] = {
    [anon_sym_lazy] = ACTIONS(164),
    [anon_sym_some] = ACTIONS(164),
    [anon_sym_any] = ACTIONS(164),
    [anon_sym_over] = ACTIONS(164),
    [anon_sym_option] = ACTIONS(164),
    [sym_amount] = ACTIONS(164),
    [aux_sym_literal_token1] = ACTIONS(164),
    [aux_sym_literal_token2] = ACTIONS(164),
    [anon_sym_not] = ACTIONS(164),
    [aux_sym_range_token1] = ACTIONS(164),
    [anon_sym_LTchar_GT] = ACTIONS(164),
    [anon_sym_LTspace_GT] = ACTIONS(164),
    [anon_sym_LTwhitespace_GT] = ACTIONS(164),
    [anon_sym_LTnewline_GT] = ACTIONS(164),
    [anon_sym_LTtab_GT] = ACTIONS(164),
    [anon_sym_LTreturn_GT] = ACTIONS(164),
    [anon_sym_LTfeed_GT] = ACTIONS(164),
    [anon_sym_LTnull_GT] = ACTIONS(164),
    [anon_sym_LTdigit_GT] = ACTIONS(164),
    [anon_sym_LTvertical_GT] = ACTIONS(164),
    [anon_sym_LTword_GT] = ACTIONS(164),
    [anon_sym_LTalphabetic_GT] = ACTIONS(164),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(164),
    [anon_sym_LTboundary_GT] = ACTIONS(164),
    [anon_sym_LTbackspace_GT] = ACTIONS(164),
    [anon_sym_LTstart_GT] = ACTIONS(164),
    [anon_sym_LTend_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(164),
    [sym_raw] = ACTIONS(164),
    [anon_sym_DOT] = ACTIONS(164),
    [anon_sym_capture] = ACTIONS(164),
    [anon_sym_match] = ACTIONS(164),
    [anon_sym_either] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_let] = ACTIONS(164),
    [anon_sym_ahead] = ACTIONS(164),
    [anon_sym_behind] = ACTIONS(164),
    [sym_comment] = ACTIONS(37),
  },
  [23] = {
    [anon_sym_lazy] = ACTIONS(166),
    [anon_sym_some] = ACTIONS(166),
    [anon_sym_any] = ACTIONS(166),
    [anon_sym_over] = ACTIONS(166),
    [anon_sym_option] = ACTIONS(166),
    [sym_amount] = ACTIONS(166),
    [aux_sym_literal_token1] = ACTIONS(166),
    [aux_sym_literal_token2] = ACTIONS(166),
    [anon_sym_not] = ACTIONS(166),
    [aux_sym_range_token1] = ACTIONS(166),
    [anon_sym_LTchar_GT] = ACTIONS(166),
    [anon_sym_LTspace_GT] = ACTIONS(166),
    [anon_sym_LTwhitespace_GT] = ACTIONS(166),
    [anon_sym_LTnewline_GT] = ACTIONS(166),
    [anon_sym_LTtab_GT] = ACTIONS(166),
    [anon_sym_LTreturn_GT] = ACTIONS(166),
    [anon_sym_LTfeed_GT] = ACTIONS(166),
    [anon_sym_LTnull_GT] = ACTIONS(166),
    [anon_sym_LTdigit_GT] = ACTIONS(166),
    [anon_sym_LTvertical_GT] = ACTIONS(166),
    [anon_sym_LTword_GT] = ACTIONS(166),
    [anon_sym_LTalphabetic_GT] = ACTIONS(166),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(166),
    [anon_sym_LTboundary_GT] = ACTIONS(166),
    [anon_sym_LTbackspace_GT] = ACTIONS(166),
    [anon_sym_LTstart_GT] = ACTIONS(166),
    [anon_sym_LTend_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(166),
    [sym_raw] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_capture] = ACTIONS(166),
    [anon_sym_match] = ACTIONS(166),
    [anon_sym_either] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_let] = ACTIONS(166),
    [anon_sym_ahead] = ACTIONS(166),
    [anon_sym_behind] = ACTIONS(166),
    [sym_comment] = ACTIONS(37),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_lazy] = ACTIONS(166),
    [anon_sym_some] = ACTIONS(166),
    [anon_sym_any] = ACTIONS(166),
    [anon_sym_over] = ACTIONS(166),
    [anon_sym_option] = ACTIONS(166),
    [sym_amount] = ACTIONS(166),
    [aux_sym_literal_token1] = ACTIONS(166),
    [aux_sym_literal_token2] = ACTIONS(166),
    [anon_sym_not] = ACTIONS(166),
    [aux_sym_range_token1] = ACTIONS(166),
    [anon_sym_LTchar_GT] = ACTIONS(166),
    [anon_sym_LTspace_GT] = ACTIONS(166),
    [anon_sym_LTwhitespace_GT] = ACTIONS(166),
    [anon_sym_LTnewline_GT] = ACTIONS(166),
    [anon_sym_LTtab_GT] = ACTIONS(166),
    [anon_sym_LTreturn_GT] = ACTIONS(166),
    [anon_sym_LTfeed_GT] = ACTIONS(166),
    [anon_sym_LTnull_GT] = ACTIONS(166),
    [anon_sym_LTdigit_GT] = ACTIONS(166),
    [anon_sym_LTvertical_GT] = ACTIONS(166),
    [anon_sym_LTword_GT] = ACTIONS(166),
    [anon_sym_LTalphabetic_GT] = ACTIONS(166),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(166),
    [anon_sym_LTboundary_GT] = ACTIONS(166),
    [anon_sym_LTbackspace_GT] = ACTIONS(166),
    [anon_sym_LTstart_GT] = ACTIONS(166),
    [anon_sym_LTend_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(166),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(166),
    [sym_raw] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_capture] = ACTIONS(166),
    [anon_sym_match] = ACTIONS(166),
    [anon_sym_either] = ACTIONS(166),
    [anon_sym_let] = ACTIONS(166),
    [anon_sym_ahead] = ACTIONS(166),
    [anon_sym_behind] = ACTIONS(166),
    [sym_comment] = ACTIONS(37),
  },
  [25] = {
    [anon_sym_lazy] = ACTIONS(156),
    [anon_sym_some] = ACTIONS(156),
    [anon_sym_any] = ACTIONS(156),
    [anon_sym_over] = ACTIONS(156),
    [anon_sym_option] = ACTIONS(156),
    [sym_amount] = ACTIONS(156),
    [aux_sym_literal_token1] = ACTIONS(156),
    [aux_sym_literal_token2] = ACTIONS(156),
    [anon_sym_not] = ACTIONS(156),
    [aux_sym_range_token1] = ACTIONS(156),
    [anon_sym_LTchar_GT] = ACTIONS(156),
    [anon_sym_LTspace_GT] = ACTIONS(156),
    [anon_sym_LTwhitespace_GT] = ACTIONS(156),
    [anon_sym_LTnewline_GT] = ACTIONS(156),
    [anon_sym_LTtab_GT] = ACTIONS(156),
    [anon_sym_LTreturn_GT] = ACTIONS(156),
    [anon_sym_LTfeed_GT] = ACTIONS(156),
    [anon_sym_LTnull_GT] = ACTIONS(156),
    [anon_sym_LTdigit_GT] = ACTIONS(156),
    [anon_sym_LTvertical_GT] = ACTIONS(156),
    [anon_sym_LTword_GT] = ACTIONS(156),
    [anon_sym_LTalphabetic_GT] = ACTIONS(156),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(156),
    [anon_sym_LTboundary_GT] = ACTIONS(156),
    [anon_sym_LTbackspace_GT] = ACTIONS(156),
    [anon_sym_LTstart_GT] = ACTIONS(156),
    [anon_sym_LTend_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(156),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(156),
    [sym_raw] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_capture] = ACTIONS(156),
    [anon_sym_match] = ACTIONS(156),
    [anon_sym_either] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_let] = ACTIONS(156),
    [anon_sym_ahead] = ACTIONS(156),
    [anon_sym_behind] = ACTIONS(156),
    [sym_comment] = ACTIONS(37),
  },
  [26] = {
    [anon_sym_lazy] = ACTIONS(170),
    [anon_sym_some] = ACTIONS(170),
    [anon_sym_any] = ACTIONS(170),
    [anon_sym_over] = ACTIONS(170),
    [anon_sym_option] = ACTIONS(170),
    [sym_amount] = ACTIONS(170),
    [aux_sym_literal_token1] = ACTIONS(170),
    [aux_sym_literal_token2] = ACTIONS(170),
    [anon_sym_not] = ACTIONS(170),
    [aux_sym_range_token1] = ACTIONS(170),
    [anon_sym_LTchar_GT] = ACTIONS(170),
    [anon_sym_LTspace_GT] = ACTIONS(170),
    [anon_sym_LTwhitespace_GT] = ACTIONS(170),
    [anon_sym_LTnewline_GT] = ACTIONS(170),
    [anon_sym_LTtab_GT] = ACTIONS(170),
    [anon_sym_LTreturn_GT] = ACTIONS(170),
    [anon_sym_LTfeed_GT] = ACTIONS(170),
    [anon_sym_LTnull_GT] = ACTIONS(170),
    [anon_sym_LTdigit_GT] = ACTIONS(170),
    [anon_sym_LTvertical_GT] = ACTIONS(170),
    [anon_sym_LTword_GT] = ACTIONS(170),
    [anon_sym_LTalphabetic_GT] = ACTIONS(170),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(170),
    [anon_sym_LTboundary_GT] = ACTIONS(170),
    [anon_sym_LTbackspace_GT] = ACTIONS(170),
    [anon_sym_LTstart_GT] = ACTIONS(170),
    [anon_sym_LTend_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(170),
    [sym_raw] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_capture] = ACTIONS(170),
    [anon_sym_match] = ACTIONS(170),
    [anon_sym_either] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_let] = ACTIONS(170),
    [anon_sym_ahead] = ACTIONS(170),
    [anon_sym_behind] = ACTIONS(170),
    [sym_comment] = ACTIONS(37),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_lazy] = ACTIONS(164),
    [anon_sym_some] = ACTIONS(164),
    [anon_sym_any] = ACTIONS(164),
    [anon_sym_over] = ACTIONS(164),
    [anon_sym_option] = ACTIONS(164),
    [sym_amount] = ACTIONS(164),
    [aux_sym_literal_token1] = ACTIONS(164),
    [aux_sym_literal_token2] = ACTIONS(164),
    [anon_sym_not] = ACTIONS(164),
    [aux_sym_range_token1] = ACTIONS(164),
    [anon_sym_LTchar_GT] = ACTIONS(164),
    [anon_sym_LTspace_GT] = ACTIONS(164),
    [anon_sym_LTwhitespace_GT] = ACTIONS(164),
    [anon_sym_LTnewline_GT] = ACTIONS(164),
    [anon_sym_LTtab_GT] = ACTIONS(164),
    [anon_sym_LTreturn_GT] = ACTIONS(164),
    [anon_sym_LTfeed_GT] = ACTIONS(164),
    [anon_sym_LTnull_GT] = ACTIONS(164),
    [anon_sym_LTdigit_GT] = ACTIONS(164),
    [anon_sym_LTvertical_GT] = ACTIONS(164),
    [anon_sym_LTword_GT] = ACTIONS(164),
    [anon_sym_LTalphabetic_GT] = ACTIONS(164),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(164),
    [anon_sym_LTboundary_GT] = ACTIONS(164),
    [anon_sym_LTbackspace_GT] = ACTIONS(164),
    [anon_sym_LTstart_GT] = ACTIONS(164),
    [anon_sym_LTend_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(164),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(164),
    [sym_raw] = ACTIONS(164),
    [anon_sym_DOT] = ACTIONS(164),
    [anon_sym_capture] = ACTIONS(164),
    [anon_sym_match] = ACTIONS(164),
    [anon_sym_either] = ACTIONS(164),
    [anon_sym_let] = ACTIONS(164),
    [anon_sym_ahead] = ACTIONS(164),
    [anon_sym_behind] = ACTIONS(164),
    [sym_comment] = ACTIONS(37),
  },
  [28] = {
    [anon_sym_lazy] = ACTIONS(174),
    [anon_sym_some] = ACTIONS(174),
    [anon_sym_any] = ACTIONS(174),
    [anon_sym_over] = ACTIONS(174),
    [anon_sym_option] = ACTIONS(174),
    [sym_amount] = ACTIONS(174),
    [aux_sym_literal_token1] = ACTIONS(174),
    [aux_sym_literal_token2] = ACTIONS(174),
    [anon_sym_not] = ACTIONS(174),
    [aux_sym_range_token1] = ACTIONS(174),
    [anon_sym_LTchar_GT] = ACTIONS(174),
    [anon_sym_LTspace_GT] = ACTIONS(174),
    [anon_sym_LTwhitespace_GT] = ACTIONS(174),
    [anon_sym_LTnewline_GT] = ACTIONS(174),
    [anon_sym_LTtab_GT] = ACTIONS(174),
    [anon_sym_LTreturn_GT] = ACTIONS(174),
    [anon_sym_LTfeed_GT] = ACTIONS(174),
    [anon_sym_LTnull_GT] = ACTIONS(174),
    [anon_sym_LTdigit_GT] = ACTIONS(174),
    [anon_sym_LTvertical_GT] = ACTIONS(174),
    [anon_sym_LTword_GT] = ACTIONS(174),
    [anon_sym_LTalphabetic_GT] = ACTIONS(174),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(174),
    [anon_sym_LTboundary_GT] = ACTIONS(174),
    [anon_sym_LTbackspace_GT] = ACTIONS(174),
    [anon_sym_LTstart_GT] = ACTIONS(174),
    [anon_sym_LTend_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(174),
    [sym_raw] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_capture] = ACTIONS(174),
    [anon_sym_match] = ACTIONS(174),
    [anon_sym_either] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_let] = ACTIONS(174),
    [anon_sym_ahead] = ACTIONS(174),
    [anon_sym_behind] = ACTIONS(174),
    [sym_comment] = ACTIONS(37),
  },
  [29] = {
    [anon_sym_lazy] = ACTIONS(176),
    [anon_sym_some] = ACTIONS(176),
    [anon_sym_any] = ACTIONS(176),
    [anon_sym_over] = ACTIONS(176),
    [anon_sym_option] = ACTIONS(176),
    [sym_amount] = ACTIONS(176),
    [aux_sym_literal_token1] = ACTIONS(176),
    [aux_sym_literal_token2] = ACTIONS(176),
    [anon_sym_not] = ACTIONS(176),
    [aux_sym_range_token1] = ACTIONS(176),
    [anon_sym_LTchar_GT] = ACTIONS(176),
    [anon_sym_LTspace_GT] = ACTIONS(176),
    [anon_sym_LTwhitespace_GT] = ACTIONS(176),
    [anon_sym_LTnewline_GT] = ACTIONS(176),
    [anon_sym_LTtab_GT] = ACTIONS(176),
    [anon_sym_LTreturn_GT] = ACTIONS(176),
    [anon_sym_LTfeed_GT] = ACTIONS(176),
    [anon_sym_LTnull_GT] = ACTIONS(176),
    [anon_sym_LTdigit_GT] = ACTIONS(176),
    [anon_sym_LTvertical_GT] = ACTIONS(176),
    [anon_sym_LTword_GT] = ACTIONS(176),
    [anon_sym_LTalphabetic_GT] = ACTIONS(176),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(176),
    [anon_sym_LTboundary_GT] = ACTIONS(176),
    [anon_sym_LTbackspace_GT] = ACTIONS(176),
    [anon_sym_LTstart_GT] = ACTIONS(176),
    [anon_sym_LTend_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(176),
    [sym_raw] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(176),
    [anon_sym_capture] = ACTIONS(176),
    [anon_sym_match] = ACTIONS(176),
    [anon_sym_either] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_let] = ACTIONS(176),
    [anon_sym_ahead] = ACTIONS(176),
    [anon_sym_behind] = ACTIONS(176),
    [sym_comment] = ACTIONS(37),
  },
  [30] = {
    [anon_sym_lazy] = ACTIONS(152),
    [anon_sym_some] = ACTIONS(152),
    [anon_sym_any] = ACTIONS(152),
    [anon_sym_over] = ACTIONS(152),
    [anon_sym_option] = ACTIONS(152),
    [sym_amount] = ACTIONS(152),
    [aux_sym_literal_token1] = ACTIONS(152),
    [aux_sym_literal_token2] = ACTIONS(152),
    [anon_sym_not] = ACTIONS(152),
    [aux_sym_range_token1] = ACTIONS(152),
    [anon_sym_LTchar_GT] = ACTIONS(152),
    [anon_sym_LTspace_GT] = ACTIONS(152),
    [anon_sym_LTwhitespace_GT] = ACTIONS(152),
    [anon_sym_LTnewline_GT] = ACTIONS(152),
    [anon_sym_LTtab_GT] = ACTIONS(152),
    [anon_sym_LTreturn_GT] = ACTIONS(152),
    [anon_sym_LTfeed_GT] = ACTIONS(152),
    [anon_sym_LTnull_GT] = ACTIONS(152),
    [anon_sym_LTdigit_GT] = ACTIONS(152),
    [anon_sym_LTvertical_GT] = ACTIONS(152),
    [anon_sym_LTword_GT] = ACTIONS(152),
    [anon_sym_LTalphabetic_GT] = ACTIONS(152),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(152),
    [anon_sym_LTboundary_GT] = ACTIONS(152),
    [anon_sym_LTbackspace_GT] = ACTIONS(152),
    [anon_sym_LTstart_GT] = ACTIONS(152),
    [anon_sym_LTend_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(152),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(152),
    [sym_raw] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_capture] = ACTIONS(152),
    [anon_sym_match] = ACTIONS(152),
    [anon_sym_either] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_let] = ACTIONS(152),
    [anon_sym_ahead] = ACTIONS(152),
    [anon_sym_behind] = ACTIONS(152),
    [sym_comment] = ACTIONS(37),
  },
  [31] = {
    [anon_sym_lazy] = ACTIONS(160),
    [anon_sym_some] = ACTIONS(160),
    [anon_sym_any] = ACTIONS(160),
    [anon_sym_over] = ACTIONS(160),
    [anon_sym_option] = ACTIONS(160),
    [sym_amount] = ACTIONS(160),
    [aux_sym_literal_token1] = ACTIONS(160),
    [aux_sym_literal_token2] = ACTIONS(160),
    [anon_sym_not] = ACTIONS(160),
    [aux_sym_range_token1] = ACTIONS(160),
    [anon_sym_LTchar_GT] = ACTIONS(160),
    [anon_sym_LTspace_GT] = ACTIONS(160),
    [anon_sym_LTwhitespace_GT] = ACTIONS(160),
    [anon_sym_LTnewline_GT] = ACTIONS(160),
    [anon_sym_LTtab_GT] = ACTIONS(160),
    [anon_sym_LTreturn_GT] = ACTIONS(160),
    [anon_sym_LTfeed_GT] = ACTIONS(160),
    [anon_sym_LTnull_GT] = ACTIONS(160),
    [anon_sym_LTdigit_GT] = ACTIONS(160),
    [anon_sym_LTvertical_GT] = ACTIONS(160),
    [anon_sym_LTword_GT] = ACTIONS(160),
    [anon_sym_LTalphabetic_GT] = ACTIONS(160),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(160),
    [anon_sym_LTboundary_GT] = ACTIONS(160),
    [anon_sym_LTbackspace_GT] = ACTIONS(160),
    [anon_sym_LTstart_GT] = ACTIONS(160),
    [anon_sym_LTend_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(160),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(160),
    [sym_raw] = ACTIONS(160),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_capture] = ACTIONS(160),
    [anon_sym_match] = ACTIONS(160),
    [anon_sym_either] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_let] = ACTIONS(160),
    [anon_sym_ahead] = ACTIONS(160),
    [anon_sym_behind] = ACTIONS(160),
    [sym_comment] = ACTIONS(37),
  },
  [32] = {
    [anon_sym_lazy] = ACTIONS(178),
    [anon_sym_some] = ACTIONS(178),
    [anon_sym_any] = ACTIONS(178),
    [anon_sym_over] = ACTIONS(178),
    [anon_sym_option] = ACTIONS(178),
    [sym_amount] = ACTIONS(178),
    [aux_sym_literal_token1] = ACTIONS(178),
    [aux_sym_literal_token2] = ACTIONS(178),
    [anon_sym_not] = ACTIONS(178),
    [aux_sym_range_token1] = ACTIONS(178),
    [anon_sym_LTchar_GT] = ACTIONS(178),
    [anon_sym_LTspace_GT] = ACTIONS(178),
    [anon_sym_LTwhitespace_GT] = ACTIONS(178),
    [anon_sym_LTnewline_GT] = ACTIONS(178),
    [anon_sym_LTtab_GT] = ACTIONS(178),
    [anon_sym_LTreturn_GT] = ACTIONS(178),
    [anon_sym_LTfeed_GT] = ACTIONS(178),
    [anon_sym_LTnull_GT] = ACTIONS(178),
    [anon_sym_LTdigit_GT] = ACTIONS(178),
    [anon_sym_LTvertical_GT] = ACTIONS(178),
    [anon_sym_LTword_GT] = ACTIONS(178),
    [anon_sym_LTalphabetic_GT] = ACTIONS(178),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(178),
    [anon_sym_LTboundary_GT] = ACTIONS(178),
    [anon_sym_LTbackspace_GT] = ACTIONS(178),
    [anon_sym_LTstart_GT] = ACTIONS(178),
    [anon_sym_LTend_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(178),
    [sym_raw] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_capture] = ACTIONS(178),
    [anon_sym_match] = ACTIONS(178),
    [anon_sym_either] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_let] = ACTIONS(178),
    [anon_sym_ahead] = ACTIONS(178),
    [anon_sym_behind] = ACTIONS(178),
    [sym_comment] = ACTIONS(37),
  },
  [33] = {
    [anon_sym_lazy] = ACTIONS(148),
    [anon_sym_some] = ACTIONS(148),
    [anon_sym_any] = ACTIONS(148),
    [anon_sym_over] = ACTIONS(148),
    [anon_sym_option] = ACTIONS(148),
    [sym_amount] = ACTIONS(148),
    [aux_sym_literal_token1] = ACTIONS(148),
    [aux_sym_literal_token2] = ACTIONS(148),
    [anon_sym_not] = ACTIONS(148),
    [aux_sym_range_token1] = ACTIONS(148),
    [anon_sym_LTchar_GT] = ACTIONS(148),
    [anon_sym_LTspace_GT] = ACTIONS(148),
    [anon_sym_LTwhitespace_GT] = ACTIONS(148),
    [anon_sym_LTnewline_GT] = ACTIONS(148),
    [anon_sym_LTtab_GT] = ACTIONS(148),
    [anon_sym_LTreturn_GT] = ACTIONS(148),
    [anon_sym_LTfeed_GT] = ACTIONS(148),
    [anon_sym_LTnull_GT] = ACTIONS(148),
    [anon_sym_LTdigit_GT] = ACTIONS(148),
    [anon_sym_LTvertical_GT] = ACTIONS(148),
    [anon_sym_LTword_GT] = ACTIONS(148),
    [anon_sym_LTalphabetic_GT] = ACTIONS(148),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(148),
    [anon_sym_LTboundary_GT] = ACTIONS(148),
    [anon_sym_LTbackspace_GT] = ACTIONS(148),
    [anon_sym_LTstart_GT] = ACTIONS(148),
    [anon_sym_LTend_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(148),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(148),
    [sym_raw] = ACTIONS(148),
    [anon_sym_DOT] = ACTIONS(148),
    [anon_sym_capture] = ACTIONS(148),
    [anon_sym_match] = ACTIONS(148),
    [anon_sym_either] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_let] = ACTIONS(148),
    [anon_sym_ahead] = ACTIONS(148),
    [anon_sym_behind] = ACTIONS(148),
    [sym_comment] = ACTIONS(37),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_lazy] = ACTIONS(182),
    [anon_sym_some] = ACTIONS(182),
    [anon_sym_any] = ACTIONS(182),
    [anon_sym_over] = ACTIONS(182),
    [anon_sym_option] = ACTIONS(182),
    [sym_amount] = ACTIONS(182),
    [aux_sym_literal_token1] = ACTIONS(182),
    [aux_sym_literal_token2] = ACTIONS(182),
    [anon_sym_not] = ACTIONS(182),
    [aux_sym_range_token1] = ACTIONS(182),
    [anon_sym_LTchar_GT] = ACTIONS(182),
    [anon_sym_LTspace_GT] = ACTIONS(182),
    [anon_sym_LTwhitespace_GT] = ACTIONS(182),
    [anon_sym_LTnewline_GT] = ACTIONS(182),
    [anon_sym_LTtab_GT] = ACTIONS(182),
    [anon_sym_LTreturn_GT] = ACTIONS(182),
    [anon_sym_LTfeed_GT] = ACTIONS(182),
    [anon_sym_LTnull_GT] = ACTIONS(182),
    [anon_sym_LTdigit_GT] = ACTIONS(182),
    [anon_sym_LTvertical_GT] = ACTIONS(182),
    [anon_sym_LTword_GT] = ACTIONS(182),
    [anon_sym_LTalphabetic_GT] = ACTIONS(182),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(182),
    [anon_sym_LTboundary_GT] = ACTIONS(182),
    [anon_sym_LTbackspace_GT] = ACTIONS(182),
    [anon_sym_LTstart_GT] = ACTIONS(182),
    [anon_sym_LTend_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(182),
    [sym_raw] = ACTIONS(182),
    [anon_sym_DOT] = ACTIONS(182),
    [anon_sym_capture] = ACTIONS(182),
    [anon_sym_match] = ACTIONS(182),
    [anon_sym_either] = ACTIONS(182),
    [anon_sym_let] = ACTIONS(182),
    [anon_sym_ahead] = ACTIONS(182),
    [anon_sym_behind] = ACTIONS(182),
    [sym_comment] = ACTIONS(37),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_lazy] = ACTIONS(170),
    [anon_sym_some] = ACTIONS(170),
    [anon_sym_any] = ACTIONS(170),
    [anon_sym_over] = ACTIONS(170),
    [anon_sym_option] = ACTIONS(170),
    [sym_amount] = ACTIONS(170),
    [aux_sym_literal_token1] = ACTIONS(170),
    [aux_sym_literal_token2] = ACTIONS(170),
    [anon_sym_not] = ACTIONS(170),
    [aux_sym_range_token1] = ACTIONS(170),
    [anon_sym_LTchar_GT] = ACTIONS(170),
    [anon_sym_LTspace_GT] = ACTIONS(170),
    [anon_sym_LTwhitespace_GT] = ACTIONS(170),
    [anon_sym_LTnewline_GT] = ACTIONS(170),
    [anon_sym_LTtab_GT] = ACTIONS(170),
    [anon_sym_LTreturn_GT] = ACTIONS(170),
    [anon_sym_LTfeed_GT] = ACTIONS(170),
    [anon_sym_LTnull_GT] = ACTIONS(170),
    [anon_sym_LTdigit_GT] = ACTIONS(170),
    [anon_sym_LTvertical_GT] = ACTIONS(170),
    [anon_sym_LTword_GT] = ACTIONS(170),
    [anon_sym_LTalphabetic_GT] = ACTIONS(170),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(170),
    [anon_sym_LTboundary_GT] = ACTIONS(170),
    [anon_sym_LTbackspace_GT] = ACTIONS(170),
    [anon_sym_LTstart_GT] = ACTIONS(170),
    [anon_sym_LTend_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(170),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(170),
    [sym_raw] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_capture] = ACTIONS(170),
    [anon_sym_match] = ACTIONS(170),
    [anon_sym_either] = ACTIONS(170),
    [anon_sym_let] = ACTIONS(170),
    [anon_sym_ahead] = ACTIONS(170),
    [anon_sym_behind] = ACTIONS(170),
    [sym_comment] = ACTIONS(37),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_lazy] = ACTIONS(176),
    [anon_sym_some] = ACTIONS(176),
    [anon_sym_any] = ACTIONS(176),
    [anon_sym_over] = ACTIONS(176),
    [anon_sym_option] = ACTIONS(176),
    [sym_amount] = ACTIONS(176),
    [aux_sym_literal_token1] = ACTIONS(176),
    [aux_sym_literal_token2] = ACTIONS(176),
    [anon_sym_not] = ACTIONS(176),
    [aux_sym_range_token1] = ACTIONS(176),
    [anon_sym_LTchar_GT] = ACTIONS(176),
    [anon_sym_LTspace_GT] = ACTIONS(176),
    [anon_sym_LTwhitespace_GT] = ACTIONS(176),
    [anon_sym_LTnewline_GT] = ACTIONS(176),
    [anon_sym_LTtab_GT] = ACTIONS(176),
    [anon_sym_LTreturn_GT] = ACTIONS(176),
    [anon_sym_LTfeed_GT] = ACTIONS(176),
    [anon_sym_LTnull_GT] = ACTIONS(176),
    [anon_sym_LTdigit_GT] = ACTIONS(176),
    [anon_sym_LTvertical_GT] = ACTIONS(176),
    [anon_sym_LTword_GT] = ACTIONS(176),
    [anon_sym_LTalphabetic_GT] = ACTIONS(176),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(176),
    [anon_sym_LTboundary_GT] = ACTIONS(176),
    [anon_sym_LTbackspace_GT] = ACTIONS(176),
    [anon_sym_LTstart_GT] = ACTIONS(176),
    [anon_sym_LTend_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(176),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(176),
    [sym_raw] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(176),
    [anon_sym_capture] = ACTIONS(176),
    [anon_sym_match] = ACTIONS(176),
    [anon_sym_either] = ACTIONS(176),
    [anon_sym_let] = ACTIONS(176),
    [anon_sym_ahead] = ACTIONS(176),
    [anon_sym_behind] = ACTIONS(176),
    [sym_comment] = ACTIONS(37),
  },
  [37] = {
    [anon_sym_lazy] = ACTIONS(188),
    [anon_sym_some] = ACTIONS(188),
    [anon_sym_any] = ACTIONS(188),
    [anon_sym_over] = ACTIONS(188),
    [anon_sym_option] = ACTIONS(188),
    [sym_amount] = ACTIONS(188),
    [aux_sym_literal_token1] = ACTIONS(188),
    [aux_sym_literal_token2] = ACTIONS(188),
    [anon_sym_not] = ACTIONS(188),
    [aux_sym_range_token1] = ACTIONS(188),
    [anon_sym_LTchar_GT] = ACTIONS(188),
    [anon_sym_LTspace_GT] = ACTIONS(188),
    [anon_sym_LTwhitespace_GT] = ACTIONS(188),
    [anon_sym_LTnewline_GT] = ACTIONS(188),
    [anon_sym_LTtab_GT] = ACTIONS(188),
    [anon_sym_LTreturn_GT] = ACTIONS(188),
    [anon_sym_LTfeed_GT] = ACTIONS(188),
    [anon_sym_LTnull_GT] = ACTIONS(188),
    [anon_sym_LTdigit_GT] = ACTIONS(188),
    [anon_sym_LTvertical_GT] = ACTIONS(188),
    [anon_sym_LTword_GT] = ACTIONS(188),
    [anon_sym_LTalphabetic_GT] = ACTIONS(188),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(188),
    [anon_sym_LTboundary_GT] = ACTIONS(188),
    [anon_sym_LTbackspace_GT] = ACTIONS(188),
    [anon_sym_LTstart_GT] = ACTIONS(188),
    [anon_sym_LTend_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(188),
    [sym_raw] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(188),
    [anon_sym_capture] = ACTIONS(188),
    [anon_sym_match] = ACTIONS(188),
    [anon_sym_either] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_let] = ACTIONS(188),
    [anon_sym_ahead] = ACTIONS(188),
    [anon_sym_behind] = ACTIONS(188),
    [sym_comment] = ACTIONS(37),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_lazy] = ACTIONS(174),
    [anon_sym_some] = ACTIONS(174),
    [anon_sym_any] = ACTIONS(174),
    [anon_sym_over] = ACTIONS(174),
    [anon_sym_option] = ACTIONS(174),
    [sym_amount] = ACTIONS(174),
    [aux_sym_literal_token1] = ACTIONS(174),
    [aux_sym_literal_token2] = ACTIONS(174),
    [anon_sym_not] = ACTIONS(174),
    [aux_sym_range_token1] = ACTIONS(174),
    [anon_sym_LTchar_GT] = ACTIONS(174),
    [anon_sym_LTspace_GT] = ACTIONS(174),
    [anon_sym_LTwhitespace_GT] = ACTIONS(174),
    [anon_sym_LTnewline_GT] = ACTIONS(174),
    [anon_sym_LTtab_GT] = ACTIONS(174),
    [anon_sym_LTreturn_GT] = ACTIONS(174),
    [anon_sym_LTfeed_GT] = ACTIONS(174),
    [anon_sym_LTnull_GT] = ACTIONS(174),
    [anon_sym_LTdigit_GT] = ACTIONS(174),
    [anon_sym_LTvertical_GT] = ACTIONS(174),
    [anon_sym_LTword_GT] = ACTIONS(174),
    [anon_sym_LTalphabetic_GT] = ACTIONS(174),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(174),
    [anon_sym_LTboundary_GT] = ACTIONS(174),
    [anon_sym_LTbackspace_GT] = ACTIONS(174),
    [anon_sym_LTstart_GT] = ACTIONS(174),
    [anon_sym_LTend_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(174),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(174),
    [sym_raw] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_capture] = ACTIONS(174),
    [anon_sym_match] = ACTIONS(174),
    [anon_sym_either] = ACTIONS(174),
    [anon_sym_let] = ACTIONS(174),
    [anon_sym_ahead] = ACTIONS(174),
    [anon_sym_behind] = ACTIONS(174),
    [sym_comment] = ACTIONS(37),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_lazy] = ACTIONS(162),
    [anon_sym_some] = ACTIONS(162),
    [anon_sym_any] = ACTIONS(162),
    [anon_sym_over] = ACTIONS(162),
    [anon_sym_option] = ACTIONS(162),
    [sym_amount] = ACTIONS(162),
    [aux_sym_literal_token1] = ACTIONS(162),
    [aux_sym_literal_token2] = ACTIONS(162),
    [anon_sym_not] = ACTIONS(162),
    [aux_sym_range_token1] = ACTIONS(162),
    [anon_sym_LTchar_GT] = ACTIONS(162),
    [anon_sym_LTspace_GT] = ACTIONS(162),
    [anon_sym_LTwhitespace_GT] = ACTIONS(162),
    [anon_sym_LTnewline_GT] = ACTIONS(162),
    [anon_sym_LTtab_GT] = ACTIONS(162),
    [anon_sym_LTreturn_GT] = ACTIONS(162),
    [anon_sym_LTfeed_GT] = ACTIONS(162),
    [anon_sym_LTnull_GT] = ACTIONS(162),
    [anon_sym_LTdigit_GT] = ACTIONS(162),
    [anon_sym_LTvertical_GT] = ACTIONS(162),
    [anon_sym_LTword_GT] = ACTIONS(162),
    [anon_sym_LTalphabetic_GT] = ACTIONS(162),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(162),
    [anon_sym_LTboundary_GT] = ACTIONS(162),
    [anon_sym_LTbackspace_GT] = ACTIONS(162),
    [anon_sym_LTstart_GT] = ACTIONS(162),
    [anon_sym_LTend_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(162),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(162),
    [sym_raw] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [anon_sym_capture] = ACTIONS(162),
    [anon_sym_match] = ACTIONS(162),
    [anon_sym_either] = ACTIONS(162),
    [anon_sym_let] = ACTIONS(162),
    [anon_sym_ahead] = ACTIONS(162),
    [anon_sym_behind] = ACTIONS(162),
    [sym_comment] = ACTIONS(37),
  },
  [40] = {
    [anon_sym_lazy] = ACTIONS(182),
    [anon_sym_some] = ACTIONS(182),
    [anon_sym_any] = ACTIONS(182),
    [anon_sym_over] = ACTIONS(182),
    [anon_sym_option] = ACTIONS(182),
    [sym_amount] = ACTIONS(182),
    [aux_sym_literal_token1] = ACTIONS(182),
    [aux_sym_literal_token2] = ACTIONS(182),
    [anon_sym_not] = ACTIONS(182),
    [aux_sym_range_token1] = ACTIONS(182),
    [anon_sym_LTchar_GT] = ACTIONS(182),
    [anon_sym_LTspace_GT] = ACTIONS(182),
    [anon_sym_LTwhitespace_GT] = ACTIONS(182),
    [anon_sym_LTnewline_GT] = ACTIONS(182),
    [anon_sym_LTtab_GT] = ACTIONS(182),
    [anon_sym_LTreturn_GT] = ACTIONS(182),
    [anon_sym_LTfeed_GT] = ACTIONS(182),
    [anon_sym_LTnull_GT] = ACTIONS(182),
    [anon_sym_LTdigit_GT] = ACTIONS(182),
    [anon_sym_LTvertical_GT] = ACTIONS(182),
    [anon_sym_LTword_GT] = ACTIONS(182),
    [anon_sym_LTalphabetic_GT] = ACTIONS(182),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(182),
    [anon_sym_LTboundary_GT] = ACTIONS(182),
    [anon_sym_LTbackspace_GT] = ACTIONS(182),
    [anon_sym_LTstart_GT] = ACTIONS(182),
    [anon_sym_LTend_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(182),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(182),
    [sym_raw] = ACTIONS(182),
    [anon_sym_DOT] = ACTIONS(182),
    [anon_sym_capture] = ACTIONS(182),
    [anon_sym_match] = ACTIONS(182),
    [anon_sym_either] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [anon_sym_let] = ACTIONS(182),
    [anon_sym_ahead] = ACTIONS(182),
    [anon_sym_behind] = ACTIONS(182),
    [sym_comment] = ACTIONS(37),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_lazy] = ACTIONS(188),
    [anon_sym_some] = ACTIONS(188),
    [anon_sym_any] = ACTIONS(188),
    [anon_sym_over] = ACTIONS(188),
    [anon_sym_option] = ACTIONS(188),
    [sym_amount] = ACTIONS(188),
    [aux_sym_literal_token1] = ACTIONS(188),
    [aux_sym_literal_token2] = ACTIONS(188),
    [anon_sym_not] = ACTIONS(188),
    [aux_sym_range_token1] = ACTIONS(188),
    [anon_sym_LTchar_GT] = ACTIONS(188),
    [anon_sym_LTspace_GT] = ACTIONS(188),
    [anon_sym_LTwhitespace_GT] = ACTIONS(188),
    [anon_sym_LTnewline_GT] = ACTIONS(188),
    [anon_sym_LTtab_GT] = ACTIONS(188),
    [anon_sym_LTreturn_GT] = ACTIONS(188),
    [anon_sym_LTfeed_GT] = ACTIONS(188),
    [anon_sym_LTnull_GT] = ACTIONS(188),
    [anon_sym_LTdigit_GT] = ACTIONS(188),
    [anon_sym_LTvertical_GT] = ACTIONS(188),
    [anon_sym_LTword_GT] = ACTIONS(188),
    [anon_sym_LTalphabetic_GT] = ACTIONS(188),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(188),
    [anon_sym_LTboundary_GT] = ACTIONS(188),
    [anon_sym_LTbackspace_GT] = ACTIONS(188),
    [anon_sym_LTstart_GT] = ACTIONS(188),
    [anon_sym_LTend_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(188),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(188),
    [sym_raw] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(188),
    [anon_sym_capture] = ACTIONS(188),
    [anon_sym_match] = ACTIONS(188),
    [anon_sym_either] = ACTIONS(188),
    [anon_sym_let] = ACTIONS(188),
    [anon_sym_ahead] = ACTIONS(188),
    [anon_sym_behind] = ACTIONS(188),
    [sym_comment] = ACTIONS(37),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_lazy] = ACTIONS(178),
    [anon_sym_some] = ACTIONS(178),
    [anon_sym_any] = ACTIONS(178),
    [anon_sym_over] = ACTIONS(178),
    [anon_sym_option] = ACTIONS(178),
    [sym_amount] = ACTIONS(178),
    [aux_sym_literal_token1] = ACTIONS(178),
    [aux_sym_literal_token2] = ACTIONS(178),
    [anon_sym_not] = ACTIONS(178),
    [aux_sym_range_token1] = ACTIONS(178),
    [anon_sym_LTchar_GT] = ACTIONS(178),
    [anon_sym_LTspace_GT] = ACTIONS(178),
    [anon_sym_LTwhitespace_GT] = ACTIONS(178),
    [anon_sym_LTnewline_GT] = ACTIONS(178),
    [anon_sym_LTtab_GT] = ACTIONS(178),
    [anon_sym_LTreturn_GT] = ACTIONS(178),
    [anon_sym_LTfeed_GT] = ACTIONS(178),
    [anon_sym_LTnull_GT] = ACTIONS(178),
    [anon_sym_LTdigit_GT] = ACTIONS(178),
    [anon_sym_LTvertical_GT] = ACTIONS(178),
    [anon_sym_LTword_GT] = ACTIONS(178),
    [anon_sym_LTalphabetic_GT] = ACTIONS(178),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(178),
    [anon_sym_LTboundary_GT] = ACTIONS(178),
    [anon_sym_LTbackspace_GT] = ACTIONS(178),
    [anon_sym_LTstart_GT] = ACTIONS(178),
    [anon_sym_LTend_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(178),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(178),
    [sym_raw] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_capture] = ACTIONS(178),
    [anon_sym_match] = ACTIONS(178),
    [anon_sym_either] = ACTIONS(178),
    [anon_sym_let] = ACTIONS(178),
    [anon_sym_ahead] = ACTIONS(178),
    [anon_sym_behind] = ACTIONS(178),
    [sym_comment] = ACTIONS(37),
  },
  [43] = {
    [sym_unicode_category] = STATE(87),
    [sym_amount] = ACTIONS(198),
    [aux_sym_range_token1] = ACTIONS(200),
    [anon_sym_LTchar_GT] = ACTIONS(202),
    [anon_sym_LTspace_GT] = ACTIONS(202),
    [anon_sym_LTwhitespace_GT] = ACTIONS(202),
    [anon_sym_LTnewline_GT] = ACTIONS(202),
    [anon_sym_LTtab_GT] = ACTIONS(202),
    [anon_sym_LTreturn_GT] = ACTIONS(202),
    [anon_sym_LTfeed_GT] = ACTIONS(202),
    [anon_sym_LTnull_GT] = ACTIONS(202),
    [anon_sym_LTdigit_GT] = ACTIONS(202),
    [anon_sym_LTvertical_GT] = ACTIONS(202),
    [anon_sym_LTword_GT] = ACTIONS(202),
    [anon_sym_LTalphabetic_GT] = ACTIONS(202),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(202),
    [anon_sym_LTboundary_GT] = ACTIONS(202),
    [anon_sym_LTbackspace_GT] = ACTIONS(202),
    [anon_sym_LTstart_GT] = ACTIONS(202),
    [anon_sym_LTend_GT] = ACTIONS(202),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [aux_sym_negative_char_class_token1] = ACTIONS(204),
    [anon_sym_ahead] = ACTIONS(206),
    [anon_sym_behind] = ACTIONS(206),
    [sym_comment] = ACTIONS(37),
  },
  [44] = {
    [sym_unicode_category] = STATE(87),
    [sym_amount] = ACTIONS(198),
    [aux_sym_range_token1] = ACTIONS(200),
    [anon_sym_LTchar_GT] = ACTIONS(202),
    [anon_sym_LTspace_GT] = ACTIONS(202),
    [anon_sym_LTwhitespace_GT] = ACTIONS(202),
    [anon_sym_LTnewline_GT] = ACTIONS(202),
    [anon_sym_LTtab_GT] = ACTIONS(202),
    [anon_sym_LTreturn_GT] = ACTIONS(202),
    [anon_sym_LTfeed_GT] = ACTIONS(202),
    [anon_sym_LTnull_GT] = ACTIONS(202),
    [anon_sym_LTdigit_GT] = ACTIONS(202),
    [anon_sym_LTvertical_GT] = ACTIONS(202),
    [anon_sym_LTword_GT] = ACTIONS(202),
    [anon_sym_LTalphabetic_GT] = ACTIONS(202),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(202),
    [anon_sym_LTboundary_GT] = ACTIONS(202),
    [anon_sym_LTbackspace_GT] = ACTIONS(202),
    [anon_sym_LTstart_GT] = ACTIONS(202),
    [anon_sym_LTend_GT] = ACTIONS(202),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(23),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(23),
    [aux_sym_negative_char_class_token1] = ACTIONS(204),
    [anon_sym_ahead] = ACTIONS(208),
    [anon_sym_behind] = ACTIONS(208),
    [sym_comment] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_over,
    ACTIONS(214), 1,
      sym_amount,
    ACTIONS(210), 3,
      anon_sym_some,
      anon_sym_any,
      anon_sym_option,
  [15] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_over,
    ACTIONS(220), 1,
      sym_amount,
    ACTIONS(216), 3,
      anon_sym_some,
      anon_sym_any,
      anon_sym_option,
  [30] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
  [43] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
  [66] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_to,
    ACTIONS(232), 1,
      anon_sym_of,
  [76] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_variable,
  [86] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
  [96] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_of,
    ACTIONS(238), 1,
      sym_semicolon,
  [106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_to,
    ACTIONS(242), 1,
      anon_sym_of,
  [116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_to,
    ACTIONS(246), 1,
      anon_sym_of,
  [126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_to,
    ACTIONS(250), 1,
      anon_sym_of,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_semicolon,
    ACTIONS(252), 1,
      anon_sym_of,
  [156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
  [186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
  [196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
  [206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      sym_semicolon,
      anon_sym_EQ,
  [214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_variable,
  [224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_semicolon,
  [258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_to,
  [265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_to,
  [272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_amount,
  [279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_amount,
  [286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_of,
  [293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_semicolon,
  [300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_of,
  [307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_semicolon,
  [314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_semicolon,
  [321] = 2,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_range_token1,
  [328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_EQ,
  [335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
  [342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_of,
  [349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_amount,
  [356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_semicolon,
  [363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_semicolon,
  [370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_to,
  [377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_semicolon,
  [384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_to,
  [391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_of,
  [398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_semicolon,
  [405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_semicolon,
  [412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_of,
  [419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_amount,
  [426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_of,
  [433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ,
  [440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_of,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_amount,
  [454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_of,
  [461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_amount,
  [468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_amount,
  [475] = 2,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_range_token1,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_amount,
  [489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_amount,
  [496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_amount,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(45)] = 0,
  [SMALL_STATE(46)] = 15,
  [SMALL_STATE(47)] = 30,
  [SMALL_STATE(48)] = 43,
  [SMALL_STATE(49)] = 56,
  [SMALL_STATE(50)] = 66,
  [SMALL_STATE(51)] = 76,
  [SMALL_STATE(52)] = 86,
  [SMALL_STATE(53)] = 96,
  [SMALL_STATE(54)] = 106,
  [SMALL_STATE(55)] = 116,
  [SMALL_STATE(56)] = 126,
  [SMALL_STATE(57)] = 136,
  [SMALL_STATE(58)] = 146,
  [SMALL_STATE(59)] = 156,
  [SMALL_STATE(60)] = 166,
  [SMALL_STATE(61)] = 176,
  [SMALL_STATE(62)] = 186,
  [SMALL_STATE(63)] = 196,
  [SMALL_STATE(64)] = 206,
  [SMALL_STATE(65)] = 214,
  [SMALL_STATE(66)] = 224,
  [SMALL_STATE(67)] = 234,
  [SMALL_STATE(68)] = 244,
  [SMALL_STATE(69)] = 251,
  [SMALL_STATE(70)] = 258,
  [SMALL_STATE(71)] = 265,
  [SMALL_STATE(72)] = 272,
  [SMALL_STATE(73)] = 279,
  [SMALL_STATE(74)] = 286,
  [SMALL_STATE(75)] = 293,
  [SMALL_STATE(76)] = 300,
  [SMALL_STATE(77)] = 307,
  [SMALL_STATE(78)] = 314,
  [SMALL_STATE(79)] = 321,
  [SMALL_STATE(80)] = 328,
  [SMALL_STATE(81)] = 335,
  [SMALL_STATE(82)] = 342,
  [SMALL_STATE(83)] = 349,
  [SMALL_STATE(84)] = 356,
  [SMALL_STATE(85)] = 363,
  [SMALL_STATE(86)] = 370,
  [SMALL_STATE(87)] = 377,
  [SMALL_STATE(88)] = 384,
  [SMALL_STATE(89)] = 391,
  [SMALL_STATE(90)] = 398,
  [SMALL_STATE(91)] = 405,
  [SMALL_STATE(92)] = 412,
  [SMALL_STATE(93)] = 419,
  [SMALL_STATE(94)] = 426,
  [SMALL_STATE(95)] = 433,
  [SMALL_STATE(96)] = 440,
  [SMALL_STATE(97)] = 447,
  [SMALL_STATE(98)] = 454,
  [SMALL_STATE(99)] = 461,
  [SMALL_STATE(100)] = 468,
  [SMALL_STATE(101)] = 475,
  [SMALL_STATE(102)] = 482,
  [SMALL_STATE(103)] = 489,
  [SMALL_STATE(104)] = 496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assertion, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assertion, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 6),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [256] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_char_class, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_category, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
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
