#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  anon_sym_datatype = 24,
  anon_sym_LT_DASH = 25,
  anon_sym_entity = 26,
  anon_sym_group = 27,
  anon_sym_enum = 28,
  anon_sym_of = 29,
  anon_sym_event = 30,
  anon_sym_source = 31,
  anon_sym_structure = 32,
  anon_sym_union = 33,
  anon_sym_identity = 34,
  anon_sym_ref = 35,
  anon_sym_DASH_GT = 36,
  sym_unknown_type = 37,
  anon_sym_LBRACE = 38,
  anon_sym_RBRACE = 39,
  anon_sym_DOT_DOT = 40,
  sym_line_comment = 41,
  sym_module = 42,
  sym_module_body = 43,
  sym_import_statement = 44,
  sym_import = 45,
  sym_member_import = 46,
  sym_module_import = 47,
  sym_qualified_identifier = 48,
  sym_identifier_reference = 49,
  sym_annotation = 50,
  sym_value = 51,
  sym_list_of_values = 52,
  sym_value_constructor = 53,
  sym_simple_value = 54,
  sym_string = 55,
  sym_iri_reference = 56,
  sym_boolean = 57,
  sym_type_def = 58,
  sym_data_type_def = 59,
  sym_annotation_only_body = 60,
  sym_entity_def = 61,
  sym_entity_group = 62,
  sym_entity_body = 63,
  sym_enum_def = 64,
  sym_enum_body = 65,
  sym_enum_variant = 66,
  sym_event_def = 67,
  sym_structure_def = 68,
  sym_structure_group = 69,
  sym_structure_body = 70,
  sym_union_def = 71,
  sym_union_body = 72,
  sym_type_variant = 73,
  sym_identity_member = 74,
  sym_member_by_value = 75,
  sym_member_by_reference = 76,
  sym__type_expression = 77,
  sym__type_expression_to = 78,
  sym__type_expression_from_to = 79,
  sym_type_reference = 80,
  sym_cardinality_expression = 81,
  sym_cardinality_range = 82,
  aux_sym_module_body_repeat1 = 83,
  aux_sym_module_body_repeat2 = 84,
  aux_sym_module_body_repeat3 = 85,
  aux_sym_import_statement_repeat1 = 86,
  aux_sym_list_of_values_repeat1 = 87,
  aux_sym_entity_group_repeat1 = 88,
  aux_sym_entity_body_repeat1 = 89,
  aux_sym_enum_body_repeat1 = 90,
  aux_sym_structure_group_repeat1 = 91,
  aux_sym_structure_body_repeat1 = 92,
  aux_sym_union_body_repeat1 = 93,
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
  [anon_sym_datatype] = "datatype",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_entity] = "entity",
  [anon_sym_group] = "group",
  [anon_sym_enum] = "enum",
  [anon_sym_of] = "of",
  [anon_sym_event] = "event",
  [anon_sym_source] = "source",
  [anon_sym_structure] = "structure",
  [anon_sym_union] = "union",
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
  [sym_data_type_def] = "data_type_def",
  [sym_annotation_only_body] = "annotation_only_body",
  [sym_entity_def] = "entity_def",
  [sym_entity_group] = "entity_group",
  [sym_entity_body] = "entity_body",
  [sym_enum_def] = "enum_def",
  [sym_enum_body] = "enum_body",
  [sym_enum_variant] = "enum_variant",
  [sym_event_def] = "event_def",
  [sym_structure_def] = "structure_def",
  [sym_structure_group] = "structure_group",
  [sym_structure_body] = "structure_body",
  [sym_union_def] = "union_def",
  [sym_union_body] = "union_body",
  [sym_type_variant] = "type_variant",
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
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_structure_group_repeat1] = "structure_group_repeat1",
  [aux_sym_structure_body_repeat1] = "structure_body_repeat1",
  [aux_sym_union_body_repeat1] = "union_body_repeat1",
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
  [anon_sym_datatype] = anon_sym_datatype,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_structure] = anon_sym_structure,
  [anon_sym_union] = anon_sym_union,
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
  [sym_data_type_def] = sym_data_type_def,
  [sym_annotation_only_body] = sym_annotation_only_body,
  [sym_entity_def] = sym_entity_def,
  [sym_entity_group] = sym_entity_group,
  [sym_entity_body] = sym_entity_body,
  [sym_enum_def] = sym_enum_def,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_variant] = sym_enum_variant,
  [sym_event_def] = sym_event_def,
  [sym_structure_def] = sym_structure_def,
  [sym_structure_group] = sym_structure_group,
  [sym_structure_body] = sym_structure_body,
  [sym_union_def] = sym_union_def,
  [sym_union_body] = sym_union_body,
  [sym_type_variant] = sym_type_variant,
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
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_structure_group_repeat1] = aux_sym_structure_group_repeat1,
  [aux_sym_structure_body_repeat1] = aux_sym_structure_body_repeat1,
  [aux_sym_union_body_repeat1] = aux_sym_union_body_repeat1,
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
  [anon_sym_datatype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
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
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
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
  [anon_sym_structure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
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
  [sym_data_type_def] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_only_body] = {
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
  [sym_event_def] = {
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
  [sym_union_def] = {
    .visible = true,
    .named = true,
  },
  [sym_union_body] = {
    .visible = true,
    .named = true,
  },
  [sym_type_variant] = {
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
  [aux_sym_enum_body_repeat1] = {
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
  [aux_sym_union_body_repeat1] = {
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
  field_source_cardinality = 11,
  field_target = 12,
  field_target_cardinality = 13,
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
  [field_source_cardinality] = "source_cardinality",
  [field_target] = "target",
  [field_target_cardinality] = "target_cardinality",
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
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 4},
  [18] = {.index = 33, .length = 3},
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 4},
  [21] = {.index = 42, .length = 3},
  [22] = {.index = 45, .length = 2},
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
    {field_base, 3},
    {field_name, 1},
  [10] =
    {field_name, 1},
    {field_source, 3},
  [12] =
    {field_language, 1},
  [13] =
    {field_base, 3},
    {field_body, 4},
    {field_name, 1},
  [16] =
    {field_identity, 1},
  [17] =
    {field_body, 4},
    {field_name, 1},
    {field_source, 3},
  [20] =
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [23] =
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [25] =
    {field_identity, 2},
  [26] =
    {field_name, 0},
    {field_value, 2},
  [28] =
    {field_target, 1},
  [29] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [33] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [36] =
    {field_target, 0, .inherited = true},
    {field_target_cardinality, 0, .inherited = true},
  [38] =
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [42] =
    {field_body, 3},
    {field_name, 0},
    {field_value, 2},
  [45] =
    {field_target, 2},
    {field_target_cardinality, 1},
  [47] =
    {field_body, 3},
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [52] =
    {field_source_cardinality, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
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
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
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
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(15);
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
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(32);
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
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(47);
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
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 68:
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_unknown_type);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 84:
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
  [22] = {.lex_state = 0},
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
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
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
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
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
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
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
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 64},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
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
    [anon_sym_datatype] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_structure] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
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
    [sym_module] = STATE(151),
    [anon_sym_module] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(9), 21,
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
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [32] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(11), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(13), 20,
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
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [66] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(13), 20,
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
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [97] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      sym_language_tag,
    ACTIONS(17), 4,
      sym_identifier,
      anon_sym_AT,
      sym_decimal,
      sym_integer,
    ACTIONS(19), 17,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [129] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(25), 18,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [158] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_end,
    ACTIONS(29), 1,
      anon_sym_import,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_datatype,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_event,
    ACTIONS(41), 1,
      anon_sym_structure,
    ACTIONS(43), 1,
      anon_sym_union,
    STATE(11), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(15), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(73), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [209] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(47), 18,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [238] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(51), 18,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [267] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(55), 18,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [296] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_import,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_datatype,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_event,
    ACTIONS(41), 1,
      anon_sym_structure,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(22), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(29), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(73), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [347] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(61), 17,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [375] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_datatype,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_event,
    ACTIONS(41), 1,
      anon_sym_structure,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(73), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [419] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_quoted_string,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(24), 1,
      sym_identifier_reference,
    STATE(27), 1,
      sym_value,
    ACTIONS(75), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(26), 3,
      sym_list_of_values,
      sym_value_constructor,
      sym_simple_value,
  [465] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_datatype,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_event,
    ACTIONS(41), 1,
      anon_sym_structure,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(22), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(73), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [509] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_quoted_string,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      sym_double,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(33), 1,
      sym_identifier_reference,
    ACTIONS(75), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(17), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [552] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(86), 1,
      sym_quoted_string,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(33), 1,
      sym_identifier_reference,
    ACTIONS(95), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(98), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(17), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [595] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_quoted_string,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(33), 1,
      sym_identifier_reference,
    ACTIONS(75), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(16), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [635] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_datatype,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_event,
    ACTIONS(41), 1,
      anon_sym_structure,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(101), 1,
      anon_sym_end,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(73), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [672] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      anon_sym_end,
    ACTIONS(105), 1,
      anon_sym_datatype,
    ACTIONS(108), 1,
      anon_sym_entity,
    ACTIONS(111), 1,
      anon_sym_enum,
    ACTIONS(114), 1,
      anon_sym_event,
    ACTIONS(117), 1,
      anon_sym_structure,
    ACTIONS(120), 1,
      anon_sym_union,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(73), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [709] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_datatype,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_event,
    ACTIONS(41), 1,
      anon_sym_structure,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(73), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [746] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_datatype,
    ACTIONS(35), 1,
      anon_sym_entity,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(39), 1,
      anon_sym_event,
    ACTIONS(41), 1,
      anon_sym_structure,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(73), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [783] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_AT,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(125), 10,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [809] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 11,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [832] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 11,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [852] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 11,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [872] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 11,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_identity,
      anon_sym_ref,
  [892] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(146), 10,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [914] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      anon_sym_import,
    STATE(29), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    ACTIONS(148), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [935] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 10,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [954] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 10,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [973] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(69), 1,
      sym_quoted_string,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      sym_double,
    STATE(163), 1,
      sym_simple_value,
    ACTIONS(75), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [1002] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(163), 6,
      anon_sym_RBRACK,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1022] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 9,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_ref,
  [1040] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_end,
    ACTIONS(173), 1,
      anon_sym_ref,
    STATE(48), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(83), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1065] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_end,
    ACTIONS(177), 1,
      anon_sym_group,
    STATE(39), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(94), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      anon_sym_of,
    STATE(56), 1,
      sym_union_body,
    ACTIONS(179), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1109] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(136), 1,
      sym_identifier_reference,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(86), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1136] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_group,
    ACTIONS(185), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(89), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1161] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_is,
    STATE(74), 1,
      sym_structure_body,
    ACTIONS(189), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1180] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      anon_sym_is,
    STATE(61), 1,
      sym_entity_body,
    ACTIONS(193), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1199] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_of,
    STATE(64), 1,
      sym_enum_body,
    ACTIONS(195), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1218] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_is,
    STATE(55), 1,
      sym_annotation_only_body,
    ACTIONS(201), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1252] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(136), 1,
      sym_identifier_reference,
    STATE(38), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(81), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1279] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_is,
    STATE(67), 1,
      sym_structure_body,
    ACTIONS(207), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1298] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1313] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_ref,
    ACTIONS(211), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(92), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1338] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_end,
    ACTIONS(218), 1,
      anon_sym_group,
    ACTIONS(221), 1,
      anon_sym_ref,
    STATE(49), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1360] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_ref,
    ACTIONS(224), 1,
      anon_sym_end,
    ACTIONS(226), 1,
      anon_sym_group,
    STATE(49), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1382] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_ref,
    ACTIONS(226), 1,
      anon_sym_group,
    ACTIONS(228), 1,
      anon_sym_end,
    STATE(50), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1404] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_ref,
    ACTIONS(226), 1,
      anon_sym_group,
    ACTIONS(230), 1,
      anon_sym_end,
    STATE(53), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1426] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_ref,
    ACTIONS(226), 1,
      anon_sym_group,
    ACTIONS(232), 1,
      anon_sym_end,
    STATE(49), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1448] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1461] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1474] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1487] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
    STATE(57), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1508] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(245), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1521] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(247), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1534] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1547] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1560] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1573] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1586] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1599] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(259), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(114), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1620] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(261), 1,
      sym_unknown_type,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(96), 1,
      sym_identifier_reference,
    STATE(104), 1,
      sym_type_reference,
    STATE(105), 1,
      sym_cardinality_expression,
  [1645] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1658] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_end,
    STATE(72), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(112), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1679] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1692] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1705] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1718] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(113), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1739] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1752] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1791] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_end,
    STATE(65), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(107), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1812] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
    STATE(57), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1833] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(293), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1859] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(136), 1,
      sym_identifier_reference,
    STATE(85), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1879] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(47), 1,
      sym_import,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
  [1899] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_ref,
    ACTIONS(211), 1,
      anon_sym_end,
    STATE(90), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1917] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
    STATE(78), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1935] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(136), 1,
      sym_identifier_reference,
    STATE(85), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1955] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(136), 1,
      sym_identifier_reference,
    STATE(85), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1975] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_end,
    ACTIONS(311), 1,
      anon_sym_group,
    STATE(87), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1993] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_is,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(116), 1,
      sym_annotation_only_body,
    ACTIONS(316), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2011] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_group,
    ACTIONS(318), 1,
      anon_sym_end,
    STATE(87), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2029] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_end,
    ACTIONS(325), 1,
      anon_sym_ref,
    STATE(90), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2047] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_is,
    ACTIONS(328), 1,
      sym_identifier,
    STATE(106), 1,
      sym_annotation_only_body,
    ACTIONS(330), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2065] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_ref,
    ACTIONS(332), 1,
      anon_sym_end,
    STATE(90), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2083] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_is,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(108), 1,
      sym_annotation_only_body,
    ACTIONS(336), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2101] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_group,
    ACTIONS(185), 1,
      anon_sym_end,
    STATE(87), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2119] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
      anon_sym_identity,
    STATE(52), 1,
      sym_identity_member,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2149] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(261), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(96), 1,
      sym_identifier_reference,
    STATE(103), 1,
      sym_type_reference,
  [2168] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_DASH_GT,
    STATE(88), 1,
      sym__type_expression_from_to,
    STATE(101), 1,
      sym__type_expression_to,
    STATE(134), 1,
      sym_cardinality_expression,
  [2187] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
      anon_sym_identity,
    STATE(51), 1,
      sym_identity_member,
    STATE(95), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2204] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2217] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(352), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2230] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2243] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2256] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2269] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(261), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(96), 1,
      sym_identifier_reference,
    STATE(100), 1,
      sym_type_reference,
  [2288] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2300] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(259), 1,
      anon_sym_end,
    STATE(119), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2314] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(376), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2338] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(381), 1,
      anon_sym_end,
    STATE(110), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2352] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_is,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(385), 1,
      anon_sym_end,
    STATE(133), 1,
      sym_annotation_only_body,
  [2368] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_end,
    STATE(110), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2382] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(387), 1,
      anon_sym_end,
    STATE(110), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2396] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(389), 1,
      anon_sym_end,
    STATE(119), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2410] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(393), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2422] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(397), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2434] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2446] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(403), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2460] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_end,
    STATE(119), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2474] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(43), 1,
      sym_identifier_reference,
  [2487] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(414), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2498] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(418), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2509] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 2,
      anon_sym_end,
      anon_sym_group,
  [2520] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      anon_sym_DOT_DOT,
    STATE(161), 1,
      sym_cardinality_range,
  [2533] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(152), 1,
      sym_identifier_reference,
  [2546] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    STATE(118), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2557] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(40), 1,
      sym_identifier_reference,
  [2570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(430), 2,
      anon_sym_end,
      anon_sym_group,
  [2581] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 2,
      anon_sym_end,
      anon_sym_group,
  [2592] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      anon_sym_is,
    STATE(137), 1,
      sym_module_body,
  [2602] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      sym_unsigned,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
  [2612] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_DASH_GT,
    STATE(93), 1,
      sym__type_expression_to,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_end,
  [2632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_DASH_GT,
    STATE(102), 1,
      sym__type_expression_to,
  [2642] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    STATE(91), 1,
      sym__type_expression,
  [2652] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_end,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
  [2669] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      anon_sym_LT_DASH,
  [2676] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [2683] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [2690] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(460), 1,
      sym_unsigned,
  [2697] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
  [2704] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
  [2711] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      sym_identifier,
  [2718] = 2,
    ACTIONS(468), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(470), 1,
      sym_line_comment,
  [2725] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [2732] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(474), 1,
      sym_identifier,
  [2739] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      sym_unsigned,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_EQ,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_source,
  [2760] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
  [2767] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_EQ,
  [2774] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 1,
      sym_identifier,
  [2781] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      anon_sym_GT,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      sym_identifier,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [2802] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      sym_identifier,
  [2809] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
  [2816] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(498), 1,
      sym_identifier,
  [2823] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      sym_identifier,
  [2830] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [2844] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 129,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 209,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 267,
  [SMALL_STATE(11)] = 296,
  [SMALL_STATE(12)] = 347,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 419,
  [SMALL_STATE(15)] = 465,
  [SMALL_STATE(16)] = 509,
  [SMALL_STATE(17)] = 552,
  [SMALL_STATE(18)] = 595,
  [SMALL_STATE(19)] = 635,
  [SMALL_STATE(20)] = 672,
  [SMALL_STATE(21)] = 709,
  [SMALL_STATE(22)] = 746,
  [SMALL_STATE(23)] = 783,
  [SMALL_STATE(24)] = 809,
  [SMALL_STATE(25)] = 832,
  [SMALL_STATE(26)] = 852,
  [SMALL_STATE(27)] = 872,
  [SMALL_STATE(28)] = 892,
  [SMALL_STATE(29)] = 914,
  [SMALL_STATE(30)] = 935,
  [SMALL_STATE(31)] = 954,
  [SMALL_STATE(32)] = 973,
  [SMALL_STATE(33)] = 1002,
  [SMALL_STATE(34)] = 1022,
  [SMALL_STATE(35)] = 1040,
  [SMALL_STATE(36)] = 1065,
  [SMALL_STATE(37)] = 1090,
  [SMALL_STATE(38)] = 1109,
  [SMALL_STATE(39)] = 1136,
  [SMALL_STATE(40)] = 1161,
  [SMALL_STATE(41)] = 1180,
  [SMALL_STATE(42)] = 1199,
  [SMALL_STATE(43)] = 1218,
  [SMALL_STATE(44)] = 1237,
  [SMALL_STATE(45)] = 1252,
  [SMALL_STATE(46)] = 1279,
  [SMALL_STATE(47)] = 1298,
  [SMALL_STATE(48)] = 1313,
  [SMALL_STATE(49)] = 1338,
  [SMALL_STATE(50)] = 1360,
  [SMALL_STATE(51)] = 1382,
  [SMALL_STATE(52)] = 1404,
  [SMALL_STATE(53)] = 1426,
  [SMALL_STATE(54)] = 1448,
  [SMALL_STATE(55)] = 1461,
  [SMALL_STATE(56)] = 1474,
  [SMALL_STATE(57)] = 1487,
  [SMALL_STATE(58)] = 1508,
  [SMALL_STATE(59)] = 1521,
  [SMALL_STATE(60)] = 1534,
  [SMALL_STATE(61)] = 1547,
  [SMALL_STATE(62)] = 1560,
  [SMALL_STATE(63)] = 1573,
  [SMALL_STATE(64)] = 1586,
  [SMALL_STATE(65)] = 1599,
  [SMALL_STATE(66)] = 1620,
  [SMALL_STATE(67)] = 1645,
  [SMALL_STATE(68)] = 1658,
  [SMALL_STATE(69)] = 1679,
  [SMALL_STATE(70)] = 1692,
  [SMALL_STATE(71)] = 1705,
  [SMALL_STATE(72)] = 1718,
  [SMALL_STATE(73)] = 1739,
  [SMALL_STATE(74)] = 1752,
  [SMALL_STATE(75)] = 1765,
  [SMALL_STATE(76)] = 1778,
  [SMALL_STATE(77)] = 1791,
  [SMALL_STATE(78)] = 1812,
  [SMALL_STATE(79)] = 1833,
  [SMALL_STATE(80)] = 1846,
  [SMALL_STATE(81)] = 1859,
  [SMALL_STATE(82)] = 1879,
  [SMALL_STATE(83)] = 1899,
  [SMALL_STATE(84)] = 1917,
  [SMALL_STATE(85)] = 1935,
  [SMALL_STATE(86)] = 1955,
  [SMALL_STATE(87)] = 1975,
  [SMALL_STATE(88)] = 1993,
  [SMALL_STATE(89)] = 2011,
  [SMALL_STATE(90)] = 2029,
  [SMALL_STATE(91)] = 2047,
  [SMALL_STATE(92)] = 2065,
  [SMALL_STATE(93)] = 2083,
  [SMALL_STATE(94)] = 2101,
  [SMALL_STATE(95)] = 2119,
  [SMALL_STATE(96)] = 2136,
  [SMALL_STATE(97)] = 2149,
  [SMALL_STATE(98)] = 2168,
  [SMALL_STATE(99)] = 2187,
  [SMALL_STATE(100)] = 2204,
  [SMALL_STATE(101)] = 2217,
  [SMALL_STATE(102)] = 2230,
  [SMALL_STATE(103)] = 2243,
  [SMALL_STATE(104)] = 2256,
  [SMALL_STATE(105)] = 2269,
  [SMALL_STATE(106)] = 2288,
  [SMALL_STATE(107)] = 2300,
  [SMALL_STATE(108)] = 2314,
  [SMALL_STATE(109)] = 2326,
  [SMALL_STATE(110)] = 2338,
  [SMALL_STATE(111)] = 2352,
  [SMALL_STATE(112)] = 2368,
  [SMALL_STATE(113)] = 2382,
  [SMALL_STATE(114)] = 2396,
  [SMALL_STATE(115)] = 2410,
  [SMALL_STATE(116)] = 2422,
  [SMALL_STATE(117)] = 2434,
  [SMALL_STATE(118)] = 2446,
  [SMALL_STATE(119)] = 2460,
  [SMALL_STATE(120)] = 2474,
  [SMALL_STATE(121)] = 2487,
  [SMALL_STATE(122)] = 2498,
  [SMALL_STATE(123)] = 2509,
  [SMALL_STATE(124)] = 2520,
  [SMALL_STATE(125)] = 2533,
  [SMALL_STATE(126)] = 2546,
  [SMALL_STATE(127)] = 2557,
  [SMALL_STATE(128)] = 2570,
  [SMALL_STATE(129)] = 2581,
  [SMALL_STATE(130)] = 2592,
  [SMALL_STATE(131)] = 2602,
  [SMALL_STATE(132)] = 2612,
  [SMALL_STATE(133)] = 2622,
  [SMALL_STATE(134)] = 2632,
  [SMALL_STATE(135)] = 2642,
  [SMALL_STATE(136)] = 2652,
  [SMALL_STATE(137)] = 2662,
  [SMALL_STATE(138)] = 2669,
  [SMALL_STATE(139)] = 2676,
  [SMALL_STATE(140)] = 2683,
  [SMALL_STATE(141)] = 2690,
  [SMALL_STATE(142)] = 2697,
  [SMALL_STATE(143)] = 2704,
  [SMALL_STATE(144)] = 2711,
  [SMALL_STATE(145)] = 2718,
  [SMALL_STATE(146)] = 2725,
  [SMALL_STATE(147)] = 2732,
  [SMALL_STATE(148)] = 2739,
  [SMALL_STATE(149)] = 2746,
  [SMALL_STATE(150)] = 2753,
  [SMALL_STATE(151)] = 2760,
  [SMALL_STATE(152)] = 2767,
  [SMALL_STATE(153)] = 2774,
  [SMALL_STATE(154)] = 2781,
  [SMALL_STATE(155)] = 2788,
  [SMALL_STATE(156)] = 2795,
  [SMALL_STATE(157)] = 2802,
  [SMALL_STATE(158)] = 2809,
  [SMALL_STATE(159)] = 2816,
  [SMALL_STATE(160)] = 2823,
  [SMALL_STATE(161)] = 2830,
  [SMALL_STATE(162)] = 2837,
  [SMALL_STATE(163)] = 2844,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 4),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(145),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(153),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(155),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(156),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(159),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(147),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(160),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(125),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(82),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 2, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(132),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(35),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(144),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 9),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 3, .production_id = 1),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(28),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 10),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 14),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 10),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 11),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 14),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_union_body_repeat1, 2), SHIFT_REPEAT(3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_body_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(132),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(77),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 20),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 20),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(132),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(144),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 13),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 13),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 22),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 22),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 19),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 19),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 24),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 24),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 16),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 16),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 16),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 16),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 18),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 18),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 17),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 17),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(149),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 15),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 15),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 23),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 23),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(132),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 25),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 25),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 25),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 25),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 21),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 21),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [482] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 26),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
