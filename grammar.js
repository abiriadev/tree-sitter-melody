module.exports = grammar({
	name: 'melody',

	rules: {
		source_file: $ => '',

		literal: $ =>
			choice(
				seq("'", $.string, "'"),
				seq('"', $.string, '"'),
			),

		string: $ => /\w+/,

		symbol: $ =>
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
			),
	},
})
