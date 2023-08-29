#include <tree_sitter/parser.h>

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
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
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
  anon_sym_LTcategory_COLON_COLONletter_GT = 22,
  anon_sym_LTcategory_COLON_COLONlowercase_letter_GT = 23,
  anon_sym_LTcategory_COLON_COLONuppercase_letter_GT = 24,
  anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT = 25,
  anon_sym_LTcategory_COLON_COLONcased_letter_GT = 26,
  anon_sym_LTcategory_COLON_COLONmodifier_letter_GT = 27,
  anon_sym_LTcategory_COLON_COLONother_letter_GT = 28,
  anon_sym_LTcategory_COLON_COLONmark_GT = 29,
  anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT = 30,
  anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT = 31,
  anon_sym_LTcategory_COLON_COLONenclosing_mark_GT = 32,
  anon_sym_LTcategory_COLON_COLONseparator_GT = 33,
  anon_sym_LTcategory_COLON_COLONspace_separator_GT = 34,
  anon_sym_LTcategory_COLON_COLONline_separator_GT = 35,
  anon_sym_LTcategory_COLON_COLONparagraph_separator_GT = 36,
  anon_sym_LTcategory_COLON_COLONsymbol_GT = 37,
  anon_sym_LTcategory_COLON_COLONmath_symbol_GT = 38,
  anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT = 39,
  anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT = 40,
  anon_sym_LTcategory_COLON_COLONother_symbol_GT = 41,
  anon_sym_LTcategory_COLON_COLONnumber_GT = 42,
  anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT = 43,
  anon_sym_LTcategory_COLON_COLONletter_number_GT = 44,
  anon_sym_LTcategory_COLON_COLONother_number_GT = 45,
  anon_sym_LTcategory_COLON_COLONpunctuation_GT = 46,
  anon_sym_LTcategory_COLON_COLONdash_punctuation_GT = 47,
  anon_sym_LTcategory_COLON_COLONopen_punctuation_GT = 48,
  anon_sym_LTcategory_COLON_COLONclose_punctuation_GT = 49,
  anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT = 50,
  anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT = 51,
  anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT = 52,
  anon_sym_LTcategory_COLON_COLONother_punctuation_GT = 53,
  anon_sym_LTcategory_COLON_COLONother_GT = 54,
  anon_sym_LTcategory_COLON_COLONcontrol_GT = 55,
  anon_sym_LTcategory_COLON_COLONformat_GT = 56,
  anon_sym_LTcategory_COLON_COLONprivate_use_GT = 57,
  anon_sym_LTcategory_COLON_COLONsurrogate_GT = 58,
  anon_sym_LTcategory_COLON_COLONunassigned_GT = 59,
  anon_sym_to = 60,
  sym_range_character = 61,
  anon_sym_lazy = 62,
  anon_sym_over = 63,
  anon_sym_some = 64,
  anon_sym_any = 65,
  anon_sym_option = 66,
  anon_sym_of = 67,
  sym_number = 68,
  anon_sym_BQUOTE = 69,
  aux_sym_raw_token1 = 70,
  anon_sym_capture = 71,
  aux_sym_group_token1 = 72,
  anon_sym_match = 73,
  anon_sym_either = 74,
  anon_sym_not = 75,
  anon_sym_ahead = 76,
  anon_sym_behind = 77,
  anon_sym_LBRACE = 78,
  anon_sym_RBRACE = 79,
  anon_sym_SLASH_SLASH = 80,
  anon_sym_SLASH_STAR = 81,
  anon_sym_STAR_SLASH = 82,
  anon_sym_let = 83,
  anon_sym_EQ = 84,
  anon_sym_DOT = 85,
  aux_sym_identifier_token1 = 86,
  sym_source_file = 87,
  sym_stmt = 88,
  sym_pattern = 89,
  sym_literal = 90,
  sym_symbol = 91,
  sym_unicode_category = 92,
  sym_range = 93,
  sym_quantifier = 94,
  sym_raw = 95,
  sym_group = 96,
  sym_assertion = 97,
  sym_block = 98,
  sym_comment = 99,
  sym_variable = 100,
  sym_identifier = 101,
  aux_sym_source_file_repeat1 = 102,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_to] = "to",
  [sym_range_character] = "range_character",
  [anon_sym_lazy] = "lazy",
  [anon_sym_over] = "over",
  [anon_sym_some] = "some",
  [anon_sym_any] = "any",
  [anon_sym_option] = "option",
  [anon_sym_of] = "of",
  [sym_number] = "number",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_raw_token1] = "raw_token1",
  [anon_sym_capture] = "capture",
  [aux_sym_group_token1] = "group_token1",
  [anon_sym_match] = "match",
  [anon_sym_either] = "either",
  [anon_sym_not] = "not",
  [anon_sym_ahead] = "ahead",
  [anon_sym_behind] = "behind",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_source_file] = "source_file",
  [sym_stmt] = "stmt",
  [sym_pattern] = "pattern",
  [sym_literal] = "literal",
  [sym_symbol] = "symbol",
  [sym_unicode_category] = "unicode_category",
  [sym_range] = "range",
  [sym_quantifier] = "quantifier",
  [sym_raw] = "raw",
  [sym_group] = "group",
  [sym_assertion] = "assertion",
  [sym_block] = "block",
  [sym_comment] = "comment",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_to] = anon_sym_to,
  [sym_range_character] = sym_range_character,
  [anon_sym_lazy] = anon_sym_lazy,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_of] = anon_sym_of,
  [sym_number] = sym_number,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_raw_token1] = aux_sym_raw_token1,
  [anon_sym_capture] = anon_sym_capture,
  [aux_sym_group_token1] = aux_sym_group_token1,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_either] = anon_sym_either,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_ahead] = anon_sym_ahead,
  [anon_sym_behind] = anon_sym_behind,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_source_file] = sym_source_file,
  [sym_stmt] = sym_stmt,
  [sym_pattern] = sym_pattern,
  [sym_literal] = sym_literal,
  [sym_symbol] = sym_symbol,
  [sym_unicode_category] = sym_unicode_category,
  [sym_range] = sym_range,
  [sym_quantifier] = sym_quantifier,
  [sym_raw] = sym_raw,
  [sym_group] = sym_group,
  [sym_assertion] = sym_assertion,
  [sym_block] = sym_block,
  [sym_comment] = sym_comment,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [sym_range_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lazy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
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
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_capture] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_token1] = {
    .visible = false,
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
  [anon_sym_not] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
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
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(599);
      if (lookahead == '"') ADVANCE(602);
      if (lookahead == '\'') ADVANCE(601);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ';') ADVANCE(600);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(696);
      if (lookahead == '`') ADVANCE(671);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '{') ADVANCE(683);
      if (lookahead == '}') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(669);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(690);
      if (lookahead == '/') ADVANCE(686);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(597);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(694);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(676);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(157);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(622);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(610);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(606);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(612);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(613);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(616);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(614);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(607);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(621);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(611);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(609);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(619);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(615);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(620);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(617);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(608);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(618);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(630);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(655);
      if (lookahead == '_') ADVANCE(328);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(657);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(623);
      if (lookahead == '_') ADVANCE(379);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(643);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(638);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(656);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(634);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(659);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(660);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(639);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(658);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(647);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(627);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(629);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(646);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(642);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(645);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(633);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(636);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(640);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(628);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(641);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(635);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(648);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(624);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(631);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(649);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(626);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(625);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(650);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(652);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(654);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(651);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(637);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(644);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(653);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(632);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(2);
      END_STATE();
    case 65:
      if (lookahead == 'Z') ADVANCE(662);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(329);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(423);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(564);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(192);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(327);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(343);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(496);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(499);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(501);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(330);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(380);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(331);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(432);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(502);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(434);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(504);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(436);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(438);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(439);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(195);
      if (lookahead == 'w') ADVANCE(273);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(476);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(525);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(546);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(503);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(405);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(288);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(563);
      END_STATE();
    case 149:
      if (lookahead == 'b') ADVANCE(228);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(409);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(412);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(414);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(235);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(417);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(285);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(594);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(512);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(529);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(553);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(554);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(558);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(681);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(682);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(457);
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 253:
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == 'v') ADVANCE(199);
      END_STATE();
    case 254:
      if (lookahead == 'f') ADVANCE(292);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(458);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 270:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 271:
      if (lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 272:
      if (lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 273:
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 274:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 308:
      if (lookahead == 'k') ADVANCE(488);
      END_STATE();
    case 309:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 310:
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 311:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 312:
      if (lookahead == 'k') ADVANCE(63);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(580);
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 335:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 349:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 350:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 351:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 388:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == 'v') ADVANCE(199);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(576);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 429:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(577);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 436:
      if (lookahead == 'p') ADVANCE(579);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(581);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(582);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 477:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 478:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 480:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 481:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 482:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 483:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 484:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 485:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 486:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 487:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(590);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(695);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(680);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(544);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 560:
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 561:
      if (lookahead == 'u') ADVANCE(455);
      END_STATE();
    case 562:
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 563:
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 564:
      if (lookahead == 'u') ADVANCE(498);
      END_STATE();
    case 565:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 566:
      if (lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 567:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 568:
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 569:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 570:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 571:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 572:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 573:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 574:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 575:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 576:
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 577:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 578:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 579:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 580:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 581:
      if (lookahead == 'u') ADVANCE(388);
      END_STATE();
    case 582:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 583:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 584:
      if (lookahead == 'w') ADVANCE(315);
      END_STATE();
    case 585:
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 586:
      if (lookahead == 'y') ADVANCE(666);
      END_STATE();
    case 587:
      if (lookahead == 'y') ADVANCE(663);
      END_STATE();
    case 588:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 589:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 590:
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 591:
      if (lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 592:
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 593:
      if (lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 594:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 595:
      if (lookahead == 'z') ADVANCE(64);
      END_STATE();
    case 596:
      if (lookahead == 'z') ADVANCE(587);
      END_STATE();
    case 597:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(699);
      END_STATE();
    case 598:
      if (eof) ADVANCE(599);
      if (lookahead == '"') ADVANCE(602);
      if (lookahead == '\'') ADVANCE(601);
      if (lookahead == '.') ADVANCE(697);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '`') ADVANCE(671);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'b') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead == '}') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(598)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(669);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '*') ADVANCE(692);
      if (lookahead == '/') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(605);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(605);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_LTchar_GT);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_LTspace_GT);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_LTwhitespace_GT);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_LTnewline_GT);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_LTtab_GT);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_LTreturn_GT);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_LTfeed_GT);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_LTnull_GT);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_LTdigit_GT);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_LTvertical_GT);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LTword_GT);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LTalphabetic_GT);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_LTalphanumeric_GT);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LTboundary_GT);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LTbackspace_GT);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_LTstart_GT);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LTend_GT);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_GT);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONlowercase_letter_GT);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONuppercase_letter_GT);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcased_letter_GT);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_letter_GT);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_letter_GT);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmark_GT);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONenclosing_mark_GT);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONseparator_GT);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspace_separator_GT);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONline_separator_GT);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONparagraph_separator_GT);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsymbol_GT);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmath_symbol_GT);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_symbol_GT);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnumber_GT);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_number_GT);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_number_GT);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONpunctuation_GT);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdash_punctuation_GT);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONopen_punctuation_GT);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONclose_punctuation_GT);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_punctuation_GT);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_GT);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcontrol_GT);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONformat_GT);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONprivate_use_GT);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsurrogate_GT);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONunassigned_GT);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_range_character);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'a') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_raw_token1);
      if (lookahead == '*') ADVANCE(693);
      if (lookahead == '/') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(674);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_raw_token1);
      if (lookahead == '/') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(674);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_raw_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_capture);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_group_token1);
      if (lookahead == '*') ADVANCE(691);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_group_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_either);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(677);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(677);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(605);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(674);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(677);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(605);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(674);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(699);
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
  [23] = {.lex_state = 598},
  [24] = {.lex_state = 598},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 598},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 673},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 673},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 604},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 673},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 604},
  [64] = {(TSStateId)(-1)},
  [65] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
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
    [anon_sym_to] = ACTIONS(1),
    [sym_range_character] = ACTIONS(1),
    [anon_sym_lazy] = ACTIONS(1),
    [anon_sym_over] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_capture] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_either] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_ahead] = ACTIONS(1),
    [anon_sym_behind] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_stmt] = STATE(21),
    [sym_pattern] = STATE(22),
    [sym_literal] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_unicode_category] = STATE(62),
    [sym_range] = STATE(53),
    [sym_quantifier] = STATE(22),
    [sym_raw] = STATE(53),
    [sym_group] = STATE(24),
    [sym_assertion] = STATE(24),
    [sym_comment] = STATE(1),
    [sym_variable] = STATE(24),
    [sym_identifier] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LTchar_GT] = ACTIONS(13),
    [anon_sym_LTspace_GT] = ACTIONS(13),
    [anon_sym_LTwhitespace_GT] = ACTIONS(13),
    [anon_sym_LTnewline_GT] = ACTIONS(13),
    [anon_sym_LTtab_GT] = ACTIONS(13),
    [anon_sym_LTreturn_GT] = ACTIONS(13),
    [anon_sym_LTfeed_GT] = ACTIONS(13),
    [anon_sym_LTnull_GT] = ACTIONS(13),
    [anon_sym_LTdigit_GT] = ACTIONS(13),
    [anon_sym_LTvertical_GT] = ACTIONS(13),
    [anon_sym_LTword_GT] = ACTIONS(13),
    [anon_sym_LTalphabetic_GT] = ACTIONS(13),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(13),
    [anon_sym_LTboundary_GT] = ACTIONS(13),
    [anon_sym_LTbackspace_GT] = ACTIONS(13),
    [anon_sym_LTstart_GT] = ACTIONS(13),
    [anon_sym_LTend_GT] = ACTIONS(13),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(15),
    [sym_range_character] = ACTIONS(17),
    [anon_sym_lazy] = ACTIONS(19),
    [anon_sym_over] = ACTIONS(21),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(23),
    [anon_sym_option] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
  },
  [2] = {
    [sym_stmt] = STATE(21),
    [sym_pattern] = STATE(22),
    [sym_literal] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_unicode_category] = STATE(62),
    [sym_range] = STATE(53),
    [sym_quantifier] = STATE(22),
    [sym_raw] = STATE(53),
    [sym_group] = STATE(24),
    [sym_assertion] = STATE(24),
    [sym_comment] = STATE(2),
    [sym_variable] = STATE(24),
    [sym_identifier] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_LTchar_GT] = ACTIONS(49),
    [anon_sym_LTspace_GT] = ACTIONS(49),
    [anon_sym_LTwhitespace_GT] = ACTIONS(49),
    [anon_sym_LTnewline_GT] = ACTIONS(49),
    [anon_sym_LTtab_GT] = ACTIONS(49),
    [anon_sym_LTreturn_GT] = ACTIONS(49),
    [anon_sym_LTfeed_GT] = ACTIONS(49),
    [anon_sym_LTnull_GT] = ACTIONS(49),
    [anon_sym_LTdigit_GT] = ACTIONS(49),
    [anon_sym_LTvertical_GT] = ACTIONS(49),
    [anon_sym_LTword_GT] = ACTIONS(49),
    [anon_sym_LTalphabetic_GT] = ACTIONS(49),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(49),
    [anon_sym_LTboundary_GT] = ACTIONS(49),
    [anon_sym_LTbackspace_GT] = ACTIONS(49),
    [anon_sym_LTstart_GT] = ACTIONS(49),
    [anon_sym_LTend_GT] = ACTIONS(49),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(52),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(52),
    [sym_range_character] = ACTIONS(55),
    [anon_sym_lazy] = ACTIONS(58),
    [anon_sym_over] = ACTIONS(61),
    [anon_sym_some] = ACTIONS(64),
    [anon_sym_any] = ACTIONS(64),
    [anon_sym_option] = ACTIONS(64),
    [sym_number] = ACTIONS(67),
    [anon_sym_BQUOTE] = ACTIONS(70),
    [anon_sym_capture] = ACTIONS(73),
    [anon_sym_match] = ACTIONS(76),
    [anon_sym_either] = ACTIONS(76),
    [anon_sym_not] = ACTIONS(79),
    [anon_sym_ahead] = ACTIONS(82),
    [anon_sym_behind] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(88),
  },
  [3] = {
    [sym_stmt] = STATE(21),
    [sym_pattern] = STATE(22),
    [sym_literal] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_unicode_category] = STATE(62),
    [sym_range] = STATE(53),
    [sym_quantifier] = STATE(22),
    [sym_raw] = STATE(53),
    [sym_group] = STATE(24),
    [sym_assertion] = STATE(24),
    [sym_comment] = STATE(3),
    [sym_variable] = STATE(24),
    [sym_identifier] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LTchar_GT] = ACTIONS(13),
    [anon_sym_LTspace_GT] = ACTIONS(13),
    [anon_sym_LTwhitespace_GT] = ACTIONS(13),
    [anon_sym_LTnewline_GT] = ACTIONS(13),
    [anon_sym_LTtab_GT] = ACTIONS(13),
    [anon_sym_LTreturn_GT] = ACTIONS(13),
    [anon_sym_LTfeed_GT] = ACTIONS(13),
    [anon_sym_LTnull_GT] = ACTIONS(13),
    [anon_sym_LTdigit_GT] = ACTIONS(13),
    [anon_sym_LTvertical_GT] = ACTIONS(13),
    [anon_sym_LTword_GT] = ACTIONS(13),
    [anon_sym_LTalphabetic_GT] = ACTIONS(13),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(13),
    [anon_sym_LTboundary_GT] = ACTIONS(13),
    [anon_sym_LTbackspace_GT] = ACTIONS(13),
    [anon_sym_LTstart_GT] = ACTIONS(13),
    [anon_sym_LTend_GT] = ACTIONS(13),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(15),
    [sym_range_character] = ACTIONS(17),
    [anon_sym_lazy] = ACTIONS(19),
    [anon_sym_over] = ACTIONS(21),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(23),
    [anon_sym_option] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
  },
  [4] = {
    [sym_stmt] = STATE(21),
    [sym_pattern] = STATE(22),
    [sym_literal] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_unicode_category] = STATE(62),
    [sym_range] = STATE(53),
    [sym_quantifier] = STATE(22),
    [sym_raw] = STATE(53),
    [sym_group] = STATE(24),
    [sym_assertion] = STATE(24),
    [sym_comment] = STATE(4),
    [sym_variable] = STATE(24),
    [sym_identifier] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LTchar_GT] = ACTIONS(13),
    [anon_sym_LTspace_GT] = ACTIONS(13),
    [anon_sym_LTwhitespace_GT] = ACTIONS(13),
    [anon_sym_LTnewline_GT] = ACTIONS(13),
    [anon_sym_LTtab_GT] = ACTIONS(13),
    [anon_sym_LTreturn_GT] = ACTIONS(13),
    [anon_sym_LTfeed_GT] = ACTIONS(13),
    [anon_sym_LTnull_GT] = ACTIONS(13),
    [anon_sym_LTdigit_GT] = ACTIONS(13),
    [anon_sym_LTvertical_GT] = ACTIONS(13),
    [anon_sym_LTword_GT] = ACTIONS(13),
    [anon_sym_LTalphabetic_GT] = ACTIONS(13),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(13),
    [anon_sym_LTboundary_GT] = ACTIONS(13),
    [anon_sym_LTbackspace_GT] = ACTIONS(13),
    [anon_sym_LTstart_GT] = ACTIONS(13),
    [anon_sym_LTend_GT] = ACTIONS(13),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(15),
    [sym_range_character] = ACTIONS(17),
    [anon_sym_lazy] = ACTIONS(19),
    [anon_sym_over] = ACTIONS(21),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(23),
    [anon_sym_option] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
  },
  [5] = {
    [sym_stmt] = STATE(21),
    [sym_pattern] = STATE(22),
    [sym_literal] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_unicode_category] = STATE(62),
    [sym_range] = STATE(53),
    [sym_quantifier] = STATE(22),
    [sym_raw] = STATE(53),
    [sym_group] = STATE(24),
    [sym_assertion] = STATE(24),
    [sym_comment] = STATE(5),
    [sym_variable] = STATE(24),
    [sym_identifier] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LTchar_GT] = ACTIONS(13),
    [anon_sym_LTspace_GT] = ACTIONS(13),
    [anon_sym_LTwhitespace_GT] = ACTIONS(13),
    [anon_sym_LTnewline_GT] = ACTIONS(13),
    [anon_sym_LTtab_GT] = ACTIONS(13),
    [anon_sym_LTreturn_GT] = ACTIONS(13),
    [anon_sym_LTfeed_GT] = ACTIONS(13),
    [anon_sym_LTnull_GT] = ACTIONS(13),
    [anon_sym_LTdigit_GT] = ACTIONS(13),
    [anon_sym_LTvertical_GT] = ACTIONS(13),
    [anon_sym_LTword_GT] = ACTIONS(13),
    [anon_sym_LTalphabetic_GT] = ACTIONS(13),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(13),
    [anon_sym_LTboundary_GT] = ACTIONS(13),
    [anon_sym_LTbackspace_GT] = ACTIONS(13),
    [anon_sym_LTstart_GT] = ACTIONS(13),
    [anon_sym_LTend_GT] = ACTIONS(13),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(15),
    [sym_range_character] = ACTIONS(17),
    [anon_sym_lazy] = ACTIONS(19),
    [anon_sym_over] = ACTIONS(21),
    [anon_sym_some] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(23),
    [anon_sym_option] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
  },
  [6] = {
    [sym_pattern] = STATE(10),
    [sym_literal] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_unicode_category] = STATE(62),
    [sym_range] = STATE(53),
    [sym_raw] = STATE(53),
    [sym_group] = STATE(24),
    [sym_assertion] = STATE(24),
    [sym_comment] = STATE(6),
    [sym_variable] = STATE(24),
    [sym_identifier] = STATE(53),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LTchar_GT] = ACTIONS(13),
    [anon_sym_LTspace_GT] = ACTIONS(13),
    [anon_sym_LTwhitespace_GT] = ACTIONS(13),
    [anon_sym_LTnewline_GT] = ACTIONS(13),
    [anon_sym_LTtab_GT] = ACTIONS(13),
    [anon_sym_LTreturn_GT] = ACTIONS(13),
    [anon_sym_LTfeed_GT] = ACTIONS(13),
    [anon_sym_LTnull_GT] = ACTIONS(13),
    [anon_sym_LTdigit_GT] = ACTIONS(13),
    [anon_sym_LTvertical_GT] = ACTIONS(13),
    [anon_sym_LTword_GT] = ACTIONS(13),
    [anon_sym_LTalphabetic_GT] = ACTIONS(13),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(13),
    [anon_sym_LTboundary_GT] = ACTIONS(13),
    [anon_sym_LTbackspace_GT] = ACTIONS(13),
    [anon_sym_LTstart_GT] = ACTIONS(13),
    [anon_sym_LTend_GT] = ACTIONS(13),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(15),
    [sym_range_character] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
  },
  [7] = {
    [sym_pattern] = STATE(18),
    [sym_literal] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_unicode_category] = STATE(62),
    [sym_range] = STATE(53),
    [sym_raw] = STATE(53),
    [sym_group] = STATE(24),
    [sym_assertion] = STATE(24),
    [sym_comment] = STATE(7),
    [sym_variable] = STATE(24),
    [sym_identifier] = STATE(53),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LTchar_GT] = ACTIONS(13),
    [anon_sym_LTspace_GT] = ACTIONS(13),
    [anon_sym_LTwhitespace_GT] = ACTIONS(13),
    [anon_sym_LTnewline_GT] = ACTIONS(13),
    [anon_sym_LTtab_GT] = ACTIONS(13),
    [anon_sym_LTreturn_GT] = ACTIONS(13),
    [anon_sym_LTfeed_GT] = ACTIONS(13),
    [anon_sym_LTnull_GT] = ACTIONS(13),
    [anon_sym_LTdigit_GT] = ACTIONS(13),
    [anon_sym_LTvertical_GT] = ACTIONS(13),
    [anon_sym_LTword_GT] = ACTIONS(13),
    [anon_sym_LTalphabetic_GT] = ACTIONS(13),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(13),
    [anon_sym_LTboundary_GT] = ACTIONS(13),
    [anon_sym_LTbackspace_GT] = ACTIONS(13),
    [anon_sym_LTstart_GT] = ACTIONS(13),
    [anon_sym_LTend_GT] = ACTIONS(13),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(15),
    [sym_range_character] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
  },
  [8] = {
    [sym_pattern] = STATE(23),
    [sym_literal] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_unicode_category] = STATE(62),
    [sym_range] = STATE(53),
    [sym_raw] = STATE(53),
    [sym_group] = STATE(24),
    [sym_assertion] = STATE(24),
    [sym_comment] = STATE(8),
    [sym_variable] = STATE(24),
    [sym_identifier] = STATE(53),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LTchar_GT] = ACTIONS(13),
    [anon_sym_LTspace_GT] = ACTIONS(13),
    [anon_sym_LTwhitespace_GT] = ACTIONS(13),
    [anon_sym_LTnewline_GT] = ACTIONS(13),
    [anon_sym_LTtab_GT] = ACTIONS(13),
    [anon_sym_LTreturn_GT] = ACTIONS(13),
    [anon_sym_LTfeed_GT] = ACTIONS(13),
    [anon_sym_LTnull_GT] = ACTIONS(13),
    [anon_sym_LTdigit_GT] = ACTIONS(13),
    [anon_sym_LTvertical_GT] = ACTIONS(13),
    [anon_sym_LTword_GT] = ACTIONS(13),
    [anon_sym_LTalphabetic_GT] = ACTIONS(13),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(13),
    [anon_sym_LTboundary_GT] = ACTIONS(13),
    [anon_sym_LTbackspace_GT] = ACTIONS(13),
    [anon_sym_LTstart_GT] = ACTIONS(13),
    [anon_sym_LTend_GT] = ACTIONS(13),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(15),
    [sym_range_character] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
  },
  [9] = {
    [sym_pattern] = STATE(12),
    [sym_literal] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_unicode_category] = STATE(62),
    [sym_range] = STATE(53),
    [sym_raw] = STATE(53),
    [sym_group] = STATE(24),
    [sym_assertion] = STATE(24),
    [sym_comment] = STATE(9),
    [sym_variable] = STATE(24),
    [sym_identifier] = STATE(53),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LTchar_GT] = ACTIONS(13),
    [anon_sym_LTspace_GT] = ACTIONS(13),
    [anon_sym_LTwhitespace_GT] = ACTIONS(13),
    [anon_sym_LTnewline_GT] = ACTIONS(13),
    [anon_sym_LTtab_GT] = ACTIONS(13),
    [anon_sym_LTreturn_GT] = ACTIONS(13),
    [anon_sym_LTfeed_GT] = ACTIONS(13),
    [anon_sym_LTnull_GT] = ACTIONS(13),
    [anon_sym_LTdigit_GT] = ACTIONS(13),
    [anon_sym_LTvertical_GT] = ACTIONS(13),
    [anon_sym_LTword_GT] = ACTIONS(13),
    [anon_sym_LTalphabetic_GT] = ACTIONS(13),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(13),
    [anon_sym_LTboundary_GT] = ACTIONS(13),
    [anon_sym_LTbackspace_GT] = ACTIONS(13),
    [anon_sym_LTstart_GT] = ACTIONS(13),
    [anon_sym_LTend_GT] = ACTIONS(13),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(15),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(15),
    [sym_range_character] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_capture] = ACTIONS(29),
    [anon_sym_match] = ACTIONS(31),
    [anon_sym_either] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_ahead] = ACTIONS(35),
    [anon_sym_behind] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
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
    [sym_range_character] = ACTIONS(97),
    [anon_sym_lazy] = ACTIONS(97),
    [anon_sym_over] = ACTIONS(97),
    [anon_sym_some] = ACTIONS(97),
    [anon_sym_any] = ACTIONS(97),
    [anon_sym_option] = ACTIONS(97),
    [sym_number] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_capture] = ACTIONS(97),
    [anon_sym_match] = ACTIONS(97),
    [anon_sym_either] = ACTIONS(97),
    [anon_sym_not] = ACTIONS(97),
    [anon_sym_ahead] = ACTIONS(97),
    [anon_sym_behind] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(101),
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
    [sym_range_character] = ACTIONS(101),
    [anon_sym_lazy] = ACTIONS(101),
    [anon_sym_over] = ACTIONS(101),
    [anon_sym_some] = ACTIONS(101),
    [anon_sym_any] = ACTIONS(101),
    [anon_sym_option] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [anon_sym_capture] = ACTIONS(101),
    [anon_sym_match] = ACTIONS(101),
    [anon_sym_either] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_ahead] = ACTIONS(101),
    [anon_sym_behind] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(101),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
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
    [sym_range_character] = ACTIONS(105),
    [anon_sym_lazy] = ACTIONS(105),
    [anon_sym_over] = ACTIONS(105),
    [anon_sym_some] = ACTIONS(105),
    [anon_sym_any] = ACTIONS(105),
    [anon_sym_option] = ACTIONS(105),
    [sym_number] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_capture] = ACTIONS(105),
    [anon_sym_match] = ACTIONS(105),
    [anon_sym_either] = ACTIONS(105),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_ahead] = ACTIONS(105),
    [anon_sym_behind] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(105),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
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
    [sym_range_character] = ACTIONS(109),
    [anon_sym_lazy] = ACTIONS(109),
    [anon_sym_over] = ACTIONS(109),
    [anon_sym_some] = ACTIONS(109),
    [anon_sym_any] = ACTIONS(109),
    [anon_sym_option] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_capture] = ACTIONS(109),
    [anon_sym_match] = ACTIONS(109),
    [anon_sym_either] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(109),
    [anon_sym_ahead] = ACTIONS(109),
    [anon_sym_behind] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(113),
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
    [sym_range_character] = ACTIONS(113),
    [anon_sym_lazy] = ACTIONS(113),
    [anon_sym_over] = ACTIONS(113),
    [anon_sym_some] = ACTIONS(113),
    [anon_sym_any] = ACTIONS(113),
    [anon_sym_option] = ACTIONS(113),
    [sym_number] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_capture] = ACTIONS(113),
    [anon_sym_match] = ACTIONS(113),
    [anon_sym_either] = ACTIONS(113),
    [anon_sym_not] = ACTIONS(113),
    [anon_sym_ahead] = ACTIONS(113),
    [anon_sym_behind] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(117),
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
    [sym_range_character] = ACTIONS(117),
    [anon_sym_lazy] = ACTIONS(117),
    [anon_sym_over] = ACTIONS(117),
    [anon_sym_some] = ACTIONS(117),
    [anon_sym_any] = ACTIONS(117),
    [anon_sym_option] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [anon_sym_capture] = ACTIONS(117),
    [anon_sym_match] = ACTIONS(117),
    [anon_sym_either] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_ahead] = ACTIONS(117),
    [anon_sym_behind] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(121),
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
    [sym_range_character] = ACTIONS(121),
    [anon_sym_lazy] = ACTIONS(121),
    [anon_sym_over] = ACTIONS(121),
    [anon_sym_some] = ACTIONS(121),
    [anon_sym_any] = ACTIONS(121),
    [anon_sym_option] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_capture] = ACTIONS(121),
    [anon_sym_match] = ACTIONS(121),
    [anon_sym_either] = ACTIONS(121),
    [anon_sym_not] = ACTIONS(121),
    [anon_sym_ahead] = ACTIONS(121),
    [anon_sym_behind] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(121),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
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
    [sym_range_character] = ACTIONS(125),
    [anon_sym_lazy] = ACTIONS(125),
    [anon_sym_over] = ACTIONS(125),
    [anon_sym_some] = ACTIONS(125),
    [anon_sym_any] = ACTIONS(125),
    [anon_sym_option] = ACTIONS(125),
    [sym_number] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_capture] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(125),
    [anon_sym_either] = ACTIONS(125),
    [anon_sym_not] = ACTIONS(125),
    [anon_sym_ahead] = ACTIONS(125),
    [anon_sym_behind] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(125),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(129),
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
    [sym_range_character] = ACTIONS(129),
    [anon_sym_lazy] = ACTIONS(129),
    [anon_sym_over] = ACTIONS(129),
    [anon_sym_some] = ACTIONS(129),
    [anon_sym_any] = ACTIONS(129),
    [anon_sym_option] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [anon_sym_capture] = ACTIONS(129),
    [anon_sym_match] = ACTIONS(129),
    [anon_sym_either] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_ahead] = ACTIONS(129),
    [anon_sym_behind] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(129),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(133),
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
    [sym_range_character] = ACTIONS(133),
    [anon_sym_lazy] = ACTIONS(133),
    [anon_sym_over] = ACTIONS(133),
    [anon_sym_some] = ACTIONS(133),
    [anon_sym_any] = ACTIONS(133),
    [anon_sym_option] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [anon_sym_capture] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(133),
    [anon_sym_either] = ACTIONS(133),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_ahead] = ACTIONS(133),
    [anon_sym_behind] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(133),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_LTchar_GT] = ACTIONS(137),
    [anon_sym_LTspace_GT] = ACTIONS(137),
    [anon_sym_LTwhitespace_GT] = ACTIONS(137),
    [anon_sym_LTnewline_GT] = ACTIONS(137),
    [anon_sym_LTtab_GT] = ACTIONS(137),
    [anon_sym_LTreturn_GT] = ACTIONS(137),
    [anon_sym_LTfeed_GT] = ACTIONS(137),
    [anon_sym_LTnull_GT] = ACTIONS(137),
    [anon_sym_LTdigit_GT] = ACTIONS(137),
    [anon_sym_LTvertical_GT] = ACTIONS(137),
    [anon_sym_LTword_GT] = ACTIONS(137),
    [anon_sym_LTalphabetic_GT] = ACTIONS(137),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(137),
    [anon_sym_LTboundary_GT] = ACTIONS(137),
    [anon_sym_LTbackspace_GT] = ACTIONS(137),
    [anon_sym_LTstart_GT] = ACTIONS(137),
    [anon_sym_LTend_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(137),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(137),
    [sym_range_character] = ACTIONS(137),
    [anon_sym_lazy] = ACTIONS(137),
    [anon_sym_over] = ACTIONS(137),
    [anon_sym_some] = ACTIONS(137),
    [anon_sym_any] = ACTIONS(137),
    [anon_sym_option] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [anon_sym_capture] = ACTIONS(137),
    [anon_sym_match] = ACTIONS(137),
    [anon_sym_either] = ACTIONS(137),
    [anon_sym_not] = ACTIONS(137),
    [anon_sym_ahead] = ACTIONS(137),
    [anon_sym_behind] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_LTchar_GT] = ACTIONS(141),
    [anon_sym_LTspace_GT] = ACTIONS(141),
    [anon_sym_LTwhitespace_GT] = ACTIONS(141),
    [anon_sym_LTnewline_GT] = ACTIONS(141),
    [anon_sym_LTtab_GT] = ACTIONS(141),
    [anon_sym_LTreturn_GT] = ACTIONS(141),
    [anon_sym_LTfeed_GT] = ACTIONS(141),
    [anon_sym_LTnull_GT] = ACTIONS(141),
    [anon_sym_LTdigit_GT] = ACTIONS(141),
    [anon_sym_LTvertical_GT] = ACTIONS(141),
    [anon_sym_LTword_GT] = ACTIONS(141),
    [anon_sym_LTalphabetic_GT] = ACTIONS(141),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(141),
    [anon_sym_LTboundary_GT] = ACTIONS(141),
    [anon_sym_LTbackspace_GT] = ACTIONS(141),
    [anon_sym_LTstart_GT] = ACTIONS(141),
    [anon_sym_LTend_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(141),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(141),
    [sym_range_character] = ACTIONS(141),
    [anon_sym_lazy] = ACTIONS(141),
    [anon_sym_over] = ACTIONS(141),
    [anon_sym_some] = ACTIONS(141),
    [anon_sym_any] = ACTIONS(141),
    [anon_sym_option] = ACTIONS(141),
    [sym_number] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_capture] = ACTIONS(141),
    [anon_sym_match] = ACTIONS(141),
    [anon_sym_either] = ACTIONS(141),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_ahead] = ACTIONS(141),
    [anon_sym_behind] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(141),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_LTchar_GT] = ACTIONS(145),
    [anon_sym_LTspace_GT] = ACTIONS(145),
    [anon_sym_LTwhitespace_GT] = ACTIONS(145),
    [anon_sym_LTnewline_GT] = ACTIONS(145),
    [anon_sym_LTtab_GT] = ACTIONS(145),
    [anon_sym_LTreturn_GT] = ACTIONS(145),
    [anon_sym_LTfeed_GT] = ACTIONS(145),
    [anon_sym_LTnull_GT] = ACTIONS(145),
    [anon_sym_LTdigit_GT] = ACTIONS(145),
    [anon_sym_LTvertical_GT] = ACTIONS(145),
    [anon_sym_LTword_GT] = ACTIONS(145),
    [anon_sym_LTalphabetic_GT] = ACTIONS(145),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(145),
    [anon_sym_LTboundary_GT] = ACTIONS(145),
    [anon_sym_LTbackspace_GT] = ACTIONS(145),
    [anon_sym_LTstart_GT] = ACTIONS(145),
    [anon_sym_LTend_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(145),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(145),
    [sym_range_character] = ACTIONS(145),
    [anon_sym_lazy] = ACTIONS(145),
    [anon_sym_over] = ACTIONS(145),
    [anon_sym_some] = ACTIONS(145),
    [anon_sym_any] = ACTIONS(145),
    [anon_sym_option] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_capture] = ACTIONS(145),
    [anon_sym_match] = ACTIONS(145),
    [anon_sym_either] = ACTIONS(145),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_ahead] = ACTIONS(145),
    [anon_sym_behind] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(145),
  },
  [23] = {
    [sym_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_LTchar_GT] = ACTIONS(149),
    [anon_sym_LTspace_GT] = ACTIONS(149),
    [anon_sym_LTwhitespace_GT] = ACTIONS(149),
    [anon_sym_LTnewline_GT] = ACTIONS(149),
    [anon_sym_LTtab_GT] = ACTIONS(149),
    [anon_sym_LTreturn_GT] = ACTIONS(149),
    [anon_sym_LTfeed_GT] = ACTIONS(149),
    [anon_sym_LTnull_GT] = ACTIONS(149),
    [anon_sym_LTdigit_GT] = ACTIONS(149),
    [anon_sym_LTvertical_GT] = ACTIONS(149),
    [anon_sym_LTword_GT] = ACTIONS(149),
    [anon_sym_LTalphabetic_GT] = ACTIONS(149),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(149),
    [anon_sym_LTboundary_GT] = ACTIONS(149),
    [anon_sym_LTbackspace_GT] = ACTIONS(149),
    [anon_sym_LTstart_GT] = ACTIONS(149),
    [anon_sym_LTend_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(149),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(149),
    [sym_range_character] = ACTIONS(149),
    [anon_sym_lazy] = ACTIONS(149),
    [anon_sym_over] = ACTIONS(149),
    [anon_sym_some] = ACTIONS(149),
    [anon_sym_any] = ACTIONS(149),
    [anon_sym_option] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_capture] = ACTIONS(149),
    [anon_sym_match] = ACTIONS(149),
    [anon_sym_either] = ACTIONS(149),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_ahead] = ACTIONS(149),
    [anon_sym_behind] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_LTchar_GT] = ACTIONS(153),
    [anon_sym_LTspace_GT] = ACTIONS(153),
    [anon_sym_LTwhitespace_GT] = ACTIONS(153),
    [anon_sym_LTnewline_GT] = ACTIONS(153),
    [anon_sym_LTtab_GT] = ACTIONS(153),
    [anon_sym_LTreturn_GT] = ACTIONS(153),
    [anon_sym_LTfeed_GT] = ACTIONS(153),
    [anon_sym_LTnull_GT] = ACTIONS(153),
    [anon_sym_LTdigit_GT] = ACTIONS(153),
    [anon_sym_LTvertical_GT] = ACTIONS(153),
    [anon_sym_LTword_GT] = ACTIONS(153),
    [anon_sym_LTalphabetic_GT] = ACTIONS(153),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(153),
    [anon_sym_LTboundary_GT] = ACTIONS(153),
    [anon_sym_LTbackspace_GT] = ACTIONS(153),
    [anon_sym_LTstart_GT] = ACTIONS(153),
    [anon_sym_LTend_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(153),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(153),
    [sym_range_character] = ACTIONS(153),
    [anon_sym_lazy] = ACTIONS(153),
    [anon_sym_over] = ACTIONS(153),
    [anon_sym_some] = ACTIONS(153),
    [anon_sym_any] = ACTIONS(153),
    [anon_sym_option] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [anon_sym_BQUOTE] = ACTIONS(153),
    [anon_sym_capture] = ACTIONS(153),
    [anon_sym_match] = ACTIONS(153),
    [anon_sym_either] = ACTIONS(153),
    [anon_sym_not] = ACTIONS(153),
    [anon_sym_ahead] = ACTIONS(153),
    [anon_sym_behind] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(153),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      anon_sym_over,
    ACTIONS(161), 1,
      sym_number,
    STATE(25), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_some,
      anon_sym_any,
      anon_sym_option,
  [21] = 6,
    ACTIONS(163), 1,
      aux_sym_group_token1,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_block,
    STATE(26), 1,
      sym_comment,
  [40] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
    STATE(27), 1,
      sym_comment,
  [56] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_DOT,
    STATE(28), 1,
      sym_comment,
    STATE(41), 1,
      sym_identifier,
  [72] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
    STATE(29), 1,
      sym_comment,
  [88] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [102] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_ahead,
      anon_sym_behind,
  [116] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_block,
    STATE(32), 1,
      sym_comment,
  [132] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
    STATE(33), 1,
      sym_comment,
  [148] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 1,
      anon_sym_to,
    ACTIONS(179), 1,
      anon_sym_of,
    STATE(34), 1,
      sym_comment,
  [164] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
    STATE(35), 1,
      sym_comment,
  [180] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      anon_sym_to,
    ACTIONS(181), 1,
      anon_sym_of,
    STATE(36), 1,
      sym_comment,
  [196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      sym_number,
    STATE(37), 1,
      sym_comment,
  [209] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      anon_sym_to,
    STATE(38), 1,
      sym_comment,
  [222] = 4,
    ACTIONS(167), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      aux_sym_raw_token1,
    STATE(39), 1,
      sym_comment,
  [235] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      anon_sym_of,
    STATE(40), 1,
      sym_comment,
  [248] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym_comment,
  [261] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      sym_range_character,
    STATE(42), 1,
      sym_comment,
  [274] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_comment,
  [287] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym_comment,
  [300] = 4,
    ACTIONS(167), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      aux_sym_raw_token1,
    STATE(45), 1,
      sym_comment,
  [313] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
  [326] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
  [339] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      anon_sym_of,
    STATE(48), 1,
      sym_comment,
  [352] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      anon_sym_STAR_SLASH,
    STATE(49), 1,
      sym_comment,
  [365] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      sym_number,
    STATE(50), 1,
      sym_comment,
  [378] = 4,
    ACTIONS(167), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      sym_string,
    STATE(51), 1,
      sym_comment,
  [391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_comment,
  [404] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_comment,
  [417] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
  [430] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_identifier_token1,
    STATE(55), 1,
      sym_comment,
  [443] = 4,
    ACTIONS(167), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      aux_sym_raw_token1,
    STATE(56), 1,
      sym_comment,
  [456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      anon_sym_of,
    STATE(57), 1,
      sym_comment,
  [469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym_number,
    STATE(58), 1,
      sym_comment,
  [482] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_BQUOTE,
    STATE(59), 1,
      sym_comment,
  [495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_of,
    STATE(60), 1,
      sym_comment,
  [508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_comment,
  [521] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_comment,
  [534] = 4,
    ACTIONS(167), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      sym_string,
    STATE(63), 1,
      sym_comment,
  [547] = 1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [551] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 21,
  [SMALL_STATE(27)] = 40,
  [SMALL_STATE(28)] = 56,
  [SMALL_STATE(29)] = 72,
  [SMALL_STATE(30)] = 88,
  [SMALL_STATE(31)] = 102,
  [SMALL_STATE(32)] = 116,
  [SMALL_STATE(33)] = 132,
  [SMALL_STATE(34)] = 148,
  [SMALL_STATE(35)] = 164,
  [SMALL_STATE(36)] = 180,
  [SMALL_STATE(37)] = 196,
  [SMALL_STATE(38)] = 209,
  [SMALL_STATE(39)] = 222,
  [SMALL_STATE(40)] = 235,
  [SMALL_STATE(41)] = 248,
  [SMALL_STATE(42)] = 261,
  [SMALL_STATE(43)] = 274,
  [SMALL_STATE(44)] = 287,
  [SMALL_STATE(45)] = 300,
  [SMALL_STATE(46)] = 313,
  [SMALL_STATE(47)] = 326,
  [SMALL_STATE(48)] = 339,
  [SMALL_STATE(49)] = 352,
  [SMALL_STATE(50)] = 365,
  [SMALL_STATE(51)] = 378,
  [SMALL_STATE(52)] = 391,
  [SMALL_STATE(53)] = 404,
  [SMALL_STATE(54)] = 417,
  [SMALL_STATE(55)] = 430,
  [SMALL_STATE(56)] = 443,
  [SMALL_STATE(57)] = 456,
  [SMALL_STATE(58)] = 469,
  [SMALL_STATE(59)] = 482,
  [SMALL_STATE(60)] = 495,
  [SMALL_STATE(61)] = 508,
  [SMALL_STATE(62)] = 521,
  [SMALL_STATE(63)] = 534,
  [SMALL_STATE(64)] = 547,
  [SMALL_STATE(65)] = 551,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assertion, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assertion, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_category, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
