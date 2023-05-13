#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 25

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
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 4},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 4},
  [18] = {.index = 36, .length = 2},
  [19] = {.index = 38, .length = 2},
  [20] = {.index = 40, .length = 5},
  [21] = {.index = 45, .length = 3},
  [22] = {.index = 48, .length = 2},
  [23] = {.index = 50, .length = 1},
  [24] = {.index = 51, .length = 2},
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
    {field_value, 1},
  [15] =
    {field_target, 1},
  [16] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [19] =
    {field_base, 1},
  [20] =
    {field_base, 2, .inherited = true},
    {field_body, 3},
    {field_name, 1},
  [23] =
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [26] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [30] =
    {field_target, 0, .inherited = true},
    {field_targetCardinality, 0, .inherited = true},
  [32] =
    {field_name, 1},
    {field_sourceCardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_targetCardinality, 2, .inherited = true},
  [36] =
    {field_name, 0},
    {field_value, 2},
  [38] =
    {field_target, 2},
    {field_targetCardinality, 1},
  [40] =
    {field_body, 3},
    {field_name, 1},
    {field_sourceCardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_targetCardinality, 2, .inherited = true},
  [45] =
    {field_sourceCardinality, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [48] =
    {field_body, 3},
    {field_name, 0},
  [50] =
    {field_min, 1},
  [51] =
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
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < 11 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '>') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(12);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(3);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(3);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 44:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 46:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 47:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_language_tag);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_language_tag);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(86);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= ' ') ||
          lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
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
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
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
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 72},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
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
    [sym_module] = STATE(131),
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
    STATE(3), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(6), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(12), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(49), 5,
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
    STATE(5), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(10), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(24), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(49), 5,
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
    STATE(18), 1,
      sym_qualified_identifier,
    STATE(28), 1,
      sym_value,
    STATE(126), 1,
      sym_identifier_reference,
    ACTIONS(35), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 6,
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
    STATE(14), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(49), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [178] = 11,
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
    ACTIONS(23), 1,
      anon_sym_end,
    STATE(10), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(49), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [218] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 14,
      anon_sym_is,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_LPAREN,
  [241] = 3,
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
  [263] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      sym_language_tag,
    ACTIONS(49), 2,
      sym_identifier,
      anon_sym_AT,
    ACTIONS(51), 11,
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
  [287] = 9,
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
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(49), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [320] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 12,
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
  [341] = 9,
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
    ACTIONS(23), 1,
      anon_sym_end,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(49), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [374] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_end,
    ACTIONS(61), 1,
      anon_sym_entity,
    ACTIONS(64), 1,
      anon_sym_structure,
    ACTIONS(67), 1,
      anon_sym_enum,
    ACTIONS(70), 1,
      anon_sym_property,
    ACTIONS(73), 1,
      anon_sym_datatype,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(49), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [407] = 9,
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
    ACTIONS(76), 1,
      anon_sym_end,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(49), 5,
      sym_entity_def,
      sym_structure_def,
      sym_enum_def,
      sym_property_def,
      sym_data_type_def,
  [440] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(80), 11,
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
      anon_sym_LPAREN,
  [463] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_AT,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(86), 8,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [487] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      sym_double,
    ACTIONS(93), 1,
      sym_decimal,
    ACTIONS(95), 1,
      sym_integer,
    STATE(100), 1,
      aux_sym_list_of_values_repeat4,
    STATE(104), 1,
      aux_sym_list_of_values_repeat3,
    STATE(105), 1,
      aux_sym_list_of_values_repeat2,
    STATE(88), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
    STATE(92), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [523] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(80), 11,
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
      anon_sym_LPAREN,
  [543] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_from,
    ACTIONS(99), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [567] = 9,
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
    STATE(70), 1,
      sym_identity_member,
    STATE(21), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(47), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [598] = 9,
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
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(72), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [629] = 7,
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
    STATE(137), 4,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [656] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 10,
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
  [675] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      anon_sym_import,
    STATE(24), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    ACTIONS(121), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [695] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [713] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [731] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [749] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [767] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(144), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [785] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [821] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(156), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [839] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 9,
      anon_sym_is,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [857] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_identity,
    ACTIONS(162), 1,
      anon_sym_end,
    STATE(36), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(75), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [882] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 8,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [899] = 7,
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
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(67), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [924] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_is,
    STATE(63), 1,
      sym_annotation_only_body,
    ACTIONS(172), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [942] = 2,
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
  [956] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_is,
    STATE(57), 1,
      sym_entity_body,
    ACTIONS(178), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [974] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_is,
    STATE(52), 1,
      sym_annotation_only_body,
    ACTIONS(180), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [992] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1006] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 1,
      anon_sym_is,
    STATE(60), 1,
      sym_enum_body,
    ACTIONS(186), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1024] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      anon_sym_is,
    STATE(58), 1,
      sym_structure_body,
    ACTIONS(190), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1042] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(31), 2,
      sym_member_import,
      sym_module_import,
    STATE(45), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1063] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(31), 2,
      sym_member_import,
      sym_module_import,
    STATE(45), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1084] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 7,
      anon_sym_is,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1097] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(111), 1,
      anon_sym_end,
    STATE(69), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1115] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1139] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(31), 2,
      sym_member_import,
      sym_module_import,
    STATE(44), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(207), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1169] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1181] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1193] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1205] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(215), 1,
      anon_sym_end,
    STATE(69), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1223] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1247] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1259] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(76), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(93), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1289] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(41), 1,
      sym__single_import,
    STATE(31), 2,
      sym_member_import,
      sym_module_import,
  [1309] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_is,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(87), 1,
      sym_annotation_only_body,
    ACTIONS(231), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1327] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1339] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_is,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(82), 1,
      sym_annotation_only_body,
    ACTIONS(237), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1357] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_end,
    ACTIONS(244), 1,
      anon_sym_identity,
    STATE(65), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1375] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(247), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1387] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_identity,
    ACTIONS(249), 1,
      anon_sym_end,
    STATE(65), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1405] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1417] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_end,
    ACTIONS(258), 1,
      anon_sym_ref,
    STATE(69), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1435] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(111), 1,
      anon_sym_end,
    STATE(72), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1453] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(261), 1,
      anon_sym_end,
    STATE(55), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1471] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(261), 1,
      anon_sym_end,
    STATE(69), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1489] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1501] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_enum,
      anon_sym_property,
      anon_sym_datatype,
  [1513] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_identity,
    ACTIONS(168), 1,
      anon_sym_end,
    STATE(65), 3,
      sym_identity_member,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1531] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(86), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1549] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      anon_sym_DASH_GT,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym__type_expression_from_to,
    STATE(91), 1,
      sym__type_expression_to,
    STATE(108), 1,
      sym_cardinality_expression,
  [1568] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(18), 1,
      sym_qualified_identifier,
    STATE(79), 1,
      sym_identifier_reference,
    STATE(99), 1,
      sym_cardinality_expression,
  [1587] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(275), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1600] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_is,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(106), 1,
      sym_annotation_only_body,
    ACTIONS(279), 2,
      anon_sym_end,
      anon_sym_ref,
  [1617] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1630] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(287), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1642] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_end,
    STATE(83), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1656] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(294), 1,
      anon_sym_end,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1670] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [1682] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_end,
    STATE(83), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1696] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 3,
      anon_sym_end,
      anon_sym_identity,
      anon_sym_ref,
  [1708] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(89), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
  [1722] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    ACTIONS(312), 1,
      sym_quoted_string,
    STATE(89), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
  [1736] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(317), 1,
      anon_sym_LT,
    STATE(90), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [1750] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(322), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [1762] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(90), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [1776] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_end,
    STATE(83), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1790] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_is,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(328), 1,
      anon_sym_end,
    STATE(114), 1,
      sym_annotation_only_body,
  [1806] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(18), 1,
      sym_qualified_identifier,
    STATE(33), 1,
      sym_identifier_reference,
  [1819] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    STATE(84), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1830] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(18), 1,
      sym_qualified_identifier,
    STATE(46), 1,
      sym_identifier_reference,
  [1843] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(18), 1,
      sym_qualified_identifier,
    STATE(116), 1,
      sym_identifier_reference,
  [1856] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(18), 1,
      sym_qualified_identifier,
    STATE(81), 1,
      sym_identifier_reference,
  [1869] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      sym_integer,
    STATE(101), 1,
      aux_sym_list_of_values_repeat4,
  [1882] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    ACTIONS(334), 1,
      sym_integer,
    STATE(101), 1,
      aux_sym_list_of_values_repeat4,
  [1895] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 1,
      sym_decimal,
    STATE(102), 1,
      aux_sym_list_of_values_repeat3,
  [1908] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    ACTIONS(344), 1,
      sym_double,
    STATE(103), 1,
      aux_sym_list_of_values_repeat2,
  [1921] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(347), 1,
      sym_decimal,
    STATE(102), 1,
      aux_sym_list_of_values_repeat3,
  [1934] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(349), 1,
      sym_double,
    STATE(103), 1,
      aux_sym_list_of_values_repeat2,
  [1947] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 2,
      anon_sym_end,
      anon_sym_ref,
  [1958] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
    STATE(27), 1,
      sym_iri_reference,
  [1968] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      anon_sym_DASH_GT,
    STATE(85), 1,
      sym__type_expression_to,
  [1978] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [1986] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [1994] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2002] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 1,
      sym_unsigned,
  [2012] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      anon_sym_DASH_GT,
    STATE(64), 1,
      sym__type_expression_to,
  [2022] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(367), 1,
      anon_sym_end,
  [2032] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_DASH_GT,
    STATE(40), 1,
      sym__type_expression,
  [2042] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 1,
      anon_sym_EQ,
    STATE(32), 1,
      sym__assignment_expression,
  [2052] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_LT_DASH,
    STATE(37), 1,
      sym__type_restriction,
  [2062] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 1,
      anon_sym_DOT_DOT,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
  [2072] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 1,
      anon_sym_is,
    STATE(143), 1,
      sym_module_body,
  [2082] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_DASH_GT,
    STATE(62), 1,
      sym__type_expression,
  [2092] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 1,
      sym_identifier,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      sym_identifier,
  [2106] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(385), 1,
      sym_identifier,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      sym_identifier,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      anon_sym_EQ,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [2134] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [2141] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
  [2148] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 1,
      sym_identifier,
  [2162] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
  [2169] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [2176] = 2,
    ACTIONS(405), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(407), 1,
      sym_line_comment,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      sym_unsigned,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(411), 1,
      anon_sym_GT,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(417), 1,
      sym_identifier,
  [2218] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      sym_identifier,
  [2225] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 1,
      sym_unsigned,
  [2232] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      sym_identifier,
  [2239] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
  [2246] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 241,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 320,
  [SMALL_STATE(12)] = 341,
  [SMALL_STATE(13)] = 374,
  [SMALL_STATE(14)] = 407,
  [SMALL_STATE(15)] = 440,
  [SMALL_STATE(16)] = 463,
  [SMALL_STATE(17)] = 487,
  [SMALL_STATE(18)] = 523,
  [SMALL_STATE(19)] = 543,
  [SMALL_STATE(20)] = 567,
  [SMALL_STATE(21)] = 598,
  [SMALL_STATE(22)] = 629,
  [SMALL_STATE(23)] = 656,
  [SMALL_STATE(24)] = 675,
  [SMALL_STATE(25)] = 695,
  [SMALL_STATE(26)] = 713,
  [SMALL_STATE(27)] = 731,
  [SMALL_STATE(28)] = 749,
  [SMALL_STATE(29)] = 767,
  [SMALL_STATE(30)] = 785,
  [SMALL_STATE(31)] = 803,
  [SMALL_STATE(32)] = 821,
  [SMALL_STATE(33)] = 839,
  [SMALL_STATE(34)] = 857,
  [SMALL_STATE(35)] = 882,
  [SMALL_STATE(36)] = 899,
  [SMALL_STATE(37)] = 924,
  [SMALL_STATE(38)] = 942,
  [SMALL_STATE(39)] = 956,
  [SMALL_STATE(40)] = 974,
  [SMALL_STATE(41)] = 992,
  [SMALL_STATE(42)] = 1006,
  [SMALL_STATE(43)] = 1024,
  [SMALL_STATE(44)] = 1042,
  [SMALL_STATE(45)] = 1063,
  [SMALL_STATE(46)] = 1084,
  [SMALL_STATE(47)] = 1097,
  [SMALL_STATE(48)] = 1115,
  [SMALL_STATE(49)] = 1127,
  [SMALL_STATE(50)] = 1139,
  [SMALL_STATE(51)] = 1157,
  [SMALL_STATE(52)] = 1169,
  [SMALL_STATE(53)] = 1181,
  [SMALL_STATE(54)] = 1193,
  [SMALL_STATE(55)] = 1205,
  [SMALL_STATE(56)] = 1223,
  [SMALL_STATE(57)] = 1235,
  [SMALL_STATE(58)] = 1247,
  [SMALL_STATE(59)] = 1259,
  [SMALL_STATE(60)] = 1277,
  [SMALL_STATE(61)] = 1289,
  [SMALL_STATE(62)] = 1309,
  [SMALL_STATE(63)] = 1327,
  [SMALL_STATE(64)] = 1339,
  [SMALL_STATE(65)] = 1357,
  [SMALL_STATE(66)] = 1375,
  [SMALL_STATE(67)] = 1387,
  [SMALL_STATE(68)] = 1405,
  [SMALL_STATE(69)] = 1417,
  [SMALL_STATE(70)] = 1435,
  [SMALL_STATE(71)] = 1453,
  [SMALL_STATE(72)] = 1471,
  [SMALL_STATE(73)] = 1489,
  [SMALL_STATE(74)] = 1501,
  [SMALL_STATE(75)] = 1513,
  [SMALL_STATE(76)] = 1531,
  [SMALL_STATE(77)] = 1549,
  [SMALL_STATE(78)] = 1568,
  [SMALL_STATE(79)] = 1587,
  [SMALL_STATE(80)] = 1600,
  [SMALL_STATE(81)] = 1617,
  [SMALL_STATE(82)] = 1630,
  [SMALL_STATE(83)] = 1642,
  [SMALL_STATE(84)] = 1656,
  [SMALL_STATE(85)] = 1670,
  [SMALL_STATE(86)] = 1682,
  [SMALL_STATE(87)] = 1696,
  [SMALL_STATE(88)] = 1708,
  [SMALL_STATE(89)] = 1722,
  [SMALL_STATE(90)] = 1736,
  [SMALL_STATE(91)] = 1750,
  [SMALL_STATE(92)] = 1762,
  [SMALL_STATE(93)] = 1776,
  [SMALL_STATE(94)] = 1790,
  [SMALL_STATE(95)] = 1806,
  [SMALL_STATE(96)] = 1819,
  [SMALL_STATE(97)] = 1830,
  [SMALL_STATE(98)] = 1843,
  [SMALL_STATE(99)] = 1856,
  [SMALL_STATE(100)] = 1869,
  [SMALL_STATE(101)] = 1882,
  [SMALL_STATE(102)] = 1895,
  [SMALL_STATE(103)] = 1908,
  [SMALL_STATE(104)] = 1921,
  [SMALL_STATE(105)] = 1934,
  [SMALL_STATE(106)] = 1947,
  [SMALL_STATE(107)] = 1958,
  [SMALL_STATE(108)] = 1968,
  [SMALL_STATE(109)] = 1978,
  [SMALL_STATE(110)] = 1986,
  [SMALL_STATE(111)] = 1994,
  [SMALL_STATE(112)] = 2002,
  [SMALL_STATE(113)] = 2012,
  [SMALL_STATE(114)] = 2022,
  [SMALL_STATE(115)] = 2032,
  [SMALL_STATE(116)] = 2042,
  [SMALL_STATE(117)] = 2052,
  [SMALL_STATE(118)] = 2062,
  [SMALL_STATE(119)] = 2072,
  [SMALL_STATE(120)] = 2082,
  [SMALL_STATE(121)] = 2092,
  [SMALL_STATE(122)] = 2099,
  [SMALL_STATE(123)] = 2106,
  [SMALL_STATE(124)] = 2113,
  [SMALL_STATE(125)] = 2120,
  [SMALL_STATE(126)] = 2127,
  [SMALL_STATE(127)] = 2134,
  [SMALL_STATE(128)] = 2141,
  [SMALL_STATE(129)] = 2148,
  [SMALL_STATE(130)] = 2155,
  [SMALL_STATE(131)] = 2162,
  [SMALL_STATE(132)] = 2169,
  [SMALL_STATE(133)] = 2176,
  [SMALL_STATE(134)] = 2183,
  [SMALL_STATE(135)] = 2190,
  [SMALL_STATE(136)] = 2197,
  [SMALL_STATE(137)] = 2204,
  [SMALL_STATE(138)] = 2211,
  [SMALL_STATE(139)] = 2218,
  [SMALL_STATE(140)] = 2225,
  [SMALL_STATE(141)] = 2232,
  [SMALL_STATE(142)] = 2239,
  [SMALL_STATE(143)] = 2246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 8),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 8),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(141),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(127),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(124),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(123),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(130),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(98),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(61),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 18),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 18),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 7),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 2, .production_id = 9),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 2, .production_id = 9),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_import, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 10),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 3, .production_id = 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 3, .production_id = 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(19),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_restriction, 2, .production_id = 12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_def, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 4, .production_id = 11),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 13),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 14),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 14),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(113),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(139),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(113),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(138),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 10),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 10),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 17),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 17),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 19),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 19),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 15),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 15),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(125),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 21),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 21),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 11),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 11),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2), SHIFT_REPEAT(133),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 16),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 16),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2), SHIFT_REPEAT(101),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2), SHIFT_REPEAT(102),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2), SHIFT_REPEAT(103),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 20),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 20),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 5, .production_id = 24),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 23),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 23),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 22),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 22),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [401] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
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
