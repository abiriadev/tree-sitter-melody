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
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_lazy = 1,
  anon_sym_to = 2,
  anon_sym_some = 3,
  anon_sym_any = 4,
  anon_sym_over = 5,
  anon_sym_option = 6,
  anon_sym_of = 7,
  sym_amount = 8,
  anon_sym_not = 9,
  anon_sym_SEMI = 10,
  aux_sym_literal_token1 = 11,
  aux_sym_literal_token2 = 12,
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
  sym__statement = 84,
  sym_quantifier = 85,
  sym_atom = 86,
  sym_expression = 87,
  sym_literal = 88,
  sym_range = 89,
  sym_symbol = 90,
  sym__unicode_category = 91,
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
  [anon_sym_not] = "not",
  [anon_sym_SEMI] = ";",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
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
  [sym__statement] = "_statement",
  [sym_quantifier] = "quantifier",
  [sym_atom] = "atom",
  [sym_expression] = "expression",
  [sym_literal] = "literal",
  [sym_range] = "range",
  [sym_symbol] = "symbol",
  [sym__unicode_category] = "_unicode_category",
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
  [anon_sym_not] = anon_sym_not,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
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
  [sym__statement] = sym__statement,
  [sym_quantifier] = sym_quantifier,
  [sym_atom] = sym_atom,
  [sym_expression] = sym_expression,
  [sym_literal] = sym_literal,
  [sym_range] = sym_range,
  [sym_symbol] = sym_symbol,
  [sym__unicode_category] = sym__unicode_category,
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
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token2] = {
    .visible = false,
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
  [sym__statement] = {
    .visible = false,
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
  [sym__unicode_category] = {
    .visible = false,
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

enum ts_field_identifiers {
  field_close = 1,
  field_open = 2,
  field_semicolon = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_open] = "open",
  [field_semicolon] = "semicolon",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_semicolon, 1},
  [1] =
    {field_semicolon, 2},
  [2] =
    {field_close, 2},
    {field_open, 0},
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(599);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '.') ADVANCE(693);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(610);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(701);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(621);
      if (lookahead == 'b') ADVANCE(617);
      if (lookahead == 'c') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead == 'm') ADVANCE(616);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == 't') ADVANCE(624);
      if (lookahead == '{') ADVANCE(698);
      if (lookahead == '}') ADVANCE(699);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '\\') ADVANCE(552);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '\\') ADVANCE(562);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(707);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(706);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(610);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 't') ADVANCE(387);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == 'b') ADVANCE(618);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '@' ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '{') ADVANCE(698);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(644);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(632);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(628);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(634);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(635);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(638);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(636);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(629);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(643);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(633);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(631);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(641);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(637);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(642);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(639);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(630);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(640);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(652);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(677);
      if (lookahead == '_') ADVANCE(323);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(679);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(645);
      if (lookahead == '_') ADVANCE(374);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(665);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(660);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(678);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(656);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(681);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(682);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(661);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(680);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(669);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(649);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(651);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(668);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(664);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(667);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(655);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(658);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(662);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(650);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(663);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(657);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(670);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(646);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(653);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(671);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(648);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(647);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(672);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(674);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(676);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(673);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(659);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(666);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(675);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(654);
      END_STATE();
    case 66:
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(683);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(684);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(324);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(338);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(416);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(558);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(190);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(481);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(161);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(487);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(340);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(342);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(493);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(325);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(376);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(326);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(327);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(427);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(494);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(428);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(496);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(429);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(430);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(431);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(263);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(525);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(544);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(398);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(225);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 149:
      if (lookahead == 'b') ADVANCE(402);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(405);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(407);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(232);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(410);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(303);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(588);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(504);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(519);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(545);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(546);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(547);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(548);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(549);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(550);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(551);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(702);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(704);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 250:
      if (lookahead == 'f') ADVANCE(606);
      END_STATE();
    case 251:
      if (lookahead == 'f') ADVANCE(285);
      END_STATE();
    case 252:
      if (lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 253:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 254:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(449);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(373);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 262:
      if (lookahead == 'h') ADVANCE(696);
      END_STATE();
    case 263:
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 264:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 303:
      if (lookahead == 'k') ADVANCE(480);
      END_STATE();
    case 304:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 305:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 306:
      if (lookahead == 'k') ADVANCE(54);
      END_STATE();
    case 307:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(574);
      if (lookahead == 's') ADVANCE(585);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 's') ADVANCE(587);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 330:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 334:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 335:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(432);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(570);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 429:
      if (lookahead == 'p') ADVANCE(573);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(575);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(576);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 478:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(522);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 552:
      if (lookahead == 'u') ADVANCE(596);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(1);
      END_STATE();
    case 553:
      if (lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 554:
      if (lookahead == 'u') ADVANCE(448);
      END_STATE();
    case 555:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 556:
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 557:
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 558:
      if (lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 559:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 560:
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 561:
      if (lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 562:
      if (lookahead == 'u') ADVANCE(597);
      if (lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(2);
      END_STATE();
    case 563:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 564:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 565:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 566:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 567:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 568:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 569:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 570:
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 571:
      if (lookahead == 'u') ADVANCE(380);
      END_STATE();
    case 572:
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 573:
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 574:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 575:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 576:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 577:
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 578:
      if (lookahead == 'w') ADVANCE(311);
      END_STATE();
    case 579:
      if (lookahead == 'w') ADVANCE(213);
      END_STATE();
    case 580:
      if (lookahead == 'y') ADVANCE(603);
      END_STATE();
    case 581:
      if (lookahead == 'y') ADVANCE(600);
      END_STATE();
    case 582:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 583:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 584:
      if (lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 585:
      if (lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 586:
      if (lookahead == 'y') ADVANCE(345);
      END_STATE();
    case 587:
      if (lookahead == 'y') ADVANCE(346);
      END_STATE();
    case 588:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 589:
      if (lookahead == 'z') ADVANCE(581);
      END_STATE();
    case 590:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1);
      END_STATE();
    case 591:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2);
      END_STATE();
    case 592:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(590);
      END_STATE();
    case 593:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(591);
      END_STATE();
    case 594:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(592);
      END_STATE();
    case 595:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(593);
      END_STATE();
    case 596:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(594);
      END_STATE();
    case 597:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(595);
      END_STATE();
    case 598:
      if (eof) ADVANCE(599);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '.') ADVANCE(693);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(621);
      if (lookahead == 'b') ADVANCE(617);
      if (lookahead == 'c') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == 'l') ADVANCE(615);
      if (lookahead == 'm') ADVANCE(616);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead == 'o') ADVANCE(626);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == '}') ADVANCE(699);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(598)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_range_token1);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'e') ADVANCE(689);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'f') ADVANCE(606);
      if (lookahead == 'p') ADVANCE(503);
      if (lookahead == 'v') ADVANCE(196);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'h') ADVANCE(688);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'i') ADVANCE(500);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == 'p') ADVANCE(503);
      if (lookahead == 'v') ADVANCE(196);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_range_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LTchar_GT);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LTspace_GT);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LTwhitespace_GT);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LTnewline_GT);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LTtab_GT);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LTreturn_GT);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_LTfeed_GT);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LTnull_GT);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LTdigit_GT);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LTvertical_GT);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LTword_GT);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LTalphabetic_GT);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LTalphanumeric_GT);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LTboundary_GT);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LTbackspace_GT);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LTstart_GT);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LTend_GT);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_GT);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONlowercase_letter_GT);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONuppercase_letter_GT);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcased_letter_GT);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_letter_GT);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_letter_GT);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmark_GT);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONenclosing_mark_GT);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONseparator_GT);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspace_separator_GT);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONline_separator_GT);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONparagraph_separator_GT);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsymbol_GT);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmath_symbol_GT);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_symbol_GT);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnumber_GT);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_number_GT);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_number_GT);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONpunctuation_GT);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdash_punctuation_GT);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONopen_punctuation_GT);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONclose_punctuation_GT);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_punctuation_GT);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_GT);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcontrol_GT);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONformat_GT);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONprivate_use_GT);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsurrogate_GT);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONunassigned_GT);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_raw);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_raw);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '`') ADVANCE(683);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'd') ADVANCE(703);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'h') ADVANCE(690);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'i') ADVANCE(691);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == 'n') ADVANCE(687);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_negative_char_class_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_capture);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_either);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_ahead);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_behind);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(707);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 598},
  [2] = {.lex_state = 598},
  [3] = {.lex_state = 598},
  [4] = {.lex_state = 598},
  [5] = {.lex_state = 598},
  [6] = {.lex_state = 598},
  [7] = {.lex_state = 598},
  [8] = {.lex_state = 598},
  [9] = {.lex_state = 598},
  [10] = {.lex_state = 598},
  [11] = {.lex_state = 598},
  [12] = {.lex_state = 598},
  [13] = {.lex_state = 598},
  [14] = {.lex_state = 598},
  [15] = {.lex_state = 598},
  [16] = {.lex_state = 598},
  [17] = {.lex_state = 598},
  [18] = {.lex_state = 598},
  [19] = {.lex_state = 598},
  [20] = {.lex_state = 598},
  [21] = {.lex_state = 598},
  [22] = {.lex_state = 598},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 598},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 598},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
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
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [aux_sym_literal_token2] = ACTIONS(1),
    [aux_sym_range_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(46),
    [sym__statement] = STATE(3),
    [sym_quantifier] = STATE(3),
    [sym_atom] = STATE(17),
    [sym_expression] = STATE(3),
    [sym_literal] = STATE(53),
    [sym_range] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym__unicode_category] = STATE(57),
    [sym_negative_char_class] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_group] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_assertion] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_lazy] = ACTIONS(7),
    [anon_sym_some] = ACTIONS(9),
    [anon_sym_any] = ACTIONS(9),
    [anon_sym_over] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(9),
    [sym_amount] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(15),
    [aux_sym_literal_token1] = ACTIONS(17),
    [aux_sym_literal_token2] = ACTIONS(17),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(21),
    [sym_raw] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_capture] = ACTIONS(27),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_either] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_ahead] = ACTIONS(33),
    [anon_sym_behind] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_quantifier] = STATE(2),
    [sym_atom] = STATE(17),
    [sym_expression] = STATE(2),
    [sym_literal] = STATE(53),
    [sym_range] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym__unicode_category] = STATE(57),
    [sym_negative_char_class] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_group] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_assertion] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_lazy] = ACTIONS(37),
    [anon_sym_some] = ACTIONS(40),
    [anon_sym_any] = ACTIONS(40),
    [anon_sym_over] = ACTIONS(43),
    [anon_sym_option] = ACTIONS(40),
    [sym_amount] = ACTIONS(46),
    [anon_sym_not] = ACTIONS(49),
    [aux_sym_literal_token1] = ACTIONS(52),
    [aux_sym_literal_token2] = ACTIONS(52),
    [aux_sym_range_token1] = ACTIONS(55),
    [anon_sym_LTchar_GT] = ACTIONS(58),
    [anon_sym_LTspace_GT] = ACTIONS(58),
    [anon_sym_LTwhitespace_GT] = ACTIONS(58),
    [anon_sym_LTnewline_GT] = ACTIONS(58),
    [anon_sym_LTtab_GT] = ACTIONS(58),
    [anon_sym_LTreturn_GT] = ACTIONS(58),
    [anon_sym_LTfeed_GT] = ACTIONS(58),
    [anon_sym_LTnull_GT] = ACTIONS(58),
    [anon_sym_LTdigit_GT] = ACTIONS(58),
    [anon_sym_LTvertical_GT] = ACTIONS(58),
    [anon_sym_LTword_GT] = ACTIONS(58),
    [anon_sym_LTalphabetic_GT] = ACTIONS(58),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(58),
    [anon_sym_LTboundary_GT] = ACTIONS(58),
    [anon_sym_LTbackspace_GT] = ACTIONS(58),
    [anon_sym_LTstart_GT] = ACTIONS(58),
    [anon_sym_LTend_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(58),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(58),
    [sym_raw] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_capture] = ACTIONS(67),
    [anon_sym_match] = ACTIONS(70),
    [anon_sym_either] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(73),
    [anon_sym_ahead] = ACTIONS(76),
    [anon_sym_behind] = ACTIONS(76),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym_quantifier] = STATE(2),
    [sym_atom] = STATE(17),
    [sym_expression] = STATE(2),
    [sym_literal] = STATE(53),
    [sym_range] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym__unicode_category] = STATE(57),
    [sym_negative_char_class] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_group] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_assertion] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_lazy] = ACTIONS(7),
    [anon_sym_some] = ACTIONS(9),
    [anon_sym_any] = ACTIONS(9),
    [anon_sym_over] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(9),
    [sym_amount] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(15),
    [aux_sym_literal_token1] = ACTIONS(17),
    [aux_sym_literal_token2] = ACTIONS(17),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(21),
    [sym_raw] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_capture] = ACTIONS(27),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_either] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_ahead] = ACTIONS(33),
    [anon_sym_behind] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym_quantifier] = STATE(2),
    [sym_atom] = STATE(17),
    [sym_expression] = STATE(2),
    [sym_literal] = STATE(53),
    [sym_range] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym__unicode_category] = STATE(57),
    [sym_negative_char_class] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_group] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_assertion] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_lazy] = ACTIONS(7),
    [anon_sym_some] = ACTIONS(9),
    [anon_sym_any] = ACTIONS(9),
    [anon_sym_over] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(9),
    [sym_amount] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(15),
    [aux_sym_literal_token1] = ACTIONS(17),
    [aux_sym_literal_token2] = ACTIONS(17),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(21),
    [sym_raw] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_capture] = ACTIONS(27),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_either] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_ahead] = ACTIONS(33),
    [anon_sym_behind] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym_quantifier] = STATE(4),
    [sym_atom] = STATE(17),
    [sym_expression] = STATE(4),
    [sym_literal] = STATE(53),
    [sym_range] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym__unicode_category] = STATE(57),
    [sym_negative_char_class] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_group] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_assertion] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_lazy] = ACTIONS(7),
    [anon_sym_some] = ACTIONS(9),
    [anon_sym_any] = ACTIONS(9),
    [anon_sym_over] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(9),
    [sym_amount] = ACTIONS(13),
    [anon_sym_not] = ACTIONS(15),
    [aux_sym_literal_token1] = ACTIONS(17),
    [aux_sym_literal_token2] = ACTIONS(17),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(21),
    [sym_raw] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_capture] = ACTIONS(27),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_either] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_ahead] = ACTIONS(33),
    [anon_sym_behind] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_atom] = STATE(17),
    [sym_expression] = STATE(16),
    [sym_literal] = STATE(53),
    [sym_range] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym__unicode_category] = STATE(57),
    [sym_negative_char_class] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_group] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_assertion] = STATE(17),
    [sym_amount] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(15),
    [aux_sym_literal_token1] = ACTIONS(17),
    [aux_sym_literal_token2] = ACTIONS(17),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(21),
    [sym_raw] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_capture] = ACTIONS(27),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_either] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_ahead] = ACTIONS(33),
    [anon_sym_behind] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_atom] = STATE(17),
    [sym_expression] = STATE(18),
    [sym_literal] = STATE(53),
    [sym_range] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym__unicode_category] = STATE(57),
    [sym_negative_char_class] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_group] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_assertion] = STATE(17),
    [sym_amount] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(15),
    [aux_sym_literal_token1] = ACTIONS(17),
    [aux_sym_literal_token2] = ACTIONS(17),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(21),
    [sym_raw] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_capture] = ACTIONS(27),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_either] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_ahead] = ACTIONS(33),
    [anon_sym_behind] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_atom] = STATE(17),
    [sym_expression] = STATE(10),
    [sym_literal] = STATE(53),
    [sym_range] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym__unicode_category] = STATE(57),
    [sym_negative_char_class] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_group] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_assertion] = STATE(17),
    [sym_amount] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(15),
    [aux_sym_literal_token1] = ACTIONS(17),
    [aux_sym_literal_token2] = ACTIONS(17),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(21),
    [sym_raw] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_capture] = ACTIONS(27),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_either] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_ahead] = ACTIONS(33),
    [anon_sym_behind] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_atom] = STATE(17),
    [sym_expression] = STATE(22),
    [sym_literal] = STATE(53),
    [sym_range] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym__unicode_category] = STATE(57),
    [sym_negative_char_class] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_group] = STATE(17),
    [sym_variable_declaration] = STATE(17),
    [sym_assertion] = STATE(17),
    [sym_amount] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(15),
    [aux_sym_literal_token1] = ACTIONS(17),
    [aux_sym_literal_token2] = ACTIONS(17),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(21),
    [sym_raw] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_capture] = ACTIONS(27),
    [anon_sym_match] = ACTIONS(29),
    [anon_sym_either] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_ahead] = ACTIONS(33),
    [anon_sym_behind] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_lazy] = ACTIONS(85),
    [anon_sym_some] = ACTIONS(85),
    [anon_sym_any] = ACTIONS(85),
    [anon_sym_over] = ACTIONS(85),
    [anon_sym_option] = ACTIONS(85),
    [sym_amount] = ACTIONS(85),
    [anon_sym_not] = ACTIONS(85),
    [aux_sym_literal_token1] = ACTIONS(85),
    [aux_sym_literal_token2] = ACTIONS(85),
    [aux_sym_range_token1] = ACTIONS(87),
    [anon_sym_LTchar_GT] = ACTIONS(85),
    [anon_sym_LTspace_GT] = ACTIONS(85),
    [anon_sym_LTwhitespace_GT] = ACTIONS(85),
    [anon_sym_LTnewline_GT] = ACTIONS(85),
    [anon_sym_LTtab_GT] = ACTIONS(85),
    [anon_sym_LTreturn_GT] = ACTIONS(85),
    [anon_sym_LTfeed_GT] = ACTIONS(85),
    [anon_sym_LTnull_GT] = ACTIONS(85),
    [anon_sym_LTdigit_GT] = ACTIONS(85),
    [anon_sym_LTvertical_GT] = ACTIONS(85),
    [anon_sym_LTword_GT] = ACTIONS(85),
    [anon_sym_LTalphabetic_GT] = ACTIONS(85),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(85),
    [anon_sym_LTboundary_GT] = ACTIONS(85),
    [anon_sym_LTbackspace_GT] = ACTIONS(85),
    [anon_sym_LTstart_GT] = ACTIONS(85),
    [anon_sym_LTend_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(85),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(85),
    [sym_raw] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_capture] = ACTIONS(85),
    [anon_sym_match] = ACTIONS(85),
    [anon_sym_either] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_let] = ACTIONS(85),
    [anon_sym_ahead] = ACTIONS(85),
    [anon_sym_behind] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_lazy] = ACTIONS(89),
    [anon_sym_some] = ACTIONS(89),
    [anon_sym_any] = ACTIONS(89),
    [anon_sym_over] = ACTIONS(89),
    [anon_sym_option] = ACTIONS(89),
    [sym_amount] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(89),
    [aux_sym_literal_token1] = ACTIONS(89),
    [aux_sym_literal_token2] = ACTIONS(89),
    [aux_sym_range_token1] = ACTIONS(91),
    [anon_sym_LTchar_GT] = ACTIONS(89),
    [anon_sym_LTspace_GT] = ACTIONS(89),
    [anon_sym_LTwhitespace_GT] = ACTIONS(89),
    [anon_sym_LTnewline_GT] = ACTIONS(89),
    [anon_sym_LTtab_GT] = ACTIONS(89),
    [anon_sym_LTreturn_GT] = ACTIONS(89),
    [anon_sym_LTfeed_GT] = ACTIONS(89),
    [anon_sym_LTnull_GT] = ACTIONS(89),
    [anon_sym_LTdigit_GT] = ACTIONS(89),
    [anon_sym_LTvertical_GT] = ACTIONS(89),
    [anon_sym_LTword_GT] = ACTIONS(89),
    [anon_sym_LTalphabetic_GT] = ACTIONS(89),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(89),
    [anon_sym_LTboundary_GT] = ACTIONS(89),
    [anon_sym_LTbackspace_GT] = ACTIONS(89),
    [anon_sym_LTstart_GT] = ACTIONS(89),
    [anon_sym_LTend_GT] = ACTIONS(89),
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
    [sym_raw] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_capture] = ACTIONS(89),
    [anon_sym_match] = ACTIONS(89),
    [anon_sym_either] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_ahead] = ACTIONS(89),
    [anon_sym_behind] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_lazy] = ACTIONS(93),
    [anon_sym_some] = ACTIONS(93),
    [anon_sym_any] = ACTIONS(93),
    [anon_sym_over] = ACTIONS(93),
    [anon_sym_option] = ACTIONS(93),
    [sym_amount] = ACTIONS(93),
    [anon_sym_not] = ACTIONS(93),
    [aux_sym_literal_token1] = ACTIONS(93),
    [aux_sym_literal_token2] = ACTIONS(93),
    [aux_sym_range_token1] = ACTIONS(95),
    [anon_sym_LTchar_GT] = ACTIONS(93),
    [anon_sym_LTspace_GT] = ACTIONS(93),
    [anon_sym_LTwhitespace_GT] = ACTIONS(93),
    [anon_sym_LTnewline_GT] = ACTIONS(93),
    [anon_sym_LTtab_GT] = ACTIONS(93),
    [anon_sym_LTreturn_GT] = ACTIONS(93),
    [anon_sym_LTfeed_GT] = ACTIONS(93),
    [anon_sym_LTnull_GT] = ACTIONS(93),
    [anon_sym_LTdigit_GT] = ACTIONS(93),
    [anon_sym_LTvertical_GT] = ACTIONS(93),
    [anon_sym_LTword_GT] = ACTIONS(93),
    [anon_sym_LTalphabetic_GT] = ACTIONS(93),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(93),
    [anon_sym_LTboundary_GT] = ACTIONS(93),
    [anon_sym_LTbackspace_GT] = ACTIONS(93),
    [anon_sym_LTstart_GT] = ACTIONS(93),
    [anon_sym_LTend_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(93),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(93),
    [sym_raw] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [anon_sym_capture] = ACTIONS(93),
    [anon_sym_match] = ACTIONS(93),
    [anon_sym_either] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_let] = ACTIONS(93),
    [anon_sym_ahead] = ACTIONS(93),
    [anon_sym_behind] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_lazy] = ACTIONS(97),
    [anon_sym_some] = ACTIONS(97),
    [anon_sym_any] = ACTIONS(97),
    [anon_sym_over] = ACTIONS(97),
    [anon_sym_option] = ACTIONS(97),
    [sym_amount] = ACTIONS(97),
    [anon_sym_not] = ACTIONS(97),
    [aux_sym_literal_token1] = ACTIONS(97),
    [aux_sym_literal_token2] = ACTIONS(97),
    [aux_sym_range_token1] = ACTIONS(99),
    [anon_sym_LTchar_GT] = ACTIONS(97),
    [anon_sym_LTspace_GT] = ACTIONS(97),
    [anon_sym_LTwhitespace_GT] = ACTIONS(97),
    [anon_sym_LTnewline_GT] = ACTIONS(97),
    [anon_sym_LTtab_GT] = ACTIONS(97),
    [anon_sym_LTreturn_GT] = ACTIONS(97),
    [anon_sym_LTfeed_GT] = ACTIONS(97),
    [anon_sym_LTnull_GT] = ACTIONS(97),
    [anon_sym_LTdigit_GT] = ACTIONS(97),
    [anon_sym_LTvertical_GT] = ACTIONS(97),
    [anon_sym_LTword_GT] = ACTIONS(97),
    [anon_sym_LTalphabetic_GT] = ACTIONS(97),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(97),
    [anon_sym_LTboundary_GT] = ACTIONS(97),
    [anon_sym_LTbackspace_GT] = ACTIONS(97),
    [anon_sym_LTstart_GT] = ACTIONS(97),
    [anon_sym_LTend_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(97),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(97),
    [sym_raw] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [anon_sym_capture] = ACTIONS(97),
    [anon_sym_match] = ACTIONS(97),
    [anon_sym_either] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_let] = ACTIONS(97),
    [anon_sym_ahead] = ACTIONS(97),
    [anon_sym_behind] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_lazy] = ACTIONS(101),
    [anon_sym_some] = ACTIONS(101),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_over] = ACTIONS(101),
    [anon_sym_option] = ACTIONS(101),
    [sym_amount] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [aux_sym_literal_token1] = ACTIONS(101),
    [aux_sym_literal_token2] = ACTIONS(101),
    [aux_sym_range_token1] = ACTIONS(103),
    [anon_sym_LTchar_GT] = ACTIONS(101),
    [anon_sym_LTspace_GT] = ACTIONS(101),
    [anon_sym_LTwhitespace_GT] = ACTIONS(101),
    [anon_sym_LTnewline_GT] = ACTIONS(101),
    [anon_sym_LTtab_GT] = ACTIONS(101),
    [anon_sym_LTreturn_GT] = ACTIONS(101),
    [anon_sym_LTfeed_GT] = ACTIONS(101),
    [anon_sym_LTnull_GT] = ACTIONS(101),
    [anon_sym_LTdigit_GT] = ACTIONS(101),
    [anon_sym_LTvertical_GT] = ACTIONS(101),
    [anon_sym_LTword_GT] = ACTIONS(101),
    [anon_sym_LTalphabetic_GT] = ACTIONS(101),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(101),
    [anon_sym_LTboundary_GT] = ACTIONS(101),
    [anon_sym_LTbackspace_GT] = ACTIONS(101),
    [anon_sym_LTstart_GT] = ACTIONS(101),
    [anon_sym_LTend_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(101),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(101),
    [sym_raw] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_capture] = ACTIONS(101),
    [anon_sym_match] = ACTIONS(101),
    [anon_sym_either] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_let] = ACTIONS(101),
    [anon_sym_ahead] = ACTIONS(101),
    [anon_sym_behind] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_lazy] = ACTIONS(105),
    [anon_sym_some] = ACTIONS(105),
    [anon_sym_any] = ACTIONS(105),
    [anon_sym_over] = ACTIONS(105),
    [anon_sym_option] = ACTIONS(105),
    [sym_amount] = ACTIONS(105),
    [anon_sym_not] = ACTIONS(105),
    [aux_sym_literal_token1] = ACTIONS(105),
    [aux_sym_literal_token2] = ACTIONS(105),
    [aux_sym_range_token1] = ACTIONS(107),
    [anon_sym_LTchar_GT] = ACTIONS(105),
    [anon_sym_LTspace_GT] = ACTIONS(105),
    [anon_sym_LTwhitespace_GT] = ACTIONS(105),
    [anon_sym_LTnewline_GT] = ACTIONS(105),
    [anon_sym_LTtab_GT] = ACTIONS(105),
    [anon_sym_LTreturn_GT] = ACTIONS(105),
    [anon_sym_LTfeed_GT] = ACTIONS(105),
    [anon_sym_LTnull_GT] = ACTIONS(105),
    [anon_sym_LTdigit_GT] = ACTIONS(105),
    [anon_sym_LTvertical_GT] = ACTIONS(105),
    [anon_sym_LTword_GT] = ACTIONS(105),
    [anon_sym_LTalphabetic_GT] = ACTIONS(105),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(105),
    [anon_sym_LTboundary_GT] = ACTIONS(105),
    [anon_sym_LTbackspace_GT] = ACTIONS(105),
    [anon_sym_LTstart_GT] = ACTIONS(105),
    [anon_sym_LTend_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(105),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(105),
    [sym_raw] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_capture] = ACTIONS(105),
    [anon_sym_match] = ACTIONS(105),
    [anon_sym_either] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_let] = ACTIONS(105),
    [anon_sym_ahead] = ACTIONS(105),
    [anon_sym_behind] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_lazy] = ACTIONS(109),
    [anon_sym_some] = ACTIONS(109),
    [anon_sym_any] = ACTIONS(109),
    [anon_sym_over] = ACTIONS(109),
    [anon_sym_option] = ACTIONS(109),
    [sym_amount] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(109),
    [aux_sym_literal_token1] = ACTIONS(109),
    [aux_sym_literal_token2] = ACTIONS(109),
    [aux_sym_range_token1] = ACTIONS(111),
    [anon_sym_LTchar_GT] = ACTIONS(109),
    [anon_sym_LTspace_GT] = ACTIONS(109),
    [anon_sym_LTwhitespace_GT] = ACTIONS(109),
    [anon_sym_LTnewline_GT] = ACTIONS(109),
    [anon_sym_LTtab_GT] = ACTIONS(109),
    [anon_sym_LTreturn_GT] = ACTIONS(109),
    [anon_sym_LTfeed_GT] = ACTIONS(109),
    [anon_sym_LTnull_GT] = ACTIONS(109),
    [anon_sym_LTdigit_GT] = ACTIONS(109),
    [anon_sym_LTvertical_GT] = ACTIONS(109),
    [anon_sym_LTword_GT] = ACTIONS(109),
    [anon_sym_LTalphabetic_GT] = ACTIONS(109),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(109),
    [anon_sym_LTboundary_GT] = ACTIONS(109),
    [anon_sym_LTbackspace_GT] = ACTIONS(109),
    [anon_sym_LTstart_GT] = ACTIONS(109),
    [anon_sym_LTend_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(109),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(109),
    [sym_raw] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_capture] = ACTIONS(109),
    [anon_sym_match] = ACTIONS(109),
    [anon_sym_either] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_let] = ACTIONS(109),
    [anon_sym_ahead] = ACTIONS(109),
    [anon_sym_behind] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_lazy] = ACTIONS(113),
    [anon_sym_some] = ACTIONS(113),
    [anon_sym_any] = ACTIONS(113),
    [anon_sym_over] = ACTIONS(113),
    [anon_sym_option] = ACTIONS(113),
    [sym_amount] = ACTIONS(113),
    [anon_sym_not] = ACTIONS(113),
    [aux_sym_literal_token1] = ACTIONS(113),
    [aux_sym_literal_token2] = ACTIONS(113),
    [aux_sym_range_token1] = ACTIONS(115),
    [anon_sym_LTchar_GT] = ACTIONS(113),
    [anon_sym_LTspace_GT] = ACTIONS(113),
    [anon_sym_LTwhitespace_GT] = ACTIONS(113),
    [anon_sym_LTnewline_GT] = ACTIONS(113),
    [anon_sym_LTtab_GT] = ACTIONS(113),
    [anon_sym_LTreturn_GT] = ACTIONS(113),
    [anon_sym_LTfeed_GT] = ACTIONS(113),
    [anon_sym_LTnull_GT] = ACTIONS(113),
    [anon_sym_LTdigit_GT] = ACTIONS(113),
    [anon_sym_LTvertical_GT] = ACTIONS(113),
    [anon_sym_LTword_GT] = ACTIONS(113),
    [anon_sym_LTalphabetic_GT] = ACTIONS(113),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(113),
    [anon_sym_LTboundary_GT] = ACTIONS(113),
    [anon_sym_LTbackspace_GT] = ACTIONS(113),
    [anon_sym_LTstart_GT] = ACTIONS(113),
    [anon_sym_LTend_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(113),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(113),
    [sym_raw] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_capture] = ACTIONS(113),
    [anon_sym_match] = ACTIONS(113),
    [anon_sym_either] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_let] = ACTIONS(113),
    [anon_sym_ahead] = ACTIONS(113),
    [anon_sym_behind] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_lazy] = ACTIONS(117),
    [anon_sym_some] = ACTIONS(117),
    [anon_sym_any] = ACTIONS(117),
    [anon_sym_over] = ACTIONS(117),
    [anon_sym_option] = ACTIONS(117),
    [sym_amount] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(117),
    [aux_sym_literal_token1] = ACTIONS(117),
    [aux_sym_literal_token2] = ACTIONS(117),
    [aux_sym_range_token1] = ACTIONS(119),
    [anon_sym_LTchar_GT] = ACTIONS(117),
    [anon_sym_LTspace_GT] = ACTIONS(117),
    [anon_sym_LTwhitespace_GT] = ACTIONS(117),
    [anon_sym_LTnewline_GT] = ACTIONS(117),
    [anon_sym_LTtab_GT] = ACTIONS(117),
    [anon_sym_LTreturn_GT] = ACTIONS(117),
    [anon_sym_LTfeed_GT] = ACTIONS(117),
    [anon_sym_LTnull_GT] = ACTIONS(117),
    [anon_sym_LTdigit_GT] = ACTIONS(117),
    [anon_sym_LTvertical_GT] = ACTIONS(117),
    [anon_sym_LTword_GT] = ACTIONS(117),
    [anon_sym_LTalphabetic_GT] = ACTIONS(117),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(117),
    [anon_sym_LTboundary_GT] = ACTIONS(117),
    [anon_sym_LTbackspace_GT] = ACTIONS(117),
    [anon_sym_LTstart_GT] = ACTIONS(117),
    [anon_sym_LTend_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(117),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(117),
    [sym_raw] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_capture] = ACTIONS(117),
    [anon_sym_match] = ACTIONS(117),
    [anon_sym_either] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_let] = ACTIONS(117),
    [anon_sym_ahead] = ACTIONS(117),
    [anon_sym_behind] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_lazy] = ACTIONS(121),
    [anon_sym_some] = ACTIONS(121),
    [anon_sym_any] = ACTIONS(121),
    [anon_sym_over] = ACTIONS(121),
    [anon_sym_option] = ACTIONS(121),
    [sym_amount] = ACTIONS(121),
    [anon_sym_not] = ACTIONS(121),
    [aux_sym_literal_token1] = ACTIONS(121),
    [aux_sym_literal_token2] = ACTIONS(121),
    [aux_sym_range_token1] = ACTIONS(123),
    [anon_sym_LTchar_GT] = ACTIONS(121),
    [anon_sym_LTspace_GT] = ACTIONS(121),
    [anon_sym_LTwhitespace_GT] = ACTIONS(121),
    [anon_sym_LTnewline_GT] = ACTIONS(121),
    [anon_sym_LTtab_GT] = ACTIONS(121),
    [anon_sym_LTreturn_GT] = ACTIONS(121),
    [anon_sym_LTfeed_GT] = ACTIONS(121),
    [anon_sym_LTnull_GT] = ACTIONS(121),
    [anon_sym_LTdigit_GT] = ACTIONS(121),
    [anon_sym_LTvertical_GT] = ACTIONS(121),
    [anon_sym_LTword_GT] = ACTIONS(121),
    [anon_sym_LTalphabetic_GT] = ACTIONS(121),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(121),
    [anon_sym_LTboundary_GT] = ACTIONS(121),
    [anon_sym_LTbackspace_GT] = ACTIONS(121),
    [anon_sym_LTstart_GT] = ACTIONS(121),
    [anon_sym_LTend_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(121),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(121),
    [sym_raw] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_capture] = ACTIONS(121),
    [anon_sym_match] = ACTIONS(121),
    [anon_sym_either] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_let] = ACTIONS(121),
    [anon_sym_ahead] = ACTIONS(121),
    [anon_sym_behind] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_lazy] = ACTIONS(125),
    [anon_sym_some] = ACTIONS(125),
    [anon_sym_any] = ACTIONS(125),
    [anon_sym_over] = ACTIONS(125),
    [anon_sym_option] = ACTIONS(125),
    [sym_amount] = ACTIONS(125),
    [anon_sym_not] = ACTIONS(125),
    [aux_sym_literal_token1] = ACTIONS(125),
    [aux_sym_literal_token2] = ACTIONS(125),
    [aux_sym_range_token1] = ACTIONS(127),
    [anon_sym_LTchar_GT] = ACTIONS(125),
    [anon_sym_LTspace_GT] = ACTIONS(125),
    [anon_sym_LTwhitespace_GT] = ACTIONS(125),
    [anon_sym_LTnewline_GT] = ACTIONS(125),
    [anon_sym_LTtab_GT] = ACTIONS(125),
    [anon_sym_LTreturn_GT] = ACTIONS(125),
    [anon_sym_LTfeed_GT] = ACTIONS(125),
    [anon_sym_LTnull_GT] = ACTIONS(125),
    [anon_sym_LTdigit_GT] = ACTIONS(125),
    [anon_sym_LTvertical_GT] = ACTIONS(125),
    [anon_sym_LTword_GT] = ACTIONS(125),
    [anon_sym_LTalphabetic_GT] = ACTIONS(125),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(125),
    [anon_sym_LTboundary_GT] = ACTIONS(125),
    [anon_sym_LTbackspace_GT] = ACTIONS(125),
    [anon_sym_LTstart_GT] = ACTIONS(125),
    [anon_sym_LTend_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(125),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(125),
    [sym_raw] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_capture] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(125),
    [anon_sym_either] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_let] = ACTIONS(125),
    [anon_sym_ahead] = ACTIONS(125),
    [anon_sym_behind] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_lazy] = ACTIONS(129),
    [anon_sym_some] = ACTIONS(129),
    [anon_sym_any] = ACTIONS(129),
    [anon_sym_over] = ACTIONS(129),
    [anon_sym_option] = ACTIONS(129),
    [sym_amount] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(129),
    [aux_sym_literal_token1] = ACTIONS(129),
    [aux_sym_literal_token2] = ACTIONS(129),
    [aux_sym_range_token1] = ACTIONS(131),
    [anon_sym_LTchar_GT] = ACTIONS(129),
    [anon_sym_LTspace_GT] = ACTIONS(129),
    [anon_sym_LTwhitespace_GT] = ACTIONS(129),
    [anon_sym_LTnewline_GT] = ACTIONS(129),
    [anon_sym_LTtab_GT] = ACTIONS(129),
    [anon_sym_LTreturn_GT] = ACTIONS(129),
    [anon_sym_LTfeed_GT] = ACTIONS(129),
    [anon_sym_LTnull_GT] = ACTIONS(129),
    [anon_sym_LTdigit_GT] = ACTIONS(129),
    [anon_sym_LTvertical_GT] = ACTIONS(129),
    [anon_sym_LTword_GT] = ACTIONS(129),
    [anon_sym_LTalphabetic_GT] = ACTIONS(129),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(129),
    [anon_sym_LTboundary_GT] = ACTIONS(129),
    [anon_sym_LTbackspace_GT] = ACTIONS(129),
    [anon_sym_LTstart_GT] = ACTIONS(129),
    [anon_sym_LTend_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(129),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(129),
    [sym_raw] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(129),
    [anon_sym_capture] = ACTIONS(129),
    [anon_sym_match] = ACTIONS(129),
    [anon_sym_either] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_let] = ACTIONS(129),
    [anon_sym_ahead] = ACTIONS(129),
    [anon_sym_behind] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_lazy] = ACTIONS(133),
    [anon_sym_some] = ACTIONS(133),
    [anon_sym_any] = ACTIONS(133),
    [anon_sym_over] = ACTIONS(133),
    [anon_sym_option] = ACTIONS(133),
    [sym_amount] = ACTIONS(133),
    [anon_sym_not] = ACTIONS(133),
    [aux_sym_literal_token1] = ACTIONS(133),
    [aux_sym_literal_token2] = ACTIONS(133),
    [aux_sym_range_token1] = ACTIONS(135),
    [anon_sym_LTchar_GT] = ACTIONS(133),
    [anon_sym_LTspace_GT] = ACTIONS(133),
    [anon_sym_LTwhitespace_GT] = ACTIONS(133),
    [anon_sym_LTnewline_GT] = ACTIONS(133),
    [anon_sym_LTtab_GT] = ACTIONS(133),
    [anon_sym_LTreturn_GT] = ACTIONS(133),
    [anon_sym_LTfeed_GT] = ACTIONS(133),
    [anon_sym_LTnull_GT] = ACTIONS(133),
    [anon_sym_LTdigit_GT] = ACTIONS(133),
    [anon_sym_LTvertical_GT] = ACTIONS(133),
    [anon_sym_LTword_GT] = ACTIONS(133),
    [anon_sym_LTalphabetic_GT] = ACTIONS(133),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(133),
    [anon_sym_LTboundary_GT] = ACTIONS(133),
    [anon_sym_LTbackspace_GT] = ACTIONS(133),
    [anon_sym_LTstart_GT] = ACTIONS(133),
    [anon_sym_LTend_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(133),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(133),
    [sym_raw] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(133),
    [anon_sym_capture] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(133),
    [anon_sym_either] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_let] = ACTIONS(133),
    [anon_sym_ahead] = ACTIONS(133),
    [anon_sym_behind] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_symbol] = STATE(54),
    [sym__unicode_category] = STATE(57),
    [sym_amount] = ACTIONS(137),
    [aux_sym_range_token1] = ACTIONS(139),
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
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(21),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(21),
    [aux_sym_negative_char_class_token1] = ACTIONS(141),
    [anon_sym_ahead] = ACTIONS(143),
    [anon_sym_behind] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_over,
    ACTIONS(149), 1,
      sym_amount,
    ACTIONS(145), 3,
      anon_sym_some,
      anon_sym_any,
      anon_sym_option,
  [15] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [28] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [36] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [46] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_to,
    ACTIONS(159), 1,
      anon_sym_of,
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [66] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [76] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOT,
    STATE(48), 1,
      sym_variable,
  [86] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
  [96] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_of,
    ACTIONS(163), 1,
      anon_sym_SEMI,
  [116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_to,
    ACTIONS(167), 1,
      anon_sym_of,
  [126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SEMI,
  [133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_to,
  [140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_amount,
  [147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_of,
  [154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_amount,
  [161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_to,
  [168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_of,
  [175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_to,
  [182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_amount,
  [189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_range_token1,
  [196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
  [203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_of,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_EQ,
  [217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_amount,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_of,
  [231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_to,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_identifier,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_SEMI,
  [252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
  [259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_amount,
  [266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SEMI,
  [273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_SEMI,
  [280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_range_token1,
  [287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_SEMI,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_SEMI,
  [301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_amount,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 15,
  [SMALL_STATE(26)] = 28,
  [SMALL_STATE(27)] = 36,
  [SMALL_STATE(28)] = 46,
  [SMALL_STATE(29)] = 56,
  [SMALL_STATE(30)] = 66,
  [SMALL_STATE(31)] = 76,
  [SMALL_STATE(32)] = 86,
  [SMALL_STATE(33)] = 96,
  [SMALL_STATE(34)] = 106,
  [SMALL_STATE(35)] = 116,
  [SMALL_STATE(36)] = 126,
  [SMALL_STATE(37)] = 133,
  [SMALL_STATE(38)] = 140,
  [SMALL_STATE(39)] = 147,
  [SMALL_STATE(40)] = 154,
  [SMALL_STATE(41)] = 161,
  [SMALL_STATE(42)] = 168,
  [SMALL_STATE(43)] = 175,
  [SMALL_STATE(44)] = 182,
  [SMALL_STATE(45)] = 189,
  [SMALL_STATE(46)] = 196,
  [SMALL_STATE(47)] = 203,
  [SMALL_STATE(48)] = 210,
  [SMALL_STATE(49)] = 217,
  [SMALL_STATE(50)] = 224,
  [SMALL_STATE(51)] = 231,
  [SMALL_STATE(52)] = 238,
  [SMALL_STATE(53)] = 245,
  [SMALL_STATE(54)] = 252,
  [SMALL_STATE(55)] = 259,
  [SMALL_STATE(56)] = 266,
  [SMALL_STATE(57)] = 273,
  [SMALL_STATE(58)] = 280,
  [SMALL_STATE(59)] = 287,
  [SMALL_STATE(60)] = 294,
  [SMALL_STATE(61)] = 301,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assertion, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 6),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assertion, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_char_class, 2),
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
