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
	},
})
