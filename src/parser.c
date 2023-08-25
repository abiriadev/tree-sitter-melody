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
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
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
  anon_sym_of = 63,
  anon_sym_over = 64,
  anon_sym_some = 65,
  anon_sym_any = 66,
  anon_sym_option = 67,
  sym_number = 68,
  anon_sym_BQUOTE = 69,
  aux_sym_raw_token1 = 70,
  anon_sym_capture = 71,
  anon_sym_match = 72,
  anon_sym_either = 73,
  anon_sym_LBRACE = 74,
  anon_sym_RBRACE = 75,
  anon_sym_SLASH_SLASH = 76,
  anon_sym_SLASH_STAR = 77,
  anon_sym_STAR_SLASH = 78,
  sym_source_file = 79,
  sym_stmt = 80,
  sym_pattern = 81,
  sym_literal = 82,
  sym_symbol = 83,
  sym_unicode_category = 84,
  sym_range = 85,
  sym_quantifier = 86,
  sym_raw = 87,
  sym_group = 88,
  sym_block = 89,
  aux_sym_source_file_repeat1 = 90,
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
  [anon_sym_of] = "of",
  [anon_sym_over] = "over",
  [anon_sym_some] = "some",
  [anon_sym_any] = "any",
  [anon_sym_option] = "option",
  [sym_number] = "number",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_raw_token1] = "raw_token1",
  [anon_sym_capture] = "capture",
  [anon_sym_match] = "match",
  [anon_sym_either] = "either",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
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
  [sym_block] = "block",
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
  [anon_sym_of] = anon_sym_of,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_option] = anon_sym_option,
  [sym_number] = sym_number,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_raw_token1] = aux_sym_raw_token1,
  [anon_sym_capture] = anon_sym_capture,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_either] = anon_sym_either,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
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
  [sym_block] = sym_block,
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
  [anon_sym_of] = {
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
  [sym_block] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(584);
      if (lookahead == '"') ADVANCE(587);
      if (lookahead == '\'') ADVANCE(586);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == ';') ADVANCE(585);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '`') ADVANCE(654);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead == '{') ADVANCE(660);
      if (lookahead == '}') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(652);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(663);
      if (lookahead == '/') ADVANCE(662);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(581);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(664);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(154);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(605);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(593);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(589);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(595);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(596);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(597);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(590);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(604);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(594);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(592);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(602);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(598);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(603);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(600);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(591);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(601);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(613);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(638);
      if (lookahead == '_') ADVANCE(318);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(640);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(606);
      if (lookahead == '_') ADVANCE(371);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(626);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(621);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(639);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(617);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(642);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(643);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(622);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(641);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(630);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(610);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(612);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(629);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(625);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(628);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(616);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(619);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(623);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(611);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(624);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(618);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(631);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(607);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(614);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(632);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(609);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(608);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(633);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(635);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(637);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(634);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(620);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(627);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(636);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(615);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(2);
      END_STATE();
    case 63:
      if (lookahead == 'Z') ADVANCE(645);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(319);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(416);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(551);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(478);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(317);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(168);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(483);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(332);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(486);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(334);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(335);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(320);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(321);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(372);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(490);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(491);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(423);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(424);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(425);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(427);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(264);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(465);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(510);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(394);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(211);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(398);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(400);
      END_STATE();
    case 149:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(402);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(405);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(228);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == 'u') ADVANCE(354);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(580);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(512);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(539);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(540);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(542);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(545);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(444);
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 246:
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 247:
      if (lookahead == 'f') ADVANCE(281);
      END_STATE();
    case 248:
      if (lookahead == 'g') ADVANCE(387);
      END_STATE();
    case 249:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 250:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 251:
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 252:
      if (lookahead == 'g') ADVANCE(368);
      END_STATE();
    case 253:
      if (lookahead == 'g') ADVANCE(448);
      END_STATE();
    case 254:
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(658);
      END_STATE();
    case 259:
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 260:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 261:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 262:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 263:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 264:
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(501);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 298:
      if (lookahead == 'k') ADVANCE(476);
      END_STATE();
    case 299:
      if (lookahead == 'k') ADVANCE(24);
      END_STATE();
    case 300:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 301:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 302:
      if (lookahead == 'k') ADVANCE(61);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 310:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 313:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 314:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 316:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 317:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 325:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 326:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 329:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 330:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 334:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 335:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 339:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 340:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 341:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(554);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(556);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 410:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 411:
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 412:
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(562);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(511);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(563);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(564);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(565);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(567);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(568);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(244);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 546:
      if (lookahead == 'u') ADVANCE(347);
      END_STATE();
    case 547:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 548:
      if (lookahead == 'u') ADVANCE(442);
      END_STATE();
    case 549:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 550:
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 551:
      if (lookahead == 'u') ADVANCE(487);
      END_STATE();
    case 552:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 553:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 554:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 555:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 556:
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 557:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 558:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 559:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 560:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 561:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 562:
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 563:
      if (lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 564:
      if (lookahead == 'u') ADVANCE(376);
      END_STATE();
    case 565:
      if (lookahead == 'u') ADVANCE(377);
      END_STATE();
    case 566:
      if (lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 567:
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 568:
      if (lookahead == 'u') ADVANCE(380);
      END_STATE();
    case 569:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 570:
      if (lookahead == 'w') ADVANCE(304);
      END_STATE();
    case 571:
      if (lookahead == 'w') ADVANCE(208);
      END_STATE();
    case 572:
      if (lookahead == 'y') ADVANCE(650);
      END_STATE();
    case 573:
      if (lookahead == 'y') ADVANCE(646);
      END_STATE();
    case 574:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 575:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 576:
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 577:
      if (lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 578:
      if (lookahead == 'y') ADVANCE(340);
      END_STATE();
    case 579:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 580:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 581:
      if (lookahead == 'z') ADVANCE(62);
      END_STATE();
    case 582:
      if (lookahead == 'z') ADVANCE(573);
      END_STATE();
    case 583:
      if (lookahead == '{') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(583)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LTchar_GT);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LTspace_GT);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LTwhitespace_GT);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LTnewline_GT);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LTtab_GT);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LTreturn_GT);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LTfeed_GT);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LTnull_GT);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LTdigit_GT);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LTvertical_GT);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LTword_GT);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_LTalphabetic_GT);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_LTalphanumeric_GT);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_LTboundary_GT);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_LTbackspace_GT);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_LTstart_GT);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_LTend_GT);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_GT);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONlowercase_letter_GT);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONuppercase_letter_GT);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcased_letter_GT);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_letter_GT);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_letter_GT);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmark_GT);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONenclosing_mark_GT);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONseparator_GT);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspace_separator_GT);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONline_separator_GT);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONparagraph_separator_GT);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsymbol_GT);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmath_symbol_GT);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_symbol_GT);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnumber_GT);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_number_GT);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_number_GT);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONpunctuation_GT);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdash_punctuation_GT);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONopen_punctuation_GT);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONclose_punctuation_GT);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_punctuation_GT);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_GT);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcontrol_GT);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONformat_GT);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONprivate_use_GT);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsurrogate_GT);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONunassigned_GT);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_range_character);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_lazy);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'a') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_raw_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(656);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_raw_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_capture);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_either);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 583},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 583},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 655},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 583},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_over] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_capture] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_either] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_stmt] = STATE(5),
    [sym_pattern] = STATE(27),
    [sym_literal] = STATE(26),
    [sym_symbol] = STATE(26),
    [sym_unicode_category] = STATE(41),
    [sym_range] = STATE(26),
    [sym_quantifier] = STATE(26),
    [sym_raw] = STATE(26),
    [sym_group] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LTchar_GT] = ACTIONS(9),
    [anon_sym_LTspace_GT] = ACTIONS(9),
    [anon_sym_LTwhitespace_GT] = ACTIONS(9),
    [anon_sym_LTnewline_GT] = ACTIONS(9),
    [anon_sym_LTtab_GT] = ACTIONS(9),
    [anon_sym_LTreturn_GT] = ACTIONS(9),
    [anon_sym_LTfeed_GT] = ACTIONS(9),
    [anon_sym_LTnull_GT] = ACTIONS(9),
    [anon_sym_LTdigit_GT] = ACTIONS(9),
    [anon_sym_LTvertical_GT] = ACTIONS(9),
    [anon_sym_LTword_GT] = ACTIONS(9),
    [anon_sym_LTalphabetic_GT] = ACTIONS(9),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(9),
    [anon_sym_LTboundary_GT] = ACTIONS(9),
    [anon_sym_LTbackspace_GT] = ACTIONS(9),
    [anon_sym_LTstart_GT] = ACTIONS(9),
    [anon_sym_LTend_GT] = ACTIONS(9),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(11),
    [sym_range_character] = ACTIONS(13),
    [anon_sym_lazy] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(17),
    [anon_sym_some] = ACTIONS(19),
    [anon_sym_any] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_capture] = ACTIONS(25),
    [anon_sym_match] = ACTIONS(27),
    [anon_sym_either] = ACTIONS(27),
  },
  [2] = {
    [sym_stmt] = STATE(2),
    [sym_pattern] = STATE(27),
    [sym_literal] = STATE(26),
    [sym_symbol] = STATE(26),
    [sym_unicode_category] = STATE(41),
    [sym_range] = STATE(26),
    [sym_quantifier] = STATE(26),
    [sym_raw] = STATE(26),
    [sym_group] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [anon_sym_LTchar_GT] = ACTIONS(37),
    [anon_sym_LTspace_GT] = ACTIONS(37),
    [anon_sym_LTwhitespace_GT] = ACTIONS(37),
    [anon_sym_LTnewline_GT] = ACTIONS(37),
    [anon_sym_LTtab_GT] = ACTIONS(37),
    [anon_sym_LTreturn_GT] = ACTIONS(37),
    [anon_sym_LTfeed_GT] = ACTIONS(37),
    [anon_sym_LTnull_GT] = ACTIONS(37),
    [anon_sym_LTdigit_GT] = ACTIONS(37),
    [anon_sym_LTvertical_GT] = ACTIONS(37),
    [anon_sym_LTword_GT] = ACTIONS(37),
    [anon_sym_LTalphabetic_GT] = ACTIONS(37),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(37),
    [anon_sym_LTboundary_GT] = ACTIONS(37),
    [anon_sym_LTbackspace_GT] = ACTIONS(37),
    [anon_sym_LTstart_GT] = ACTIONS(37),
    [anon_sym_LTend_GT] = ACTIONS(37),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(40),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(40),
    [sym_range_character] = ACTIONS(43),
    [anon_sym_lazy] = ACTIONS(46),
    [anon_sym_over] = ACTIONS(49),
    [anon_sym_some] = ACTIONS(52),
    [anon_sym_any] = ACTIONS(52),
    [anon_sym_option] = ACTIONS(52),
    [sym_number] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_capture] = ACTIONS(61),
    [anon_sym_match] = ACTIONS(64),
    [anon_sym_either] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(29),
  },
  [3] = {
    [sym_stmt] = STATE(2),
    [sym_pattern] = STATE(27),
    [sym_literal] = STATE(26),
    [sym_symbol] = STATE(26),
    [sym_unicode_category] = STATE(41),
    [sym_range] = STATE(26),
    [sym_quantifier] = STATE(26),
    [sym_raw] = STATE(26),
    [sym_group] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LTchar_GT] = ACTIONS(9),
    [anon_sym_LTspace_GT] = ACTIONS(9),
    [anon_sym_LTwhitespace_GT] = ACTIONS(9),
    [anon_sym_LTnewline_GT] = ACTIONS(9),
    [anon_sym_LTtab_GT] = ACTIONS(9),
    [anon_sym_LTreturn_GT] = ACTIONS(9),
    [anon_sym_LTfeed_GT] = ACTIONS(9),
    [anon_sym_LTnull_GT] = ACTIONS(9),
    [anon_sym_LTdigit_GT] = ACTIONS(9),
    [anon_sym_LTvertical_GT] = ACTIONS(9),
    [anon_sym_LTword_GT] = ACTIONS(9),
    [anon_sym_LTalphabetic_GT] = ACTIONS(9),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(9),
    [anon_sym_LTboundary_GT] = ACTIONS(9),
    [anon_sym_LTbackspace_GT] = ACTIONS(9),
    [anon_sym_LTstart_GT] = ACTIONS(9),
    [anon_sym_LTend_GT] = ACTIONS(9),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(11),
    [sym_range_character] = ACTIONS(13),
    [anon_sym_lazy] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(17),
    [anon_sym_some] = ACTIONS(19),
    [anon_sym_any] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_capture] = ACTIONS(25),
    [anon_sym_match] = ACTIONS(27),
    [anon_sym_either] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(67),
  },
  [4] = {
    [sym_stmt] = STATE(3),
    [sym_pattern] = STATE(27),
    [sym_literal] = STATE(26),
    [sym_symbol] = STATE(26),
    [sym_unicode_category] = STATE(41),
    [sym_range] = STATE(26),
    [sym_quantifier] = STATE(26),
    [sym_raw] = STATE(26),
    [sym_group] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LTchar_GT] = ACTIONS(9),
    [anon_sym_LTspace_GT] = ACTIONS(9),
    [anon_sym_LTwhitespace_GT] = ACTIONS(9),
    [anon_sym_LTnewline_GT] = ACTIONS(9),
    [anon_sym_LTtab_GT] = ACTIONS(9),
    [anon_sym_LTreturn_GT] = ACTIONS(9),
    [anon_sym_LTfeed_GT] = ACTIONS(9),
    [anon_sym_LTnull_GT] = ACTIONS(9),
    [anon_sym_LTdigit_GT] = ACTIONS(9),
    [anon_sym_LTvertical_GT] = ACTIONS(9),
    [anon_sym_LTword_GT] = ACTIONS(9),
    [anon_sym_LTalphabetic_GT] = ACTIONS(9),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(9),
    [anon_sym_LTboundary_GT] = ACTIONS(9),
    [anon_sym_LTbackspace_GT] = ACTIONS(9),
    [anon_sym_LTstart_GT] = ACTIONS(9),
    [anon_sym_LTend_GT] = ACTIONS(9),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(11),
    [sym_range_character] = ACTIONS(13),
    [anon_sym_lazy] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(17),
    [anon_sym_some] = ACTIONS(19),
    [anon_sym_any] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_capture] = ACTIONS(25),
    [anon_sym_match] = ACTIONS(27),
    [anon_sym_either] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(69),
  },
  [5] = {
    [sym_stmt] = STATE(2),
    [sym_pattern] = STATE(27),
    [sym_literal] = STATE(26),
    [sym_symbol] = STATE(26),
    [sym_unicode_category] = STATE(41),
    [sym_range] = STATE(26),
    [sym_quantifier] = STATE(26),
    [sym_raw] = STATE(26),
    [sym_group] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LTchar_GT] = ACTIONS(9),
    [anon_sym_LTspace_GT] = ACTIONS(9),
    [anon_sym_LTwhitespace_GT] = ACTIONS(9),
    [anon_sym_LTnewline_GT] = ACTIONS(9),
    [anon_sym_LTtab_GT] = ACTIONS(9),
    [anon_sym_LTreturn_GT] = ACTIONS(9),
    [anon_sym_LTfeed_GT] = ACTIONS(9),
    [anon_sym_LTnull_GT] = ACTIONS(9),
    [anon_sym_LTdigit_GT] = ACTIONS(9),
    [anon_sym_LTvertical_GT] = ACTIONS(9),
    [anon_sym_LTword_GT] = ACTIONS(9),
    [anon_sym_LTalphabetic_GT] = ACTIONS(9),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(9),
    [anon_sym_LTboundary_GT] = ACTIONS(9),
    [anon_sym_LTbackspace_GT] = ACTIONS(9),
    [anon_sym_LTstart_GT] = ACTIONS(9),
    [anon_sym_LTend_GT] = ACTIONS(9),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(11),
    [sym_range_character] = ACTIONS(13),
    [anon_sym_lazy] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(17),
    [anon_sym_some] = ACTIONS(19),
    [anon_sym_any] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_capture] = ACTIONS(25),
    [anon_sym_match] = ACTIONS(27),
    [anon_sym_either] = ACTIONS(27),
  },
  [6] = {
    [sym_pattern] = STATE(47),
    [sym_literal] = STATE(26),
    [sym_symbol] = STATE(26),
    [sym_unicode_category] = STATE(41),
    [sym_range] = STATE(26),
    [sym_quantifier] = STATE(26),
    [sym_raw] = STATE(26),
    [sym_group] = STATE(26),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LTchar_GT] = ACTIONS(9),
    [anon_sym_LTspace_GT] = ACTIONS(9),
    [anon_sym_LTwhitespace_GT] = ACTIONS(9),
    [anon_sym_LTnewline_GT] = ACTIONS(9),
    [anon_sym_LTtab_GT] = ACTIONS(9),
    [anon_sym_LTreturn_GT] = ACTIONS(9),
    [anon_sym_LTfeed_GT] = ACTIONS(9),
    [anon_sym_LTnull_GT] = ACTIONS(9),
    [anon_sym_LTdigit_GT] = ACTIONS(9),
    [anon_sym_LTvertical_GT] = ACTIONS(9),
    [anon_sym_LTword_GT] = ACTIONS(9),
    [anon_sym_LTalphabetic_GT] = ACTIONS(9),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(9),
    [anon_sym_LTboundary_GT] = ACTIONS(9),
    [anon_sym_LTbackspace_GT] = ACTIONS(9),
    [anon_sym_LTstart_GT] = ACTIONS(9),
    [anon_sym_LTend_GT] = ACTIONS(9),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(11),
    [sym_range_character] = ACTIONS(13),
    [anon_sym_lazy] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(17),
    [anon_sym_some] = ACTIONS(19),
    [anon_sym_any] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_capture] = ACTIONS(25),
    [anon_sym_match] = ACTIONS(27),
    [anon_sym_either] = ACTIONS(27),
  },
  [7] = {
    [sym_pattern] = STATE(45),
    [sym_literal] = STATE(26),
    [sym_symbol] = STATE(26),
    [sym_unicode_category] = STATE(41),
    [sym_range] = STATE(26),
    [sym_quantifier] = STATE(26),
    [sym_raw] = STATE(26),
    [sym_group] = STATE(26),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LTchar_GT] = ACTIONS(9),
    [anon_sym_LTspace_GT] = ACTIONS(9),
    [anon_sym_LTwhitespace_GT] = ACTIONS(9),
    [anon_sym_LTnewline_GT] = ACTIONS(9),
    [anon_sym_LTtab_GT] = ACTIONS(9),
    [anon_sym_LTreturn_GT] = ACTIONS(9),
    [anon_sym_LTfeed_GT] = ACTIONS(9),
    [anon_sym_LTnull_GT] = ACTIONS(9),
    [anon_sym_LTdigit_GT] = ACTIONS(9),
    [anon_sym_LTvertical_GT] = ACTIONS(9),
    [anon_sym_LTword_GT] = ACTIONS(9),
    [anon_sym_LTalphabetic_GT] = ACTIONS(9),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(9),
    [anon_sym_LTboundary_GT] = ACTIONS(9),
    [anon_sym_LTbackspace_GT] = ACTIONS(9),
    [anon_sym_LTstart_GT] = ACTIONS(9),
    [anon_sym_LTend_GT] = ACTIONS(9),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(11),
    [sym_range_character] = ACTIONS(13),
    [anon_sym_lazy] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(17),
    [anon_sym_some] = ACTIONS(19),
    [anon_sym_any] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_capture] = ACTIONS(25),
    [anon_sym_match] = ACTIONS(27),
    [anon_sym_either] = ACTIONS(27),
  },
  [8] = {
    [sym_pattern] = STATE(42),
    [sym_literal] = STATE(26),
    [sym_symbol] = STATE(26),
    [sym_unicode_category] = STATE(41),
    [sym_range] = STATE(26),
    [sym_quantifier] = STATE(26),
    [sym_raw] = STATE(26),
    [sym_group] = STATE(26),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LTchar_GT] = ACTIONS(9),
    [anon_sym_LTspace_GT] = ACTIONS(9),
    [anon_sym_LTwhitespace_GT] = ACTIONS(9),
    [anon_sym_LTnewline_GT] = ACTIONS(9),
    [anon_sym_LTtab_GT] = ACTIONS(9),
    [anon_sym_LTreturn_GT] = ACTIONS(9),
    [anon_sym_LTfeed_GT] = ACTIONS(9),
    [anon_sym_LTnull_GT] = ACTIONS(9),
    [anon_sym_LTdigit_GT] = ACTIONS(9),
    [anon_sym_LTvertical_GT] = ACTIONS(9),
    [anon_sym_LTword_GT] = ACTIONS(9),
    [anon_sym_LTalphabetic_GT] = ACTIONS(9),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(9),
    [anon_sym_LTboundary_GT] = ACTIONS(9),
    [anon_sym_LTbackspace_GT] = ACTIONS(9),
    [anon_sym_LTstart_GT] = ACTIONS(9),
    [anon_sym_LTend_GT] = ACTIONS(9),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(11),
    [sym_range_character] = ACTIONS(13),
    [anon_sym_lazy] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(17),
    [anon_sym_some] = ACTIONS(19),
    [anon_sym_any] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_capture] = ACTIONS(25),
    [anon_sym_match] = ACTIONS(27),
    [anon_sym_either] = ACTIONS(27),
  },
  [9] = {
    [sym_pattern] = STATE(36),
    [sym_literal] = STATE(26),
    [sym_symbol] = STATE(26),
    [sym_unicode_category] = STATE(41),
    [sym_range] = STATE(26),
    [sym_quantifier] = STATE(26),
    [sym_raw] = STATE(26),
    [sym_group] = STATE(26),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LTchar_GT] = ACTIONS(9),
    [anon_sym_LTspace_GT] = ACTIONS(9),
    [anon_sym_LTwhitespace_GT] = ACTIONS(9),
    [anon_sym_LTnewline_GT] = ACTIONS(9),
    [anon_sym_LTtab_GT] = ACTIONS(9),
    [anon_sym_LTreturn_GT] = ACTIONS(9),
    [anon_sym_LTfeed_GT] = ACTIONS(9),
    [anon_sym_LTnull_GT] = ACTIONS(9),
    [anon_sym_LTdigit_GT] = ACTIONS(9),
    [anon_sym_LTvertical_GT] = ACTIONS(9),
    [anon_sym_LTword_GT] = ACTIONS(9),
    [anon_sym_LTalphabetic_GT] = ACTIONS(9),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(9),
    [anon_sym_LTboundary_GT] = ACTIONS(9),
    [anon_sym_LTbackspace_GT] = ACTIONS(9),
    [anon_sym_LTstart_GT] = ACTIONS(9),
    [anon_sym_LTend_GT] = ACTIONS(9),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(11),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(11),
    [sym_range_character] = ACTIONS(13),
    [anon_sym_lazy] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(17),
    [anon_sym_some] = ACTIONS(19),
    [anon_sym_any] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_capture] = ACTIONS(25),
    [anon_sym_match] = ACTIONS(27),
    [anon_sym_either] = ACTIONS(27),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LTchar_GT] = ACTIONS(73),
    [anon_sym_LTspace_GT] = ACTIONS(73),
    [anon_sym_LTwhitespace_GT] = ACTIONS(73),
    [anon_sym_LTnewline_GT] = ACTIONS(73),
    [anon_sym_LTtab_GT] = ACTIONS(73),
    [anon_sym_LTreturn_GT] = ACTIONS(73),
    [anon_sym_LTfeed_GT] = ACTIONS(73),
    [anon_sym_LTnull_GT] = ACTIONS(73),
    [anon_sym_LTdigit_GT] = ACTIONS(73),
    [anon_sym_LTvertical_GT] = ACTIONS(73),
    [anon_sym_LTword_GT] = ACTIONS(73),
    [anon_sym_LTalphabetic_GT] = ACTIONS(73),
    [anon_sym_LTalphanumeric_GT] = ACTIONS(73),
    [anon_sym_LTboundary_GT] = ACTIONS(73),
    [anon_sym_LTbackspace_GT] = ACTIONS(73),
    [anon_sym_LTstart_GT] = ACTIONS(73),
    [anon_sym_LTend_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONletter_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONlowercase_letter_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONuppercase_letter_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONcased_letter_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONmodifier_letter_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONother_letter_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONmark_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONenclosing_mark_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONseparator_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONspace_separator_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONline_separator_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONparagraph_separator_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONsymbol_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONmath_symbol_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONother_symbol_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONnumber_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONletter_number_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONother_number_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONpunctuation_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONdash_punctuation_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONopen_punctuation_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONclose_punctuation_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONother_punctuation_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONother_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONcontrol_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONformat_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONprivate_use_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONsurrogate_GT] = ACTIONS(73),
    [anon_sym_LTcategory_COLON_COLONunassigned_GT] = ACTIONS(73),
    [sym_range_character] = ACTIONS(73),
    [anon_sym_lazy] = ACTIONS(73),
    [anon_sym_over] = ACTIONS(73),
    [anon_sym_some] = ACTIONS(73),
    [anon_sym_any] = ACTIONS(73),
    [anon_sym_option] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(73),
    [anon_sym_capture] = ACTIONS(73),
    [anon_sym_match] = ACTIONS(73),
    [anon_sym_either] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(77), 1,
      anon_sym_over,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(79), 3,
      anon_sym_some,
      anon_sym_any,
      anon_sym_option,
  [12] = 3,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
  [22] = 2,
    ACTIONS(87), 1,
      anon_sym_to,
    ACTIONS(89), 1,
      anon_sym_of,
  [29] = 2,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_block,
  [36] = 2,
    ACTIONS(77), 1,
      anon_sym_to,
    ACTIONS(91), 1,
      anon_sym_of,
  [43] = 2,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [50] = 1,
    ACTIONS(91), 1,
      anon_sym_of,
  [54] = 1,
    ACTIONS(93), 1,
      anon_sym_SEMI,
  [58] = 1,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
  [62] = 1,
    ACTIONS(97), 1,
      sym_range_character,
  [66] = 1,
    ACTIONS(99), 1,
      sym_number,
  [70] = 1,
    ACTIONS(89), 1,
      anon_sym_of,
  [74] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [78] = 1,
    ACTIONS(103), 1,
      sym_string,
  [82] = 1,
    ACTIONS(105), 1,
      anon_sym_BQUOTE,
  [86] = 1,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [90] = 1,
    ACTIONS(109), 1,
      anon_sym_SEMI,
  [94] = 1,
    ACTIONS(111), 1,
      anon_sym_SEMI,
  [98] = 1,
    ACTIONS(113), 1,
      aux_sym_raw_token1,
  [102] = 1,
    ACTIONS(79), 1,
      sym_number,
  [106] = 1,
    ACTIONS(115), 1,
      anon_sym_SEMI,
  [110] = 1,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
  [114] = 1,
    ACTIONS(117), 1,
      anon_sym_of,
  [118] = 1,
    ACTIONS(119), 1,
      anon_sym_to,
  [122] = 1,
    ACTIONS(121), 1,
      sym_number,
  [126] = 1,
    ACTIONS(123), 1,
      anon_sym_SEMI,
  [130] = 1,
    ACTIONS(125), 1,
      anon_sym_SEMI,
  [134] = 1,
    ACTIONS(127), 1,
      anon_sym_SEMI,
  [138] = 1,
    ACTIONS(129), 1,
      anon_sym_SEMI,
  [142] = 1,
    ACTIONS(131), 1,
      anon_sym_SEMI,
  [146] = 1,
    ACTIONS(133), 1,
      anon_sym_SEMI,
  [150] = 1,
    ACTIONS(135), 1,
      anon_sym_SEMI,
  [154] = 1,
    ACTIONS(137), 1,
      anon_sym_of,
  [158] = 1,
    ACTIONS(139), 1,
      anon_sym_SEMI,
  [162] = 1,
    ACTIONS(141), 1,
      anon_sym_SEMI,
  [166] = 1,
    ACTIONS(143), 1,
      sym_string,
  [170] = 1,
    ACTIONS(145), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 12,
  [SMALL_STATE(13)] = 22,
  [SMALL_STATE(14)] = 29,
  [SMALL_STATE(15)] = 36,
  [SMALL_STATE(16)] = 43,
  [SMALL_STATE(17)] = 50,
  [SMALL_STATE(18)] = 54,
  [SMALL_STATE(19)] = 58,
  [SMALL_STATE(20)] = 62,
  [SMALL_STATE(21)] = 66,
  [SMALL_STATE(22)] = 70,
  [SMALL_STATE(23)] = 74,
  [SMALL_STATE(24)] = 78,
  [SMALL_STATE(25)] = 82,
  [SMALL_STATE(26)] = 86,
  [SMALL_STATE(27)] = 90,
  [SMALL_STATE(28)] = 94,
  [SMALL_STATE(29)] = 98,
  [SMALL_STATE(30)] = 102,
  [SMALL_STATE(31)] = 106,
  [SMALL_STATE(32)] = 110,
  [SMALL_STATE(33)] = 114,
  [SMALL_STATE(34)] = 118,
  [SMALL_STATE(35)] = 122,
  [SMALL_STATE(36)] = 126,
  [SMALL_STATE(37)] = 130,
  [SMALL_STATE(38)] = 134,
  [SMALL_STATE(39)] = 138,
  [SMALL_STATE(40)] = 142,
  [SMALL_STATE(41)] = 146,
  [SMALL_STATE(42)] = 150,
  [SMALL_STATE(43)] = 154,
  [SMALL_STATE(44)] = 158,
  [SMALL_STATE(45)] = 162,
  [SMALL_STATE(46)] = 166,
  [SMALL_STATE(47)] = 170,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_category, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 6),
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
