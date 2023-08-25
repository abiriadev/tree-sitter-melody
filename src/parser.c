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
#define STATE_COUNT 4
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
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
  sym_source_file = 60,
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
      if (eof) ADVANCE(544);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '\'') ADVANCE(546);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(565);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(553);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(549);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(555);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(556);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(559);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(557);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(550);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(564);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(554);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(552);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(562);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(558);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(563);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(560);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(551);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(561);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(573);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(598);
      if (lookahead == '_') ADVANCE(298);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(600);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(566);
      if (lookahead == '_') ADVANCE(348);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(586);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(581);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(577);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(602);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(603);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(582);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(601);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(590);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(570);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(572);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(589);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(585);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(588);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(576);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(579);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(583);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(571);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(584);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(578);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(591);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(567);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(574);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(592);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(569);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(568);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(593);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(595);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(597);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(594);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(580);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(587);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(596);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(575);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(299);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(386);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(311);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(516);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(448);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(297);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(151);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(453);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(456);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(312);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(459);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(300);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(349);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(460);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(301);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(461);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(302);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(396);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(397);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(398);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(399);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(400);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 's') ADVANCE(385);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == 'w') ADVANCE(242);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(414);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(387);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(4);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(369);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(260);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(373);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(375);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(377);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(380);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(505);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(508);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(509);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(510);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(511);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(415);
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 231:
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(360);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 237:
      if (lookahead == 'g') ADVANCE(345);
      END_STATE();
    case 238:
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 239:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 240:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 241:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 242:
      if (lookahead == 'h') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 244:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 245:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 246:
      if (lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 247:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 278:
      if (lookahead == 'k') ADVANCE(446);
      END_STATE();
    case 279:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 280:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 281:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 282:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 285:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 286:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead == 'p') ADVANCE(531);
      if (lookahead == 's') ADVANCE(540);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 's') ADVANCE(542);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 305:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 306:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 307:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 308:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 309:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 310:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 311:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 312:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 313:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 314:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 315:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 316:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 317:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 318:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 319:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 320:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(521);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 387:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 388:
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 389:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 390:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 391:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 392:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 393:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 394:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 395:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 396:
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 397:
      if (lookahead == 'p') ADVANCE(529);
      END_STATE();
    case 398:
      if (lookahead == 'p') ADVANCE(530);
      END_STATE();
    case 399:
      if (lookahead == 'p') ADVANCE(532);
      END_STATE();
    case 400:
      if (lookahead == 'p') ADVANCE(533);
      END_STATE();
    case 401:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 446:
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 447:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 448:
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 449:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 450:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 452:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(522);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 512:
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 513:
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 514:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 515:
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 516:
      if (lookahead == 'u') ADVANCE(457);
      END_STATE();
    case 517:
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 518:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 519:
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 520:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 521:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 522:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 523:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 524:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 525:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 526:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 527:
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 528:
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 529:
      if (lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 530:
      if (lookahead == 'u') ADVANCE(354);
      END_STATE();
    case 531:
      if (lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 532:
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 533:
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 534:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 535:
      if (lookahead == 'w') ADVANCE(286);
      END_STATE();
    case 536:
      if (lookahead == 'w') ADVANCE(191);
      END_STATE();
    case 537:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 538:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 539:
      if (lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 540:
      if (lookahead == 'y') ADVANCE(317);
      END_STATE();
    case 541:
      if (lookahead == 'y') ADVANCE(319);
      END_STATE();
    case 542:
      if (lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 543:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LTchar_GT);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_LTspace_GT);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_LTwhitespace_GT);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_LTnewline_GT);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_LTtab_GT);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_LTreturn_GT);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_LTfeed_GT);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_LTnull_GT);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_LTdigit_GT);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_LTvertical_GT);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LTword_GT);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LTalphabetic_GT);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LTalphanumeric_GT);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_LTboundary_GT);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_LTbackspace_GT);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LTstart_GT);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LTend_GT);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_GT);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONlowercase_letter_GT);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONuppercase_letter_GT);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONtitlecase_letter_GT);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcased_letter_GT);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_letter_GT);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_letter_GT);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmark_GT);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnon_spacing_mark_GT);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspacing_combining_mark_GT);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONenclosing_mark_GT);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONseparator_GT);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONspace_separator_GT);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONline_separator_GT);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONparagraph_separator_GT);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsymbol_GT);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmath_symbol_GT);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcurrency_symbol_GT);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONmodifier_symbol_GT);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_symbol_GT);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONnumber_GT);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdecimal_digit_number_GT);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONletter_number_GT);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_number_GT);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONpunctuation_GT);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONdash_punctuation_GT);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONopen_punctuation_GT);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONclose_punctuation_GT);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONinitial_punctuation_GT);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONfinal_punctuation_GT);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONconnector_punctuation_GT);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_punctuation_GT);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONother_GT);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONcontrol_GT);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONformat_GT);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONprivate_use_GT);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONsurrogate_GT);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_LTcategory_COLON_COLONunassigned_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 545},
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
