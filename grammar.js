module.exports = grammar({
  name: 'syzlang',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat(seq(
      choice(
        $.include,
        $.incdir,
        $.define,
        $.resource_definition,
        $.syscall_definition,
        $.struct_definition,
        $.union_definition,
        $.flag_definition,
        $.type_definition,
        $.meta_definition,
      ),
      '\n'
    )),

    include: $ => seq(
      'include',
      '<',
      repeat(choice(/[^>\n]/, '\\>')),
      '>',
    ),

    incdir: $ => seq(
      'incdir',
      '<',
      repeat(choice(/[^>\n]/, '\\>')),
      '>',
    ),

    define: $ => seq(
      'define',
      $.identifier,
      $.define_arg,
      '\n',
    ),

    define_arg: $ => repeat1(/.|\\\r?\n/),

    resource_definition: $ => seq(
      'resource',
      $.identifier,
      '[',
      $.type,
      ']',
      optional(seq(
        ':',
        commaSep1($.constant),
      ))
    ),

    syscall_definition: $ => seq(
      $.identifier,
      optional($.variant),
      $.syscall_parameters,
      optional($.type),
      optional($.syscall_attributes)
    ),

    variant: $ => seq(
      '$',
      /[a-zA-Z0-9_]+/,
      optional(seq(
        '$',
        /[a-zA-Z0-9_]+/,
      ))
    ),

    syscall_parameters: $ => seq(
      '(',
        commaSep($.syscall_parameter),
      ')'
    ),

    syscall_parameter: $ => seq(
      $.identifier,
      $.type,
    ),

    syscall_attributes: $ => seq(
      '(',
        commaSep($.syscall_attribute),
      ')'
    ),

    syscall_attribute: $ => choice(
      'disabled',
      'breaks_returns',
      'no_generate',
      'no_minimize',
      'ignore_return',
      seq(
        choice('timeout', 'prog_timeout'),
        '[',
        $.constant,
        ']',
      )
    ),

    struct_definition: $ => seq(
      $.identifier,
      optional($.variant),
      '{',
        repeat($.struct_field),
      '}',
      optional($.struct_attributes),
    ),

    struct_attributes: $ => seq(
      '[',
        commaSep1($.struct_attribute),
      ']'
    ),

    struct_attribute: $ => choice(
      'packed',
      seq(
        'align[',
        $.constant,
        ']',
      ),
      seq(
        'size[',
        $.constant,
        ']',
      ),
      'varlen',
    ),

    struct_field: $ => seq(
      $.identifier,
      $.type,
      optional($.struct_field_attributes),
    ),

    struct_field_attributes: $ => seq(
      '(',
        commaSep1($.struct_field_attribute),
      ')'
    ),

    struct_field_attribute: $ => choice(
      'in',
      'out',
      'inout',
      'out_overlay',
    ),

    union_definition: $ => seq(
      $.identifier,
      optional($.variant),
      '[',
        repeat($.union_field),
      ']',
      optional($.union_attributes),
    ),

    union_field: $ => seq(
      $.identifier,
      $.type,
    ),

    union_attributes: $ => seq(
      '[',
        commaSep1($.union_attribute),
      ']'
    ),

    union_attribute: $ => choice(
      'varlen',
      seq(
        'size[',
        $.constant,
        ']',
      ),
    ),

    type: $ => seq(
      choice(
        $.builtin_type,
        $.identifier,
      ),
      optional($.variant),
      optional(seq(
        ':',
        $.constant,
      )),
      optional(seq(
        '[',
          commaSep1($.type_option),
        ']',
      )),
    ),

    builtin_type: $ => choice(
      'const',
      'intptr',
      'flags',
      'array',
      'ptr',
      'ptr64',
      'string',
      'glob',
      'stringnoz',
      'filename',
      'offsetof',
      'len',
      'bytesize',
      'bitsize',
      'vma',
      'vma64',
      'proc',
      'compressed_image',
      'text',
      'void',
      ...[8, 16, 32, 64].map(n => `int${n}`),
      ...[8, 16, 32, 64].map(n => `int${n}be`),
      ...[8, 16, 32, 64].map(n => `bytesize${n}`),
    ),

    type_option: $ => choice(
      $.type,
      $.colon_separated_option,
      $.number_literal,
      $.char_literal,
      $.string_literal
    ),

    colon_separated_option: $ => seq(
      // That's not really *true*... For example, in the type "len[type1:type2]"
      // but it's hard to disambiguate this type option from a range.
      $.constant,
      optional($.variant),
      repeat(seq(
        ':',
        $.constant,
      )),
    ),

    flag_definition: $ => seq(
      $.identifier,
      '=',
      commaSep1($.constant),
    ),

    type_definition: $ => seq(
      'type',
      $.identifier,
      optional($.variant),
      optional(
        seq(
          '[',
          commaSep1($.identifier),
          ']',
        )
      ),
      choice(
        $.type,
        seq(
          '[',
          commaSep1($.identifier),
          ']',
          '{',
          repeat($.struct_field),
          '}',
          optional($.struct_attributes),
        ),
        seq(
          '[',
          repeat($.union_field),
          ']',
          optional($.union_attributes),
        ),
      ),
    ),

    meta_definition: $ => seq(
      'meta',
      $.identifier,
      optional(seq(
        '[',
        commaSep1($.constant),
        ']',
      ))
    ),

    comment: $ => token(seq('#', /.*/)),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number_literal: $ => {
      const separator = '\'';
      const hex = /[0-9a-fA-F]/;
      const decimal = /[0-9]/;
      const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))));
      const decimalDigits = seq(repeat1(decimal), repeat(seq(separator, repeat1(decimal))));
      return token(seq(
        optional(/[-\+]/),
        choice(
          decimalDigits,
          seq('0x', hexDigits),
        ),
      ));
    },

    char_literal: $ => seq(
      '\'',
      choice(
        $.escape_sequence,
        token.immediate(prec(1, /[^\n']/)),
      ),
      '\'',
    ),

    string_literal: $ => seq(
      choice('"', '`'),
      repeat(choice(
        token.immediate(prec(1, /[^\\"`\n]+/)),
        $.escape_sequence,
      )),
      choice('"', '`'),
    ),

    escape_sequence: _ => token(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/,
      ),
    )),

    constant: $ => prec(1, choice(
      $.number_literal,
      $.char_literal,
      $.identifier,
      $.string_literal
    )),
  }
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}