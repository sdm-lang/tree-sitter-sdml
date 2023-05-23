#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 28

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
  anon_sym_EQ = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym_quoted_string = 14,
  sym_language_tag = 15,
  anon_sym_LT = 16,
  aux_sym_iri_reference_token1 = 17,
  anon_sym_GT = 18,
  sym_double = 19,
  sym_decimal = 20,
  sym_integer = 21,
  sym_unsigned = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  anon_sym_entity = 25,
  anon_sym_group = 26,
  anon_sym_structure = 27,
  anon_sym_event = 28,
  anon_sym_source = 29,
  anon_sym_enum = 30,
  anon_sym_datatype = 31,
  anon_sym_LT_DASH = 32,
  anon_sym_identity = 33,
  anon_sym_ref = 34,
  anon_sym_DASH_GT = 35,
  sym_unknown_type = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  anon_sym_DOT_DOT = 39,
  sym_line_comment = 40,
  sym_module = 41,
  sym_module_body = 42,
  sym_import = 43,
  sym__single_import = 44,
  sym_member_import = 45,
  sym_module_import = 46,
  sym_qualified_identifier = 47,
  sym_identifier_reference = 48,
  sym_annotation = 49,
  sym_value = 50,
  sym_list_of_values = 51,
  sym_value_constructor = 52,
  sym__simple_value = 53,
  sym_string = 54,
  sym_iri_reference = 55,
  sym_boolean = 56,
  sym__type_def = 57,
  sym_entity_def = 58,
  sym_entity_group = 59,
  sym_entity_body = 60,
  sym_structure_def = 61,
  sym_structure_group = 62,
  sym_structure_body = 63,
  sym_event_def = 64,
  sym_enum_def = 65,
  sym_enum_body = 66,
  sym_enum_variant = 67,
  sym_data_type_def = 68,
  sym_annotation_only_body = 69,
  sym_identity_member = 70,
  sym_member_by_value = 71,
  sym_member_by_reference = 72,
  sym__type_expression = 73,
  sym__type_expression_to = 74,
  sym__type_expression_from_to = 75,
  sym__member_type_target = 76,
  sym_cardinality_expression = 77,
  sym_cardinality_range = 78,
  aux_sym_module_body_repeat1 = 79,
  aux_sym_module_body_repeat2 = 80,
  aux_sym_module_body_repeat3 = 81,
  aux_sym_import_repeat1 = 82,
  aux_sym_list_of_values_repeat1 = 83,
  aux_sym_entity_group_repeat1 = 84,
  aux_sym_entity_body_repeat1 = 85,
  aux_sym_structure_group_repeat1 = 86,
  aux_sym_structure_body_repeat1 = 87,
  aux_sym_enum_body_repeat1 = 88,
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
  [sym_import] = "import",
  [sym__single_import] = "_single_import",
  [sym_member_import] = "member_import",
  [sym_module_import] = "module_import",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_identifier_reference] = "identifier_reference",
  [sym_annotation] = "annotation",
  [sym_value] = "value",
  [sym_list_of_values] = "list_of_values",
  [sym_value_constructor] = "value_constructor",
  [sym__simple_value] = "_simple_value",
  [sym_string] = "string",
  [sym_iri_reference] = "iri_reference",
  [sym_boolean] = "boolean",
  [sym__type_def] = "_type_def",
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
  [sym__member_type_target] = "_member_type_target",
  [sym_cardinality_expression] = "cardinality_expression",
  [sym_cardinality_range] = "cardinality_range",
  [aux_sym_module_body_repeat1] = "module_body_repeat1",
  [aux_sym_module_body_repeat2] = "module_body_repeat2",
  [aux_sym_module_body_repeat3] = "module_body_repeat3",
  [aux_sym_import_repeat1] = "import_repeat1",
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
  [anon_sym_from] = anon_sym_from,
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
  [sym_import] = sym_import,
  [sym__single_import] = sym__single_import,
  [sym_member_import] = sym_member_import,
  [sym_module_import] = sym_module_import,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_identifier_reference] = sym_identifier_reference,
  [sym_annotation] = sym_annotation,
  [sym_value] = sym_value,
  [sym_list_of_values] = sym_list_of_values,
  [sym_value_constructor] = sym_value_constructor,
  [sym__simple_value] = sym__simple_value,
  [sym_string] = sym_string,
  [sym_iri_reference] = sym_iri_reference,
  [sym_boolean] = sym_boolean,
  [sym__type_def] = sym__type_def,
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
  [sym__member_type_target] = sym__member_type_target,
  [sym_cardinality_expression] = sym_cardinality_expression,
  [sym_cardinality_range] = sym_cardinality_range,
  [aux_sym_module_body_repeat1] = aux_sym_module_body_repeat1,
  [aux_sym_module_body_repeat2] = aux_sym_module_body_repeat2,
  [aux_sym_module_body_repeat3] = aux_sym_module_body_repeat3,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
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
  [sym__type_def] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [sym__member_type_target] = {
    .visible = false,
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
  [aux_sym_import_repeat1] = {
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
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 1},
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 4},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 2},
  [21] = {.index = 40, .length = 4},
  [22] = {.index = 44, .length = 2},
  [23] = {.index = 46, .length = 3},
  [24] = {.index = 49, .length = 5},
  [25] = {.index = 54, .length = 3},
  [26] = {.index = 57, .length = 1},
  [27] = {.index = 58, .length = 1},
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
    {field_name, 0},
    {field_source, 2},
  [6] =
    {field_member, 2},
    {field_module, 0},
  [8] =
    {field_name, 1},
    {field_value, 3},
  [10] =
    {field_name, 1},
    {field_source, 3},
  [12] =
    {field_base, 3},
    {field_name, 1},
  [14] =
    {field_language, 1},
  [15] =
    {field_identity, 1},
  [16] =
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [19] =
    {field_body, 4},
    {field_name, 1},
    {field_source, 3},
  [22] =
    {field_base, 3},
    {field_body, 4},
    {field_name, 1},
  [25] =
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [27] =
    {field_identity, 2},
  [28] =
    {field_target, 1},
  [29] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [33] =
    {field_name, 0},
    {field_value, 2},
  [35] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [38] =
    {field_target, 0, .inherited = true},
    {field_targetCardinality, 0, .inherited = true},
  [40] =
    {field_name, 1},
    {field_sourceCardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_targetCardinality, 2, .inherited = true},
  [44] =
    {field_target, 2},
    {field_targetCardinality, 1},
  [46] =
    {field_body, 3},
    {field_name, 0},
    {field_value, 2},
  [49] =
    {field_body, 3},
    {field_name, 1},
    {field_sourceCardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_targetCardinality, 2, .inherited = true},
  [54] =
    {field_sourceCardinality, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [57] =
    {field_min, 1},
  [58] =
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
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(66);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < 11 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '>') ADVANCE(77);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(67);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
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
          lookahead == 'b' ||
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 40:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 42:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 43:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_language_tag);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_language_tag);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(81);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= ' ') ||
          lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
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
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_unknown_type);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_structure);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
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
  [72] = {.lex_state = 0},
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
  [84] = {.lex_state = 1},
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
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
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
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
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
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 63},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
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
    [sym_module] = STATE(141),
    [anon_sym_module] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_language_tag,
    ACTIONS(7), 4,
      sym_identifier,
      anon_sym_AT,
      sym_decimal,
      sym_integer,
    ACTIONS(9), 16,
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
  [31] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(15), 18,
      anon_sym_end,
      anon_sym_import,
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
  [60] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(19), 17,
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
  [88] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(23), 17,
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
  [116] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_end,
    ACTIONS(27), 1,
      anon_sym_import,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_entity,
    ACTIONS(33), 1,
      anon_sym_structure,
    ACTIONS(35), 1,
      anon_sym_event,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_datatype,
    STATE(7), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(10), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(15), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [163] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_import,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_entity,
    ACTIONS(33), 1,
      anon_sym_structure,
    ACTIONS(35), 1,
      anon_sym_event,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_datatype,
    ACTIONS(41), 1,
      anon_sym_end,
    STATE(9), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(17), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(29), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(77), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [210] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_quoted_string,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      sym_double,
    STATE(22), 1,
      sym_qualified_identifier,
    STATE(24), 1,
      sym_value,
    STATE(124), 1,
      sym_identifier_reference,
    ACTIONS(53), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 6,
      sym_list_of_values,
      sym_value_constructor,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [254] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_entity,
    ACTIONS(33), 1,
      anon_sym_structure,
    ACTIONS(35), 1,
      anon_sym_event,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_datatype,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(12), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(77), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [294] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_entity,
    ACTIONS(33), 1,
      anon_sym_structure,
    ACTIONS(35), 1,
      anon_sym_event,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_datatype,
    ACTIONS(41), 1,
      anon_sym_end,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(17), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [334] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 14,
      anon_sym_is,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
  [357] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_entity,
    ACTIONS(33), 1,
      anon_sym_structure,
    ACTIONS(35), 1,
      anon_sym_event,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_datatype,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [390] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      anon_sym_end,
    ACTIONS(67), 1,
      anon_sym_entity,
    ACTIONS(70), 1,
      anon_sym_structure,
    ACTIONS(73), 1,
      anon_sym_event,
    ACTIONS(76), 1,
      anon_sym_enum,
    ACTIONS(79), 1,
      anon_sym_datatype,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [423] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 1,
      sym_quoted_string,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(90), 1,
      sym_double,
    ACTIONS(93), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 5,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
      aux_sym_list_of_values_repeat1,
  [454] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_entity,
    ACTIONS(33), 1,
      anon_sym_structure,
    ACTIONS(35), 1,
      anon_sym_event,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_datatype,
    ACTIONS(41), 1,
      anon_sym_end,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [487] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_AT,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(101), 9,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [512] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_entity,
    ACTIONS(33), 1,
      anon_sym_structure,
    ACTIONS(35), 1,
      anon_sym_event,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_datatype,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [545] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(108), 11,
      anon_sym_is,
      anon_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
  [568] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_quoted_string,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 1,
      sym_double,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      sym_decimal,
      sym_integer,
    STATE(14), 5,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
      aux_sym_list_of_values_repeat1,
  [599] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_quoted_string,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(118), 1,
      sym_double,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 2,
      sym_decimal,
      sym_integer,
    STATE(19), 5,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
      aux_sym_list_of_values_repeat1,
  [627] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_from,
    ACTIONS(124), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [651] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 11,
      anon_sym_is,
      anon_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
  [671] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 10,
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
  [690] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(134), 10,
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
  [709] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_quoted_string,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(136), 1,
      sym_double,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(138), 2,
      sym_decimal,
      sym_integer,
    STATE(149), 4,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [736] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 10,
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
  [755] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(146), 10,
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
  [774] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(150), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [792] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      anon_sym_import,
    STATE(29), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    ACTIONS(152), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [812] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [830] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [848] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_end,
    ACTIONS(169), 1,
      anon_sym_ref,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(72), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [873] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 8,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
  [890] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_ref,
    ACTIONS(175), 1,
      anon_sym_end,
    STATE(32), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(56), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [915] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_end,
    ACTIONS(179), 1,
      anon_sym_group,
    STATE(36), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(71), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [940] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_group,
    ACTIONS(181), 1,
      anon_sym_end,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(74), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [965] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 1,
      anon_sym_is,
    STATE(68), 1,
      sym_structure_body,
    ACTIONS(185), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [983] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 1,
      anon_sym_is,
    STATE(59), 1,
      sym_structure_body,
    ACTIONS(187), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1001] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    STATE(63), 1,
      sym_annotation_only_body,
    ACTIONS(191), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1019] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1033] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      anon_sym_is,
    STATE(62), 1,
      sym_enum_body,
    ACTIONS(197), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1065] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_ref,
    ACTIONS(201), 1,
      anon_sym_end,
    ACTIONS(203), 1,
      anon_sym_group,
    STATE(48), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1087] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_ref,
    ACTIONS(203), 1,
      anon_sym_group,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(45), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1109] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_ref,
    ACTIONS(203), 1,
      anon_sym_group,
    ACTIONS(207), 1,
      anon_sym_end,
    STATE(48), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1131] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_ref,
    ACTIONS(203), 1,
      anon_sym_group,
    ACTIONS(209), 1,
      anon_sym_end,
    STATE(43), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1153] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      anon_sym_is,
    STATE(58), 1,
      sym_entity_body,
    ACTIONS(213), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1171] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_end,
    ACTIONS(220), 1,
      anon_sym_group,
    ACTIONS(223), 1,
      anon_sym_ref,
    STATE(48), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1193] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
    STATE(53), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1214] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_end,
    STATE(51), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(96), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1235] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_end,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(105), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1256] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_unknown_type,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_qualified_identifier,
    STATE(87), 1,
      sym_cardinality_expression,
    STATE(89), 2,
      sym_identifier_reference,
      sym__member_type_target,
  [1279] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
    STATE(53), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1300] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(97), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1318] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(245), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1330] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_end,
    ACTIONS(169), 1,
      anon_sym_ref,
    STATE(70), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1348] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(40), 1,
      sym__single_import,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
  [1368] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1392] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(98), 1,
      sym_annotation_only_body,
    ACTIONS(255), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1410] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(54), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(93), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1428] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1440] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1452] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1476] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    ACTIONS(265), 1,
      sym_identifier,
    STATE(102), 1,
      sym_annotation_only_body,
    ACTIONS(267), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1494] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1530] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_end,
    ACTIONS(280), 1,
      anon_sym_ref,
    STATE(70), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1548] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_group,
    ACTIONS(181), 1,
      anon_sym_end,
    STATE(73), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1566] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_ref,
    ACTIONS(283), 1,
      anon_sym_end,
    STATE(70), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1584] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_end,
    ACTIONS(290), 1,
      anon_sym_group,
    STATE(73), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1602] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_group,
    ACTIONS(293), 1,
      anon_sym_end,
    STATE(73), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1620] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1632] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(101), 1,
      sym_annotation_only_body,
    ACTIONS(299), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1650] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1662] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1674] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
    STATE(49), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1692] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1704] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1716] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_DASH_GT,
    STATE(66), 1,
      sym__type_expression_from_to,
    STATE(90), 1,
      sym__type_expression_to,
    STATE(121), 1,
      sym_cardinality_expression,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(313), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1748] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(315), 1,
      anon_sym_identity,
    STATE(46), 1,
      sym_identity_member,
    STATE(91), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1765] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_unknown_type,
    STATE(22), 1,
      sym_qualified_identifier,
    STATE(88), 2,
      sym_identifier_reference,
      sym__member_type_target,
  [1782] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(321), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1795] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_unknown_type,
    STATE(22), 1,
      sym_qualified_identifier,
    STATE(86), 2,
      sym_identifier_reference,
      sym__member_type_target,
  [1812] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1825] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1851] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(315), 1,
      anon_sym_identity,
    STATE(44), 1,
      sym_identity_member,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(339), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1880] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(343), 1,
      anon_sym_end,
    STATE(99), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1894] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_end,
    STATE(94), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1908] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(352), 1,
      anon_sym_end,
    STATE(120), 1,
      sym_annotation_only_body,
  [1924] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_end,
    STATE(94), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1938] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_end,
    STATE(99), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1952] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1964] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(363), 1,
      anon_sym_end,
    STATE(99), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1978] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(367), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1990] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2002] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(375), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2014] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2026] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      anon_sym_end,
    STATE(16), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2040] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_end,
    STATE(94), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2054] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_AT,
    STATE(104), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2065] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(387), 2,
      anon_sym_end,
      anon_sym_group,
  [2076] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2087] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(22), 1,
      sym_qualified_identifier,
    STATE(136), 1,
      sym_identifier_reference,
  [2100] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(397), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2111] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(22), 1,
      sym_qualified_identifier,
    STATE(37), 1,
      sym_identifier_reference,
  [2124] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(22), 1,
      sym_qualified_identifier,
    STATE(39), 1,
      sym_identifier_reference,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 2,
      anon_sym_end,
      anon_sym_group,
  [2148] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      anon_sym_DOT_DOT,
    STATE(147), 1,
      sym_cardinality_range,
  [2161] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(409), 2,
      anon_sym_end,
      anon_sym_group,
  [2172] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(411), 1,
      anon_sym_is,
    STATE(125), 1,
      sym_module_body,
  [2182] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(413), 1,
      anon_sym_DASH_GT,
    STATE(60), 1,
      sym__type_expression,
  [2192] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      sym_unsigned,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
  [2202] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_LT,
    STATE(28), 1,
      sym_iri_reference,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_end,
  [2222] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_DASH_GT,
    STATE(83), 1,
      sym__type_expression_to,
  [2232] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      sym__type_expression_to,
  [2242] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      anon_sym_source,
  [2249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
  [2256] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
  [2263] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 1,
      anon_sym_LT_DASH,
  [2270] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      sym_identifier,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 1,
      anon_sym_GT,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
  [2291] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
  [2298] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [2305] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(441), 1,
      anon_sym_EQ,
  [2312] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(443), 1,
      sym_unsigned,
  [2319] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(445), 1,
      sym_identifier,
  [2326] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      sym_identifier,
  [2333] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_EQ,
  [2340] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(451), 1,
      sym_identifier,
  [2347] = 2,
    ACTIONS(453), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(455), 1,
      sym_line_comment,
  [2354] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      sym_unsigned,
  [2361] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(459), 1,
      sym_identifier,
  [2368] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
  [2375] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
  [2382] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [2389] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [2396] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [2403] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(471), 1,
      sym_identifier,
  [2410] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
  [2417] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
  [2424] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 163,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 294,
  [SMALL_STATE(11)] = 334,
  [SMALL_STATE(12)] = 357,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 454,
  [SMALL_STATE(16)] = 487,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 545,
  [SMALL_STATE(19)] = 568,
  [SMALL_STATE(20)] = 599,
  [SMALL_STATE(21)] = 627,
  [SMALL_STATE(22)] = 651,
  [SMALL_STATE(23)] = 671,
  [SMALL_STATE(24)] = 690,
  [SMALL_STATE(25)] = 709,
  [SMALL_STATE(26)] = 736,
  [SMALL_STATE(27)] = 755,
  [SMALL_STATE(28)] = 774,
  [SMALL_STATE(29)] = 792,
  [SMALL_STATE(30)] = 812,
  [SMALL_STATE(31)] = 830,
  [SMALL_STATE(32)] = 848,
  [SMALL_STATE(33)] = 873,
  [SMALL_STATE(34)] = 890,
  [SMALL_STATE(35)] = 915,
  [SMALL_STATE(36)] = 940,
  [SMALL_STATE(37)] = 965,
  [SMALL_STATE(38)] = 983,
  [SMALL_STATE(39)] = 1001,
  [SMALL_STATE(40)] = 1019,
  [SMALL_STATE(41)] = 1033,
  [SMALL_STATE(42)] = 1051,
  [SMALL_STATE(43)] = 1065,
  [SMALL_STATE(44)] = 1087,
  [SMALL_STATE(45)] = 1109,
  [SMALL_STATE(46)] = 1131,
  [SMALL_STATE(47)] = 1153,
  [SMALL_STATE(48)] = 1171,
  [SMALL_STATE(49)] = 1193,
  [SMALL_STATE(50)] = 1214,
  [SMALL_STATE(51)] = 1235,
  [SMALL_STATE(52)] = 1256,
  [SMALL_STATE(53)] = 1279,
  [SMALL_STATE(54)] = 1300,
  [SMALL_STATE(55)] = 1318,
  [SMALL_STATE(56)] = 1330,
  [SMALL_STATE(57)] = 1348,
  [SMALL_STATE(58)] = 1368,
  [SMALL_STATE(59)] = 1380,
  [SMALL_STATE(60)] = 1392,
  [SMALL_STATE(61)] = 1410,
  [SMALL_STATE(62)] = 1428,
  [SMALL_STATE(63)] = 1440,
  [SMALL_STATE(64)] = 1452,
  [SMALL_STATE(65)] = 1464,
  [SMALL_STATE(66)] = 1476,
  [SMALL_STATE(67)] = 1494,
  [SMALL_STATE(68)] = 1506,
  [SMALL_STATE(69)] = 1518,
  [SMALL_STATE(70)] = 1530,
  [SMALL_STATE(71)] = 1548,
  [SMALL_STATE(72)] = 1566,
  [SMALL_STATE(73)] = 1584,
  [SMALL_STATE(74)] = 1602,
  [SMALL_STATE(75)] = 1620,
  [SMALL_STATE(76)] = 1632,
  [SMALL_STATE(77)] = 1650,
  [SMALL_STATE(78)] = 1662,
  [SMALL_STATE(79)] = 1674,
  [SMALL_STATE(80)] = 1692,
  [SMALL_STATE(81)] = 1704,
  [SMALL_STATE(82)] = 1716,
  [SMALL_STATE(83)] = 1735,
  [SMALL_STATE(84)] = 1748,
  [SMALL_STATE(85)] = 1765,
  [SMALL_STATE(86)] = 1782,
  [SMALL_STATE(87)] = 1795,
  [SMALL_STATE(88)] = 1812,
  [SMALL_STATE(89)] = 1825,
  [SMALL_STATE(90)] = 1838,
  [SMALL_STATE(91)] = 1851,
  [SMALL_STATE(92)] = 1868,
  [SMALL_STATE(93)] = 1880,
  [SMALL_STATE(94)] = 1894,
  [SMALL_STATE(95)] = 1908,
  [SMALL_STATE(96)] = 1924,
  [SMALL_STATE(97)] = 1938,
  [SMALL_STATE(98)] = 1952,
  [SMALL_STATE(99)] = 1964,
  [SMALL_STATE(100)] = 1978,
  [SMALL_STATE(101)] = 1990,
  [SMALL_STATE(102)] = 2002,
  [SMALL_STATE(103)] = 2014,
  [SMALL_STATE(104)] = 2026,
  [SMALL_STATE(105)] = 2040,
  [SMALL_STATE(106)] = 2054,
  [SMALL_STATE(107)] = 2065,
  [SMALL_STATE(108)] = 2076,
  [SMALL_STATE(109)] = 2087,
  [SMALL_STATE(110)] = 2100,
  [SMALL_STATE(111)] = 2111,
  [SMALL_STATE(112)] = 2124,
  [SMALL_STATE(113)] = 2137,
  [SMALL_STATE(114)] = 2148,
  [SMALL_STATE(115)] = 2161,
  [SMALL_STATE(116)] = 2172,
  [SMALL_STATE(117)] = 2182,
  [SMALL_STATE(118)] = 2192,
  [SMALL_STATE(119)] = 2202,
  [SMALL_STATE(120)] = 2212,
  [SMALL_STATE(121)] = 2222,
  [SMALL_STATE(122)] = 2232,
  [SMALL_STATE(123)] = 2242,
  [SMALL_STATE(124)] = 2249,
  [SMALL_STATE(125)] = 2256,
  [SMALL_STATE(126)] = 2263,
  [SMALL_STATE(127)] = 2270,
  [SMALL_STATE(128)] = 2277,
  [SMALL_STATE(129)] = 2284,
  [SMALL_STATE(130)] = 2291,
  [SMALL_STATE(131)] = 2298,
  [SMALL_STATE(132)] = 2305,
  [SMALL_STATE(133)] = 2312,
  [SMALL_STATE(134)] = 2319,
  [SMALL_STATE(135)] = 2326,
  [SMALL_STATE(136)] = 2333,
  [SMALL_STATE(137)] = 2340,
  [SMALL_STATE(138)] = 2347,
  [SMALL_STATE(139)] = 2354,
  [SMALL_STATE(140)] = 2361,
  [SMALL_STATE(141)] = 2368,
  [SMALL_STATE(142)] = 2375,
  [SMALL_STATE(143)] = 2382,
  [SMALL_STATE(144)] = 2389,
  [SMALL_STATE(145)] = 2396,
  [SMALL_STATE(146)] = 2403,
  [SMALL_STATE(147)] = 2410,
  [SMALL_STATE(148)] = 2417,
  [SMALL_STATE(149)] = 2424,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 9),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(137),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(127),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(146),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(145),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(140),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(138),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(14),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(14),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(109),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 6),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 18),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 18),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(57),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_import, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 8),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 3),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(122),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(34),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(135),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(21),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 13),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 15),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 21),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 21),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 10),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 12),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(122),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(135),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(122),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(50),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 15),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 11),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 11),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_def, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 10),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 25),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 25),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 22),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 22),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 16),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 16),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 16),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 16),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 20),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 20),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(122),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 18),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 18),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 19),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 19),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(132),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 17),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 17),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 24),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 24),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 26),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 26),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 26),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 26),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [461] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 27),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
