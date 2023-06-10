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
#define STATE_COUNT 308
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_include = 2,
  anon_sym_LT = 3,
  aux_sym_include_token1 = 4,
  anon_sym_BSLASH_GT = 5,
  anon_sym_GT = 6,
  anon_sym_incdir = 7,
  anon_sym_define = 8,
  aux_sym_define_arg_token1 = 9,
  anon_sym_resource = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  anon_sym_COLON = 13,
  anon_sym_COMMA = 14,
  anon_sym_DOLLAR = 15,
  aux_sym_variant_token1 = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_disabled = 19,
  anon_sym_breaks_returns = 20,
  anon_sym_no_generate = 21,
  anon_sym_no_minimize = 22,
  anon_sym_ignore_return = 23,
  anon_sym_timeout = 24,
  anon_sym_prog_timeout = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_packed = 28,
  anon_sym_align_LBRACK = 29,
  anon_sym_size_LBRACK = 30,
  anon_sym_varlen = 31,
  anon_sym_in = 32,
  anon_sym_out = 33,
  anon_sym_inout = 34,
  anon_sym_out_overlay = 35,
  anon_sym_const = 36,
  anon_sym_intptr = 37,
  anon_sym_flags = 38,
  anon_sym_array = 39,
  anon_sym_ptr = 40,
  anon_sym_ptr64 = 41,
  anon_sym_string = 42,
  anon_sym_glob = 43,
  anon_sym_stringnoz = 44,
  anon_sym_filename = 45,
  anon_sym_offsetof = 46,
  anon_sym_len = 47,
  anon_sym_bytesize = 48,
  anon_sym_bitsize = 49,
  anon_sym_vma = 50,
  anon_sym_vma64 = 51,
  anon_sym_proc = 52,
  anon_sym_compressed_image = 53,
  anon_sym_text = 54,
  anon_sym_void = 55,
  anon_sym_int8 = 56,
  anon_sym_int16 = 57,
  anon_sym_int32 = 58,
  anon_sym_int64 = 59,
  anon_sym_int8be = 60,
  anon_sym_int16be = 61,
  anon_sym_int32be = 62,
  anon_sym_int64be = 63,
  anon_sym_bytesize8 = 64,
  anon_sym_bytesize16 = 65,
  anon_sym_bytesize32 = 66,
  anon_sym_bytesize64 = 67,
  anon_sym_EQ = 68,
  anon_sym_type = 69,
  anon_sym_meta = 70,
  sym_comment = 71,
  sym_identifier = 72,
  sym_number_literal = 73,
  anon_sym_SQUOTE = 74,
  aux_sym_char_literal_token1 = 75,
  anon_sym_DQUOTE = 76,
  anon_sym_BQUOTE = 77,
  aux_sym_string_literal_token1 = 78,
  sym_escape_sequence = 79,
  sym_source_file = 80,
  sym_include = 81,
  sym_incdir = 82,
  sym_define = 83,
  sym_define_arg = 84,
  sym_resource_definition = 85,
  sym_syscall_definition = 86,
  sym_variant = 87,
  sym_syscall_parameters = 88,
  sym_syscall_parameter = 89,
  sym_syscall_attributes = 90,
  sym_syscall_attribute = 91,
  sym_struct_definition = 92,
  sym_struct_attributes = 93,
  sym_struct_attribute = 94,
  sym_struct_field = 95,
  sym_struct_field_attributes = 96,
  sym_struct_field_attribute = 97,
  sym_union_definition = 98,
  sym_union_field = 99,
  sym_union_attributes = 100,
  sym_union_attribute = 101,
  sym_type = 102,
  sym_builtin_type = 103,
  sym_type_option = 104,
  sym_colon_separated_option = 105,
  sym_flag_definition = 106,
  sym_type_definition = 107,
  sym_meta_definition = 108,
  sym_char_literal = 109,
  sym_string_literal = 110,
  sym_constant = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_include_repeat1 = 113,
  aux_sym_define_arg_repeat1 = 114,
  aux_sym_resource_definition_repeat1 = 115,
  aux_sym_syscall_parameters_repeat1 = 116,
  aux_sym_syscall_attributes_repeat1 = 117,
  aux_sym_struct_definition_repeat1 = 118,
  aux_sym_struct_attributes_repeat1 = 119,
  aux_sym_struct_field_attributes_repeat1 = 120,
  aux_sym_union_definition_repeat1 = 121,
  aux_sym_union_attributes_repeat1 = 122,
  aux_sym_type_repeat1 = 123,
  aux_sym_colon_separated_option_repeat1 = 124,
  aux_sym_type_definition_repeat1 = 125,
  aux_sym_string_literal_repeat1 = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_include] = "include",
  [anon_sym_LT] = "<",
  [aux_sym_include_token1] = "include_token1",
  [anon_sym_BSLASH_GT] = "\\>",
  [anon_sym_GT] = ">",
  [anon_sym_incdir] = "incdir",
  [anon_sym_define] = "define",
  [aux_sym_define_arg_token1] = "define_arg_token1",
  [anon_sym_resource] = "resource",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variant_token1] = "variant_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_disabled] = "disabled",
  [anon_sym_breaks_returns] = "breaks_returns",
  [anon_sym_no_generate] = "no_generate",
  [anon_sym_no_minimize] = "no_minimize",
  [anon_sym_ignore_return] = "ignore_return",
  [anon_sym_timeout] = "timeout",
  [anon_sym_prog_timeout] = "prog_timeout",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_packed] = "packed",
  [anon_sym_align_LBRACK] = "align[",
  [anon_sym_size_LBRACK] = "size[",
  [anon_sym_varlen] = "varlen",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_inout] = "inout",
  [anon_sym_out_overlay] = "out_overlay",
  [anon_sym_const] = "const",
  [anon_sym_intptr] = "intptr",
  [anon_sym_flags] = "flags",
  [anon_sym_array] = "array",
  [anon_sym_ptr] = "ptr",
  [anon_sym_ptr64] = "ptr64",
  [anon_sym_string] = "string",
  [anon_sym_glob] = "glob",
  [anon_sym_stringnoz] = "stringnoz",
  [anon_sym_filename] = "filename",
  [anon_sym_offsetof] = "offsetof",
  [anon_sym_len] = "len",
  [anon_sym_bytesize] = "bytesize",
  [anon_sym_bitsize] = "bitsize",
  [anon_sym_vma] = "vma",
  [anon_sym_vma64] = "vma64",
  [anon_sym_proc] = "proc",
  [anon_sym_compressed_image] = "compressed_image",
  [anon_sym_text] = "text",
  [anon_sym_void] = "void",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_int8be] = "int8be",
  [anon_sym_int16be] = "int16be",
  [anon_sym_int32be] = "int32be",
  [anon_sym_int64be] = "int64be",
  [anon_sym_bytesize8] = "bytesize8",
  [anon_sym_bytesize16] = "bytesize16",
  [anon_sym_bytesize32] = "bytesize32",
  [anon_sym_bytesize64] = "bytesize64",
  [anon_sym_EQ] = "=",
  [anon_sym_type] = "type",
  [anon_sym_meta] = "meta",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_number_literal] = "number_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym_include] = "include",
  [sym_incdir] = "incdir",
  [sym_define] = "define",
  [sym_define_arg] = "define_arg",
  [sym_resource_definition] = "resource_definition",
  [sym_syscall_definition] = "syscall_definition",
  [sym_variant] = "variant",
  [sym_syscall_parameters] = "syscall_parameters",
  [sym_syscall_parameter] = "syscall_parameter",
  [sym_syscall_attributes] = "syscall_attributes",
  [sym_syscall_attribute] = "syscall_attribute",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_attributes] = "struct_attributes",
  [sym_struct_attribute] = "struct_attribute",
  [sym_struct_field] = "struct_field",
  [sym_struct_field_attributes] = "struct_field_attributes",
  [sym_struct_field_attribute] = "struct_field_attribute",
  [sym_union_definition] = "union_definition",
  [sym_union_field] = "union_field",
  [sym_union_attributes] = "union_attributes",
  [sym_union_attribute] = "union_attribute",
  [sym_type] = "type",
  [sym_builtin_type] = "builtin_type",
  [sym_type_option] = "type_option",
  [sym_colon_separated_option] = "colon_separated_option",
  [sym_flag_definition] = "flag_definition",
  [sym_type_definition] = "type_definition",
  [sym_meta_definition] = "meta_definition",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_constant] = "constant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_include_repeat1] = "include_repeat1",
  [aux_sym_define_arg_repeat1] = "define_arg_repeat1",
  [aux_sym_resource_definition_repeat1] = "resource_definition_repeat1",
  [aux_sym_syscall_parameters_repeat1] = "syscall_parameters_repeat1",
  [aux_sym_syscall_attributes_repeat1] = "syscall_attributes_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_struct_attributes_repeat1] = "struct_attributes_repeat1",
  [aux_sym_struct_field_attributes_repeat1] = "struct_field_attributes_repeat1",
  [aux_sym_union_definition_repeat1] = "union_definition_repeat1",
  [aux_sym_union_attributes_repeat1] = "union_attributes_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_colon_separated_option_repeat1] = "colon_separated_option_repeat1",
  [aux_sym_type_definition_repeat1] = "type_definition_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [anon_sym_BSLASH_GT] = anon_sym_BSLASH_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_incdir] = anon_sym_incdir,
  [anon_sym_define] = anon_sym_define,
  [aux_sym_define_arg_token1] = aux_sym_define_arg_token1,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variant_token1] = aux_sym_variant_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_breaks_returns] = anon_sym_breaks_returns,
  [anon_sym_no_generate] = anon_sym_no_generate,
  [anon_sym_no_minimize] = anon_sym_no_minimize,
  [anon_sym_ignore_return] = anon_sym_ignore_return,
  [anon_sym_timeout] = anon_sym_timeout,
  [anon_sym_prog_timeout] = anon_sym_prog_timeout,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_packed] = anon_sym_packed,
  [anon_sym_align_LBRACK] = anon_sym_align_LBRACK,
  [anon_sym_size_LBRACK] = anon_sym_size_LBRACK,
  [anon_sym_varlen] = anon_sym_varlen,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_out_overlay] = anon_sym_out_overlay,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_intptr] = anon_sym_intptr,
  [anon_sym_flags] = anon_sym_flags,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_ptr64] = anon_sym_ptr64,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_glob] = anon_sym_glob,
  [anon_sym_stringnoz] = anon_sym_stringnoz,
  [anon_sym_filename] = anon_sym_filename,
  [anon_sym_offsetof] = anon_sym_offsetof,
  [anon_sym_len] = anon_sym_len,
  [anon_sym_bytesize] = anon_sym_bytesize,
  [anon_sym_bitsize] = anon_sym_bitsize,
  [anon_sym_vma] = anon_sym_vma,
  [anon_sym_vma64] = anon_sym_vma64,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_compressed_image] = anon_sym_compressed_image,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_int8be] = anon_sym_int8be,
  [anon_sym_int16be] = anon_sym_int16be,
  [anon_sym_int32be] = anon_sym_int32be,
  [anon_sym_int64be] = anon_sym_int64be,
  [anon_sym_bytesize8] = anon_sym_bytesize8,
  [anon_sym_bytesize16] = anon_sym_bytesize16,
  [anon_sym_bytesize32] = anon_sym_bytesize32,
  [anon_sym_bytesize64] = anon_sym_bytesize64,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_meta] = anon_sym_meta,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym_include] = sym_include,
  [sym_incdir] = sym_incdir,
  [sym_define] = sym_define,
  [sym_define_arg] = sym_define_arg,
  [sym_resource_definition] = sym_resource_definition,
  [sym_syscall_definition] = sym_syscall_definition,
  [sym_variant] = sym_variant,
  [sym_syscall_parameters] = sym_syscall_parameters,
  [sym_syscall_parameter] = sym_syscall_parameter,
  [sym_syscall_attributes] = sym_syscall_attributes,
  [sym_syscall_attribute] = sym_syscall_attribute,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_attributes] = sym_struct_attributes,
  [sym_struct_attribute] = sym_struct_attribute,
  [sym_struct_field] = sym_struct_field,
  [sym_struct_field_attributes] = sym_struct_field_attributes,
  [sym_struct_field_attribute] = sym_struct_field_attribute,
  [sym_union_definition] = sym_union_definition,
  [sym_union_field] = sym_union_field,
  [sym_union_attributes] = sym_union_attributes,
  [sym_union_attribute] = sym_union_attribute,
  [sym_type] = sym_type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_type_option] = sym_type_option,
  [sym_colon_separated_option] = sym_colon_separated_option,
  [sym_flag_definition] = sym_flag_definition,
  [sym_type_definition] = sym_type_definition,
  [sym_meta_definition] = sym_meta_definition,
  [sym_char_literal] = sym_char_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_constant] = sym_constant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_include_repeat1] = aux_sym_include_repeat1,
  [aux_sym_define_arg_repeat1] = aux_sym_define_arg_repeat1,
  [aux_sym_resource_definition_repeat1] = aux_sym_resource_definition_repeat1,
  [aux_sym_syscall_parameters_repeat1] = aux_sym_syscall_parameters_repeat1,
  [aux_sym_syscall_attributes_repeat1] = aux_sym_syscall_attributes_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_struct_attributes_repeat1] = aux_sym_struct_attributes_repeat1,
  [aux_sym_struct_field_attributes_repeat1] = aux_sym_struct_field_attributes_repeat1,
  [aux_sym_union_definition_repeat1] = aux_sym_union_definition_repeat1,
  [aux_sym_union_attributes_repeat1] = aux_sym_union_attributes_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_colon_separated_option_repeat1] = aux_sym_colon_separated_option_repeat1,
  [aux_sym_type_definition_repeat1] = aux_sym_type_definition_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incdir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variant_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breaks_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_generate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_minimize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prog_timeout] = {
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
  [anon_sym_packed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varlen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out_overlay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_glob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stringnoz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offsetof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_len] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytesize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vma64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compressed_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8be] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16be] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32be] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64be] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytesize8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytesize16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytesize32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytesize64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_incdir] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_define_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_syscall_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_syscall_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_syscall_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_syscall_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_syscall_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_union_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_union_field] = {
    .visible = true,
    .named = true,
  },
  [sym_union_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_union_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_option] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_separated_option] = {
    .visible = true,
    .named = true,
  },
  [sym_flag_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_define_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_syscall_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_syscall_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_field_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_colon_separated_option_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
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
  [4] = 3,
  [5] = 5,
  [6] = 2,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 9,
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
  [45] = 42,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 11,
  [61] = 43,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 43,
  [68] = 68,
  [69] = 12,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 11,
  [77] = 77,
  [78] = 78,
  [79] = 38,
  [80] = 78,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 53,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 12,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 37,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 50,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 36,
  [131] = 35,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 144,
  [157] = 157,
  [158] = 158,
  [159] = 57,
  [160] = 160,
  [161] = 157,
  [162] = 58,
  [163] = 163,
  [164] = 164,
  [165] = 137,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 140,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 171,
  [194] = 134,
  [195] = 139,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 199,
  [209] = 205,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 214,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 65,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 66,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 64,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 221,
  [242] = 62,
  [243] = 63,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 279,
  [290] = 274,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 287,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 287,
  [302] = 279,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(138);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(437);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == ',') ADVANCE(160);
      if (lookahead == '0') ADVANCE(434);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(321);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == 'v') ADVANCE(254);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '}') ADVANCE(180);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '>') ADVANCE(146);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(161);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ',') ADVANCE(160);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'v') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(441);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == 'U') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(154);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '\\') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(438);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(437);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == ',') ADVANCE(160);
      if (lookahead == '0') ADVANCE(434);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(321);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == 'v') ADVANCE(254);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '}') ADVANCE(180);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(437);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == ',') ADVANCE(160);
      if (lookahead == '0') ADVANCE(434);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'v') ADVANCE(339);
      if (lookahead == '{') ADVANCE(179);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(437);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == ',') ADVANCE(160);
      if (lookahead == '0') ADVANCE(434);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead == '}') ADVANCE(180);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 29:
      if (lookahead == '0') ADVANCE(434);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 30:
      if (lookahead == '[') ADVANCE(184);
      END_STATE();
    case 31:
      if (lookahead == '[') ADVANCE(183);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 121:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(193);
      END_STATE();
    case 123:
      if (lookahead == 'z') ADVANCE(46);
      END_STATE();
    case 124:
      if (lookahead == 'z') ADVANCE(49);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      if (eof) ADVANCE(138);
      if (lookahead == '\n') SKIP(137)
      END_STATE();
    case 136:
      if (eof) ADVANCE(138);
      if (lookahead == '\n') SKIP(137)
      if (lookahead == '\r') SKIP(135)
      END_STATE();
    case 137:
      if (eof) ADVANCE(138);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\\') SKIP(136)
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_include_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '>') ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BSLASH_GT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_incdir);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_define);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_define_arg_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_define_arg_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_define_arg_token1);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_define_arg_token1);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_define_arg_token1);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_define_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_resource);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_variant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_disabled);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_breaks_returns);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_breaks_returns);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_no_generate);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_no_generate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_no_minimize);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_no_minimize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ignore_return);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ignore_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_timeout);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_prog_timeout);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_prog_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_packed);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_packed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_align_LBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_size_LBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_varlen);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_varlen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '_') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_inout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_out_overlay);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_out_overlay);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_intptr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_flags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '6') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ptr64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == 'n') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_glob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_stringnoz);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_filename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_offsetof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_len);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bytesize);
      if (lookahead == '1') ADVANCE(239);
      if (lookahead == '3') ADVANCE(233);
      if (lookahead == '6') ADVANCE(237);
      if (lookahead == '8') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_bitsize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_vma);
      if (lookahead == '6') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_vma64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_compressed_image);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == 'b') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == 'b') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == 'b') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == 'b') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_int8be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_int16be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_int32be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_int64be);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_bytesize8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_bytesize16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_bytesize32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_bytesize64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(238);
      if (lookahead == '3') ADVANCE(232);
      if (lookahead == '6') ADVANCE(234);
      if (lookahead == '8') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'g') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'y') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'u') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == 'y') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == 'y') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(433);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(433);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(433);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(13);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 137},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 137},
  [33] = {.lex_state = 137},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 137},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 26},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 26},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 24},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 24},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 24},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 24},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 24},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 24},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 24},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 15},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 26},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 26},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 24},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 19},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 19},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 24},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 24},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 24},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 24},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 7},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 7},
  [265] = {.lex_state = 7},
  [266] = {.lex_state = 7},
  [267] = {.lex_state = 24},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 7},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 28},
  [280] = {.lex_state = 7},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 28},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 28},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 28},
  [296] = {.lex_state = 7},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 7},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 24},
  [301] = {.lex_state = 28},
  [302] = {.lex_state = 28},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 24},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 24},
  [307] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BSLASH_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_incdir] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_resource] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_disabled] = ACTIONS(1),
    [anon_sym_breaks_returns] = ACTIONS(1),
    [anon_sym_no_generate] = ACTIONS(1),
    [anon_sym_no_minimize] = ACTIONS(1),
    [anon_sym_ignore_return] = ACTIONS(1),
    [anon_sym_timeout] = ACTIONS(1),
    [anon_sym_prog_timeout] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_packed] = ACTIONS(1),
    [anon_sym_varlen] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_out_overlay] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_intptr] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_ptr64] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_glob] = ACTIONS(1),
    [anon_sym_stringnoz] = ACTIONS(1),
    [anon_sym_filename] = ACTIONS(1),
    [anon_sym_offsetof] = ACTIONS(1),
    [anon_sym_len] = ACTIONS(1),
    [anon_sym_bytesize] = ACTIONS(1),
    [anon_sym_bitsize] = ACTIONS(1),
    [anon_sym_vma] = ACTIONS(1),
    [anon_sym_vma64] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_compressed_image] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_int8be] = ACTIONS(1),
    [anon_sym_int16be] = ACTIONS(1),
    [anon_sym_int32be] = ACTIONS(1),
    [anon_sym_int64be] = ACTIONS(1),
    [anon_sym_bytesize8] = ACTIONS(1),
    [anon_sym_bytesize16] = ACTIONS(1),
    [anon_sym_bytesize32] = ACTIONS(1),
    [anon_sym_bytesize64] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(299),
    [sym_include] = STATE(298),
    [sym_incdir] = STATE(298),
    [sym_define] = STATE(298),
    [sym_resource_definition] = STATE(298),
    [sym_syscall_definition] = STATE(298),
    [sym_struct_definition] = STATE(298),
    [sym_union_definition] = STATE(298),
    [sym_flag_definition] = STATE(298),
    [sym_type_definition] = STATE(298),
    [sym_meta_definition] = STATE(298),
    [aux_sym_source_file_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_incdir] = ACTIONS(9),
    [anon_sym_define] = ACTIONS(11),
    [anon_sym_resource] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_meta] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_builtin_type,
    STATE(70), 1,
      sym_constant,
    STATE(209), 1,
      sym_type_option,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(110), 2,
      sym_char_literal,
      sym_string_literal,
    STATE(234), 2,
      sym_type,
      sym_colon_separated_option,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [68] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_builtin_type,
    STATE(70), 1,
      sym_constant,
    STATE(161), 1,
      sym_type_option,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(110), 2,
      sym_char_literal,
      sym_string_literal,
    STATE(234), 2,
      sym_type,
      sym_colon_separated_option,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [136] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_builtin_type,
    STATE(70), 1,
      sym_constant,
    STATE(157), 1,
      sym_type_option,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(110), 2,
      sym_char_literal,
      sym_string_literal,
    STATE(234), 2,
      sym_type,
      sym_colon_separated_option,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [204] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_builtin_type,
    STATE(70), 1,
      sym_constant,
    STATE(137), 1,
      sym_type_option,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(110), 2,
      sym_char_literal,
      sym_string_literal,
    STATE(234), 2,
      sym_type,
      sym_colon_separated_option,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [272] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_builtin_type,
    STATE(70), 1,
      sym_constant,
    STATE(205), 1,
      sym_type_option,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(110), 2,
      sym_char_literal,
      sym_string_literal,
    STATE(234), 2,
      sym_type,
      sym_colon_separated_option,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [340] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_builtin_type,
    STATE(70), 1,
      sym_constant,
    STATE(224), 1,
      sym_type_option,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(110), 2,
      sym_char_literal,
      sym_string_literal,
    STATE(234), 2,
      sym_type,
      sym_colon_separated_option,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [408] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_builtin_type,
    STATE(70), 1,
      sym_constant,
    STATE(165), 1,
      sym_type_option,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(110), 2,
      sym_char_literal,
      sym_string_literal,
    STATE(234), 2,
      sym_type,
      sym_colon_separated_option,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [476] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_builtin_type,
    STATE(70), 1,
      sym_constant,
    STATE(193), 1,
      sym_type_option,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(110), 2,
      sym_char_literal,
      sym_string_literal,
    STATE(234), 2,
      sym_type,
      sym_colon_separated_option,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [544] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_builtin_type,
    STATE(70), 1,
      sym_constant,
    STATE(171), 1,
      sym_type_option,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(110), 2,
      sym_char_literal,
      sym_string_literal,
    STATE(234), 2,
      sym_type,
      sym_colon_separated_option,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    ACTIONS(35), 33,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
      sym_identifier,
  [663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    ACTIONS(39), 33,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
      sym_identifier,
  [711] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(43), 1,
      sym_builtin_type,
    STATE(202), 1,
      aux_sym_type_definition_repeat1,
    STATE(212), 1,
      sym_type,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [767] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_builtin_type,
    STATE(179), 1,
      aux_sym_type_definition_repeat1,
    STATE(212), 1,
      sym_type,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [823] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_builtin_type,
    STATE(151), 1,
      aux_sym_type_definition_repeat1,
    STATE(212), 1,
      sym_type,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [879] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(24), 1,
      sym_variant,
    STATE(67), 1,
      sym_builtin_type,
    STATE(291), 1,
      sym_type,
    ACTIONS(55), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [935] = 8,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym_comment,
    STATE(67), 1,
      sym_builtin_type,
    STATE(187), 1,
      sym_type,
    STATE(273), 1,
      sym_syscall_attributes,
    ACTIONS(55), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [991] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_builtin_type,
    STATE(135), 1,
      aux_sym_type_definition_repeat1,
    STATE(212), 1,
      sym_type,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1047] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_builtin_type,
    STATE(163), 1,
      aux_sym_type_definition_repeat1,
    STATE(212), 1,
      sym_type,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1103] = 8,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym_builtin_type,
    STATE(172), 1,
      sym_type,
    STATE(286), 1,
      sym_syscall_attributes,
    ACTIONS(55), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1159] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_builtin_type,
    STATE(251), 1,
      sym_type,
    ACTIONS(55), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1212] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_builtin_type,
    STATE(259), 1,
      sym_type,
    ACTIONS(55), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1265] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_builtin_type,
    STATE(277), 1,
      sym_type,
    ACTIONS(55), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_builtin_type,
    STATE(281), 1,
      sym_type,
    ACTIONS(55), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1368] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(87), 34,
      anon_sym_LPAREN,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
      sym_identifier,
  [1411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(43), 1,
      sym_builtin_type,
    STATE(97), 1,
      sym_type,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(61), 1,
      sym_builtin_type,
    STATE(218), 1,
      sym_type,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1505] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 34,
      anon_sym_LPAREN,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
      sym_identifier,
  [1548] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 34,
      anon_sym_LPAREN,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
      sym_identifier,
  [1591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(61), 1,
      sym_builtin_type,
    STATE(282), 1,
      sym_type,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(43), 1,
      sym_builtin_type,
    STATE(212), 1,
      sym_type,
    ACTIONS(21), 32,
      anon_sym_const,
      anon_sym_intptr,
      anon_sym_flags,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_ptr64,
      anon_sym_string,
      anon_sym_glob,
      anon_sym_stringnoz,
      anon_sym_filename,
      anon_sym_offsetof,
      anon_sym_len,
      anon_sym_bytesize,
      anon_sym_bitsize,
      anon_sym_vma,
      anon_sym_vma64,
      anon_sym_proc,
      anon_sym_compressed_image,
      anon_sym_text,
      anon_sym_void,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8be,
      anon_sym_int16be,
      anon_sym_int32be,
      anon_sym_int64be,
      anon_sym_bytesize8,
      anon_sym_bytesize16,
      anon_sym_bytesize32,
      anon_sym_bytesize64,
  [1685] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_include,
    ACTIONS(104), 1,
      anon_sym_incdir,
    ACTIONS(107), 1,
      anon_sym_define,
    ACTIONS(110), 1,
      anon_sym_resource,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(116), 1,
      anon_sym_meta,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    STATE(298), 10,
      sym_include,
      sym_incdir,
      sym_define,
      sym_resource_definition,
      sym_syscall_definition,
      sym_struct_definition,
      sym_union_definition,
      sym_flag_definition,
      sym_type_definition,
      sym_meta_definition,
  [1728] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_incdir,
    ACTIONS(11), 1,
      anon_sym_define,
    ACTIONS(13), 1,
      anon_sym_resource,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_meta,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    STATE(298), 10,
      sym_include,
      sym_incdir,
      sym_define,
      sym_resource_definition,
      sym_syscall_definition,
      sym_struct_definition,
      sym_union_definition,
      sym_flag_definition,
      sym_type_definition,
      sym_meta_definition,
  [1771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_syscall_attribute,
    ACTIONS(128), 2,
      anon_sym_timeout,
      anon_sym_prog_timeout,
    ACTIONS(126), 5,
      anon_sym_disabled,
      anon_sym_breaks_returns,
      anon_sym_no_generate,
      anon_sym_no_minimize,
      anon_sym_ignore_return,
  [1792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [1837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 9,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [1852] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(246), 1,
      sym_constant,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(138), 2,
      sym_identifier,
      sym_number_literal,
    STATE(50), 2,
      sym_char_literal,
      sym_string_literal,
  [1874] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(207), 1,
      sym_constant,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(138), 2,
      sym_identifier,
      sym_number_literal,
    STATE(50), 2,
      sym_char_literal,
      sym_string_literal,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 7,
      anon_sym_include,
      anon_sym_incdir,
      anon_sym_define,
      anon_sym_resource,
      anon_sym_type,
      anon_sym_meta,
      sym_identifier,
  [1912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(221), 1,
      sym_constant,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(138), 2,
      sym_identifier,
      sym_number_literal,
    STATE(50), 2,
      sym_char_literal,
      sym_string_literal,
  [1934] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_variant,
    ACTIONS(144), 4,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [1956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_constant,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(138), 2,
      sym_identifier,
      sym_number_literal,
    STATE(50), 2,
      sym_char_literal,
      sym_string_literal,
  [1978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    STATE(241), 1,
      sym_constant,
    ACTIONS(150), 2,
      sym_identifier,
      sym_number_literal,
    ACTIONS(154), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(115), 2,
      sym_char_literal,
      sym_string_literal,
  [2000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    STATE(160), 1,
      sym_constant,
    ACTIONS(150), 2,
      sym_identifier,
      sym_number_literal,
    ACTIONS(154), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(115), 2,
      sym_char_literal,
      sym_string_literal,
  [2022] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    STATE(162), 1,
      sym_constant,
    ACTIONS(150), 2,
      sym_identifier,
      sym_number_literal,
    ACTIONS(154), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(115), 2,
      sym_char_literal,
      sym_string_literal,
  [2044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      sym_constant,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(138), 2,
      sym_identifier,
      sym_number_literal,
    STATE(50), 2,
      sym_char_literal,
      sym_string_literal,
  [2066] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    STATE(181), 1,
      sym_constant,
    ACTIONS(150), 2,
      sym_identifier,
      sym_number_literal,
    ACTIONS(154), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(115), 2,
      sym_char_literal,
      sym_string_literal,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 8,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2102] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    STATE(159), 1,
      sym_constant,
    ACTIONS(150), 2,
      sym_identifier,
      sym_number_literal,
    ACTIONS(154), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    STATE(115), 2,
      sym_char_literal,
      sym_string_literal,
  [2124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(233), 1,
      sym_syscall_attribute,
    ACTIONS(128), 2,
      anon_sym_timeout,
      anon_sym_prog_timeout,
    ACTIONS(126), 5,
      anon_sym_disabled,
      anon_sym_breaks_returns,
      anon_sym_no_generate,
      anon_sym_no_minimize,
      anon_sym_ignore_return,
  [2142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_COLON,
    ACTIONS(160), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2160] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym_constant,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(138), 2,
      sym_identifier,
      sym_number_literal,
    STATE(50), 2,
      sym_char_literal,
      sym_string_literal,
  [2182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(269), 1,
      sym_constant,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(138), 2,
      sym_identifier,
      sym_number_literal,
    STATE(50), 2,
      sym_char_literal,
      sym_string_literal,
  [2204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym_constant,
    ACTIONS(29), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(138), 2,
      sym_identifier,
      sym_number_literal,
    STATE(50), 2,
      sym_char_literal,
      sym_string_literal,
  [2226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2256] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_EQ,
    STATE(20), 1,
      sym_syscall_parameters,
    STATE(123), 1,
      sym_variant,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_variant,
    ACTIONS(144), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 6,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2377] = 7,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_variant,
  [2399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_variant,
    ACTIONS(156), 4,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [2427] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(200), 1,
      anon_sym_COLON,
    STATE(114), 1,
      aux_sym_colon_separated_option_repeat1,
    STATE(117), 1,
      sym_variant,
    ACTIONS(198), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(173), 1,
      sym_struct_attribute,
    ACTIONS(202), 2,
      anon_sym_packed,
      anon_sym_varlen,
    ACTIONS(204), 2,
      anon_sym_align_LBRACK,
      anon_sym_size_LBRACK,
  [2462] = 5,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym_string_literal_token1,
    ACTIONS(210), 1,
      sym_escape_sequence,
    STATE(78), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(206), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(227), 1,
      sym_struct_field_attribute,
    ACTIONS(212), 2,
      anon_sym_in,
      anon_sym_out,
    ACTIONS(214), 2,
      anon_sym_inout,
      anon_sym_out_overlay,
  [2494] = 5,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_string_literal_token1,
    ACTIONS(220), 1,
      sym_escape_sequence,
    STATE(80), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(216), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2511] = 5,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(224), 1,
      aux_sym_string_literal_token1,
    ACTIONS(227), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(222), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2528] = 4,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 3,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [2543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(220), 1,
      sym_struct_attribute,
    ACTIONS(202), 2,
      anon_sym_packed,
      anon_sym_varlen,
    ACTIONS(204), 2,
      anon_sym_align_LBRACK,
      anon_sym_size_LBRACK,
  [2558] = 5,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_string_literal_token1,
    ACTIONS(236), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(232), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2575] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(238), 4,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
  [2588] = 5,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_string_literal_token1,
    ACTIONS(236), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(240), 2,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [2605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(175), 1,
      sym_struct_field_attribute,
    ACTIONS(212), 2,
      anon_sym_in,
      anon_sym_out,
    ACTIONS(214), 2,
      anon_sym_inout,
      anon_sym_out_overlay,
  [2620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(102), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(106), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2648] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_GT,
    STATE(84), 1,
      aux_sym_include_repeat1,
    ACTIONS(250), 2,
      aux_sym_include_token1,
      anon_sym_BSLASH_GT,
  [2662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(111), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [2676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(108), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2704] = 5,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
  [2720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(118), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [2748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2762] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_GT,
    STATE(125), 1,
      aux_sym_include_repeat1,
    ACTIONS(273), 2,
      aux_sym_include_token1,
      anon_sym_BSLASH_GT,
  [2776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(93), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2790] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_GT,
    STATE(132), 1,
      aux_sym_include_repeat1,
    ACTIONS(282), 2,
      aux_sym_include_token1,
      anon_sym_BSLASH_GT,
  [2804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_COLON,
    STATE(95), 1,
      aux_sym_colon_separated_option_repeat1,
    ACTIONS(286), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2818] = 3,
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [2830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_struct_field_attributes,
    ACTIONS(293), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COLON,
    STATE(95), 1,
      aux_sym_colon_separated_option_repeat1,
    ACTIONS(295), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [2872] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(302), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(90), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [2898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [2926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(91), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [2954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(112), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [2982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [2996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(103), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 4,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLAR,
  [3020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(121), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [3062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COLON,
    STATE(95), 1,
      aux_sym_colon_separated_option_repeat1,
    ACTIONS(324), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3076] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(326), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COLON,
    STATE(98), 1,
      aux_sym_colon_separated_option_repeat1,
    ACTIONS(324), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [3130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(126), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(116), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(93), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [3172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(105), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_syscall_parameters,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3216] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_GT,
    STATE(84), 1,
      aux_sym_include_repeat1,
    ACTIONS(340), 2,
      aux_sym_include_token1,
      anon_sym_BSLASH_GT,
  [3230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(87), 2,
      sym_union_field,
      aux_sym_union_definition_repeat1,
  [3258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(133), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(124), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3286] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(352), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3298] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(354), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3310] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_GT,
    STATE(84), 1,
      aux_sym_include_repeat1,
    ACTIONS(340), 2,
      aux_sym_include_token1,
      anon_sym_BSLASH_GT,
  [3324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [3338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_type_repeat1,
  [3351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_type_definition_repeat1,
  [3364] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(364), 1,
      aux_sym_define_arg_token1,
    STATE(211), 1,
      aux_sym_define_arg_repeat1,
  [3377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      aux_sym_type_repeat1,
  [3390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_syscall_parameters_repeat1,
  [3403] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_resource_definition_repeat1,
  [3416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_type_repeat1,
  [3429] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    STATE(244), 1,
      sym_struct_attributes,
  [3442] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      anon_sym_LF,
    STATE(261), 1,
      sym_struct_attributes,
  [3455] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    STATE(280), 1,
      sym_union_attributes,
  [3468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_type_repeat1,
  [3481] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_LF,
    STATE(255), 1,
      sym_struct_attributes,
  [3494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_syscall_attributes_repeat1,
  [3507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_union_attributes_repeat1,
  [3520] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_LF,
    STATE(258), 1,
      sym_struct_attributes,
  [3533] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 1,
      anon_sym_LF,
    STATE(263), 1,
      sym_struct_attributes,
  [3546] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_LF,
    STATE(250), 1,
      sym_union_attributes,
  [3559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_type_definition_repeat1,
  [3572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_resource_definition_repeat1,
  [3585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_type_definition_repeat1,
  [3598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_syscall_parameters_repeat1,
  [3611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(154), 1,
      sym_syscall_parameter,
  [3624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_type_repeat1,
  [3637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_type_repeat1,
  [3650] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(429), 1,
      anon_sym_LF,
    STATE(245), 1,
      sym_struct_attributes,
  [3663] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(431), 1,
      anon_sym_LBRACK,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
  [3676] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_resource_definition_repeat1,
  [3689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_type_repeat1,
  [3702] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(439), 1,
      anon_sym_LBRACK,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
  [3715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_type_definition_repeat1,
  [3728] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(445), 1,
      anon_sym_LF,
    STATE(277), 1,
      sym_union_attributes,
  [3741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_type_repeat1,
  [3754] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_LF,
    STATE(250), 1,
      sym_struct_attributes,
  [3767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_struct_field_attributes_repeat1,
  [3780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_size_LBRACK,
    ACTIONS(456), 1,
      anon_sym_varlen,
    STATE(216), 1,
      sym_union_attribute,
  [3793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      aux_sym_union_attributes_repeat1,
  [3806] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(460), 1,
      anon_sym_LF,
    STATE(251), 1,
      sym_union_attributes,
  [3819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_type_repeat1,
  [3832] = 4,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym_comment,
    STATE(273), 1,
      sym_syscall_attributes,
  [3845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_struct_attributes_repeat1,
  [3858] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LF,
    STATE(266), 1,
      sym_union_attributes,
  [3871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_struct_field_attributes_repeat1,
  [3884] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LF,
    STATE(249), 1,
      sym_struct_attributes,
  [3897] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LF,
    STATE(249), 1,
      sym_union_attributes,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      aux_sym_struct_attributes_repeat1,
  [3923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_type_definition_repeat1,
  [3936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_syscall_attributes_repeat1,
  [3949] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_LF,
    STATE(201), 1,
      aux_sym_resource_definition_repeat1,
  [3962] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      anon_sym_LF,
    STATE(259), 1,
      sym_union_attributes,
  [3975] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_define_arg_token1,
    STATE(136), 1,
      aux_sym_define_arg_repeat1,
    STATE(292), 1,
      sym_define_arg,
  [3988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_type_repeat1,
  [4001] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      anon_sym_LF,
    STATE(259), 1,
      sym_struct_attributes,
  [4014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_syscall_attributes_repeat1,
  [4027] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LF,
    STATE(253), 1,
      sym_syscall_attributes,
  [4040] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym_resource_definition_repeat1,
  [4053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_type_repeat1,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
  [4075] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_LF,
    STATE(256), 1,
      sym_struct_attributes,
  [4088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_syscall_parameters_repeat1,
  [4101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(208), 1,
      aux_sym_type_repeat1,
  [4114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_type_repeat1,
  [4127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_resource_definition_repeat1,
  [4140] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 1,
      anon_sym_LF,
    STATE(262), 1,
      sym_union_attributes,
  [4153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_union_attributes_repeat1,
  [4166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_struct_attributes_repeat1,
  [4179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_type_repeat1,
  [4192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_struct_field_attributes_repeat1,
  [4205] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym_resource_definition_repeat1,
  [4218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_type_definition_repeat1,
  [4231] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_union_attributes,
  [4244] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_struct_attributes,
  [4257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      aux_sym_type_repeat1,
  [4270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_size_LBRACK,
    ACTIONS(456), 1,
      anon_sym_varlen,
    STATE(147), 1,
      sym_union_attribute,
  [4283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_resource_definition_repeat1,
  [4296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_type_repeat1,
  [4309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_type_repeat1,
  [4322] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACK,
    ACTIONS(533), 1,
      anon_sym_LF,
    STATE(268), 1,
      sym_union_attributes,
  [4335] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 1,
      aux_sym_define_arg_token1,
    STATE(211), 1,
      aux_sym_define_arg_repeat1,
  [4348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4364] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_char_literal_token1,
    ACTIONS(544), 1,
      sym_escape_sequence,
  [4374] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 1,
      anon_sym_LBRACK,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4392] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_char_literal_token1,
    ACTIONS(552), 1,
      sym_escape_sequence,
  [4402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4434] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
  [4444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(239), 1,
      sym_syscall_parameter,
  [4454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4470] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
  [4480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4520] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [4530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4554] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
  [4564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4596] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      anon_sym_COMMA,
  [4606] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
  [4616] = 3,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
  [4626] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LF,
  [4633] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LF,
  [4640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
  [4647] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LF,
  [4654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
  [4661] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LF,
  [4668] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LF,
  [4675] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LF,
  [4682] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LF,
  [4689] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LF,
  [4696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
  [4703] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LF,
  [4710] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_LF,
  [4717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LT,
  [4724] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LF,
  [4731] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_LF,
  [4738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
  [4745] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LF,
  [4752] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LF,
  [4759] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LF,
  [4766] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LF,
  [4773] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LF,
  [4780] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LF,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_identifier,
  [4794] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LF,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
  [4815] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LF,
  [4822] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LF,
  [4829] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LF,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
  [4843] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_LF,
  [4850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
  [4857] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LF,
  [4864] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LF,
  [4871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      aux_sym_variant_token1,
  [4878] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LF,
  [4885] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LF,
  [4892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACK,
  [4899] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_LF,
  [4906] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_LF,
  [4913] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LF,
  [4920] = 2,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
  [4927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      aux_sym_variant_token1,
  [4934] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_LF,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      aux_sym_variant_token1,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
  [4955] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LF,
  [4962] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_LF,
  [4969] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LF,
  [4976] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LF,
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      aux_sym_variant_token1,
  [4990] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_LF,
  [4997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
  [5004] = 2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_LF,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
  [5018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_identifier,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      aux_sym_variant_token1,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      aux_sym_variant_token1,
  [5039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
  [5046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_identifier,
  [5053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_identifier,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_identifier,
  [5067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 272,
  [SMALL_STATE(7)] = 340,
  [SMALL_STATE(8)] = 408,
  [SMALL_STATE(9)] = 476,
  [SMALL_STATE(10)] = 544,
  [SMALL_STATE(11)] = 612,
  [SMALL_STATE(12)] = 663,
  [SMALL_STATE(13)] = 711,
  [SMALL_STATE(14)] = 767,
  [SMALL_STATE(15)] = 823,
  [SMALL_STATE(16)] = 879,
  [SMALL_STATE(17)] = 935,
  [SMALL_STATE(18)] = 991,
  [SMALL_STATE(19)] = 1047,
  [SMALL_STATE(20)] = 1103,
  [SMALL_STATE(21)] = 1159,
  [SMALL_STATE(22)] = 1212,
  [SMALL_STATE(23)] = 1265,
  [SMALL_STATE(24)] = 1318,
  [SMALL_STATE(25)] = 1368,
  [SMALL_STATE(26)] = 1411,
  [SMALL_STATE(27)] = 1458,
  [SMALL_STATE(28)] = 1505,
  [SMALL_STATE(29)] = 1548,
  [SMALL_STATE(30)] = 1591,
  [SMALL_STATE(31)] = 1638,
  [SMALL_STATE(32)] = 1685,
  [SMALL_STATE(33)] = 1728,
  [SMALL_STATE(34)] = 1771,
  [SMALL_STATE(35)] = 1792,
  [SMALL_STATE(36)] = 1807,
  [SMALL_STATE(37)] = 1822,
  [SMALL_STATE(38)] = 1837,
  [SMALL_STATE(39)] = 1852,
  [SMALL_STATE(40)] = 1874,
  [SMALL_STATE(41)] = 1896,
  [SMALL_STATE(42)] = 1912,
  [SMALL_STATE(43)] = 1934,
  [SMALL_STATE(44)] = 1956,
  [SMALL_STATE(45)] = 1978,
  [SMALL_STATE(46)] = 2000,
  [SMALL_STATE(47)] = 2022,
  [SMALL_STATE(48)] = 2044,
  [SMALL_STATE(49)] = 2066,
  [SMALL_STATE(50)] = 2088,
  [SMALL_STATE(51)] = 2102,
  [SMALL_STATE(52)] = 2124,
  [SMALL_STATE(53)] = 2142,
  [SMALL_STATE(54)] = 2160,
  [SMALL_STATE(55)] = 2182,
  [SMALL_STATE(56)] = 2204,
  [SMALL_STATE(57)] = 2226,
  [SMALL_STATE(58)] = 2241,
  [SMALL_STATE(59)] = 2256,
  [SMALL_STATE(60)] = 2281,
  [SMALL_STATE(61)] = 2296,
  [SMALL_STATE(62)] = 2317,
  [SMALL_STATE(63)] = 2329,
  [SMALL_STATE(64)] = 2341,
  [SMALL_STATE(65)] = 2353,
  [SMALL_STATE(66)] = 2365,
  [SMALL_STATE(67)] = 2377,
  [SMALL_STATE(68)] = 2399,
  [SMALL_STATE(69)] = 2415,
  [SMALL_STATE(70)] = 2427,
  [SMALL_STATE(71)] = 2447,
  [SMALL_STATE(72)] = 2462,
  [SMALL_STATE(73)] = 2479,
  [SMALL_STATE(74)] = 2494,
  [SMALL_STATE(75)] = 2511,
  [SMALL_STATE(76)] = 2528,
  [SMALL_STATE(77)] = 2543,
  [SMALL_STATE(78)] = 2558,
  [SMALL_STATE(79)] = 2575,
  [SMALL_STATE(80)] = 2588,
  [SMALL_STATE(81)] = 2605,
  [SMALL_STATE(82)] = 2620,
  [SMALL_STATE(83)] = 2634,
  [SMALL_STATE(84)] = 2648,
  [SMALL_STATE(85)] = 2662,
  [SMALL_STATE(86)] = 2676,
  [SMALL_STATE(87)] = 2690,
  [SMALL_STATE(88)] = 2704,
  [SMALL_STATE(89)] = 2720,
  [SMALL_STATE(90)] = 2734,
  [SMALL_STATE(91)] = 2748,
  [SMALL_STATE(92)] = 2762,
  [SMALL_STATE(93)] = 2776,
  [SMALL_STATE(94)] = 2790,
  [SMALL_STATE(95)] = 2804,
  [SMALL_STATE(96)] = 2818,
  [SMALL_STATE(97)] = 2830,
  [SMALL_STATE(98)] = 2844,
  [SMALL_STATE(99)] = 2858,
  [SMALL_STATE(100)] = 2872,
  [SMALL_STATE(101)] = 2884,
  [SMALL_STATE(102)] = 2898,
  [SMALL_STATE(103)] = 2912,
  [SMALL_STATE(104)] = 2926,
  [SMALL_STATE(105)] = 2940,
  [SMALL_STATE(106)] = 2954,
  [SMALL_STATE(107)] = 2968,
  [SMALL_STATE(108)] = 2982,
  [SMALL_STATE(109)] = 2996,
  [SMALL_STATE(110)] = 3010,
  [SMALL_STATE(111)] = 3020,
  [SMALL_STATE(112)] = 3034,
  [SMALL_STATE(113)] = 3048,
  [SMALL_STATE(114)] = 3062,
  [SMALL_STATE(115)] = 3076,
  [SMALL_STATE(116)] = 3088,
  [SMALL_STATE(117)] = 3102,
  [SMALL_STATE(118)] = 3116,
  [SMALL_STATE(119)] = 3130,
  [SMALL_STATE(120)] = 3144,
  [SMALL_STATE(121)] = 3158,
  [SMALL_STATE(122)] = 3172,
  [SMALL_STATE(123)] = 3186,
  [SMALL_STATE(124)] = 3202,
  [SMALL_STATE(125)] = 3216,
  [SMALL_STATE(126)] = 3230,
  [SMALL_STATE(127)] = 3244,
  [SMALL_STATE(128)] = 3258,
  [SMALL_STATE(129)] = 3272,
  [SMALL_STATE(130)] = 3286,
  [SMALL_STATE(131)] = 3298,
  [SMALL_STATE(132)] = 3310,
  [SMALL_STATE(133)] = 3324,
  [SMALL_STATE(134)] = 3338,
  [SMALL_STATE(135)] = 3351,
  [SMALL_STATE(136)] = 3364,
  [SMALL_STATE(137)] = 3377,
  [SMALL_STATE(138)] = 3390,
  [SMALL_STATE(139)] = 3403,
  [SMALL_STATE(140)] = 3416,
  [SMALL_STATE(141)] = 3429,
  [SMALL_STATE(142)] = 3442,
  [SMALL_STATE(143)] = 3455,
  [SMALL_STATE(144)] = 3468,
  [SMALL_STATE(145)] = 3481,
  [SMALL_STATE(146)] = 3494,
  [SMALL_STATE(147)] = 3507,
  [SMALL_STATE(148)] = 3520,
  [SMALL_STATE(149)] = 3533,
  [SMALL_STATE(150)] = 3546,
  [SMALL_STATE(151)] = 3559,
  [SMALL_STATE(152)] = 3572,
  [SMALL_STATE(153)] = 3585,
  [SMALL_STATE(154)] = 3598,
  [SMALL_STATE(155)] = 3611,
  [SMALL_STATE(156)] = 3624,
  [SMALL_STATE(157)] = 3637,
  [SMALL_STATE(158)] = 3650,
  [SMALL_STATE(159)] = 3663,
  [SMALL_STATE(160)] = 3676,
  [SMALL_STATE(161)] = 3689,
  [SMALL_STATE(162)] = 3702,
  [SMALL_STATE(163)] = 3715,
  [SMALL_STATE(164)] = 3728,
  [SMALL_STATE(165)] = 3741,
  [SMALL_STATE(166)] = 3754,
  [SMALL_STATE(167)] = 3767,
  [SMALL_STATE(168)] = 3780,
  [SMALL_STATE(169)] = 3793,
  [SMALL_STATE(170)] = 3806,
  [SMALL_STATE(171)] = 3819,
  [SMALL_STATE(172)] = 3832,
  [SMALL_STATE(173)] = 3845,
  [SMALL_STATE(174)] = 3858,
  [SMALL_STATE(175)] = 3871,
  [SMALL_STATE(176)] = 3884,
  [SMALL_STATE(177)] = 3897,
  [SMALL_STATE(178)] = 3910,
  [SMALL_STATE(179)] = 3923,
  [SMALL_STATE(180)] = 3936,
  [SMALL_STATE(181)] = 3949,
  [SMALL_STATE(182)] = 3962,
  [SMALL_STATE(183)] = 3975,
  [SMALL_STATE(184)] = 3988,
  [SMALL_STATE(185)] = 4001,
  [SMALL_STATE(186)] = 4014,
  [SMALL_STATE(187)] = 4027,
  [SMALL_STATE(188)] = 4040,
  [SMALL_STATE(189)] = 4053,
  [SMALL_STATE(190)] = 4066,
  [SMALL_STATE(191)] = 4075,
  [SMALL_STATE(192)] = 4088,
  [SMALL_STATE(193)] = 4101,
  [SMALL_STATE(194)] = 4114,
  [SMALL_STATE(195)] = 4127,
  [SMALL_STATE(196)] = 4140,
  [SMALL_STATE(197)] = 4153,
  [SMALL_STATE(198)] = 4166,
  [SMALL_STATE(199)] = 4179,
  [SMALL_STATE(200)] = 4192,
  [SMALL_STATE(201)] = 4205,
  [SMALL_STATE(202)] = 4218,
  [SMALL_STATE(203)] = 4231,
  [SMALL_STATE(204)] = 4244,
  [SMALL_STATE(205)] = 4257,
  [SMALL_STATE(206)] = 4270,
  [SMALL_STATE(207)] = 4283,
  [SMALL_STATE(208)] = 4296,
  [SMALL_STATE(209)] = 4309,
  [SMALL_STATE(210)] = 4322,
  [SMALL_STATE(211)] = 4335,
  [SMALL_STATE(212)] = 4348,
  [SMALL_STATE(213)] = 4356,
  [SMALL_STATE(214)] = 4364,
  [SMALL_STATE(215)] = 4374,
  [SMALL_STATE(216)] = 4384,
  [SMALL_STATE(217)] = 4392,
  [SMALL_STATE(218)] = 4402,
  [SMALL_STATE(219)] = 4410,
  [SMALL_STATE(220)] = 4418,
  [SMALL_STATE(221)] = 4426,
  [SMALL_STATE(222)] = 4434,
  [SMALL_STATE(223)] = 4444,
  [SMALL_STATE(224)] = 4454,
  [SMALL_STATE(225)] = 4462,
  [SMALL_STATE(226)] = 4470,
  [SMALL_STATE(227)] = 4480,
  [SMALL_STATE(228)] = 4488,
  [SMALL_STATE(229)] = 4496,
  [SMALL_STATE(230)] = 4504,
  [SMALL_STATE(231)] = 4512,
  [SMALL_STATE(232)] = 4520,
  [SMALL_STATE(233)] = 4530,
  [SMALL_STATE(234)] = 4538,
  [SMALL_STATE(235)] = 4546,
  [SMALL_STATE(236)] = 4554,
  [SMALL_STATE(237)] = 4564,
  [SMALL_STATE(238)] = 4572,
  [SMALL_STATE(239)] = 4580,
  [SMALL_STATE(240)] = 4588,
  [SMALL_STATE(241)] = 4596,
  [SMALL_STATE(242)] = 4606,
  [SMALL_STATE(243)] = 4616,
  [SMALL_STATE(244)] = 4626,
  [SMALL_STATE(245)] = 4633,
  [SMALL_STATE(246)] = 4640,
  [SMALL_STATE(247)] = 4647,
  [SMALL_STATE(248)] = 4654,
  [SMALL_STATE(249)] = 4661,
  [SMALL_STATE(250)] = 4668,
  [SMALL_STATE(251)] = 4675,
  [SMALL_STATE(252)] = 4682,
  [SMALL_STATE(253)] = 4689,
  [SMALL_STATE(254)] = 4696,
  [SMALL_STATE(255)] = 4703,
  [SMALL_STATE(256)] = 4710,
  [SMALL_STATE(257)] = 4717,
  [SMALL_STATE(258)] = 4724,
  [SMALL_STATE(259)] = 4731,
  [SMALL_STATE(260)] = 4738,
  [SMALL_STATE(261)] = 4745,
  [SMALL_STATE(262)] = 4752,
  [SMALL_STATE(263)] = 4759,
  [SMALL_STATE(264)] = 4766,
  [SMALL_STATE(265)] = 4773,
  [SMALL_STATE(266)] = 4780,
  [SMALL_STATE(267)] = 4787,
  [SMALL_STATE(268)] = 4794,
  [SMALL_STATE(269)] = 4801,
  [SMALL_STATE(270)] = 4808,
  [SMALL_STATE(271)] = 4815,
  [SMALL_STATE(272)] = 4822,
  [SMALL_STATE(273)] = 4829,
  [SMALL_STATE(274)] = 4836,
  [SMALL_STATE(275)] = 4843,
  [SMALL_STATE(276)] = 4850,
  [SMALL_STATE(277)] = 4857,
  [SMALL_STATE(278)] = 4864,
  [SMALL_STATE(279)] = 4871,
  [SMALL_STATE(280)] = 4878,
  [SMALL_STATE(281)] = 4885,
  [SMALL_STATE(282)] = 4892,
  [SMALL_STATE(283)] = 4899,
  [SMALL_STATE(284)] = 4906,
  [SMALL_STATE(285)] = 4913,
  [SMALL_STATE(286)] = 4920,
  [SMALL_STATE(287)] = 4927,
  [SMALL_STATE(288)] = 4934,
  [SMALL_STATE(289)] = 4941,
  [SMALL_STATE(290)] = 4948,
  [SMALL_STATE(291)] = 4955,
  [SMALL_STATE(292)] = 4962,
  [SMALL_STATE(293)] = 4969,
  [SMALL_STATE(294)] = 4976,
  [SMALL_STATE(295)] = 4983,
  [SMALL_STATE(296)] = 4990,
  [SMALL_STATE(297)] = 4997,
  [SMALL_STATE(298)] = 5004,
  [SMALL_STATE(299)] = 5011,
  [SMALL_STATE(300)] = 5018,
  [SMALL_STATE(301)] = 5025,
  [SMALL_STATE(302)] = 5032,
  [SMALL_STATE(303)] = 5039,
  [SMALL_STATE(304)] = 5046,
  [SMALL_STATE(305)] = 5053,
  [SMALL_STATE(306)] = 5060,
  [SMALL_STATE(307)] = 5067,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_definition, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_definition, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_parameters, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syscall_parameters, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_parameters, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syscall_parameters, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_parameters, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syscall_parameters, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(257),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(307),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(305),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(304),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(300),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 7),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon_separated_option, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(75),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(75),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_repeat1, 2), SHIFT_REPEAT(84),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_definition_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_definition_repeat1, 2), SHIFT_REPEAT(31),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_colon_separated_option_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_colon_separated_option_repeat1, 2), SHIFT_REPEAT(56),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon_separated_option, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(26),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon_separated_option, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_arg, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_syscall_parameters_repeat1, 2), SHIFT_REPEAT(223),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_syscall_parameters_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_definition_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_definition_repeat1, 2), SHIFT_REPEAT(45),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 13),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 11),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 12),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 14),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 10),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(267),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_definition, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 6),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_attributes_repeat1, 2), SHIFT_REPEAT(73),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_attributes_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 9),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_syscall_attributes_repeat1, 2), SHIFT_REPEAT(52),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_syscall_attributes_repeat1, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_definition, 7),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 7),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_definition, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_definition, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(7),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_definition_repeat1, 2), SHIFT_REPEAT(42),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_attributes_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_attributes_repeat1, 2), SHIFT_REPEAT(168),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_attributes_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_attributes_repeat1, 2), SHIFT_REPEAT(77),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_definition, 8),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 8),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_arg_repeat1, 2),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_define_arg_repeat1, 2), SHIFT_REPEAT(211),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_field, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_definition, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_parameter, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_attribute, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_attributes, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_attributes, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_attribute, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_attribute, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_definition, 5),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_option, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_attribute, 3),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 7),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_attribute, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_attribute, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_attribute, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_definition_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 8),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_definition, 6),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_attributes, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_definition, 5),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 15),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_attributes, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_definition, 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_definition, 6),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_attributes, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_attributes, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_attributes, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incdir, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_attributes, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incdir, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_attributes, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [668] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_syzlang(void) {
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
