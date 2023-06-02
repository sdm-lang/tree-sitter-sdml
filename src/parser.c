#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 27

enum {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_is = 3,
  anon_sym_end = 4,
  anon_sym_import = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_COLON = 8,
  anon_sym_AT = 9,
  anon_sym_EQ = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  sym_quoted_string = 13,
  sym_language_tag = 14,
  anon_sym_LT = 15,
  aux_sym_iri_reference_token1 = 16,
  anon_sym_GT = 17,
  sym_double = 18,
  sym_decimal = 19,
  sym_integer = 20,
  sym_unsigned = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_entity = 24,
  anon_sym_group = 25,
  anon_sym_structure = 26,
  anon_sym_event = 27,
  anon_sym_source = 28,
  anon_sym_enum = 29,
  anon_sym_datatype = 30,
  anon_sym_LT_DASH = 31,
  anon_sym_identity = 32,
  anon_sym_ref = 33,
  anon_sym_DASH_GT = 34,
  sym_unknown_type = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_DOT_DOT = 38,
  sym_line_comment = 39,
  sym_module = 40,
  sym_module_body = 41,
  sym_import_statement = 42,
  sym_import = 43,
  sym_member_import = 44,
  sym_module_import = 45,
  sym_qualified_identifier = 46,
  sym_identifier_reference = 47,
  sym_annotation = 48,
  sym_value = 49,
  sym_list_of_values = 50,
  sym_value_constructor = 51,
  sym_simple_value = 52,
  sym_string = 53,
  sym_iri_reference = 54,
  sym_boolean = 55,
  sym_type_def = 56,
  sym_entity_def = 57,
  sym_entity_group = 58,
  sym_entity_body = 59,
  sym_structure_def = 60,
  sym_structure_group = 61,
  sym_structure_body = 62,
  sym_event_def = 63,
  sym_enum_def = 64,
  sym_enum_body = 65,
  sym_enum_variant = 66,
  sym_data_type_def = 67,
  sym_annotation_only_body = 68,
  sym_identity_member = 69,
  sym_member_by_value = 70,
  sym_member_by_reference = 71,
  sym__type_expression = 72,
  sym__type_expression_to = 73,
  sym__type_expression_from_to = 74,
  sym_type_reference = 75,
  sym_cardinality_expression = 76,
  sym_cardinality_range = 77,
  aux_sym_module_body_repeat1 = 78,
  aux_sym_module_body_repeat2 = 79,
  aux_sym_module_body_repeat3 = 80,
  aux_sym_import_statement_repeat1 = 81,
  aux_sym_list_of_values_repeat1 = 82,
  aux_sym_entity_group_repeat1 = 83,
  aux_sym_entity_body_repeat1 = 84,
  aux_sym_structure_group_repeat1 = 85,
  aux_sym_structure_body_repeat1 = 86,
  aux_sym_enum_body_repeat1 = 87,
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
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
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
  [anon_sym_entity] = "entity",
  [anon_sym_group] = "group",
  [anon_sym_structure] = "structure",
  [anon_sym_event] = "event",
  [anon_sym_source] = "source",
  [anon_sym_enum] = "enum",
  [anon_sym_datatype] = "datatype",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_identity] = "identity",
  [anon_sym_ref] = "ref",
  [anon_sym_DASH_GT] = "->",
  [sym_unknown_type] = "unknown_type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT_DOT] = "..",
  [sym_line_comment] = "line_comment",
  [sym_module] = "module",
  [sym_module_body] = "module_body",
  [sym_import_statement] = "import_statement",
  [sym_import] = "import",
  [sym_member_import] = "member_import",
  [sym_module_import] = "module_import",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_identifier_reference] = "identifier_reference",
  [sym_annotation] = "annotation",
  [sym_value] = "value",
  [sym_list_of_values] = "list_of_values",
  [sym_value_constructor] = "value_constructor",
  [sym_simple_value] = "simple_value",
  [sym_string] = "string",
  [sym_iri_reference] = "iri_reference",
  [sym_boolean] = "boolean",
  [sym_type_def] = "type_def",
  [sym_entity_def] = "entity_def",
  [sym_entity_group] = "entity_group",
  [sym_entity_body] = "entity_body",
  [sym_structure_def] = "structure_def",
  [sym_structure_group] = "structure_group",
  [sym_structure_body] = "structure_body",
  [sym_event_def] = "event_def",
  [sym_enum_def] = "enum_def",
  [sym_enum_body] = "enum_body",
  [sym_enum_variant] = "enum_variant",
  [sym_data_type_def] = "data_type_def",
  [sym_annotation_only_body] = "annotation_only_body",
  [sym_identity_member] = "identity_member",
  [sym_member_by_value] = "member_by_value",
  [sym_member_by_reference] = "member_by_reference",
  [sym__type_expression] = "_type_expression",
  [sym__type_expression_to] = "_type_expression_to",
  [sym__type_expression_from_to] = "_type_expression_from_to",
  [sym_type_reference] = "type_reference",
  [sym_cardinality_expression] = "cardinality_expression",
  [sym_cardinality_range] = "cardinality_range",
  [aux_sym_module_body_repeat1] = "module_body_repeat1",
  [aux_sym_module_body_repeat2] = "module_body_repeat2",
  [aux_sym_module_body_repeat3] = "module_body_repeat3",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_list_of_values_repeat1] = "list_of_values_repeat1",
  [aux_sym_entity_group_repeat1] = "entity_group_repeat1",
  [aux_sym_entity_body_repeat1] = "entity_body_repeat1",
  [aux_sym_structure_group_repeat1] = "structure_group_repeat1",
  [aux_sym_structure_body_repeat1] = "structure_body_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_structure] = anon_sym_structure,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_datatype] = anon_sym_datatype,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_identity] = anon_sym_identity,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_unknown_type] = sym_unknown_type,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_line_comment] = sym_line_comment,
  [sym_module] = sym_module,
  [sym_module_body] = sym_module_body,
  [sym_import_statement] = sym_import_statement,
  [sym_import] = sym_import,
  [sym_member_import] = sym_member_import,
  [sym_module_import] = sym_module_import,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_identifier_reference] = sym_identifier_reference,
  [sym_annotation] = sym_annotation,
  [sym_value] = sym_value,
  [sym_list_of_values] = sym_list_of_values,
  [sym_value_constructor] = sym_value_constructor,
  [sym_simple_value] = sym_simple_value,
  [sym_string] = sym_string,
  [sym_iri_reference] = sym_iri_reference,
  [sym_boolean] = sym_boolean,
  [sym_type_def] = sym_type_def,
  [sym_entity_def] = sym_entity_def,
  [sym_entity_group] = sym_entity_group,
  [sym_entity_body] = sym_entity_body,
  [sym_structure_def] = sym_structure_def,
  [sym_structure_group] = sym_structure_group,
  [sym_structure_body] = sym_structure_body,
  [sym_event_def] = sym_event_def,
  [sym_enum_def] = sym_enum_def,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_variant] = sym_enum_variant,
  [sym_data_type_def] = sym_data_type_def,
  [sym_annotation_only_body] = sym_annotation_only_body,
  [sym_identity_member] = sym_identity_member,
  [sym_member_by_value] = sym_member_by_value,
  [sym_member_by_reference] = sym_member_by_reference,
  [sym__type_expression] = sym__type_expression,
  [sym__type_expression_to] = sym__type_expression_to,
  [sym__type_expression_from_to] = sym__type_expression_from_to,
  [sym_type_reference] = sym_type_reference,
  [sym_cardinality_expression] = sym_cardinality_expression,
  [sym_cardinality_range] = sym_cardinality_range,
  [aux_sym_module_body_repeat1] = aux_sym_module_body_repeat1,
  [aux_sym_module_body_repeat2] = aux_sym_module_body_repeat2,
  [aux_sym_module_body_repeat3] = aux_sym_module_body_repeat3,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_list_of_values_repeat1] = aux_sym_list_of_values_repeat1,
  [aux_sym_entity_group_repeat1] = aux_sym_entity_group_repeat1,
  [aux_sym_entity_body_repeat1] = aux_sym_entity_body_repeat1,
  [aux_sym_structure_group_repeat1] = aux_sym_structure_group_repeat1,
  [aux_sym_structure_body_repeat1] = aux_sym_structure_body_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_structure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_unknown_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
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
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
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
  [sym_simple_value] = {
    .visible = true,
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
  [sym_type_def] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_def] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_group] = {
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
  [sym_structure_group] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_body] = {
    .visible = true,
    .named = true,
  },
  [sym_event_def] = {
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
  [sym_data_type_def] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_only_body] = {
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
  [sym_type_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_range] = {
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
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_of_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_structure_group_repeat1] = {
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
};

enum {
  field_base = 1,
  field_body = 2,
  field_identity = 3,
  field_language = 4,
  field_max = 5,
  field_member = 6,
  field_min = 7,
  field_module = 8,
  field_name = 9,
  field_source = 10,
  field_sourceCardinality = 11,
  field_target = 12,
  field_targetCardinality = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_body] = "body",
  [field_identity] = "identity",
  [field_language] = "language",
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
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 4},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 3},
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 4},
  [21] = {.index = 42, .length = 2},
  [22] = {.index = 44, .length = 3},
  [23] = {.index = 47, .length = 5},
  [24] = {.index = 52, .length = 3},
  [25] = {.index = 55, .length = 1},
  [26] = {.index = 56, .length = 1},
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
    {field_member, 2},
    {field_module, 0},
  [6] =
    {field_name, 1},
    {field_value, 3},
  [8] =
    {field_name, 1},
    {field_source, 3},
  [10] =
    {field_base, 3},
    {field_name, 1},
  [12] =
    {field_language, 1},
  [13] =
    {field_identity, 1},
  [14] =
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [17] =
    {field_body, 4},
    {field_name, 1},
    {field_source, 3},
  [20] =
    {field_base, 3},
    {field_body, 4},
    {field_name, 1},
  [23] =
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [25] =
    {field_identity, 2},
  [26] =
    {field_target, 1},
  [27] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [31] =
    {field_name, 0},
    {field_value, 2},
  [33] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [36] =
    {field_target, 0, .inherited = true},
    {field_targetCardinality, 0, .inherited = true},
  [38] =
    {field_name, 1},
    {field_sourceCardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_targetCardinality, 2, .inherited = true},
  [42] =
    {field_target, 2},
    {field_targetCardinality, 1},
  [44] =
    {field_body, 3},
    {field_name, 0},
    {field_value, 2},
  [47] =
    {field_body, 3},
    {field_name, 1},
    {field_sourceCardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_targetCardinality, 2, .inherited = true},
  [52] =
    {field_sourceCardinality, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [55] =
    {field_min, 1},
  [56] =
    {field_max, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
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
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < 11 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '>') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(68);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(4);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 40:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 42:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 44:
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(44);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_language_tag);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_language_tag);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(82);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= ' ') ||
          lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'U') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
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
      if (lookahead == 'g') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unknown_type);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 79:
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
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
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
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
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
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 64},
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_structure] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_datatype] = ACTIONS(1),
    [anon_sym_identity] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_unknown_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_module] = STATE(142),
    [anon_sym_module] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(7), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(9), 19,
      anon_sym_is,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [33] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(15), 20,
      anon_sym_is,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [64] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(9), 19,
      anon_sym_is,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [94] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      sym_language_tag,
    ACTIONS(17), 4,
      sym_identifier,
      anon_sym_AT,
      sym_decimal,
      sym_integer,
    ACTIONS(19), 16,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [125] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(25), 17,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [153] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(29), 17,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [181] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(33), 17,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [209] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(37), 17,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [237] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(41), 16,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [264] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(45), 1,
      anon_sym_import,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_entity,
    ACTIONS(51), 1,
      anon_sym_structure,
    ACTIONS(53), 1,
      anon_sym_event,
    ACTIONS(55), 1,
      anon_sym_enum,
    ACTIONS(57), 1,
      anon_sym_datatype,
    STATE(12), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [311] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_import,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_entity,
    ACTIONS(51), 1,
      anon_sym_structure,
    ACTIONS(53), 1,
      anon_sym_event,
    ACTIONS(55), 1,
      anon_sym_enum,
    ACTIONS(57), 1,
      anon_sym_datatype,
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(17), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(33), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(78), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [358] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_quoted_string,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(24), 1,
      sym_identifier_reference,
    STATE(26), 1,
      sym_value,
    ACTIONS(71), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_list_of_values,
      sym_value_constructor,
      sym_simple_value,
  [404] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    ACTIONS(80), 1,
      sym_quoted_string,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(86), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(32), 1,
      sym_identifier_reference,
    ACTIONS(89), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(14), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [447] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_quoted_string,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      sym_double,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(32), 1,
      sym_identifier_reference,
    ACTIONS(71), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(14), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [490] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_quoted_string,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(32), 1,
      sym_identifier_reference,
    ACTIONS(71), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(15), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [530] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_entity,
    ACTIONS(51), 1,
      anon_sym_structure,
    ACTIONS(53), 1,
      anon_sym_event,
    ACTIONS(55), 1,
      anon_sym_enum,
    ACTIONS(57), 1,
      anon_sym_datatype,
    ACTIONS(97), 1,
      anon_sym_end,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(22), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(78), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [570] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_entity,
    ACTIONS(51), 1,
      anon_sym_structure,
    ACTIONS(53), 1,
      anon_sym_event,
    ACTIONS(55), 1,
      anon_sym_enum,
    ACTIONS(57), 1,
      anon_sym_datatype,
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(22), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(78), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [610] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_entity,
    ACTIONS(51), 1,
      anon_sym_structure,
    ACTIONS(53), 1,
      anon_sym_event,
    ACTIONS(55), 1,
      anon_sym_enum,
    ACTIONS(57), 1,
      anon_sym_datatype,
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [643] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_entity,
    ACTIONS(51), 1,
      anon_sym_structure,
    ACTIONS(53), 1,
      anon_sym_event,
    ACTIONS(55), 1,
      anon_sym_enum,
    ACTIONS(57), 1,
      anon_sym_datatype,
    ACTIONS(99), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [676] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_entity,
    ACTIONS(51), 1,
      anon_sym_structure,
    ACTIONS(53), 1,
      anon_sym_event,
    ACTIONS(55), 1,
      anon_sym_enum,
    ACTIONS(57), 1,
      anon_sym_datatype,
    ACTIONS(97), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [709] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_AT,
    STATE(22), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(103), 9,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [734] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      anon_sym_end,
    ACTIONS(110), 1,
      anon_sym_entity,
    ACTIONS(113), 1,
      anon_sym_structure,
    ACTIONS(116), 1,
      anon_sym_event,
    ACTIONS(119), 1,
      anon_sym_enum,
    ACTIONS(122), 1,
      anon_sym_datatype,
    STATE(23), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [767] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 10,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [789] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [810] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 10,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [829] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_quoted_string,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(69), 1,
      sym_double,
    STATE(130), 1,
      sym_simple_value,
    ACTIONS(71), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [858] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 10,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [877] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 10,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [896] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [914] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [932] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(153), 6,
      anon_sym_RBRACK,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [952] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_import,
    STATE(33), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    ACTIONS(155), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [972] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 8,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
  [989] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_end,
    ACTIONS(168), 1,
      anon_sym_ref,
    STATE(38), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(75), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1014] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_end,
    ACTIONS(172), 1,
      anon_sym_group,
    STATE(37), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(70), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1039] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_group,
    ACTIONS(174), 1,
      anon_sym_end,
    STATE(22), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(65), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1064] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_ref,
    ACTIONS(176), 1,
      anon_sym_end,
    STATE(22), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(81), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1089] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_ref,
    ACTIONS(178), 1,
      anon_sym_end,
    ACTIONS(180), 1,
      anon_sym_group,
    STATE(50), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1111] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      anon_sym_is,
    STATE(62), 1,
      sym_enum_body,
    ACTIONS(184), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1129] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    STATE(57), 1,
      sym_annotation_only_body,
    ACTIONS(188), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1147] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_ref,
    ACTIONS(180), 1,
      anon_sym_group,
    ACTIONS(190), 1,
      anon_sym_end,
    STATE(50), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1169] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    STATE(59), 1,
      sym_structure_body,
    ACTIONS(194), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1187] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      anon_sym_is,
    STATE(58), 1,
      sym_entity_body,
    ACTIONS(198), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1219] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    STATE(80), 1,
      sym_structure_body,
    ACTIONS(202), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1237] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_ref,
    ACTIONS(180), 1,
      anon_sym_group,
    ACTIONS(204), 1,
      anon_sym_end,
    STATE(39), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1259] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_ref,
    ACTIONS(180), 1,
      anon_sym_group,
    ACTIONS(206), 1,
      anon_sym_end,
    STATE(42), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1295] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_end,
    ACTIONS(215), 1,
      anon_sym_group,
    ACTIONS(218), 1,
      anon_sym_ref,
    STATE(50), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1317] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
    STATE(53), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1338] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_end,
    STATE(55), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(98), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1359] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
    STATE(53), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1380] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_unknown_type,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(92), 1,
      sym_identifier_reference,
    STATE(93), 1,
      sym_type_reference,
    STATE(94), 1,
      sym_cardinality_expression,
  [1405] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_end,
    STATE(22), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(105), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1426] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1438] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1450] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1474] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1486] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(72), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(106), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1504] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1516] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1528] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_end,
    ACTIONS(259), 1,
      anon_sym_group,
    STATE(64), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1546] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_group,
    ACTIONS(262), 1,
      anon_sym_end,
    STATE(64), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1576] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_end,
    ACTIONS(271), 1,
      anon_sym_ref,
    STATE(67), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1594] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1606] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1618] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_group,
    ACTIONS(174), 1,
      anon_sym_end,
    STATE(64), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1636] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1648] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(22), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(97), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1666] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(45), 1,
      sym_import,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
  [1686] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    ACTIONS(282), 1,
      sym_identifier,
    STATE(96), 1,
      sym_annotation_only_body,
    ACTIONS(284), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1704] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_ref,
    ACTIONS(176), 1,
      anon_sym_end,
    STATE(67), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1722] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(104), 1,
      sym_annotation_only_body,
    ACTIONS(288), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1740] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(95), 1,
      sym_annotation_only_body,
    ACTIONS(292), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1770] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
    STATE(51), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1788] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1800] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_ref,
    ACTIONS(298), 1,
      anon_sym_end,
    STATE(67), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1830] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1842] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1855] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      anon_sym_identity,
    STATE(47), 1,
      sym_identity_member,
    STATE(91), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1872] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(312), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1885] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(84), 1,
      sym_type_reference,
    STATE(92), 1,
      sym_identifier_reference,
  [1904] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      sym__type_expression_from_to,
    STATE(90), 1,
      sym__type_expression_to,
    STATE(124), 1,
      sym_cardinality_expression,
  [1923] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      sym_identifier,
    ACTIONS(318), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1936] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(322), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1949] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      anon_sym_identity,
    STATE(48), 1,
      sym_identity_member,
    STATE(22), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(326), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1979] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(330), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1992] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(86), 1,
      sym_type_reference,
    STATE(92), 1,
      sym_identifier_reference,
  [2011] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2023] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2035] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_end,
    STATE(99), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2049] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_end,
    STATE(102), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2063] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(347), 1,
      anon_sym_end,
    STATE(99), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2077] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      anon_sym_end,
    STATE(22), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2091] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_is,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_end,
    STATE(119), 1,
      sym_annotation_only_body,
  [2107] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(358), 1,
      anon_sym_end,
    STATE(102), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2121] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(362), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2133] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2145] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_end,
    STATE(102), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2159] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_end,
    STATE(99), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2173] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(374), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2185] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      sym_identifier,
    ACTIONS(378), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2197] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(138), 1,
      sym_identifier_reference,
  [2210] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      sym_identifier,
    ACTIONS(384), 2,
      anon_sym_end,
      anon_sym_group,
  [2221] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 1,
      anon_sym_DOT_DOT,
    STATE(148), 1,
      sym_cardinality_range,
  [2234] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(392), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2245] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(46), 1,
      sym_identifier_reference,
  [2258] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 1,
      sym_identifier,
    ACTIONS(396), 2,
      anon_sym_end,
      anon_sym_group,
  [2269] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2280] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 2,
      anon_sym_end,
      anon_sym_group,
  [2291] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(41), 1,
      sym_identifier_reference,
  [2304] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(100), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2315] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_end,
  [2325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      anon_sym_is,
    STATE(127), 1,
      sym_module_body,
  [2335] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DASH_GT,
    STATE(74), 1,
      sym__type_expression_to,
  [2345] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 1,
      sym_unsigned,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
  [2355] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      sym__type_expression,
  [2365] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      anon_sym_DASH_GT,
    STATE(89), 1,
      sym__type_expression_to,
  [2375] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 1,
      anon_sym_GT,
  [2382] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      sym_unsigned,
  [2389] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
  [2396] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
  [2403] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
  [2410] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
  [2417] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      sym_identifier,
  [2424] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      sym_identifier,
  [2431] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      sym_identifier,
  [2438] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      sym_unsigned,
  [2445] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      sym_identifier,
  [2452] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      sym_identifier,
  [2459] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      sym_identifier,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_EQ,
  [2473] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(446), 1,
      anon_sym_source,
  [2480] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_LT_DASH,
  [2487] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
  [2494] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      sym_identifier,
  [2508] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [2515] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(460), 1,
      anon_sym_EQ,
  [2529] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      sym_identifier,
  [2536] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
  [2543] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [2550] = 2,
    ACTIONS(468), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(470), 1,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 125,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 181,
  [SMALL_STATE(9)] = 209,
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 264,
  [SMALL_STATE(12)] = 311,
  [SMALL_STATE(13)] = 358,
  [SMALL_STATE(14)] = 404,
  [SMALL_STATE(15)] = 447,
  [SMALL_STATE(16)] = 490,
  [SMALL_STATE(17)] = 530,
  [SMALL_STATE(18)] = 570,
  [SMALL_STATE(19)] = 610,
  [SMALL_STATE(20)] = 643,
  [SMALL_STATE(21)] = 676,
  [SMALL_STATE(22)] = 709,
  [SMALL_STATE(23)] = 734,
  [SMALL_STATE(24)] = 767,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 810,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 858,
  [SMALL_STATE(29)] = 877,
  [SMALL_STATE(30)] = 896,
  [SMALL_STATE(31)] = 914,
  [SMALL_STATE(32)] = 932,
  [SMALL_STATE(33)] = 952,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 989,
  [SMALL_STATE(36)] = 1014,
  [SMALL_STATE(37)] = 1039,
  [SMALL_STATE(38)] = 1064,
  [SMALL_STATE(39)] = 1089,
  [SMALL_STATE(40)] = 1111,
  [SMALL_STATE(41)] = 1129,
  [SMALL_STATE(42)] = 1147,
  [SMALL_STATE(43)] = 1169,
  [SMALL_STATE(44)] = 1187,
  [SMALL_STATE(45)] = 1205,
  [SMALL_STATE(46)] = 1219,
  [SMALL_STATE(47)] = 1237,
  [SMALL_STATE(48)] = 1259,
  [SMALL_STATE(49)] = 1281,
  [SMALL_STATE(50)] = 1295,
  [SMALL_STATE(51)] = 1317,
  [SMALL_STATE(52)] = 1338,
  [SMALL_STATE(53)] = 1359,
  [SMALL_STATE(54)] = 1380,
  [SMALL_STATE(55)] = 1405,
  [SMALL_STATE(56)] = 1426,
  [SMALL_STATE(57)] = 1438,
  [SMALL_STATE(58)] = 1450,
  [SMALL_STATE(59)] = 1462,
  [SMALL_STATE(60)] = 1474,
  [SMALL_STATE(61)] = 1486,
  [SMALL_STATE(62)] = 1504,
  [SMALL_STATE(63)] = 1516,
  [SMALL_STATE(64)] = 1528,
  [SMALL_STATE(65)] = 1546,
  [SMALL_STATE(66)] = 1564,
  [SMALL_STATE(67)] = 1576,
  [SMALL_STATE(68)] = 1594,
  [SMALL_STATE(69)] = 1606,
  [SMALL_STATE(70)] = 1618,
  [SMALL_STATE(71)] = 1636,
  [SMALL_STATE(72)] = 1648,
  [SMALL_STATE(73)] = 1666,
  [SMALL_STATE(74)] = 1686,
  [SMALL_STATE(75)] = 1704,
  [SMALL_STATE(76)] = 1722,
  [SMALL_STATE(77)] = 1740,
  [SMALL_STATE(78)] = 1758,
  [SMALL_STATE(79)] = 1770,
  [SMALL_STATE(80)] = 1788,
  [SMALL_STATE(81)] = 1800,
  [SMALL_STATE(82)] = 1818,
  [SMALL_STATE(83)] = 1830,
  [SMALL_STATE(84)] = 1842,
  [SMALL_STATE(85)] = 1855,
  [SMALL_STATE(86)] = 1872,
  [SMALL_STATE(87)] = 1885,
  [SMALL_STATE(88)] = 1904,
  [SMALL_STATE(89)] = 1923,
  [SMALL_STATE(90)] = 1936,
  [SMALL_STATE(91)] = 1949,
  [SMALL_STATE(92)] = 1966,
  [SMALL_STATE(93)] = 1979,
  [SMALL_STATE(94)] = 1992,
  [SMALL_STATE(95)] = 2011,
  [SMALL_STATE(96)] = 2023,
  [SMALL_STATE(97)] = 2035,
  [SMALL_STATE(98)] = 2049,
  [SMALL_STATE(99)] = 2063,
  [SMALL_STATE(100)] = 2077,
  [SMALL_STATE(101)] = 2091,
  [SMALL_STATE(102)] = 2107,
  [SMALL_STATE(103)] = 2121,
  [SMALL_STATE(104)] = 2133,
  [SMALL_STATE(105)] = 2145,
  [SMALL_STATE(106)] = 2159,
  [SMALL_STATE(107)] = 2173,
  [SMALL_STATE(108)] = 2185,
  [SMALL_STATE(109)] = 2197,
  [SMALL_STATE(110)] = 2210,
  [SMALL_STATE(111)] = 2221,
  [SMALL_STATE(112)] = 2234,
  [SMALL_STATE(113)] = 2245,
  [SMALL_STATE(114)] = 2258,
  [SMALL_STATE(115)] = 2269,
  [SMALL_STATE(116)] = 2280,
  [SMALL_STATE(117)] = 2291,
  [SMALL_STATE(118)] = 2304,
  [SMALL_STATE(119)] = 2315,
  [SMALL_STATE(120)] = 2325,
  [SMALL_STATE(121)] = 2335,
  [SMALL_STATE(122)] = 2345,
  [SMALL_STATE(123)] = 2355,
  [SMALL_STATE(124)] = 2365,
  [SMALL_STATE(125)] = 2375,
  [SMALL_STATE(126)] = 2382,
  [SMALL_STATE(127)] = 2389,
  [SMALL_STATE(128)] = 2396,
  [SMALL_STATE(129)] = 2403,
  [SMALL_STATE(130)] = 2410,
  [SMALL_STATE(131)] = 2417,
  [SMALL_STATE(132)] = 2424,
  [SMALL_STATE(133)] = 2431,
  [SMALL_STATE(134)] = 2438,
  [SMALL_STATE(135)] = 2445,
  [SMALL_STATE(136)] = 2452,
  [SMALL_STATE(137)] = 2459,
  [SMALL_STATE(138)] = 2466,
  [SMALL_STATE(139)] = 2473,
  [SMALL_STATE(140)] = 2480,
  [SMALL_STATE(141)] = 2487,
  [SMALL_STATE(142)] = 2494,
  [SMALL_STATE(143)] = 2501,
  [SMALL_STATE(144)] = 2508,
  [SMALL_STATE(145)] = 2515,
  [SMALL_STATE(146)] = 2522,
  [SMALL_STATE(147)] = 2529,
  [SMALL_STATE(148)] = 2536,
  [SMALL_STATE(149)] = 2543,
  [SMALL_STATE(150)] = 2550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 4),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 8),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 17),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(5),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(150),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(6),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(6),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(109),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(131),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(132),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(133),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(135),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(136),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(73),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 7),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(121),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(35),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(137),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(25),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 9),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 12),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(121),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(52),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(121),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(137),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 14),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 10),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 10),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 13),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 13),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 20),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 20),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 11),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 9),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 14),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 15),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 15),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 21),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 21),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 24),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 24),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 19),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 19),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 15),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 15),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 23),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 23),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 16),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 16),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(146),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 17),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 17),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(121),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 18),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 18),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 25),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 25),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 25),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 25),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 22),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 22),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [452] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 26),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
