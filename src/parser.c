#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 26

enum {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_is = 3,
  anon_sym_end = 4,
  anon_sym_import = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_from = 8,
  anon_sym_COLON = 9,
  anon_sym_AT = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_LT_DASH = 12,
  anon_sym_EQ = 13,
  anon_sym_LBRACE = 14,
  anon_sym_DOT_DOT = 15,
  anon_sym_RBRACE = 16,
  anon_sym_entity = 17,
  anon_sym_structure = 18,
  anon_sym_enum = 19,
  anon_sym_property = 20,
  anon_sym_datatype = 21,
  anon_sym_identity = 22,
  anon_sym_ref = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_quoted_string = 26,
  sym_language_tag = 27,
  anon_sym_LT = 28,
  aux_sym_iri_reference_token1 = 29,
  anon_sym_GT = 30,
  sym_double = 31,
  sym_decimal = 32,
  sym_integer = 33,
  sym_unsigned = 34,
  anon_sym_true = 35,
  anon_sym_false = 36,
  sym_line_comment = 37,
  sym_module = 38,
  sym_module_body = 39,
  sym_import = 40,
  sym__single_import = 41,
  sym_member_import = 42,
  sym_module_import = 43,
  sym_qualified_identifier = 44,
  sym_identifier_reference = 45,
  sym_annotation_only_body = 46,
  sym_annotation = 47,
  sym__type_expression = 48,
  sym__type_expression_to = 49,
  sym__type_expression_from_to = 50,
  sym__type_restriction = 51,
  sym__assignment_expression = 52,
  sym_cardinality_expression = 53,
  sym__type_def = 54,
  sym_entity_def = 55,
  sym_entity_body = 56,
  sym_structure_def = 57,
  sym_structure_body = 58,
  sym_enum_def = 59,
  sym_enum_body = 60,
  sym_enum_variant = 61,
  sym_property_def = 62,
  sym_data_type_def = 63,
  sym_identity_member = 64,
  sym_member_by_value = 65,
  sym_member_by_reference = 66,
  sym_value = 67,
  sym_list_of_values = 68,
  sym_value_constructor = 69,
  sym__simple_value = 70,
  sym_string = 71,
  sym_iri_reference = 72,
  sym_boolean = 73,
  aux_sym_module_body_repeat1 = 74,
  aux_sym_module_body_repeat2 = 75,
  aux_sym_module_body_repeat3 = 76,
  aux_sym_import_repeat1 = 77,
  aux_sym_entity_body_repeat1 = 78,
  aux_sym_structure_body_repeat1 = 79,
  aux_sym_enum_body_repeat1 = 80,
  aux_sym_list_of_values_repeat1 = 81,
  aux_sym_list_of_values_repeat2 = 82,
  aux_sym_list_of_values_repeat3 = 83,
  aux_sym_list_of_values_repeat4 = 84,
  aux_sym_list_of_values_repeat5 = 85,
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
  [anon_sym_from] = "from",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_RBRACE] = "}",
  [anon_sym_entity] = "entity",
  [anon_sym_structure] = "structure",
  [anon_sym_enum] = "enum",
  [anon_sym_property] = "property",
  [anon_sym_datatype] = "datatype",
  [anon_sym_identity] = "identity",
  [anon_sym_ref] = "ref",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_quoted_string] = "quoted_string",
  [sym_language_tag] = "language_tag",
  [anon_sym_LT] = "<",
  [aux_sym_iri_reference_token1] = "iri_reference_token1",
  [anon_sym_GT] = ">",
  [sym_double] = "double",
  [sym_decimal] = "decimal",
  [sym_integer] = "integer",
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
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_identifier_reference] = "identifier_reference",
  [sym_annotation_only_body] = "annotation_only_body",
  [sym_annotation] = "annotation",
  [sym__type_expression] = "_type_expression",
  [sym__type_expression_to] = "_type_expression_to",
  [sym__type_expression_from_to] = "_type_expression_from_to",
  [sym__type_restriction] = "_type_restriction",
  [sym__assignment_expression] = "_assignment_expression",
  [sym_cardinality_expression] = "cardinality_expression",
  [sym__type_def] = "_type_def",
  [sym_entity_def] = "entity_def",
  [sym_entity_body] = "entity_body",
  [sym_structure_def] = "structure_def",
  [sym_structure_body] = "structure_body",
  [sym_enum_def] = "enum_def",
  [sym_enum_body] = "enum_body",
  [sym_enum_variant] = "enum_variant",
  [sym_property_def] = "property_def",
  [sym_data_type_def] = "data_type_def",
  [sym_identity_member] = "identity_member",
  [sym_member_by_value] = "member_by_value",
  [sym_member_by_reference] = "member_by_reference",
  [sym_value] = "value",
  [sym_list_of_values] = "list_of_values",
  [sym_value_constructor] = "value_constructor",
  [sym__simple_value] = "_simple_value",
  [sym_string] = "string",
  [sym_iri_reference] = "iri_reference",
  [sym_boolean] = "boolean",
  [aux_sym_module_body_repeat1] = "module_body_repeat1",
  [aux_sym_module_body_repeat2] = "module_body_repeat2",
  [aux_sym_module_body_repeat3] = "module_body_repeat3",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_entity_body_repeat1] = "entity_body_repeat1",
  [aux_sym_structure_body_repeat1] = "structure_body_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_list_of_values_repeat1] = "list_of_values_repeat1",
  [aux_sym_list_of_values_repeat2] = "list_of_values_repeat2",
  [aux_sym_list_of_values_repeat3] = "list_of_values_repeat3",
  [aux_sym_list_of_values_repeat4] = "list_of_values_repeat4",
  [aux_sym_list_of_values_repeat5] = "list_of_values_repeat5",
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
  [anon_sym_from] = anon_sym_from,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_structure] = anon_sym_structure,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_datatype] = anon_sym_datatype,
  [anon_sym_identity] = anon_sym_identity,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_quoted_string] = sym_quoted_string,
  [sym_language_tag] = sym_language_tag,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_iri_reference_token1] = aux_sym_iri_reference_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym_double] = sym_double,
  [sym_decimal] = sym_decimal,
  [sym_integer] = sym_integer,
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
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_identifier_reference] = sym_identifier_reference,
  [sym_annotation_only_body] = sym_annotation_only_body,
  [sym_annotation] = sym_annotation,
  [sym__type_expression] = sym__type_expression,
  [sym__type_expression_to] = sym__type_expression_to,
  [sym__type_expression_from_to] = sym__type_expression_from_to,
  [sym__type_restriction] = sym__type_restriction,
  [sym__assignment_expression] = sym__assignment_expression,
  [sym_cardinality_expression] = sym_cardinality_expression,
  [sym__type_def] = sym__type_def,
  [sym_entity_def] = sym_entity_def,
  [sym_entity_body] = sym_entity_body,
  [sym_structure_def] = sym_structure_def,
  [sym_structure_body] = sym_structure_body,
  [sym_enum_def] = sym_enum_def,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_variant] = sym_enum_variant,
  [sym_property_def] = sym_property_def,
  [sym_data_type_def] = sym_data_type_def,
  [sym_identity_member] = sym_identity_member,
  [sym_member_by_value] = sym_member_by_value,
  [sym_member_by_reference] = sym_member_by_reference,
  [sym_value] = sym_value,
  [sym_list_of_values] = sym_list_of_values,
  [sym_value_constructor] = sym_value_constructor,
  [sym__simple_value] = sym__simple_value,
  [sym_string] = sym_string,
  [sym_iri_reference] = sym_iri_reference,
  [sym_boolean] = sym_boolean,
  [aux_sym_module_body_repeat1] = aux_sym_module_body_repeat1,
  [aux_sym_module_body_repeat2] = aux_sym_module_body_repeat2,
  [aux_sym_module_body_repeat3] = aux_sym_module_body_repeat3,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_entity_body_repeat1] = aux_sym_entity_body_repeat1,
  [aux_sym_structure_body_repeat1] = aux_sym_structure_body_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_list_of_values_repeat1] = aux_sym_list_of_values_repeat1,
  [aux_sym_list_of_values_repeat2] = aux_sym_list_of_values_repeat2,
  [aux_sym_list_of_values_repeat3] = aux_sym_list_of_values_repeat3,
  [aux_sym_list_of_values_repeat4] = aux_sym_list_of_values_repeat4,
  [aux_sym_list_of_values_repeat5] = aux_sym_list_of_values_repeat5,
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
  [anon_sym_LT_DASH] = {
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
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_language_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_iri_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_double] = {
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
    .supertype = true,
  },
  [sym_member_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module_import] = {
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
  [sym_annotation_only_body] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym__type_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__type_expression_to] = {
    .visible = false,
    .named = true,
  },
  [sym__type_expression_from_to] = {
    .visible = false,
    .named = true,
  },
  [sym__type_restriction] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_cardinality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__type_def] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [sym_enum_body] = {
    .visible = true,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_iri_reference] = {
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
  [aux_sym_enum_body_repeat1] = {
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
};

enum {
  field_base = 1,
  field_body = 2,
  field_max = 3,
  field_member = 4,
  field_min = 5,
  field_module = 6,
  field_name = 7,
  field_source = 8,
  field_sourceCardinality = 9,
  field_target = 10,
  field_targetCardinality = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_body] = "body",
  [field_max] = "max",
  [field_member] = "member",
  [field_min] = "min",
  [field_module] = "module",
  [field_name] = "name",
  [field_source] = "source",
  [field_sourceCardinality] = "sourceCardinality",
  [field_target] = "target",
  [field_targetCardinality] = "targetCardinality",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 4},
  [17] = {.index = 33, .length = 2},
  [18] = {.index = 35, .length = 4},
  [19] = {.index = 39, .length = 2},
  [20] = {.index = 41, .length = 2},
  [21] = {.index = 43, .length = 5},
  [22] = {.index = 48, .length = 3},
  [23] = {.index = 51, .length = 2},
  [24] = {.index = 53, .length = 1},
  [25] = {.index = 54, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_name, 0},
  [3] =
    {field_name, 1},
  [4] =
    {field_name, 1},
    {field_value, 2, .inherited = true},
  [6] =
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [8] =
    {field_base, 2, .inherited = true},
    {field_name, 1},
  [10] =
    {field_name, 0},
    {field_source, 2},
  [12] =
    {field_member, 2},
    {field_module, 0},
  [14] =
    {field_target, 1},
  [15] =
    {field_value, 1},
  [16] =
    {field_name, 1},
    {field_target, 2, .inherited = true},
    {field_value, 3, .inherited = true},
  [19] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [22] =
    {field_base, 1},
  [23] =
    {field_base, 2, .inherited = true},
    {field_body, 3},
    {field_name, 1},
  [26] =
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [29] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [33] =
    {field_target, 0, .inherited = true},
    {field_targetCardinality, 0, .inherited = true},
  [35] =
    {field_name, 1},
    {field_sourceCardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_targetCardinality, 2, .inherited = true},
  [39] =
    {field_name, 0},
    {field_value, 2},
  [41] =
    {field_target, 2},
    {field_targetCardinality, 1},
  [43] =
    {field_body, 3},
    {field_name, 1},
    {field_sourceCardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_targetCardinality, 2, .inherited = true},
  [48] =
    {field_sourceCardinality, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [51] =
    {field_body, 3},
    {field_name, 0},
  [53] =
    {field_min, 1},
  [54] =
    {field_max, 3},
    {field_min, 1},
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
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
  [115] = 115,
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
  [130] = 130,
  [131] = 131,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < 11 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '>') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == '>') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(82);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(13);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(77);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 45:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 47:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 48:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_language_tag);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_language_tag);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(87);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= ' ') ||
          lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'U') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
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
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 46:
      if (lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_structure);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 73},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
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
    [anon_sym_identity] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_language_tag] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_unsigned] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_module] = STATE(139),
    [anon_sym_module] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_end,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_property,
    ACTIONS(21), 1,
      anon_sym_datatype,
    STATE(5), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(33), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(62), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [47] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_property,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(23), 1,
      anon_sym_end,
    STATE(2), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(7), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(15), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [94] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym_double,
    STATE(16), 1,
      sym_qualified_identifier,
    STATE(34), 1,
      sym_value,
    STATE(123), 1,
      sym_identifier_reference,
    ACTIONS(35), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 6,
      sym_list_of_values,
      sym_value_constructor,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [138] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_property,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(39), 1,
      anon_sym_end,
    STATE(11), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(62), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [178] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 15,
      anon_sym_is,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_DASH_GT,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_LPAREN,
  [202] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_end,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_property,
    ACTIONS(21), 1,
      anon_sym_datatype,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(62), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [242] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 13,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
      anon_sym_LT,
  [264] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_COLON,
    ACTIONS(51), 12,
      anon_sym_is,
      anon_sym_end,
      anon_sym_DASH_GT,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_LPAREN,
  [288] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      sym_language_tag,
    ACTIONS(55), 2,
      sym_identifier,
      anon_sym_AT,
    ACTIONS(57), 11,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
      sym_quoted_string,
  [312] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_property,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(12), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [345] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      anon_sym_end,
    ACTIONS(65), 1,
      anon_sym_entity,
    ACTIONS(68), 1,
      anon_sym_structure,
    ACTIONS(71), 1,
      anon_sym_enum,
    ACTIONS(74), 1,
      anon_sym_property,
    ACTIONS(77), 1,
      anon_sym_datatype,
    STATE(12), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [378] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_property,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(39), 1,
      anon_sym_end,
    STATE(12), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [411] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 12,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
      sym_quoted_string,
  [432] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_end,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_property,
    ACTIONS(21), 1,
      anon_sym_datatype,
    STATE(12), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [465] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 12,
      anon_sym_is,
      anon_sym_end,
      anon_sym_DASH_GT,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_LPAREN,
  [486] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_COLON,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_from,
    ACTIONS(86), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [510] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(92), 8,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [534] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      sym_double,
    ACTIONS(99), 1,
      sym_decimal,
    ACTIONS(101), 1,
      sym_integer,
    STATE(100), 1,
      aux_sym_list_of_values_repeat2,
    STATE(101), 1,
      aux_sym_list_of_values_repeat3,
    STATE(107), 1,
      aux_sym_list_of_values_repeat4,
    STATE(88), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
    STATE(92), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [570] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_end,
    ACTIONS(107), 1,
      anon_sym_identity,
    ACTIONS(109), 1,
      anon_sym_ref,
    STATE(57), 1,
      sym_identity_member,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(58), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [601] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_identity,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(111), 1,
      anon_sym_end,
    STATE(71), 1,
      sym_identity_member,
    STATE(20), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(49), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [632] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(113), 1,
      sym_double,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(115), 2,
      sym_decimal,
      sym_integer,
    STATE(126), 4,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [659] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 10,
      anon_sym_is,
      anon_sym_end,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [678] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 10,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
  [697] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [715] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [733] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [751] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [769] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [787] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [805] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [823] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(159), 1,
      anon_sym_import,
    STATE(33), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    ACTIONS(157), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [861] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(164), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [879] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_identity,
    ACTIONS(166), 1,
      anon_sym_end,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(65), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [904] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_identity,
    ACTIONS(168), 1,
      anon_sym_end,
    STATE(35), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(76), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [929] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 8,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [946] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [960] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_is,
    STATE(53), 1,
      sym_entity_body,
    ACTIONS(178), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [978] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      anon_sym_is,
    STATE(54), 1,
      sym_structure_body,
    ACTIONS(182), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [996] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1010] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    STATE(66), 1,
      sym_annotation_only_body,
    ACTIONS(188), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1028] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    STATE(63), 1,
      sym_annotation_only_body,
    ACTIONS(190), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1046] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    STATE(56), 1,
      sym_enum_body,
    ACTIONS(194), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1064] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 7,
      anon_sym_is,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1077] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_qualified_identifier,
    STATE(26), 2,
      sym_member_import,
      sym_module_import,
    STATE(47), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1098] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_qualified_identifier,
    STATE(26), 2,
      sym_member_import,
      sym_module_import,
    STATE(47), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1119] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(27), 1,
      sym_qualified_identifier,
    STATE(26), 2,
      sym_member_import,
      sym_module_import,
    STATE(46), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1137] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_end,
    ACTIONS(109), 1,
      anon_sym_ref,
    STATE(51), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1155] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(207), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1167] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_end,
    ACTIONS(214), 1,
      anon_sym_ref,
    STATE(51), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1185] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1221] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(77), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(93), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1239] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1251] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(227), 1,
      anon_sym_end,
    STATE(68), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1269] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(227), 1,
      anon_sym_end,
    STATE(51), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1299] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1311] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_end,
    ACTIONS(238), 1,
      anon_sym_identity,
    STATE(61), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(241), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1341] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(243), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1353] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(95), 1,
      sym_annotation_only_body,
    ACTIONS(247), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1371] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_identity,
    ACTIONS(249), 1,
      anon_sym_end,
    STATE(61), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1389] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1413] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(255), 1,
      anon_sym_end,
    STATE(51), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1443] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(86), 1,
      sym_annotation_only_body,
    ACTIONS(261), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1461] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_end,
    ACTIONS(109), 1,
      anon_sym_ref,
    STATE(58), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1479] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1491] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1503] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1515] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_qualified_identifier,
    STATE(38), 1,
      sym__single_import,
    STATE(26), 2,
      sym_member_import,
      sym_module_import,
  [1535] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_identity,
    ACTIONS(166), 1,
      anon_sym_end,
    STATE(61), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1553] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(83), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1571] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(102), 1,
      sym_annotation_only_body,
    ACTIONS(273), 2,
      anon_sym_end,
      anon_sym_ref,
  [1588] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      anon_sym_DASH_GT,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym__type_expression_from_to,
    STATE(85), 1,
      sym__type_expression_to,
    STATE(122), 1,
      sym_cardinality_expression,
  [1607] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1620] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qualified_identifier,
    STATE(80), 1,
      sym_identifier_reference,
    STATE(99), 1,
      sym_cardinality_expression,
  [1639] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(287), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1652] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_end,
    STATE(94), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1666] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_end,
    STATE(119), 1,
      sym_annotation_only_body,
  [1682] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [1694] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(303), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1706] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      anon_sym_DASH_GT,
    ACTIONS(307), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym__assignment_expression,
    STATE(116), 1,
      sym__type_expression,
  [1722] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(90), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
  [1736] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    ACTIONS(313), 1,
      anon_sym_LT,
    STATE(89), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [1750] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    ACTIONS(318), 1,
      sym_quoted_string,
    STATE(90), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
  [1764] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(321), 1,
      anon_sym_end,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1778] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(89), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [1792] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_end,
    STATE(94), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1806] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(328), 1,
      anon_sym_end,
    STATE(94), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1820] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1832] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [1844] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qualified_identifier,
    STATE(45), 1,
      sym_identifier_reference,
  [1857] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    STATE(91), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1868] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qualified_identifier,
    STATE(82), 1,
      sym_identifier_reference,
  [1881] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(338), 1,
      sym_double,
    STATE(106), 1,
      aux_sym_list_of_values_repeat2,
  [1894] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(340), 1,
      sym_decimal,
    STATE(105), 1,
      aux_sym_list_of_values_repeat3,
  [1907] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 2,
      anon_sym_end,
      anon_sym_ref,
  [1918] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    ACTIONS(348), 1,
      sym_integer,
    STATE(103), 1,
      aux_sym_list_of_values_repeat4,
  [1931] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qualified_identifier,
    STATE(23), 1,
      sym_identifier_reference,
  [1944] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(353), 1,
      sym_decimal,
    STATE(105), 1,
      aux_sym_list_of_values_repeat3,
  [1957] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    ACTIONS(358), 1,
      sym_double,
    STATE(106), 1,
      aux_sym_list_of_values_repeat2,
  [1970] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(361), 1,
      sym_integer,
    STATE(103), 1,
      aux_sym_list_of_values_repeat4,
  [1983] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qualified_identifier,
    STATE(87), 1,
      sym_identifier_reference,
  [1996] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2004] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      sym_unsigned,
  [2014] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_LT_DASH,
    STATE(43), 1,
      sym__type_restriction,
  [2024] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      anon_sym_DASH_GT,
    STATE(42), 1,
      sym__type_expression,
  [2034] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
    STATE(25), 1,
      sym_iri_reference,
  [2044] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 1,
      anon_sym_DOT_DOT,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
  [2054] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 1,
      anon_sym_is,
    STATE(133), 1,
      sym_module_body,
  [2064] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym__assignment_expression,
  [2074] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      anon_sym_DASH_GT,
    STATE(70), 1,
      sym__type_expression_to,
  [2084] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      sym__type_expression,
  [2094] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_end,
  [2104] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2112] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2120] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      anon_sym_DASH_GT,
    STATE(96), 1,
      sym__type_expression_to,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      sym_unsigned,
  [2144] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      sym_identifier,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
  [2158] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [2165] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      sym_identifier,
  [2172] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 1,
      sym_identifier,
  [2179] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 1,
      sym_identifier,
  [2186] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      sym_identifier,
  [2193] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [2200] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
  [2207] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [2214] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      sym_unsigned,
  [2221] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(411), 1,
      sym_identifier,
  [2228] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
  [2235] = 2,
    ACTIONS(415), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(417), 1,
      sym_line_comment,
  [2242] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
  [2249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 1,
      anon_sym_EQ,
  [2256] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      sym_identifier,
  [2263] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [2270] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      anon_sym_GT,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 411,
  [SMALL_STATE(15)] = 432,
  [SMALL_STATE(16)] = 465,
  [SMALL_STATE(17)] = 486,
  [SMALL_STATE(18)] = 510,
  [SMALL_STATE(19)] = 534,
  [SMALL_STATE(20)] = 570,
  [SMALL_STATE(21)] = 601,
  [SMALL_STATE(22)] = 632,
  [SMALL_STATE(23)] = 659,
  [SMALL_STATE(24)] = 678,
  [SMALL_STATE(25)] = 697,
  [SMALL_STATE(26)] = 715,
  [SMALL_STATE(27)] = 733,
  [SMALL_STATE(28)] = 751,
  [SMALL_STATE(29)] = 769,
  [SMALL_STATE(30)] = 787,
  [SMALL_STATE(31)] = 805,
  [SMALL_STATE(32)] = 823,
  [SMALL_STATE(33)] = 841,
  [SMALL_STATE(34)] = 861,
  [SMALL_STATE(35)] = 879,
  [SMALL_STATE(36)] = 904,
  [SMALL_STATE(37)] = 929,
  [SMALL_STATE(38)] = 946,
  [SMALL_STATE(39)] = 960,
  [SMALL_STATE(40)] = 978,
  [SMALL_STATE(41)] = 996,
  [SMALL_STATE(42)] = 1010,
  [SMALL_STATE(43)] = 1028,
  [SMALL_STATE(44)] = 1046,
  [SMALL_STATE(45)] = 1064,
  [SMALL_STATE(46)] = 1077,
  [SMALL_STATE(47)] = 1098,
  [SMALL_STATE(48)] = 1119,
  [SMALL_STATE(49)] = 1137,
  [SMALL_STATE(50)] = 1155,
  [SMALL_STATE(51)] = 1167,
  [SMALL_STATE(52)] = 1185,
  [SMALL_STATE(53)] = 1197,
  [SMALL_STATE(54)] = 1209,
  [SMALL_STATE(55)] = 1221,
  [SMALL_STATE(56)] = 1239,
  [SMALL_STATE(57)] = 1251,
  [SMALL_STATE(58)] = 1269,
  [SMALL_STATE(59)] = 1287,
  [SMALL_STATE(60)] = 1299,
  [SMALL_STATE(61)] = 1311,
  [SMALL_STATE(62)] = 1329,
  [SMALL_STATE(63)] = 1341,
  [SMALL_STATE(64)] = 1353,
  [SMALL_STATE(65)] = 1371,
  [SMALL_STATE(66)] = 1389,
  [SMALL_STATE(67)] = 1401,
  [SMALL_STATE(68)] = 1413,
  [SMALL_STATE(69)] = 1431,
  [SMALL_STATE(70)] = 1443,
  [SMALL_STATE(71)] = 1461,
  [SMALL_STATE(72)] = 1479,
  [SMALL_STATE(73)] = 1491,
  [SMALL_STATE(74)] = 1503,
  [SMALL_STATE(75)] = 1515,
  [SMALL_STATE(76)] = 1535,
  [SMALL_STATE(77)] = 1553,
  [SMALL_STATE(78)] = 1571,
  [SMALL_STATE(79)] = 1588,
  [SMALL_STATE(80)] = 1607,
  [SMALL_STATE(81)] = 1620,
  [SMALL_STATE(82)] = 1639,
  [SMALL_STATE(83)] = 1652,
  [SMALL_STATE(84)] = 1666,
  [SMALL_STATE(85)] = 1682,
  [SMALL_STATE(86)] = 1694,
  [SMALL_STATE(87)] = 1706,
  [SMALL_STATE(88)] = 1722,
  [SMALL_STATE(89)] = 1736,
  [SMALL_STATE(90)] = 1750,
  [SMALL_STATE(91)] = 1764,
  [SMALL_STATE(92)] = 1778,
  [SMALL_STATE(93)] = 1792,
  [SMALL_STATE(94)] = 1806,
  [SMALL_STATE(95)] = 1820,
  [SMALL_STATE(96)] = 1832,
  [SMALL_STATE(97)] = 1844,
  [SMALL_STATE(98)] = 1857,
  [SMALL_STATE(99)] = 1868,
  [SMALL_STATE(100)] = 1881,
  [SMALL_STATE(101)] = 1894,
  [SMALL_STATE(102)] = 1907,
  [SMALL_STATE(103)] = 1918,
  [SMALL_STATE(104)] = 1931,
  [SMALL_STATE(105)] = 1944,
  [SMALL_STATE(106)] = 1957,
  [SMALL_STATE(107)] = 1970,
  [SMALL_STATE(108)] = 1983,
  [SMALL_STATE(109)] = 1996,
  [SMALL_STATE(110)] = 2004,
  [SMALL_STATE(111)] = 2014,
  [SMALL_STATE(112)] = 2024,
  [SMALL_STATE(113)] = 2034,
  [SMALL_STATE(114)] = 2044,
  [SMALL_STATE(115)] = 2054,
  [SMALL_STATE(116)] = 2064,
  [SMALL_STATE(117)] = 2074,
  [SMALL_STATE(118)] = 2084,
  [SMALL_STATE(119)] = 2094,
  [SMALL_STATE(120)] = 2104,
  [SMALL_STATE(121)] = 2112,
  [SMALL_STATE(122)] = 2120,
  [SMALL_STATE(123)] = 2130,
  [SMALL_STATE(124)] = 2137,
  [SMALL_STATE(125)] = 2144,
  [SMALL_STATE(126)] = 2151,
  [SMALL_STATE(127)] = 2158,
  [SMALL_STATE(128)] = 2165,
  [SMALL_STATE(129)] = 2172,
  [SMALL_STATE(130)] = 2179,
  [SMALL_STATE(131)] = 2186,
  [SMALL_STATE(132)] = 2193,
  [SMALL_STATE(133)] = 2200,
  [SMALL_STATE(134)] = 2207,
  [SMALL_STATE(135)] = 2214,
  [SMALL_STATE(136)] = 2221,
  [SMALL_STATE(137)] = 2228,
  [SMALL_STATE(138)] = 2235,
  [SMALL_STATE(139)] = 2242,
  [SMALL_STATE(140)] = 2249,
  [SMALL_STATE(141)] = 2256,
  [SMALL_STATE(142)] = 2263,
  [SMALL_STATE(143)] = 2270,
  [SMALL_STATE(144)] = 2277,
  [SMALL_STATE(145)] = 2284,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 8),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 8),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(129),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(128),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(127),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(125),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(130),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(108),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 9),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 7),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 7),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_import, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 11),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 11),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 19),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 19),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(75),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 2, .production_id = 10),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 2, .production_id = 10),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 3, .production_id = 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 3, .production_id = 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_restriction, 2, .production_id = 13),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(17),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(117),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(142),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(117),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(131),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_def, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 14),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 4, .production_id = 12),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 15),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 15),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 18),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 18),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 9),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 9),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 20),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 20),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 17),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 17),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 16),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 16),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2), SHIFT_REPEAT(138),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(10),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(140),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 12),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 12),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 22),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 22),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 21),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 21),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2), SHIFT_REPEAT(103),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2), SHIFT_REPEAT(105),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2), SHIFT_REPEAT(106),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 5, .production_id = 25),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 24),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 24),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [419] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
