/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const valid_symbol_names = [
	'<char>',
	'<space>',
	'<whitespace>',
	'<newline>',
	'<tab>',
	'<return>',
	'<feed>',
	'<null>',
	'<digit>',
	'<vertical>',
	'<word>',
	'<alphabetic>',
	'<alphanumeric>',
	'<boundary>',
	'<backspace>',
	'<start>', // special symbol
	'<end>', // special symbol
]

const valid_unicode_categories = [
	'<category::letter>',
	'<category::lowercase_letter>',
	'<category::uppercase_letter>',
	'<category::titlecase_letter>',
	'<category::cased_letter>',
	'<category::modifier_letter>',
	'<category::other_letter>',
	'<category::mark>',
	'<category::non_spacing_mark>',
	'<category::spacing_combining_mark>',
	'<category::enclosing_mark>',
	'<category::separator>',
	'<category::space_separator>',
	'<category::line_separator>',
	'<category::paragraph_separator>',
	'<category::symbol>',
	'<category::math_symbol>',
	'<category::currency_symbol>',
	'<category::modifier_symbol>',
	'<category::other_symbol>',
	'<category::number>',
	'<category::decimal_digit_number>',
	'<category::letter_number>',
	'<category::other_number>',
	'<category::punctuation>',
	'<category::dash_punctuation>',
	'<category::open_punctuation>',
	'<category::close_punctuation>',
	'<category::initial_punctuation>',
	'<category::final_punctuation>',
	'<category::connector_punctuation>',
	'<category::other_punctuation>',
	'<category::other>',
	'<category::control>',
	'<category::format>',
	'<category::private_use>',
	'<category::surrogate>',
	'<category::unassigned>',
]

module.exports = grammar({
	name: 'melody',

	extras: $ => [/\s/, $.comment],

	rules: {
		source_file: $ => repeat($.statement),

		statement: $ => choice($.expression, $.quantifier),

		quantifier: $ =>
			seq(
				optional('lazy'),
				choice(
					seq($.amount, 'to', $.amount),
					$.amount,
					'some',
					'any',
					seq('over', $.amount),
					'option',
				),
				'of',
				$.expression,
			),

		amount: _ => /\d+/,

		semicolon: _ => ';',

		atom: $ =>
			seq(
				choice(
					$.literal,
					$.range,
					$.symbol,
					$.raw,
					$.negative_char_class,
					$.variable,
				),
				$.semicolon,
			),

		expression: $ =>
			choice(
				$.atom,
				$.group,
				$.variable_declaration,
				$.assertion,
			),

		literal: _ =>
			choice(
				/"([^\\"]|\\["\\/bfnrt]|\\u[\da-fA-F]{4})*"/,
				/'([^\\']|\\['\\/bfnrt]|\\u[\da-fA-F]{4})*'/,
			),

		range: $ =>
			choice(
				seq(
					optional('not'),
					$.amount,
					'to',
					$.amount,
				),
				seq(
					optional('not'),
					/[\u0000-\u007f]/,
					'to',
					/[\u0000-\u007f]/,
				),
			),

		symbol: $ => seq(optional('not'), $.valid_symbol),

		valid_symbol: $ =>
			choice(
				...valid_symbol_names,
				$.unicode_category,
			),

		unicode_category: _ =>
			choice(...valid_unicode_categories),

		raw: _ => /`([^`]|\\[`\\])*`/,

		negative_char_class: _ =>
			seq('not', /[\da-zA-Z_\\@*$#&^!%]+/),

		variable: $ => seq('.', $.identifier),

		identifier: _ => /[a-zA-Z_]+/,

		group: $ =>
			seq(
				choice(
					seq('capture', optional($.identifier)),
					'match',
					'either',
				),
				$.block,
			),

		block: $ => seq('{', repeat1($.statement), '}'),

		variable_declaration: $ =>
			seq('let', $.variable, '=', $.block),

		assertion: $ =>
			seq(
				optional('not'),
				choice('ahead', 'behind'),
				$.block,
			),

		comment: _ =>
			token(
				choice(
					seq('//', /.*/),
					seq(
						'/*',
						/[^*]*\*+([^/*][^*]*\*+)*/,
						'/',
					),
				),
			),
	},
})
