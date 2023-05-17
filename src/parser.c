#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 29

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
  anon_sym_DASH_GT = 12,
  anon_sym_LT_DASH = 13,
  anon_sym_LBRACE = 14,
  anon_sym_DOT_DOT = 15,
  anon_sym_RBRACE = 16,
  anon_sym_entity = 17,
  anon_sym_structure = 18,
  anon_sym_event = 19,
  anon_sym_source = 20,
  anon_sym_enum = 21,
  anon_sym_datatype = 22,
  anon_sym_identity = 23,
  anon_sym_ref = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  sym_quoted_string = 27,
  sym_language_tag = 28,
  anon_sym_LT = 29,
  aux_sym_iri_reference_token1 = 30,
  anon_sym_GT = 31,
  sym_double = 32,
  sym_decimal = 33,
  sym_integer = 34,
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
  sym_qualified_identifier = 45,
  sym_identifier_reference = 46,
  sym_annotation_only_body = 47,
  sym_annotation = 48,
  sym__type_expression = 49,
  sym__type_restriction = 50,
  sym__type_expression_to = 51,
  sym__type_expression_from_to = 52,
  sym_cardinality_expression = 53,
  sym__type_def = 54,
  sym_entity_def = 55,
  sym_entity_body = 56,
  sym_structure_def = 57,
  sym_structure_body = 58,
  sym_event_def = 59,
  sym_enum_def = 60,
  sym_enum_body = 61,
  sym_enum_variant = 62,
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
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_RBRACE] = "}",
  [anon_sym_entity] = "entity",
  [anon_sym_structure] = "structure",
  [anon_sym_event] = "event",
  [anon_sym_source] = "source",
  [anon_sym_enum] = "enum",
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
  [sym__type_restriction] = "_type_restriction",
  [sym__type_expression_to] = "_type_expression_to",
  [sym__type_expression_from_to] = "_type_expression_from_to",
  [sym_cardinality_expression] = "cardinality_expression",
  [sym__type_def] = "_type_def",
  [sym_entity_def] = "entity_def",
  [sym_entity_body] = "entity_body",
  [sym_structure_def] = "structure_def",
  [sym_structure_body] = "structure_body",
  [sym_event_def] = "event_def",
  [sym_enum_def] = "enum_def",
  [sym_enum_body] = "enum_body",
  [sym_enum_variant] = "enum_variant",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_structure] = anon_sym_structure,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_enum] = anon_sym_enum,
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
  [sym__type_restriction] = sym__type_restriction,
  [sym__type_expression_to] = sym__type_expression_to,
  [sym__type_expression_from_to] = sym__type_expression_from_to,
  [sym_cardinality_expression] = sym_cardinality_expression,
  [sym__type_def] = sym__type_def,
  [sym_entity_def] = sym_entity_def,
  [sym_entity_body] = sym_entity_body,
  [sym_structure_def] = sym_structure_def,
  [sym_structure_body] = sym_structure_body,
  [sym_event_def] = sym_event_def,
  [sym_enum_def] = sym_enum_def,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_variant] = sym_enum_variant,
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
  [anon_sym_EQ] = {
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
  [sym__type_restriction] = {
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
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 4},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 4},
  [20] = {.index = 39, .length = 1},
  [21] = {.index = 40, .length = 2},
  [22] = {.index = 42, .length = 2},
  [23] = {.index = 44, .length = 3},
  [24] = {.index = 47, .length = 5},
  [25] = {.index = 52, .length = 3},
  [26] = {.index = 55, .length = 3},
  [27] = {.index = 58, .length = 1},
  [28] = {.index = 59, .length = 2},
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
    {field_base, 2, .inherited = true},
    {field_name, 1},
  [6] =
    {field_name, 0},
    {field_source, 2},
  [8] =
    {field_member, 2},
    {field_module, 0},
  [10] =
    {field_name, 1},
    {field_value, 3},
  [12] =
    {field_name, 1},
    {field_source, 3},
  [14] =
    {field_base, 1},
  [15] =
    {field_base, 2, .inherited = true},
    {field_body, 3},
    {field_name, 1},
  [18] =
    {field_language, 1},
  [19] =
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [22] =
    {field_identity, 1},
  [23] =
    {field_body, 4},
    {field_name, 1},
    {field_source, 3},
  [26] =
    {field_target, 1},
  [27] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_targetCardinality, 1, .inherited = true},
  [31] =
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [33] =
    {field_target, 0, .inherited = true},
    {field_targetCardinality, 0, .inherited = true},
  [35] =
    {field_name, 1},
    {field_sourceCardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_targetCardinality, 2, .inherited = true},
  [39] =
    {field_identity, 2},
  [40] =
    {field_name, 0},
    {field_value, 2},
  [42] =
    {field_target, 2},
    {field_targetCardinality, 1},
  [44] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
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
    {field_body, 3},
    {field_name, 0},
    {field_value, 2},
  [58] =
    {field_min, 1},
  [59] =
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
  [146] = 146,
  [147] = 147,
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
      if (lookahead == '=') ADVANCE(56);
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
      if (lookahead == '=') ADVANCE(56);
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
      if (lookahead == '=') ADVANCE(56);
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
      if (lookahead == '-') ADVANCE(58);
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
      if (lookahead == '>') ADVANCE(57);
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
      if (lookahead == '=') ADVANCE(56);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
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
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
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
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 70:
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
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
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
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
  [66] = {.lex_state = 1},
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
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
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
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 72},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_structure] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
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
    [sym_module] = STATE(141),
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
      anon_sym_event,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_datatype,
    STATE(3), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(5), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(13), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(60), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
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
      anon_sym_event,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(23), 1,
      anon_sym_end,
    STATE(6), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(14), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(28), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(60), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
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
    STATE(23), 1,
      sym_qualified_identifier,
    STATE(26), 1,
      sym_value,
    STATE(147), 1,
      sym_identifier_reference,
    ACTIONS(35), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 6,
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
      anon_sym_event,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(23), 1,
      anon_sym_end,
    STATE(14), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
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
      anon_sym_event,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(39), 1,
      anon_sym_end,
    STATE(12), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [218] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_language_tag,
    ACTIONS(41), 2,
      sym_identifier,
      anon_sym_AT,
    ACTIONS(43), 11,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
      sym_quoted_string,
  [242] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 13,
      anon_sym_is,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
      anon_sym_LPAREN,
  [264] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 13,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
      anon_sym_LT,
  [286] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_end,
    ACTIONS(57), 1,
      anon_sym_entity,
    ACTIONS(60), 1,
      anon_sym_structure,
    ACTIONS(63), 1,
      anon_sym_event,
    ACTIONS(66), 1,
      anon_sym_enum,
    ACTIONS(69), 1,
      anon_sym_datatype,
    STATE(10), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(60), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [319] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 12,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
      sym_quoted_string,
  [340] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_event,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(76), 1,
      anon_sym_end,
    STATE(10), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(60), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [373] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_event,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(23), 1,
      anon_sym_end,
    STATE(10), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(60), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [406] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_entity,
    ACTIONS(15), 1,
      anon_sym_structure,
    ACTIONS(17), 1,
      anon_sym_event,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_datatype,
    ACTIONS(39), 1,
      anon_sym_end,
    STATE(10), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(60), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [439] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(78), 1,
      sym_double,
    ACTIONS(80), 1,
      sym_decimal,
    ACTIONS(82), 1,
      sym_integer,
    STATE(97), 1,
      aux_sym_list_of_values_repeat3,
    STATE(101), 1,
      aux_sym_list_of_values_repeat4,
    STATE(109), 1,
      aux_sym_list_of_values_repeat2,
    STATE(83), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
    STATE(87), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [475] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_from,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(86), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [499] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 10,
      anon_sym_is,
      anon_sym_end,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
      anon_sym_LPAREN,
  [521] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_AT,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(98), 8,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [545] = 9,
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
    STATE(68), 1,
      sym_identity_member,
    STATE(20), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(46), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [576] = 9,
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
    STATE(52), 1,
      sym_identity_member,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(49), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [607] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 10,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
  [626] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym_double,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 2,
      sym_decimal,
      sym_integer,
    STATE(136), 4,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [653] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 10,
      anon_sym_is,
      anon_sym_end,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
      anon_sym_LPAREN,
  [672] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [690] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [708] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [726] = 3,
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
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [744] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_import,
    STATE(28), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    ACTIONS(137), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [764] = 3,
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
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [782] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [800] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [818] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      anon_sym_is,
    STATE(47), 1,
      sym_entity_body,
    ACTIONS(156), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [836] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [850] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_is,
    STATE(48), 1,
      sym_structure_body,
    ACTIONS(162), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [868] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      anon_sym_is,
    STATE(51), 1,
      sym_enum_body,
    ACTIONS(166), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [886] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_is,
    STATE(67), 1,
      sym_structure_body,
    ACTIONS(168), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [904] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 7,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
  [920] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [934] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_is,
    STATE(63), 1,
      sym_annotation_only_body,
    ACTIONS(178), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [952] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 7,
      anon_sym_is,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [965] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_qualified_identifier,
    STATE(29), 2,
      sym_member_import,
      sym_module_import,
    STATE(43), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [986] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_end,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(80), 2,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1007] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_qualified_identifier,
    STATE(29), 2,
      sym_member_import,
      sym_module_import,
    STATE(43), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1028] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_end,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(79), 2,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1049] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(195), 1,
      anon_sym_end,
    STATE(72), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1067] = 5,
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
  [1085] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1097] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1109] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(201), 1,
      anon_sym_end,
    STATE(72), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1127] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(66), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(86), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1145] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1157] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(207), 1,
      anon_sym_end,
    STATE(56), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1175] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1187] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_qualified_identifier,
    STATE(38), 1,
      sym__single_import,
    STATE(29), 2,
      sym_member_import,
      sym_module_import,
  [1207] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1219] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(215), 1,
      anon_sym_end,
    STATE(72), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1249] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(30), 1,
      sym_qualified_identifier,
    STATE(29), 2,
      sym_member_import,
      sym_module_import,
    STATE(41), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1267] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1279] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1291] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1303] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1315] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1327] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1339] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1351] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(95), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1381] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_ref,
    ACTIONS(235), 1,
      anon_sym_end,
    STATE(45), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1411] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(241), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1435] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_end,
    ACTIONS(248), 1,
      anon_sym_ref,
    STATE(72), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1453] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1465] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_qualified_identifier,
    STATE(89), 1,
      sym_identifier_reference,
    STATE(100), 1,
      sym_cardinality_expression,
  [1484] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_is,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(99), 1,
      sym_annotation_only_body,
    ACTIONS(259), 2,
      anon_sym_end,
      anon_sym_ref,
  [1501] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DASH_GT,
    STATE(77), 1,
      sym__type_expression_from_to,
    STATE(88), 1,
      sym__type_expression_to,
    STATE(122), 1,
      sym_cardinality_expression,
  [1520] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_is,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(107), 1,
      sym_annotation_only_body,
    ACTIONS(265), 2,
      anon_sym_end,
      anon_sym_ref,
  [1537] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_is,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(110), 1,
      sym_annotation_only_body,
    ACTIONS(269), 2,
      anon_sym_end,
      anon_sym_ref,
  [1554] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_end,
    STATE(92), 2,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1568] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_end,
    STATE(92), 2,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1582] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(275), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [1594] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(279), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [1606] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(91), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
  [1620] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [1632] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_is,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_end,
    STATE(114), 1,
      sym_annotation_only_body,
  [1648] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(293), 1,
      anon_sym_end,
    STATE(94), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1662] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(90), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [1676] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 1,
      sym_identifier,
    ACTIONS(297), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_ref,
  [1700] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    ACTIONS(305), 1,
      anon_sym_LT,
    STATE(90), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [1714] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(310), 1,
      sym_quoted_string,
    STATE(91), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
  [1728] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(316), 1,
      anon_sym_end,
    STATE(92), 2,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1742] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(318), 1,
      anon_sym_end,
    STATE(18), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1756] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_end,
    STATE(94), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1770] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_end,
    STATE(94), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1784] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(23), 1,
      sym_qualified_identifier,
    STATE(131), 1,
      sym_identifier_reference,
  [1797] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    ACTIONS(327), 1,
      sym_decimal,
    STATE(106), 1,
      aux_sym_list_of_values_repeat3,
  [1810] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(23), 1,
      sym_qualified_identifier,
    STATE(82), 1,
      sym_identifier_reference,
  [1823] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(331), 2,
      anon_sym_end,
      anon_sym_ref,
  [1834] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(23), 1,
      sym_qualified_identifier,
    STATE(84), 1,
      sym_identifier_reference,
  [1847] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    ACTIONS(333), 1,
      sym_integer,
    STATE(105), 1,
      aux_sym_list_of_values_repeat4,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    STATE(93), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [1871] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(23), 1,
      sym_qualified_identifier,
    STATE(40), 1,
      sym_identifier_reference,
  [1884] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(23), 1,
      sym_qualified_identifier,
    STATE(36), 1,
      sym_identifier_reference,
  [1897] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    ACTIONS(337), 1,
      sym_integer,
    STATE(105), 1,
      aux_sym_list_of_values_repeat4,
  [1910] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    ACTIONS(342), 1,
      sym_decimal,
    STATE(106), 1,
      aux_sym_list_of_values_repeat3,
  [1923] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(347), 2,
      anon_sym_end,
      anon_sym_ref,
  [1934] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    ACTIONS(351), 1,
      sym_double,
    STATE(108), 1,
      aux_sym_list_of_values_repeat2,
  [1947] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    ACTIONS(354), 1,
      sym_double,
    STATE(108), 1,
      aux_sym_list_of_values_repeat2,
  [1960] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 2,
      anon_sym_end,
      anon_sym_ref,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 1,
      anon_sym_LT_DASH,
    STATE(39), 1,
      sym__type_restriction,
  [1981] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_DASH_GT,
    STATE(78), 1,
      sym__type_expression,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
    STATE(27), 1,
      sym_iri_reference,
  [2001] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_end,
  [2011] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 1,
      sym_unsigned,
  [2021] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_DOT_DOT,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
  [2031] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      anon_sym_is,
    STATE(133), 1,
      sym_module_body,
  [2041] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2049] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      anon_sym_DASH_GT,
    STATE(75), 1,
      sym__type_expression_to,
  [2067] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      anon_sym_DASH_GT,
    STATE(81), 1,
      sym__type_expression_to,
  [2085] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
  [2092] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 1,
      sym_identifier,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 1,
      sym_identifier,
  [2106] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 1,
      sym_identifier,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      sym_identifier,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 1,
      sym_identifier,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 1,
      sym_identifier,
  [2134] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 1,
      anon_sym_EQ,
  [2141] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 1,
      anon_sym_EQ,
  [2148] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [2162] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      sym_identifier,
  [2169] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      sym_unsigned,
  [2176] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 1,
      sym_identifier,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      anon_sym_source,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 1,
      anon_sym_GT,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [2218] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 1,
      sym_unsigned,
  [2225] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      sym_identifier,
  [2232] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
  [2239] = 2,
    ACTIONS(428), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(430), 1,
      sym_line_comment,
  [2246] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 319,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 373,
  [SMALL_STATE(14)] = 406,
  [SMALL_STATE(15)] = 439,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 499,
  [SMALL_STATE(18)] = 521,
  [SMALL_STATE(19)] = 545,
  [SMALL_STATE(20)] = 576,
  [SMALL_STATE(21)] = 607,
  [SMALL_STATE(22)] = 626,
  [SMALL_STATE(23)] = 653,
  [SMALL_STATE(24)] = 672,
  [SMALL_STATE(25)] = 690,
  [SMALL_STATE(26)] = 708,
  [SMALL_STATE(27)] = 726,
  [SMALL_STATE(28)] = 744,
  [SMALL_STATE(29)] = 764,
  [SMALL_STATE(30)] = 782,
  [SMALL_STATE(31)] = 800,
  [SMALL_STATE(32)] = 818,
  [SMALL_STATE(33)] = 836,
  [SMALL_STATE(34)] = 850,
  [SMALL_STATE(35)] = 868,
  [SMALL_STATE(36)] = 886,
  [SMALL_STATE(37)] = 904,
  [SMALL_STATE(38)] = 920,
  [SMALL_STATE(39)] = 934,
  [SMALL_STATE(40)] = 952,
  [SMALL_STATE(41)] = 965,
  [SMALL_STATE(42)] = 986,
  [SMALL_STATE(43)] = 1007,
  [SMALL_STATE(44)] = 1028,
  [SMALL_STATE(45)] = 1049,
  [SMALL_STATE(46)] = 1067,
  [SMALL_STATE(47)] = 1085,
  [SMALL_STATE(48)] = 1097,
  [SMALL_STATE(49)] = 1109,
  [SMALL_STATE(50)] = 1127,
  [SMALL_STATE(51)] = 1145,
  [SMALL_STATE(52)] = 1157,
  [SMALL_STATE(53)] = 1175,
  [SMALL_STATE(54)] = 1187,
  [SMALL_STATE(55)] = 1207,
  [SMALL_STATE(56)] = 1219,
  [SMALL_STATE(57)] = 1237,
  [SMALL_STATE(58)] = 1249,
  [SMALL_STATE(59)] = 1267,
  [SMALL_STATE(60)] = 1279,
  [SMALL_STATE(61)] = 1291,
  [SMALL_STATE(62)] = 1303,
  [SMALL_STATE(63)] = 1315,
  [SMALL_STATE(64)] = 1327,
  [SMALL_STATE(65)] = 1339,
  [SMALL_STATE(66)] = 1351,
  [SMALL_STATE(67)] = 1369,
  [SMALL_STATE(68)] = 1381,
  [SMALL_STATE(69)] = 1399,
  [SMALL_STATE(70)] = 1411,
  [SMALL_STATE(71)] = 1423,
  [SMALL_STATE(72)] = 1435,
  [SMALL_STATE(73)] = 1453,
  [SMALL_STATE(74)] = 1465,
  [SMALL_STATE(75)] = 1484,
  [SMALL_STATE(76)] = 1501,
  [SMALL_STATE(77)] = 1520,
  [SMALL_STATE(78)] = 1537,
  [SMALL_STATE(79)] = 1554,
  [SMALL_STATE(80)] = 1568,
  [SMALL_STATE(81)] = 1582,
  [SMALL_STATE(82)] = 1594,
  [SMALL_STATE(83)] = 1606,
  [SMALL_STATE(84)] = 1620,
  [SMALL_STATE(85)] = 1632,
  [SMALL_STATE(86)] = 1648,
  [SMALL_STATE(87)] = 1662,
  [SMALL_STATE(88)] = 1676,
  [SMALL_STATE(89)] = 1688,
  [SMALL_STATE(90)] = 1700,
  [SMALL_STATE(91)] = 1714,
  [SMALL_STATE(92)] = 1728,
  [SMALL_STATE(93)] = 1742,
  [SMALL_STATE(94)] = 1756,
  [SMALL_STATE(95)] = 1770,
  [SMALL_STATE(96)] = 1784,
  [SMALL_STATE(97)] = 1797,
  [SMALL_STATE(98)] = 1810,
  [SMALL_STATE(99)] = 1823,
  [SMALL_STATE(100)] = 1834,
  [SMALL_STATE(101)] = 1847,
  [SMALL_STATE(102)] = 1860,
  [SMALL_STATE(103)] = 1871,
  [SMALL_STATE(104)] = 1884,
  [SMALL_STATE(105)] = 1897,
  [SMALL_STATE(106)] = 1910,
  [SMALL_STATE(107)] = 1923,
  [SMALL_STATE(108)] = 1934,
  [SMALL_STATE(109)] = 1947,
  [SMALL_STATE(110)] = 1960,
  [SMALL_STATE(111)] = 1971,
  [SMALL_STATE(112)] = 1981,
  [SMALL_STATE(113)] = 1991,
  [SMALL_STATE(114)] = 2001,
  [SMALL_STATE(115)] = 2011,
  [SMALL_STATE(116)] = 2021,
  [SMALL_STATE(117)] = 2031,
  [SMALL_STATE(118)] = 2041,
  [SMALL_STATE(119)] = 2049,
  [SMALL_STATE(120)] = 2057,
  [SMALL_STATE(121)] = 2067,
  [SMALL_STATE(122)] = 2075,
  [SMALL_STATE(123)] = 2085,
  [SMALL_STATE(124)] = 2092,
  [SMALL_STATE(125)] = 2099,
  [SMALL_STATE(126)] = 2106,
  [SMALL_STATE(127)] = 2113,
  [SMALL_STATE(128)] = 2120,
  [SMALL_STATE(129)] = 2127,
  [SMALL_STATE(130)] = 2134,
  [SMALL_STATE(131)] = 2141,
  [SMALL_STATE(132)] = 2148,
  [SMALL_STATE(133)] = 2155,
  [SMALL_STATE(134)] = 2162,
  [SMALL_STATE(135)] = 2169,
  [SMALL_STATE(136)] = 2176,
  [SMALL_STATE(137)] = 2183,
  [SMALL_STATE(138)] = 2190,
  [SMALL_STATE(139)] = 2197,
  [SMALL_STATE(140)] = 2204,
  [SMALL_STATE(141)] = 2211,
  [SMALL_STATE(142)] = 2218,
  [SMALL_STATE(143)] = 2225,
  [SMALL_STATE(144)] = 2232,
  [SMALL_STATE(145)] = 2239,
  [SMALL_STATE(146)] = 2246,
  [SMALL_STATE(147)] = 2253,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 6),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(129),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(128),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(127),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(126),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(124),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 11),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(96),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 21),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 21),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 7),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(54),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_import, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 8),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 3, .production_id = 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_restriction, 2, .production_id = 9),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_def, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 13),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 20),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 10),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 14),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 13),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 20),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(120),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(137),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 19),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 19),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 17),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 17),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 25),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 25),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 15),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 15),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 22),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 22),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 21),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 21),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 18),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 18),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 15),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 15),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2), SHIFT_REPEAT(145),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(7),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(120),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(130),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 16),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 16),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2), SHIFT_REPEAT(105),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2), SHIFT_REPEAT(106),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 24),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 24),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2), SHIFT_REPEAT(108),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 23),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 23),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 27),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 27),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 5, .production_id = 28),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [420] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
