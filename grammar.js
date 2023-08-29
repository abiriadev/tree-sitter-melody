/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: 'melody',

	extras: $ => [/\s/, $.comment],

	rules: {
		source_file: $ => repeat($.stmt),

		stmt: $ => choice($.pattern, $.quantifier),

		pattern: $ =>
			choice(
				seq(
					choice(
						$.literal,
						$.range,
						$.symbol,
						$.raw,
						$.identifier,
					),
					';',
				),
				$.group,
				$.variable,
				$.assertion,
			),

		literal: $ =>
			choice(
				seq("'", $.string, "'"),
				seq('"', $.string, '"'),
			),

		string: $ => /[^"']*/,

		symbol: $ =>
			seq(
				optional('not'),
				choice(
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
					$.unicode_category,
				),
			),

		unicode_category: $ =>
			choice(
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
			),

		range: $ =>
			seq($.range_character, 'to', $.range_character),

		range_character: $ => /\da-zA-Z/,

		quantifier: $ =>
			seq(
				optional('lazy'),
				choice(
					$.number,
					seq($.number, 'to', $.number),
					seq('over', $.number),
					'some',
					'any',
					'option',
				),
				'of',
				$.pattern,
			),

		number: $ => /[1-9]\d*/,

		raw: $ => seq('`', /.*/, '`'),

		group: $ =>
			seq(
				choice(
					seq('capture', optional(/\S+/)),
					'match',
					'either',
				),
				$.block,
			),

		assertion: $ =>
			seq(
				optional('not'),
				choice('ahead', 'behind'),
				$.block,
			),

		block: $ => seq('{', repeat($.stmt), '}'),

		comment: $ =>
			choice(seq('//', /.*/), seq('/*', /.*/, '*/')),

		variable: $ =>
			seq('let', $.identifier, '=', $.block),

		identifier: $ => seq('.', /\w+/),
	},
})
