#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 222
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_is = 3,
  anon_sym_end = 4,
  anon_sym_import = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_as = 8,
  anon_sym_from = 9,
  anon_sym_COLON = 10,
  anon_sym_AT = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_EQ = 13,
  anon_sym_LBRACE = 14,
  anon_sym_DOT_DOT = 15,
  anon_sym_RBRACE = 16,
  anon_sym_entity = 17,
  anon_sym_structure = 18,
  anon_sym_enum = 19,
  anon_sym_property = 20,
  anon_sym_datatype = 21,
  anon_sym_LT_DASH = 22,
  anon_sym_identity = 23,
  anon_sym_ref = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_DQUOTE = 27,
  sym__quoted_char = 28,
  sym_language_tag = 29,
  sym_url = 30,
  aux_sym_exponent_token1 = 31,
  aux_sym_exponent_token2 = 32,
  aux_sym_decimal_token1 = 33,
  sym_numeric_sign = 34,
  sym_unsigned = 35,
  anon_sym_true = 36,
  anon_sym_false = 37,
  sym_line_comment = 38,
  sym_module = 39,
  sym_module_body = 40,
  sym_import = 41,
  sym__single_import = 42,
  sym_member_import = 43,
  sym_module_import = 44,
  sym_import_rename = 45,
  sym_import_from = 46,
  sym_qualified_identifier = 47,
  sym_identifier_reference = 48,
  sym_property_annotations = 49,
  sym_annotation = 50,
  sym_type_expression = 51,
  sym_type_expression_to = 52,
  sym_type_expression_from_to = 53,
  sym_assignment_expression = 54,
  sym_cardinality_expression = 55,
  sym_type_def = 56,
  sym_entity_def = 57,
  sym_entity_body = 58,
  sym_structure_def = 59,
  sym_structure_body = 60,
  sym_enum_def = 61,
  sym__enum_body = 62,
  sym_enum_variant = 63,
  sym_property_def = 64,
  sym_data_type_def = 65,
  sym_type_restriction = 66,
  sym_identity_member = 67,
  sym_member_by_value = 68,
  sym_member_by_reference = 69,
  sym_value = 70,
  sym_list_of_values = 71,
  sym_value_constructor = 72,
  sym__simple_value = 73,
  sym_language_string = 74,
  sym_string = 75,
  sym__quoted_string = 76,
  sym_double = 77,
  sym_exponent = 78,
  sym_decimal = 79,
  sym_integer = 80,
  sym_boolean = 81,
  aux_sym_module_body_repeat1 = 82,
  aux_sym_module_body_repeat2 = 83,
  aux_sym_module_body_repeat3 = 84,
  aux_sym_import_repeat1 = 85,
  aux_sym_entity_body_repeat1 = 86,
  aux_sym_structure_body_repeat1 = 87,
  aux_sym__enum_body_repeat1 = 88,
  aux_sym_list_of_values_repeat1 = 89,
  aux_sym_list_of_values_repeat2 = 90,
  aux_sym_list_of_values_repeat3 = 91,
  aux_sym_list_of_values_repeat4 = 92,
  aux_sym_list_of_values_repeat5 = 93,
  aux_sym__quoted_string_repeat1 = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_module] = "module",
  [anon_sym_is] = "is",
  [anon_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_RBRACE] = "}",
  [anon_sym_entity] = "entity",
  [anon_sym_structure] = "structure",
  [anon_sym_enum] = "enum",
  [anon_sym_property] = "property",
  [anon_sym_datatype] = "datatype",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_identity] = "identity",
  [anon_sym_ref] = "ref",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [sym__quoted_char] = "_quoted_char",
  [sym_language_tag] = "language_tag",
  [sym_url] = "url",
  [aux_sym_exponent_token1] = "exponent_token1",
  [aux_sym_exponent_token2] = "exponent_token2",
  [aux_sym_decimal_token1] = "decimal_token1",
  [sym_numeric_sign] = "numeric_sign",
  [sym_unsigned] = "unsigned",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_line_comment] = "line_comment",
  [sym_module] = "module",
  [sym_module_body] = "module_body",
  [sym_import] = "import",
  [sym__single_import] = "_single_import",
  [sym_member_import] = "member_import",
  [sym_module_import] = "module_import",
  [sym_import_rename] = "import_rename",
  [sym_import_from] = "import_from",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_identifier_reference] = "identifier_reference",
  [sym_property_annotations] = "property_annotations",
  [sym_annotation] = "annotation",
  [sym_type_expression] = "type_expression",
  [sym_type_expression_to] = "type_expression_to",
  [sym_type_expression_from_to] = "type_expression_from_to",
  [sym_assignment_expression] = "assignment_expression",
  [sym_cardinality_expression] = "cardinality_expression",
  [sym_type_def] = "type_def",
  [sym_entity_def] = "entity_def",
  [sym_entity_body] = "entity_body",
  [sym_structure_def] = "structure_def",
  [sym_structure_body] = "structure_body",
  [sym_enum_def] = "enum_def",
  [sym__enum_body] = "_enum_body",
  [sym_enum_variant] = "enum_variant",
  [sym_property_def] = "property_def",
  [sym_data_type_def] = "data_type_def",
  [sym_type_restriction] = "type_restriction",
  [sym_identity_member] = "identity_member",
  [sym_member_by_value] = "member_by_value",
  [sym_member_by_reference] = "member_by_reference",
  [sym_value] = "value",
  [sym_list_of_values] = "list_of_values",
  [sym_value_constructor] = "value_constructor",
  [sym__simple_value] = "_simple_value",
  [sym_language_string] = "language_string",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym_double] = "double",
  [sym_exponent] = "exponent",
  [sym_decimal] = "decimal",
  [sym_integer] = "integer",
  [sym_boolean] = "boolean",
  [aux_sym_module_body_repeat1] = "module_body_repeat1",
  [aux_sym_module_body_repeat2] = "module_body_repeat2",
  [aux_sym_module_body_repeat3] = "module_body_repeat3",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_entity_body_repeat1] = "entity_body_repeat1",
  [aux_sym_structure_body_repeat1] = "structure_body_repeat1",
  [aux_sym__enum_body_repeat1] = "_enum_body_repeat1",
  [aux_sym_list_of_values_repeat1] = "list_of_values_repeat1",
  [aux_sym_list_of_values_repeat2] = "list_of_values_repeat2",
  [aux_sym_list_of_values_repeat3] = "list_of_values_repeat3",
  [aux_sym_list_of_values_repeat4] = "list_of_values_repeat4",
  [aux_sym_list_of_values_repeat5] = "list_of_values_repeat5",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_structure] = anon_sym_structure,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_datatype] = anon_sym_datatype,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_identity] = anon_sym_identity,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__quoted_char] = sym__quoted_char,
  [sym_language_tag] = sym_language_tag,
  [sym_url] = sym_url,
  [aux_sym_exponent_token1] = aux_sym_exponent_token1,
  [aux_sym_exponent_token2] = aux_sym_exponent_token2,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [sym_numeric_sign] = sym_numeric_sign,
  [sym_unsigned] = sym_unsigned,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_line_comment] = sym_line_comment,
  [sym_module] = sym_module,
  [sym_module_body] = sym_module_body,
  [sym_import] = sym_import,
  [sym__single_import] = sym__single_import,
  [sym_member_import] = sym_member_import,
  [sym_module_import] = sym_module_import,
  [sym_import_rename] = sym_import_rename,
  [sym_import_from] = sym_import_from,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_identifier_reference] = sym_identifier_reference,
  [sym_property_annotations] = sym_property_annotations,
  [sym_annotation] = sym_annotation,
  [sym_type_expression] = sym_type_expression,
  [sym_type_expression_to] = sym_type_expression_to,
  [sym_type_expression_from_to] = sym_type_expression_from_to,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_cardinality_expression] = sym_cardinality_expression,
  [sym_type_def] = sym_type_def,
  [sym_entity_def] = sym_entity_def,
  [sym_entity_body] = sym_entity_body,
  [sym_structure_def] = sym_structure_def,
  [sym_structure_body] = sym_structure_body,
  [sym_enum_def] = sym_enum_def,
  [sym__enum_body] = sym__enum_body,
  [sym_enum_variant] = sym_enum_variant,
  [sym_property_def] = sym_property_def,
  [sym_data_type_def] = sym_data_type_def,
  [sym_type_restriction] = sym_type_restriction,
  [sym_identity_member] = sym_identity_member,
  [sym_member_by_value] = sym_member_by_value,
  [sym_member_by_reference] = sym_member_by_reference,
  [sym_value] = sym_value,
  [sym_list_of_values] = sym_list_of_values,
  [sym_value_constructor] = sym_value_constructor,
  [sym__simple_value] = sym__simple_value,
  [sym_language_string] = sym_language_string,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_double] = sym_double,
  [sym_exponent] = sym_exponent,
  [sym_decimal] = sym_decimal,
  [sym_integer] = sym_integer,
  [sym_boolean] = sym_boolean,
  [aux_sym_module_body_repeat1] = aux_sym_module_body_repeat1,
  [aux_sym_module_body_repeat2] = aux_sym_module_body_repeat2,
  [aux_sym_module_body_repeat3] = aux_sym_module_body_repeat3,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_entity_body_repeat1] = aux_sym_entity_body_repeat1,
  [aux_sym_structure_body_repeat1] = aux_sym_structure_body_repeat1,
  [aux_sym__enum_body_repeat1] = aux_sym__enum_body_repeat1,
  [aux_sym_list_of_values_repeat1] = aux_sym_list_of_values_repeat1,
  [aux_sym_list_of_values_repeat2] = aux_sym_list_of_values_repeat2,
  [aux_sym_list_of_values_repeat3] = aux_sym_list_of_values_repeat3,
  [aux_sym_list_of_values_repeat4] = aux_sym_list_of_values_repeat4,
  [aux_sym_list_of_values_repeat5] = aux_sym_list_of_values_repeat5,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_structure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datatype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_identity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__quoted_char] = {
    .visible = false,
    .named = true,
  },
  [sym_language_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_exponent_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exponent_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_numeric_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_module_body] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym__single_import] = {
    .visible = false,
    .named = true,
  },
  [sym_member_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module_import] = {
    .visible = true,
    .named = true,
  },
  [sym_import_rename] = {
    .visible = true,
    .named = true,
  },
  [sym_import_from] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_property_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression_to] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression_from_to] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_def] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_def] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_body] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_def] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_def] = {
    .visible = true,
    .named = true,
  },
  [sym__enum_body] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_property_def] = {
    .visible = true,
    .named = true,
  },
  [sym_data_type_def] = {
    .visible = true,
    .named = true,
  },
  [sym_type_restriction] = {
    .visible = true,
    .named = true,
  },
  [sym_identity_member] = {
    .visible = true,
    .named = true,
  },
  [sym_member_by_value] = {
    .visible = true,
    .named = true,
  },
  [sym_member_by_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_values] = {
    .visible = true,
    .named = true,
  },
  [sym_value_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_value] = {
    .visible = false,
    .named = true,
  },
  [sym_language_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_body_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_structure_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_values_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_values_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_values_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_values_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
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
  [54] = 32,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 55,
  [62] = 37,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 24,
  [72] = 72,
  [73] = 35,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 17,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 66,
  [82] = 82,
  [83] = 83,
  [84] = 23,
  [85] = 85,
  [86] = 19,
  [87] = 87,
  [88] = 22,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 18,
  [98] = 98,
  [99] = 99,
  [100] = 21,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 20,
  [106] = 25,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 12,
  [111] = 111,
  [112] = 56,
  [113] = 113,
  [114] = 64,
  [115] = 115,
  [116] = 109,
  [117] = 27,
  [118] = 118,
  [119] = 28,
  [120] = 60,
  [121] = 121,
  [122] = 122,
  [123] = 115,
  [124] = 33,
  [125] = 125,
  [126] = 31,
  [127] = 63,
  [128] = 128,
  [129] = 52,
  [130] = 130,
  [131] = 44,
  [132] = 53,
  [133] = 42,
  [134] = 113,
  [135] = 30,
  [136] = 136,
  [137] = 68,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 138,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 149,
  [152] = 152,
  [153] = 150,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 12,
  [160] = 160,
  [161] = 154,
  [162] = 162,
  [163] = 158,
  [164] = 162,
  [165] = 165,
  [166] = 45,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 41,
  [171] = 43,
  [172] = 172,
  [173] = 173,
  [174] = 47,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 179,
  [181] = 181,
  [182] = 167,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 190,
  [200] = 189,
  [201] = 188,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 193,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 212,
  [215] = 198,
  [216] = 189,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 192,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 8144
    ? (c < 4301
      ? (c < 886
        ? (c < 452
          ? (c < 192
            ? (c < 'a'
              ? (c >= 'A' && c <= 'Z')
              : (c <= 'z' || c == 181))
            : (c <= 214 || (c < 248
              ? (c >= 216 && c <= 246)
              : (c <= 442 || (c >= 444 && c <= 447)))))
          : (c <= 452 || (c < 499
            ? (c < 457
              ? (c >= 454 && c <= 455)
              : (c <= 458 || (c >= 460 && c <= 497)))
            : (c <= 659 || (c < 880
              ? (c >= 661 && c <= 687)
              : c <= 883)))))
        : (c <= 887 || (c < 931
          ? (c < 904
            ? (c < 895
              ? (c >= 891 && c <= 893)
              : (c <= 895 || c == 902))
            : (c <= 906 || (c < 910
              ? c == 908
              : c <= 929)))
          : (c <= 1013 || (c < 1376
            ? (c < 1162
              ? (c >= 1015 && c <= 1153)
              : (c <= 1327 || (c >= 1329 && c <= 1366)))
            : (c <= 1416 || (c < 4295
              ? (c >= 4256 && c <= 4293)
              : c <= 4295)))))))
      : (c <= 4301 || (c < 8008
        ? (c < 7357
          ? (c < 5112
            ? (c < 4349
              ? (c >= 4304 && c <= 4346)
              : (c <= 4351 || (c >= 5024 && c <= 5109)))
            : (c <= 5117 || (c < 7312
              ? (c >= 7296 && c <= 7304)
              : c <= 7354)))
          : (c <= 7359 || (c < 7680
            ? (c < 7531
              ? (c >= 7424 && c <= 7467)
              : (c <= 7543 || (c >= 7545 && c <= 7578)))
            : (c <= 7957 || (c < 7968
              ? (c >= 7960 && c <= 7965)
              : c <= 8005)))))
        : (c <= 8013 || (c < 8080
          ? (c < 8029
            ? (c < 8025
              ? (c >= 8016 && c <= 8023)
              : (c <= 8025 || c == 8027))
            : (c <= 8029 || (c < 8064
              ? (c >= 8031 && c <= 8061)
              : c <= 8071)))
          : (c <= 8087 || (c < 8126
            ? (c < 8112
              ? (c >= 8096 && c <= 8103)
              : (c <= 8116 || (c >= 8118 && c <= 8123)))
            : (c <= 8126 || (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8139)))))))))
    : (c <= 8147 || (c < 42624
      ? (c < 8495
        ? (c < 8458
          ? (c < 8182
            ? (c < 8160
              ? (c >= 8150 && c <= 8155)
              : (c <= 8172 || (c >= 8178 && c <= 8180)))
            : (c <= 8187 || (c < 8455
              ? c == 8450
              : c <= 8455)))
          : (c <= 8467 || (c < 8486
            ? (c < 8473
              ? c == 8469
              : (c <= 8477 || c == 8484))
            : (c <= 8486 || (c < 8490
              ? c == 8488
              : c <= 8493)))))
        : (c <= 8500 || (c < 11390
          ? (c < 8526
            ? (c < 8508
              ? c == 8505
              : (c <= 8511 || (c >= 8517 && c <= 8521)))
            : (c <= 8526 || (c < 11264
              ? (c >= 8579 && c <= 8580)
              : c <= 11387)))
          : (c <= 11492 || (c < 11559
            ? (c < 11506
              ? (c >= 11499 && c <= 11502)
              : (c <= 11507 || (c >= 11520 && c <= 11557)))
            : (c <= 11559 || (c < 42560
              ? c == 11565
              : c <= 42605)))))))
      : (c <= 42651 || (c < 64275
        ? (c < 42965
          ? (c < 42896
            ? (c < 42865
              ? (c >= 42786 && c <= 42863)
              : (c <= 42887 || (c >= 42891 && c <= 42894)))
            : (c <= 42954 || (c < 42963
              ? (c >= 42960 && c <= 42961)
              : c <= 42963)))
          : (c <= 42969 || (c < 43872
            ? (c < 43002
              ? (c >= 42997 && c <= 42998)
              : (c <= 43002 || (c >= 43824 && c <= 43866)))
            : (c <= 43880 || (c < 64256
              ? (c >= 43888 && c <= 43967)
              : c <= 64262)))))
        : (c <= 64279 || (c < 66940
          ? (c < 66736
            ? (c < 65345
              ? (c >= 65313 && c <= 65338)
              : (c <= 65370 || (c >= 66560 && c <= 66639)))
            : (c <= 66771 || (c < 66928
              ? (c >= 66776 && c <= 66811)
              : c <= 66938)))
          : (c <= 66954 || (c < 66979
            ? (c < 66964
              ? (c >= 66956 && c <= 66962)
              : (c <= 66965 || (c >= 66967 && c <= 66977)))
            : (c <= 66993 || (c < 67003
              ? (c >= 66995 && c <= 67001)
              : c <= 67004)))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 8144
    ? (c < 4301
      ? (c < 886
        ? (c < 452
          ? (c < 192
            ? (c < 'b'
              ? (c >= 'A' && c <= 'Z')
              : (c <= 'z' || c == 181))
            : (c <= 214 || (c < 248
              ? (c >= 216 && c <= 246)
              : (c <= 442 || (c >= 444 && c <= 447)))))
          : (c <= 452 || (c < 499
            ? (c < 457
              ? (c >= 454 && c <= 455)
              : (c <= 458 || (c >= 460 && c <= 497)))
            : (c <= 659 || (c < 880
              ? (c >= 661 && c <= 687)
              : c <= 883)))))
        : (c <= 887 || (c < 931
          ? (c < 904
            ? (c < 895
              ? (c >= 891 && c <= 893)
              : (c <= 895 || c == 902))
            : (c <= 906 || (c < 910
              ? c == 908
              : c <= 929)))
          : (c <= 1013 || (c < 1376
            ? (c < 1162
              ? (c >= 1015 && c <= 1153)
              : (c <= 1327 || (c >= 1329 && c <= 1366)))
            : (c <= 1416 || (c < 4295
              ? (c >= 4256 && c <= 4293)
              : c <= 4295)))))))
      : (c <= 4301 || (c < 8008
        ? (c < 7357
          ? (c < 5112
            ? (c < 4349
              ? (c >= 4304 && c <= 4346)
              : (c <= 4351 || (c >= 5024 && c <= 5109)))
            : (c <= 5117 || (c < 7312
              ? (c >= 7296 && c <= 7304)
              : c <= 7354)))
          : (c <= 7359 || (c < 7680
            ? (c < 7531
              ? (c >= 7424 && c <= 7467)
              : (c <= 7543 || (c >= 7545 && c <= 7578)))
            : (c <= 7957 || (c < 7968
              ? (c >= 7960 && c <= 7965)
              : c <= 8005)))))
        : (c <= 8013 || (c < 8080
          ? (c < 8029
            ? (c < 8025
              ? (c >= 8016 && c <= 8023)
              : (c <= 8025 || c == 8027))
            : (c <= 8029 || (c < 8064
              ? (c >= 8031 && c <= 8061)
              : c <= 8071)))
          : (c <= 8087 || (c < 8126
            ? (c < 8112
              ? (c >= 8096 && c <= 8103)
              : (c <= 8116 || (c >= 8118 && c <= 8123)))
            : (c <= 8126 || (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8139)))))))))
    : (c <= 8147 || (c < 42624
      ? (c < 8495
        ? (c < 8458
          ? (c < 8182
            ? (c < 8160
              ? (c >= 8150 && c <= 8155)
              : (c <= 8172 || (c >= 8178 && c <= 8180)))
            : (c <= 8187 || (c < 8455
              ? c == 8450
              : c <= 8455)))
          : (c <= 8467 || (c < 8486
            ? (c < 8473
              ? c == 8469
              : (c <= 8477 || c == 8484))
            : (c <= 8486 || (c < 8490
              ? c == 8488
              : c <= 8493)))))
        : (c <= 8500 || (c < 11390
          ? (c < 8526
            ? (c < 8508
              ? c == 8505
              : (c <= 8511 || (c >= 8517 && c <= 8521)))
            : (c <= 8526 || (c < 11264
              ? (c >= 8579 && c <= 8580)
              : c <= 11387)))
          : (c <= 11492 || (c < 11559
            ? (c < 11506
              ? (c >= 11499 && c <= 11502)
              : (c <= 11507 || (c >= 11520 && c <= 11557)))
            : (c <= 11559 || (c < 42560
              ? c == 11565
              : c <= 42605)))))))
      : (c <= 42651 || (c < 64275
        ? (c < 42965
          ? (c < 42896
            ? (c < 42865
              ? (c >= 42786 && c <= 42863)
              : (c <= 42887 || (c >= 42891 && c <= 42894)))
            : (c <= 42954 || (c < 42963
              ? (c >= 42960 && c <= 42961)
              : c <= 42963)))
          : (c <= 42969 || (c < 43872
            ? (c < 43002
              ? (c >= 42997 && c <= 42998)
              : (c <= 43002 || (c >= 43824 && c <= 43866)))
            : (c <= 43880 || (c < 64256
              ? (c >= 43888 && c <= 43967)
              : c <= 64262)))))
        : (c <= 64279 || (c < 66940
          ? (c < 66736
            ? (c < 65345
              ? (c >= 65313 && c <= 65338)
              : (c <= 65370 || (c >= 66560 && c <= 66639)))
            : (c <= 66771 || (c < 66928
              ? (c >= 66776 && c <= 66811)
              : c <= 66938)))
          : (c <= 66954 || (c < 66979
            ? (c < 66964
              ? (c >= 66956 && c <= 66962)
              : (c <= 66965 || (c >= 66967 && c <= 66977)))
            : (c <= 66993 || (c < 67003
              ? (c >= 66995 && c <= 67001)
              : c <= 67004)))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == ';') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(125);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          (lookahead < '0' || '\\' < lookahead) &&
          lookahead != 'x') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 17:
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          (lookahead < '0' || '\\' < lookahead) &&
          lookahead != 'x') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(125);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == '{') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == '}') ADVANCE(125);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == '}') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == '}') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '}') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 66:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 69:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 70:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          (lookahead < '0' || '\\' < lookahead) &&
          lookahead != 'x') ADVANCE(19);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(96);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(98);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(117);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(99);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(118);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(90);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(84);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(82);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(102);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(83);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(100);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(106);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(93);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(104);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(105);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(78);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(79);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(94);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(116);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(119);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(91);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_structure);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__quoted_char);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__quoted_char);
      if (lookahead == ';') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '"' &&
          lookahead != 127) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__quoted_char);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_language_tag);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_language_tag);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_url);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_exponent_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_exponent_token1);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_exponent_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_numeric_sign);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_numeric_sign);
      if (lookahead == '>') ADVANCE(111);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 36:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_structure] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_datatype] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_identity] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_language_tag] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [aux_sym_exponent_token1] = ACTIONS(1),
    [aux_sym_exponent_token2] = ACTIONS(1),
    [aux_sym_decimal_token1] = ACTIONS(1),
    [sym_numeric_sign] = ACTIONS(1),
    [sym_unsigned] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_module] = STATE(220),
    [anon_sym_module] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    STATE(24), 1,
      sym__quoted_string,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(32), 1,
      sym_decimal,
    STATE(35), 1,
      sym_integer,
    STATE(56), 1,
      sym_value,
    STATE(192), 1,
      sym_identifier_reference,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 7,
      sym_list_of_values,
      sym_value_constructor,
      sym__simple_value,
      sym_language_string,
      sym_string,
      sym_double,
      sym_boolean,
  [50] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_numeric_sign,
    ACTIONS(25), 1,
      sym_unsigned,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(54), 1,
      sym_decimal,
    STATE(71), 1,
      sym__quoted_string,
    STATE(73), 1,
      sym_integer,
    STATE(112), 1,
      sym_value,
    STATE(221), 1,
      sym_identifier_reference,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(132), 7,
      sym_list_of_values,
      sym_value_constructor,
      sym__simple_value,
      sym_language_string,
      sym_string,
      sym_double,
      sym_boolean,
  [100] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(31), 1,
      anon_sym_import,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_structure,
    ACTIONS(39), 1,
      anon_sym_enum,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_datatype,
    STATE(6), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(11), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(34), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(104), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [147] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_import,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_structure,
    ACTIONS(39), 1,
      anon_sym_enum,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_datatype,
    ACTIONS(45), 1,
      anon_sym_end,
    STATE(4), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(7), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(16), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(104), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [194] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_structure,
    ACTIONS(39), 1,
      anon_sym_enum,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_datatype,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(10), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(37), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(104), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [234] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_structure,
    ACTIONS(39), 1,
      anon_sym_enum,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_datatype,
    STATE(11), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(37), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(104), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [274] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    STATE(24), 1,
      sym__quoted_string,
    STATE(66), 1,
      aux_sym_list_of_values_repeat4,
    STATE(113), 1,
      aux_sym_list_of_values_repeat5,
    STATE(118), 1,
      sym_decimal,
    STATE(145), 1,
      sym_integer,
    STATE(61), 2,
      sym_double,
      aux_sym_list_of_values_repeat3,
    STATE(115), 2,
      sym_string,
      aux_sym_list_of_values_repeat2,
    STATE(116), 2,
      sym_language_string,
      aux_sym_list_of_values_repeat1,
  [314] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    STATE(24), 1,
      sym__quoted_string,
    STATE(81), 1,
      aux_sym_list_of_values_repeat4,
    STATE(118), 1,
      sym_decimal,
    STATE(134), 1,
      aux_sym_list_of_values_repeat5,
    STATE(145), 1,
      sym_integer,
    STATE(55), 2,
      sym_double,
      aux_sym_list_of_values_repeat3,
    STATE(109), 2,
      sym_language_string,
      aux_sym_list_of_values_repeat1,
    STATE(123), 2,
      sym_string,
      aux_sym_list_of_values_repeat2,
  [354] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_structure,
    ACTIONS(39), 1,
      anon_sym_enum,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_datatype,
    ACTIONS(49), 1,
      anon_sym_end,
    STATE(14), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(104), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [387] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_structure,
    ACTIONS(39), 1,
      anon_sym_enum,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_datatype,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(14), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(104), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [420] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 13,
      anon_sym_is,
      anon_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_AT,
      anon_sym_DASH_GT,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_LPAREN,
  [439] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    STATE(24), 1,
      sym__quoted_string,
    STATE(32), 1,
      sym_decimal,
    STATE(35), 1,
      sym_integer,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(214), 5,
      sym__simple_value,
      sym_language_string,
      sym_string,
      sym_double,
      sym_boolean,
  [472] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_end,
    ACTIONS(55), 1,
      anon_sym_entity,
    ACTIONS(58), 1,
      anon_sym_structure,
    ACTIONS(61), 1,
      anon_sym_enum,
    ACTIONS(64), 1,
      anon_sym_property,
    ACTIONS(67), 1,
      anon_sym_datatype,
    STATE(14), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(104), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [505] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    STATE(24), 1,
      sym__quoted_string,
    STATE(32), 1,
      sym_decimal,
    STATE(35), 1,
      sym_integer,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 5,
      sym__simple_value,
      sym_language_string,
      sym_string,
      sym_double,
      sym_boolean,
  [538] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_end,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_structure,
    ACTIONS(39), 1,
      anon_sym_enum,
    ACTIONS(41), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_datatype,
    STATE(14), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(104), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [571] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 12,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      aux_sym_decimal_token1,
      sym_numeric_sign,
      sym_unsigned,
  [589] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      aux_sym_exponent_token1,
    ACTIONS(72), 11,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      sym_numeric_sign,
      sym_unsigned,
  [609] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(76), 12,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      aux_sym_decimal_token1,
      sym_numeric_sign,
      sym_unsigned,
  [627] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 11,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      sym_numeric_sign,
      sym_unsigned,
  [644] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      anon_sym_AT,
    ACTIONS(80), 10,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_language_tag,
  [663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_COLON,
    ACTIONS(84), 10,
      anon_sym_is,
      anon_sym_end,
      anon_sym_DASH_GT,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_LPAREN,
  [682] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(88), 10,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_language_tag,
  [701] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(94), 1,
      anon_sym_AT,
    ACTIONS(96), 1,
      sym_language_tag,
    ACTIONS(92), 9,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
  [722] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(98), 11,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      sym_numeric_sign,
      sym_unsigned,
  [739] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_end,
    ACTIONS(104), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      anon_sym_identity,
    ACTIONS(108), 1,
      anon_sym_ref,
    STATE(80), 1,
      sym_identity_member,
    STATE(29), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(82), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [770] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_COLON,
    ACTIONS(112), 1,
      anon_sym_from,
    STATE(41), 1,
      sym_import_from,
    ACTIONS(110), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [793] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 11,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      sym_numeric_sign,
      sym_unsigned,
  [810] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      anon_sym_identity,
    ACTIONS(108), 1,
      anon_sym_ref,
    ACTIONS(116), 1,
      anon_sym_end,
    STATE(98), 1,
      sym_identity_member,
    STATE(62), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(99), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_as,
    STATE(43), 1,
      sym_import_rename,
    ACTIONS(118), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [861] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 10,
      anon_sym_is,
      anon_sym_end,
      anon_sym_DASH_GT,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_LPAREN,
  [877] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      aux_sym_exponent_token1,
    STATE(20), 1,
      sym_exponent,
    ACTIONS(122), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
  [897] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 10,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
  [913] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(130), 1,
      anon_sym_import,
    STATE(34), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    ACTIONS(128), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      aux_sym_decimal_token1,
    ACTIONS(122), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
  [950] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      anon_sym_identity,
    ACTIONS(135), 1,
      anon_sym_end,
    STATE(62), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(94), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [975] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_AT,
    STATE(37), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(137), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [994] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      anon_sym_identity,
    ACTIONS(142), 1,
      anon_sym_end,
    STATE(36), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(85), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1019] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_is,
    STATE(72), 1,
      sym__enum_body,
    ACTIONS(146), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_is,
    STATE(89), 1,
      sym_property_annotations,
    ACTIONS(150), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(152), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1069] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_RPAREN,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1097] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 8,
      anon_sym_is,
      anon_sym_end,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1111] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1125] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1153] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1167] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      anon_sym_is,
    STATE(75), 1,
      sym_entity_body,
    ACTIONS(170), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1185] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_is,
    STATE(91), 1,
      sym_property_annotations,
    ACTIONS(172), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1203] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      anon_sym_is,
    STATE(74), 1,
      sym_structure_body,
    ACTIONS(176), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1247] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      aux_sym_exponent_token1,
    STATE(105), 1,
      sym_exponent,
    ACTIONS(122), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [1266] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      sym_decimal,
    STATE(218), 1,
      sym_integer,
    STATE(65), 2,
      sym_double,
      aux_sym_list_of_values_repeat3,
  [1289] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1302] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 7,
      anon_sym_is,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1315] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      sym_qualified_identifier,
    STATE(59), 4,
      sym__single_import,
      sym_member_import,
      sym_module_import,
      aux_sym_import_repeat1,
  [1334] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      sym_qualified_identifier,
    STATE(59), 4,
      sym__single_import,
      sym_member_import,
      sym_module_import,
      aux_sym_import_repeat1,
  [1353] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1366] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      sym_decimal,
    STATE(218), 1,
      sym_integer,
    STATE(65), 2,
      sym_double,
      aux_sym_list_of_values_repeat3,
  [1389] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_AT,
    STATE(62), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(137), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1421] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1434] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    ACTIONS(216), 1,
      sym_numeric_sign,
    ACTIONS(219), 1,
      sym_unsigned,
    STATE(177), 1,
      sym_decimal,
    STATE(218), 1,
      sym_integer,
    STATE(65), 2,
      sym_double,
      aux_sym_list_of_values_repeat3,
  [1457] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      sym_integer,
    STATE(90), 2,
      sym_decimal,
      aux_sym_list_of_values_repeat4,
  [1477] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1489] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1501] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1513] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_ref,
    ACTIONS(228), 1,
      anon_sym_end,
    STATE(96), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1531] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(230), 1,
      sym_language_tag,
    ACTIONS(94), 2,
      sym_identifier,
      anon_sym_AT,
    ACTIONS(92), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1547] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1559] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(234), 1,
      aux_sym_decimal_token1,
    ACTIONS(122), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [1575] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1587] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1599] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1611] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(70), 5,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
      aux_sym_decimal_token1,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1637] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_is,
    STATE(148), 1,
      sym_property_annotations,
    ACTIONS(250), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1655] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_ref,
    ACTIONS(116), 1,
      anon_sym_end,
    STATE(99), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1673] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      sym_integer,
    STATE(90), 2,
      sym_decimal,
      aux_sym_list_of_values_repeat4,
  [1693] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_ref,
    ACTIONS(116), 1,
      anon_sym_end,
    STATE(96), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1711] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 2,
      sym_identifier,
      anon_sym_AT,
    ACTIONS(88), 4,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
      sym_language_tag,
  [1737] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_identity,
    ACTIONS(135), 1,
      anon_sym_end,
    STATE(93), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1755] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(76), 5,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
      aux_sym_decimal_token1,
  [1769] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_qualified_identifier,
    STATE(46), 3,
      sym__single_import,
      sym_member_import,
      sym_module_import,
  [1787] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(84), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1815] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    ACTIONS(268), 1,
      sym_numeric_sign,
    ACTIONS(271), 1,
      sym_unsigned,
    STATE(218), 1,
      sym_integer,
    STATE(90), 2,
      sym_decimal,
      aux_sym_list_of_values_repeat4,
  [1835] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1847] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1859] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_end,
    ACTIONS(283), 1,
      anon_sym_identity,
    STATE(93), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1877] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_identity,
    ACTIONS(286), 1,
      anon_sym_end,
    STATE(93), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(288), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1907] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(293), 1,
      anon_sym_end,
    ACTIONS(295), 1,
      anon_sym_ref,
    STATE(96), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1925] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 2,
      sym_identifier,
      aux_sym_exponent_token1,
    ACTIONS(72), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [1939] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_ref,
    ACTIONS(298), 1,
      anon_sym_end,
    STATE(70), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1957] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_ref,
    ACTIONS(298), 1,
      anon_sym_end,
    STATE(96), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1975] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 2,
      sym_identifier,
      anon_sym_AT,
    ACTIONS(80), 4,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
      sym_language_tag,
  [1989] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [2001] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_is,
    ACTIONS(302), 1,
      sym_identifier,
    STATE(141), 1,
      sym_property_annotations,
    ACTIONS(304), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [2019] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(135), 1,
      sym_qualified_identifier,
    STATE(58), 4,
      sym__single_import,
      sym_member_import,
      sym_module_import,
      aux_sym_import_repeat1,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [2047] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(98), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2073] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [2086] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      sym__quoted_string,
    STATE(108), 2,
      sym_language_string,
      aux_sym_list_of_values_repeat1,
  [2103] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(213), 1,
      sym__quoted_string,
    STATE(108), 2,
      sym_language_string,
      aux_sym_list_of_values_repeat1,
  [2120] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(51), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [2133] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_DASH_GT,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_type_expression_from_to,
    STATE(143), 1,
      sym_type_expression_to,
    STATE(169), 1,
      sym_cardinality_expression,
  [2152] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(188), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2165] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(125), 2,
      sym_integer,
      aux_sym_list_of_values_repeat5,
  [2182] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(212), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2195] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym__quoted_string,
    STATE(122), 2,
      sym_string,
      aux_sym_list_of_values_repeat2,
  [2212] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(213), 1,
      sym__quoted_string,
    STATE(108), 2,
      sym_language_string,
      aux_sym_list_of_values_repeat1,
  [2229] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(333), 1,
      anon_sym_from,
    ACTIONS(335), 1,
      anon_sym_COLON,
    STATE(170), 1,
      sym_import_from,
  [2248] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 1,
      aux_sym_exponent_token1,
    STATE(20), 1,
      sym_exponent,
    ACTIONS(337), 3,
      anon_sym_RBRACK,
      sym_numeric_sign,
      sym_unsigned,
  [2263] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(114), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2276] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(201), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2289] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(126), 1,
      sym_qualified_identifier,
    STATE(128), 1,
      sym_identifier_reference,
    STATE(160), 1,
      sym_cardinality_expression,
  [2308] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym__quoted_string,
    STATE(122), 2,
      sym_string,
      aux_sym_list_of_values_repeat2,
  [2325] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym__quoted_string,
    STATE(122), 2,
      sym_string,
      aux_sym_list_of_values_repeat2,
  [2342] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(126), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2355] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    ACTIONS(356), 1,
      sym_numeric_sign,
    ACTIONS(359), 1,
      sym_unsigned,
    STATE(125), 2,
      sym_integer,
      aux_sym_list_of_values_repeat5,
  [2372] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(84), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [2385] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(210), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2398] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [2411] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(178), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2424] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_is,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(157), 1,
      sym_property_annotations,
    ACTIONS(372), 2,
      anon_sym_end,
      anon_sym_ref,
  [2441] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(158), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [2454] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      sym_identifier,
    ACTIONS(180), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2467] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(154), 4,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_identity,
      anon_sym_ref,
  [2480] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym_numeric_sign,
    ACTIONS(15), 1,
      sym_unsigned,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(125), 2,
      sym_integer,
      aux_sym_list_of_values_repeat5,
  [2497] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_as,
    STATE(171), 1,
      sym_import_rename,
  [2513] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_is,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(386), 1,
      anon_sym_end,
    STATE(165), 1,
      sym_property_annotations,
  [2529] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 1,
      sym_identifier,
    ACTIONS(224), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [2541] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(390), 1,
      anon_sym_end,
    STATE(37), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2555] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_DASH_GT,
    ACTIONS(394), 1,
      anon_sym_EQ,
    STATE(129), 1,
      sym_assignment_expression,
    STATE(167), 1,
      sym_type_expression,
  [2571] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_DASH_GT,
    ACTIONS(396), 1,
      anon_sym_EQ,
    STATE(52), 1,
      sym_assignment_expression,
    STATE(182), 1,
      sym_type_expression,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [2599] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_end,
    STATE(147), 2,
      sym_enum_variant,
      aux_sym__enum_body_repeat1,
  [2613] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(408), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [2625] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(410), 1,
      anon_sym_end,
    STATE(37), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2639] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      aux_sym_decimal_token1,
    ACTIONS(412), 3,
      anon_sym_RBRACK,
      sym_numeric_sign,
      sym_unsigned,
  [2651] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(416), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [2663] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_end,
    STATE(147), 2,
      sym_enum_variant,
      aux_sym__enum_body_repeat1,
  [2677] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(425), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [2689] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(126), 1,
      sym_qualified_identifier,
    STATE(131), 1,
      sym_identifier_reference,
  [2702] = 4,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      sym__quoted_char,
    ACTIONS(431), 1,
      sym_line_comment,
    STATE(152), 1,
      aux_sym__quoted_string_repeat1,
  [2715] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(44), 1,
      sym_identifier_reference,
  [2728] = 4,
    ACTIONS(431), 1,
      sym_line_comment,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym__quoted_char,
    STATE(152), 1,
      aux_sym__quoted_string_repeat1,
  [2741] = 4,
    ACTIONS(429), 1,
      sym__quoted_char,
    ACTIONS(431), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym__quoted_string_repeat1,
  [2754] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(140), 1,
      sym_identifier_reference,
  [2767] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      sym_identifier,
    STATE(142), 2,
      sym_enum_variant,
      aux_sym__enum_body_repeat1,
  [2778] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(57), 1,
      sym_identifier_reference,
  [2791] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(446), 2,
      anon_sym_end,
      anon_sym_ref,
  [2802] = 4,
    ACTIONS(431), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      sym__quoted_char,
    STATE(150), 1,
      aux_sym__quoted_string_repeat1,
  [2815] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(51), 2,
      anon_sym_RBRACK,
      anon_sym_as,
  [2826] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(107), 1,
      sym_identifier_reference,
    STATE(126), 1,
      sym_qualified_identifier,
  [2839] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(139), 1,
      sym_identifier_reference,
  [2852] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    STATE(138), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2863] = 4,
    ACTIONS(431), 1,
      sym_line_comment,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    ACTIONS(454), 1,
      sym__quoted_char,
    STATE(153), 1,
      aux_sym__quoted_string_repeat1,
  [2876] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_AT,
    STATE(144), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2887] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      sym_identifier,
    ACTIONS(458), 1,
      anon_sym_end,
  [2897] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [2905] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 1,
      anon_sym_EQ,
    STATE(127), 1,
      sym_assignment_expression,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(92), 2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2923] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_DASH_GT,
    STATE(146), 1,
      sym_type_expression_to,
  [2933] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(152), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [2941] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [2949] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(460), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2957] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2965] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [2973] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(466), 1,
      sym_unsigned,
  [2983] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 1,
      aux_sym_exponent_token1,
    STATE(20), 1,
      sym_exponent,
  [3001] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_DASH_GT,
    STATE(102), 1,
      sym_type_expression_to,
  [3011] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      aux_sym_exponent_token2,
    ACTIONS(472), 1,
      sym_numeric_sign,
  [3021] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(474), 1,
      aux_sym_exponent_token2,
    ACTIONS(476), 1,
      sym_numeric_sign,
  [3031] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_DASH_GT,
    STATE(79), 1,
      sym_type_expression,
  [3041] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 1,
      anon_sym_EQ,
    STATE(63), 1,
      sym_assignment_expression,
  [3051] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_DOT_DOT,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
  [3061] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_LT_DASH,
    STATE(50), 1,
      sym_type_restriction,
  [3071] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_DASH_GT,
    STATE(40), 1,
      sym_type_expression,
  [3081] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 1,
      anon_sym_is,
    STATE(210), 1,
      sym_module_body,
  [3091] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      sym_identifier,
  [3098] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      sym_identifier,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [3112] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      sym_url,
  [3119] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
  [3126] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
  [3133] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      sym_unsigned,
  [3140] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      sym_identifier,
  [3147] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
  [3154] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      sym_identifier,
  [3161] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(508), 1,
      sym_identifier,
  [3168] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(510), 1,
      aux_sym_exponent_token2,
  [3175] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 1,
      sym_url,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      sym_identifier,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(516), 1,
      sym_identifier,
  [3196] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(518), 1,
      sym_identifier,
  [3203] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      anon_sym_EQ,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
  [3217] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      sym_unsigned,
  [3224] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(526), 1,
      sym_identifier,
  [3231] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 1,
      sym_identifier,
  [3238] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
  [3245] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
  [3252] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
  [3259] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      sym_identifier,
  [3266] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [3273] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(96), 1,
      sym_language_tag,
  [3280] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
  [3287] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      aux_sym_exponent_token2,
  [3294] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      sym_identifier,
  [3301] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(546), 1,
      sym_unsigned,
  [3308] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      aux_sym_decimal_token1,
  [3315] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      sym_unsigned,
  [3322] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
  [3329] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 234,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 314,
  [SMALL_STATE(10)] = 354,
  [SMALL_STATE(11)] = 387,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 439,
  [SMALL_STATE(14)] = 472,
  [SMALL_STATE(15)] = 505,
  [SMALL_STATE(16)] = 538,
  [SMALL_STATE(17)] = 571,
  [SMALL_STATE(18)] = 589,
  [SMALL_STATE(19)] = 609,
  [SMALL_STATE(20)] = 627,
  [SMALL_STATE(21)] = 644,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 682,
  [SMALL_STATE(24)] = 701,
  [SMALL_STATE(25)] = 722,
  [SMALL_STATE(26)] = 739,
  [SMALL_STATE(27)] = 770,
  [SMALL_STATE(28)] = 793,
  [SMALL_STATE(29)] = 810,
  [SMALL_STATE(30)] = 841,
  [SMALL_STATE(31)] = 861,
  [SMALL_STATE(32)] = 877,
  [SMALL_STATE(33)] = 897,
  [SMALL_STATE(34)] = 913,
  [SMALL_STATE(35)] = 933,
  [SMALL_STATE(36)] = 950,
  [SMALL_STATE(37)] = 975,
  [SMALL_STATE(38)] = 994,
  [SMALL_STATE(39)] = 1019,
  [SMALL_STATE(40)] = 1037,
  [SMALL_STATE(41)] = 1055,
  [SMALL_STATE(42)] = 1069,
  [SMALL_STATE(43)] = 1083,
  [SMALL_STATE(44)] = 1097,
  [SMALL_STATE(45)] = 1111,
  [SMALL_STATE(46)] = 1125,
  [SMALL_STATE(47)] = 1139,
  [SMALL_STATE(48)] = 1153,
  [SMALL_STATE(49)] = 1167,
  [SMALL_STATE(50)] = 1185,
  [SMALL_STATE(51)] = 1203,
  [SMALL_STATE(52)] = 1221,
  [SMALL_STATE(53)] = 1234,
  [SMALL_STATE(54)] = 1247,
  [SMALL_STATE(55)] = 1266,
  [SMALL_STATE(56)] = 1289,
  [SMALL_STATE(57)] = 1302,
  [SMALL_STATE(58)] = 1315,
  [SMALL_STATE(59)] = 1334,
  [SMALL_STATE(60)] = 1353,
  [SMALL_STATE(61)] = 1366,
  [SMALL_STATE(62)] = 1389,
  [SMALL_STATE(63)] = 1408,
  [SMALL_STATE(64)] = 1421,
  [SMALL_STATE(65)] = 1434,
  [SMALL_STATE(66)] = 1457,
  [SMALL_STATE(67)] = 1477,
  [SMALL_STATE(68)] = 1489,
  [SMALL_STATE(69)] = 1501,
  [SMALL_STATE(70)] = 1513,
  [SMALL_STATE(71)] = 1531,
  [SMALL_STATE(72)] = 1547,
  [SMALL_STATE(73)] = 1559,
  [SMALL_STATE(74)] = 1575,
  [SMALL_STATE(75)] = 1587,
  [SMALL_STATE(76)] = 1599,
  [SMALL_STATE(77)] = 1611,
  [SMALL_STATE(78)] = 1625,
  [SMALL_STATE(79)] = 1637,
  [SMALL_STATE(80)] = 1655,
  [SMALL_STATE(81)] = 1673,
  [SMALL_STATE(82)] = 1693,
  [SMALL_STATE(83)] = 1711,
  [SMALL_STATE(84)] = 1723,
  [SMALL_STATE(85)] = 1737,
  [SMALL_STATE(86)] = 1755,
  [SMALL_STATE(87)] = 1769,
  [SMALL_STATE(88)] = 1787,
  [SMALL_STATE(89)] = 1803,
  [SMALL_STATE(90)] = 1815,
  [SMALL_STATE(91)] = 1835,
  [SMALL_STATE(92)] = 1847,
  [SMALL_STATE(93)] = 1859,
  [SMALL_STATE(94)] = 1877,
  [SMALL_STATE(95)] = 1895,
  [SMALL_STATE(96)] = 1907,
  [SMALL_STATE(97)] = 1925,
  [SMALL_STATE(98)] = 1939,
  [SMALL_STATE(99)] = 1957,
  [SMALL_STATE(100)] = 1975,
  [SMALL_STATE(101)] = 1989,
  [SMALL_STATE(102)] = 2001,
  [SMALL_STATE(103)] = 2019,
  [SMALL_STATE(104)] = 2035,
  [SMALL_STATE(105)] = 2047,
  [SMALL_STATE(106)] = 2060,
  [SMALL_STATE(107)] = 2073,
  [SMALL_STATE(108)] = 2086,
  [SMALL_STATE(109)] = 2103,
  [SMALL_STATE(110)] = 2120,
  [SMALL_STATE(111)] = 2133,
  [SMALL_STATE(112)] = 2152,
  [SMALL_STATE(113)] = 2165,
  [SMALL_STATE(114)] = 2182,
  [SMALL_STATE(115)] = 2195,
  [SMALL_STATE(116)] = 2212,
  [SMALL_STATE(117)] = 2229,
  [SMALL_STATE(118)] = 2248,
  [SMALL_STATE(119)] = 2263,
  [SMALL_STATE(120)] = 2276,
  [SMALL_STATE(121)] = 2289,
  [SMALL_STATE(122)] = 2308,
  [SMALL_STATE(123)] = 2325,
  [SMALL_STATE(124)] = 2342,
  [SMALL_STATE(125)] = 2355,
  [SMALL_STATE(126)] = 2372,
  [SMALL_STATE(127)] = 2385,
  [SMALL_STATE(128)] = 2398,
  [SMALL_STATE(129)] = 2411,
  [SMALL_STATE(130)] = 2424,
  [SMALL_STATE(131)] = 2441,
  [SMALL_STATE(132)] = 2454,
  [SMALL_STATE(133)] = 2467,
  [SMALL_STATE(134)] = 2480,
  [SMALL_STATE(135)] = 2497,
  [SMALL_STATE(136)] = 2513,
  [SMALL_STATE(137)] = 2529,
  [SMALL_STATE(138)] = 2541,
  [SMALL_STATE(139)] = 2555,
  [SMALL_STATE(140)] = 2571,
  [SMALL_STATE(141)] = 2587,
  [SMALL_STATE(142)] = 2599,
  [SMALL_STATE(143)] = 2613,
  [SMALL_STATE(144)] = 2625,
  [SMALL_STATE(145)] = 2639,
  [SMALL_STATE(146)] = 2651,
  [SMALL_STATE(147)] = 2663,
  [SMALL_STATE(148)] = 2677,
  [SMALL_STATE(149)] = 2689,
  [SMALL_STATE(150)] = 2702,
  [SMALL_STATE(151)] = 2715,
  [SMALL_STATE(152)] = 2728,
  [SMALL_STATE(153)] = 2741,
  [SMALL_STATE(154)] = 2754,
  [SMALL_STATE(155)] = 2767,
  [SMALL_STATE(156)] = 2778,
  [SMALL_STATE(157)] = 2791,
  [SMALL_STATE(158)] = 2802,
  [SMALL_STATE(159)] = 2815,
  [SMALL_STATE(160)] = 2826,
  [SMALL_STATE(161)] = 2839,
  [SMALL_STATE(162)] = 2852,
  [SMALL_STATE(163)] = 2863,
  [SMALL_STATE(164)] = 2876,
  [SMALL_STATE(165)] = 2887,
  [SMALL_STATE(166)] = 2897,
  [SMALL_STATE(167)] = 2905,
  [SMALL_STATE(168)] = 2915,
  [SMALL_STATE(169)] = 2923,
  [SMALL_STATE(170)] = 2933,
  [SMALL_STATE(171)] = 2941,
  [SMALL_STATE(172)] = 2949,
  [SMALL_STATE(173)] = 2957,
  [SMALL_STATE(174)] = 2965,
  [SMALL_STATE(175)] = 2973,
  [SMALL_STATE(176)] = 2983,
  [SMALL_STATE(177)] = 2991,
  [SMALL_STATE(178)] = 3001,
  [SMALL_STATE(179)] = 3011,
  [SMALL_STATE(180)] = 3021,
  [SMALL_STATE(181)] = 3031,
  [SMALL_STATE(182)] = 3041,
  [SMALL_STATE(183)] = 3051,
  [SMALL_STATE(184)] = 3061,
  [SMALL_STATE(185)] = 3071,
  [SMALL_STATE(186)] = 3081,
  [SMALL_STATE(187)] = 3091,
  [SMALL_STATE(188)] = 3098,
  [SMALL_STATE(189)] = 3105,
  [SMALL_STATE(190)] = 3112,
  [SMALL_STATE(191)] = 3119,
  [SMALL_STATE(192)] = 3126,
  [SMALL_STATE(193)] = 3133,
  [SMALL_STATE(194)] = 3140,
  [SMALL_STATE(195)] = 3147,
  [SMALL_STATE(196)] = 3154,
  [SMALL_STATE(197)] = 3161,
  [SMALL_STATE(198)] = 3168,
  [SMALL_STATE(199)] = 3175,
  [SMALL_STATE(200)] = 3182,
  [SMALL_STATE(201)] = 3189,
  [SMALL_STATE(202)] = 3196,
  [SMALL_STATE(203)] = 3203,
  [SMALL_STATE(204)] = 3210,
  [SMALL_STATE(205)] = 3217,
  [SMALL_STATE(206)] = 3224,
  [SMALL_STATE(207)] = 3231,
  [SMALL_STATE(208)] = 3238,
  [SMALL_STATE(209)] = 3245,
  [SMALL_STATE(210)] = 3252,
  [SMALL_STATE(211)] = 3259,
  [SMALL_STATE(212)] = 3266,
  [SMALL_STATE(213)] = 3273,
  [SMALL_STATE(214)] = 3280,
  [SMALL_STATE(215)] = 3287,
  [SMALL_STATE(216)] = 3294,
  [SMALL_STATE(217)] = 3301,
  [SMALL_STATE(218)] = 3308,
  [SMALL_STATE(219)] = 3315,
  [SMALL_STATE(220)] = 3322,
  [SMALL_STATE(221)] = 3329,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(207),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(206),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(202),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(197),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(196),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_value, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_string, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(87),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(154),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_rename, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_from, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_value, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_restriction, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(117),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(161),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2), SHIFT_REPEAT(193),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2), SHIFT_REPEAT(17),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_annotations, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2), SHIFT_REPEAT(193),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2), SHIFT_REPEAT(17),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_body, 3),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(178),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(194),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(178),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(187),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression_to, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression_to, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(158),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2), SHIFT_REPEAT(158),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_string, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2), SHIFT_REPEAT(193),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2), SHIFT_REPEAT(17),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression_to, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression_to, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_annotations, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression_from_to, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression_from_to, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression_from_to, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression_from_to, 2),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_body_repeat1, 2), SHIFT_REPEAT(203),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_body_repeat1, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(152),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [550] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sdml(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
