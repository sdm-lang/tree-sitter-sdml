#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_event = 29,
  anon_sym_source = 30,
  anon_sym_structure = 31,
  anon_sym_union = 32,
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
  sym_import_statement = 43,
  sym_import = 44,
  sym_member_import = 45,
  sym_module_import = 46,
  sym_qualified_identifier = 47,
  sym_identifier_reference = 48,
  sym_annotation = 49,
  sym_value = 50,
  sym_list_of_values = 51,
  sym_value_constructor = 52,
  sym_simple_value = 53,
  sym_string = 54,
  sym_iri_reference = 55,
  sym_boolean = 56,
  sym_type_def = 57,
  sym_data_type_def = 58,
  sym_annotation_only_body = 59,
  sym_entity_def = 60,
  sym_entity_group = 61,
  sym_entity_body = 62,
  sym_enum_def = 63,
  sym_enum_body = 64,
  sym_enum_variant = 65,
  sym_event_def = 66,
  sym_structure_def = 67,
  sym_structure_group = 68,
  sym_structure_body = 69,
  sym_union_def = 70,
  sym_union_body = 71,
  sym_union_variant = 72,
  sym_identity_member = 73,
  sym_member_by_value = 74,
  sym_member_by_reference = 75,
  sym__type_expression = 76,
  sym__type_expression_to = 77,
  sym__type_expression_from_to = 78,
  sym_type_reference = 79,
  sym_cardinality_expression = 80,
  sym_cardinality_range = 81,
  aux_sym_module_body_repeat1 = 82,
  aux_sym_module_body_repeat2 = 83,
  aux_sym_module_body_repeat3 = 84,
  aux_sym_import_statement_repeat1 = 85,
  aux_sym_list_of_values_repeat1 = 86,
  aux_sym_entity_group_repeat1 = 87,
  aux_sym_entity_body_repeat1 = 88,
  aux_sym_enum_body_repeat1 = 89,
  aux_sym_structure_group_repeat1 = 90,
  aux_sym_structure_body_repeat1 = 91,
  aux_sym_union_body_repeat1 = 92,
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
  [sym_union_variant] = "union_variant",
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
  [sym_union_variant] = sym_union_variant,
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
  [sym_union_variant] = {
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
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 1},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 4},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 43, .length = 4},
  [23] = {.index = 47, .length = 3},
  [24] = {.index = 50, .length = 2},
  [25] = {.index = 52, .length = 5},
  [26] = {.index = 57, .length = 3},
  [27] = {.index = 60, .length = 1},
  [28] = {.index = 61, .length = 1},
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
    {field_name, 0},
    {field_target, 1, .inherited = true},
  [25] =
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [27] =
    {field_identity, 2},
  [28] =
    {field_name, 0},
    {field_value, 2},
  [30] =
    {field_target, 1},
  [31] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [35] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
  [38] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [41] =
    {field_target, 0, .inherited = true},
    {field_target_cardinality, 0, .inherited = true},
  [43] =
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [47] =
    {field_body, 3},
    {field_name, 0},
    {field_value, 2},
  [50] =
    {field_target, 2},
    {field_target_cardinality, 1},
  [52] =
    {field_body, 3},
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [57] =
    {field_source_cardinality, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [60] =
    {field_min, 1},
  [61] =
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
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_union);
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
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
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
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
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
  [94] = {.lex_state = 1},
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
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
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
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 64},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 12},
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
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(59), 6,
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
    STATE(14), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(30), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(59), 6,
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
  [375] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      sym_quoted_string,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(24), 1,
      sym_identifier_reference,
    STATE(26), 1,
      sym_value,
    ACTIONS(73), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(27), 3,
      sym_list_of_values,
      sym_value_constructor,
      sym_simple_value,
  [421] = 12,
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
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(59), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
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
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(59), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [509] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_quoted_string,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym_double,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(33), 1,
      sym_identifier_reference,
    ACTIONS(73), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(75), 2,
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
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_quoted_string,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(33), 1,
      sym_identifier_reference,
    ACTIONS(73), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(75), 2,
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
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(22), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(59), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [672] = 10,
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
    STATE(22), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(59), 6,
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
    ACTIONS(101), 1,
      anon_sym_end,
    STATE(22), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(59), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [746] = 10,
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
    STATE(22), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(59), 6,
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
  [832] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 10,
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
  [854] = 3,
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
  [874] = 3,
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
  [894] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(146), 11,
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
  [914] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(150), 10,
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
  [933] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      anon_sym_import,
    STATE(30), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    ACTIONS(152), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [954] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_quoted_string,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym_double,
    STATE(156), 1,
      sym_simple_value,
    ACTIONS(73), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [983] = 3,
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
  [1040] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_is,
    STATE(55), 1,
      sym_enum_body,
    ACTIONS(171), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1059] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_is,
    STATE(54), 1,
      sym_structure_body,
    ACTIONS(175), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1078] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      anon_sym_is,
    STATE(57), 1,
      sym_union_body,
    ACTIONS(179), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1097] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1112] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_is,
    STATE(64), 1,
      sym_structure_body,
    ACTIONS(183), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1131] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      anon_sym_is,
    STATE(52), 1,
      sym_entity_body,
    ACTIONS(187), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1150] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    STATE(60), 1,
      sym_annotation_only_body,
    ACTIONS(191), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1169] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_end,
    ACTIONS(197), 1,
      anon_sym_group,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(82), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1194] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1209] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_end,
    ACTIONS(203), 1,
      anon_sym_ref,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(85), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1234] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_group,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(78), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1259] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_ref,
    ACTIONS(207), 1,
      anon_sym_end,
    STATE(44), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(75), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1284] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_ref,
    ACTIONS(209), 1,
      anon_sym_end,
    ACTIONS(211), 1,
      anon_sym_group,
    STATE(50), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1306] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_ref,
    ACTIONS(211), 1,
      anon_sym_group,
    ACTIONS(213), 1,
      anon_sym_end,
    STATE(51), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1328] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_ref,
    ACTIONS(211), 1,
      anon_sym_group,
    ACTIONS(215), 1,
      anon_sym_end,
    STATE(48), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1350] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_ref,
    ACTIONS(211), 1,
      anon_sym_group,
    ACTIONS(217), 1,
      anon_sym_end,
    STATE(51), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1372] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_end,
    ACTIONS(224), 1,
      anon_sym_group,
    ACTIONS(227), 1,
      anon_sym_ref,
    STATE(51), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1394] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(230), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1407] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1420] = 2,
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
  [1433] = 2,
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
  [1446] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
    STATE(56), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1467] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(243), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1480] = 2,
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
  [1493] = 2,
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
  [1506] = 2,
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
  [1519] = 2,
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
  [1532] = 2,
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
  [1545] = 2,
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
  [1558] = 2,
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
  [1571] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1584] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(261), 1,
      sym_unknown_type,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(90), 1,
      sym_type_reference,
    STATE(91), 1,
      sym_identifier_reference,
    STATE(93), 1,
      sym_cardinality_expression,
  [1609] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
    STATE(56), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1630] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_end,
    STATE(71), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(109), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1651] = 2,
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
  [1664] = 2,
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
  [1677] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(103), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1698] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1711] = 2,
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
  [1724] = 2,
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
  [1737] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_end,
    ACTIONS(203), 1,
      anon_sym_ref,
    STATE(83), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1755] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(80), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(117), 2,
      sym_union_variant,
      aux_sym_union_body_repeat1,
  [1773] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(84), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(113), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1791] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_end,
    ACTIONS(197), 1,
      anon_sym_group,
    STATE(79), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1809] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_end,
    ACTIONS(292), 1,
      anon_sym_group,
    STATE(79), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1827] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(112), 2,
      sym_union_variant,
      aux_sym_union_body_repeat1,
  [1845] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(115), 1,
      sym_annotation_only_body,
    ACTIONS(297), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1863] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_group,
    ACTIONS(299), 1,
      anon_sym_end,
    STATE(79), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1881] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_end,
    ACTIONS(306), 1,
      anon_sym_ref,
    STATE(83), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1899] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(104), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1917] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_ref,
    ACTIONS(309), 1,
      anon_sym_end,
    STATE(83), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1935] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(106), 1,
      sym_annotation_only_body,
    ACTIONS(313), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1953] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      sym_identifier,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
    STATE(67), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1971] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(43), 1,
      sym_import,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
  [1991] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    ACTIONS(317), 1,
      sym_identifier,
    STATE(102), 1,
      sym_annotation_only_body,
    ACTIONS(319), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2009] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2022] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2035] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(329), 1,
      anon_sym_DASH_GT,
    STATE(81), 1,
      sym__type_expression_from_to,
    STATE(96), 1,
      sym__type_expression_to,
    STATE(131), 1,
      sym_cardinality_expression,
  [2054] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(261), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(91), 1,
      sym_identifier_reference,
    STATE(97), 1,
      sym_type_reference,
  [2073] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      anon_sym_identity,
    STATE(49), 1,
      sym_identity_member,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2090] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(339), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2116] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(343), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2129] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(347), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2142] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(261), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(91), 1,
      sym_identifier_reference,
    STATE(95), 1,
      sym_type_reference,
  [2161] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      anon_sym_identity,
    STATE(47), 1,
      sym_identity_member,
    STATE(94), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2178] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(351), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(355), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2202] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_end,
    STATE(108), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2216] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(361), 1,
      anon_sym_end,
    STATE(105), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2230] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_end,
    STATE(105), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2244] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2256] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(374), 1,
      anon_sym_end,
    STATE(130), 1,
      sym_annotation_only_body,
  [2272] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_end,
    STATE(108), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2286] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_end,
    STATE(108), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2300] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 1,
      sym_identifier,
    ACTIONS(383), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2312] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_is,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(387), 1,
      anon_sym_end,
    STATE(135), 1,
      sym_annotation_only_body,
  [2328] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_end,
    STATE(114), 2,
      sym_union_variant,
      aux_sym_union_body_repeat1,
  [2342] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_end,
    STATE(105), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2356] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(398), 1,
      anon_sym_end,
    STATE(114), 2,
      sym_union_variant,
      aux_sym_union_body_repeat1,
  [2370] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(402), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2382] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(406), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2394] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_end,
    STATE(114), 2,
      sym_union_variant,
      aux_sym_union_body_repeat1,
  [2408] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(410), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2422] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(414), 2,
      anon_sym_end,
      anon_sym_group,
  [2433] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    ACTIONS(418), 1,
      anon_sym_DOT_DOT,
    STATE(161), 1,
      sym_cardinality_range,
  [2446] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2457] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(426), 2,
      anon_sym_end,
      anon_sym_group,
  [2468] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(157), 1,
      sym_identifier_reference,
  [2481] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(39), 1,
      sym_identifier_reference,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    STATE(118), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2505] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(41), 1,
      sym_identifier_reference,
  [2518] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 2,
      anon_sym_end,
      anon_sym_group,
  [2529] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2540] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      anon_sym_DASH_GT,
    STATE(86), 1,
      sym__type_expression_to,
  [2550] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(440), 1,
      anon_sym_end,
  [2560] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      anon_sym_DASH_GT,
    STATE(98), 1,
      sym__type_expression_to,
  [2570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_DASH_GT,
    STATE(111), 1,
      sym__type_expression,
  [2580] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      sym_unsigned,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
  [2590] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_is,
    STATE(142), 1,
      sym_module_body,
  [2600] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_end,
  [2610] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_DASH_GT,
    STATE(89), 1,
      sym__type_expression,
  [2620] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      sym_unsigned,
  [2627] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      sym_identifier,
  [2634] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      sym_unsigned,
  [2641] = 2,
    ACTIONS(460), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(462), 1,
      sym_line_comment,
  [2648] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
  [2655] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
  [2669] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      sym_identifier,
  [2676] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [2683] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(474), 1,
      anon_sym_GT,
  [2690] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_EQ,
  [2697] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      sym_identifier,
  [2704] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
  [2711] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 1,
      sym_identifier,
  [2718] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
  [2725] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 1,
      sym_identifier,
  [2732] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      sym_identifier,
  [2739] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      sym_identifier,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [2760] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      anon_sym_EQ,
  [2767] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(498), 1,
      anon_sym_LT_DASH,
  [2774] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      anon_sym_source,
  [2781] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
  [2802] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(508), 1,
      sym_identifier,
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
  [SMALL_STATE(14)] = 421,
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
  [SMALL_STATE(26)] = 854,
  [SMALL_STATE(27)] = 874,
  [SMALL_STATE(28)] = 894,
  [SMALL_STATE(29)] = 914,
  [SMALL_STATE(30)] = 933,
  [SMALL_STATE(31)] = 954,
  [SMALL_STATE(32)] = 983,
  [SMALL_STATE(33)] = 1002,
  [SMALL_STATE(34)] = 1022,
  [SMALL_STATE(35)] = 1040,
  [SMALL_STATE(36)] = 1059,
  [SMALL_STATE(37)] = 1078,
  [SMALL_STATE(38)] = 1097,
  [SMALL_STATE(39)] = 1112,
  [SMALL_STATE(40)] = 1131,
  [SMALL_STATE(41)] = 1150,
  [SMALL_STATE(42)] = 1169,
  [SMALL_STATE(43)] = 1194,
  [SMALL_STATE(44)] = 1209,
  [SMALL_STATE(45)] = 1234,
  [SMALL_STATE(46)] = 1259,
  [SMALL_STATE(47)] = 1284,
  [SMALL_STATE(48)] = 1306,
  [SMALL_STATE(49)] = 1328,
  [SMALL_STATE(50)] = 1350,
  [SMALL_STATE(51)] = 1372,
  [SMALL_STATE(52)] = 1394,
  [SMALL_STATE(53)] = 1407,
  [SMALL_STATE(54)] = 1420,
  [SMALL_STATE(55)] = 1433,
  [SMALL_STATE(56)] = 1446,
  [SMALL_STATE(57)] = 1467,
  [SMALL_STATE(58)] = 1480,
  [SMALL_STATE(59)] = 1493,
  [SMALL_STATE(60)] = 1506,
  [SMALL_STATE(61)] = 1519,
  [SMALL_STATE(62)] = 1532,
  [SMALL_STATE(63)] = 1545,
  [SMALL_STATE(64)] = 1558,
  [SMALL_STATE(65)] = 1571,
  [SMALL_STATE(66)] = 1584,
  [SMALL_STATE(67)] = 1609,
  [SMALL_STATE(68)] = 1630,
  [SMALL_STATE(69)] = 1651,
  [SMALL_STATE(70)] = 1664,
  [SMALL_STATE(71)] = 1677,
  [SMALL_STATE(72)] = 1698,
  [SMALL_STATE(73)] = 1711,
  [SMALL_STATE(74)] = 1724,
  [SMALL_STATE(75)] = 1737,
  [SMALL_STATE(76)] = 1755,
  [SMALL_STATE(77)] = 1773,
  [SMALL_STATE(78)] = 1791,
  [SMALL_STATE(79)] = 1809,
  [SMALL_STATE(80)] = 1827,
  [SMALL_STATE(81)] = 1845,
  [SMALL_STATE(82)] = 1863,
  [SMALL_STATE(83)] = 1881,
  [SMALL_STATE(84)] = 1899,
  [SMALL_STATE(85)] = 1917,
  [SMALL_STATE(86)] = 1935,
  [SMALL_STATE(87)] = 1953,
  [SMALL_STATE(88)] = 1971,
  [SMALL_STATE(89)] = 1991,
  [SMALL_STATE(90)] = 2009,
  [SMALL_STATE(91)] = 2022,
  [SMALL_STATE(92)] = 2035,
  [SMALL_STATE(93)] = 2054,
  [SMALL_STATE(94)] = 2073,
  [SMALL_STATE(95)] = 2090,
  [SMALL_STATE(96)] = 2103,
  [SMALL_STATE(97)] = 2116,
  [SMALL_STATE(98)] = 2129,
  [SMALL_STATE(99)] = 2142,
  [SMALL_STATE(100)] = 2161,
  [SMALL_STATE(101)] = 2178,
  [SMALL_STATE(102)] = 2190,
  [SMALL_STATE(103)] = 2202,
  [SMALL_STATE(104)] = 2216,
  [SMALL_STATE(105)] = 2230,
  [SMALL_STATE(106)] = 2244,
  [SMALL_STATE(107)] = 2256,
  [SMALL_STATE(108)] = 2272,
  [SMALL_STATE(109)] = 2286,
  [SMALL_STATE(110)] = 2300,
  [SMALL_STATE(111)] = 2312,
  [SMALL_STATE(112)] = 2328,
  [SMALL_STATE(113)] = 2342,
  [SMALL_STATE(114)] = 2356,
  [SMALL_STATE(115)] = 2370,
  [SMALL_STATE(116)] = 2382,
  [SMALL_STATE(117)] = 2394,
  [SMALL_STATE(118)] = 2408,
  [SMALL_STATE(119)] = 2422,
  [SMALL_STATE(120)] = 2433,
  [SMALL_STATE(121)] = 2446,
  [SMALL_STATE(122)] = 2457,
  [SMALL_STATE(123)] = 2468,
  [SMALL_STATE(124)] = 2481,
  [SMALL_STATE(125)] = 2494,
  [SMALL_STATE(126)] = 2505,
  [SMALL_STATE(127)] = 2518,
  [SMALL_STATE(128)] = 2529,
  [SMALL_STATE(129)] = 2540,
  [SMALL_STATE(130)] = 2550,
  [SMALL_STATE(131)] = 2560,
  [SMALL_STATE(132)] = 2570,
  [SMALL_STATE(133)] = 2580,
  [SMALL_STATE(134)] = 2590,
  [SMALL_STATE(135)] = 2600,
  [SMALL_STATE(136)] = 2610,
  [SMALL_STATE(137)] = 2620,
  [SMALL_STATE(138)] = 2627,
  [SMALL_STATE(139)] = 2634,
  [SMALL_STATE(140)] = 2641,
  [SMALL_STATE(141)] = 2648,
  [SMALL_STATE(142)] = 2655,
  [SMALL_STATE(143)] = 2662,
  [SMALL_STATE(144)] = 2669,
  [SMALL_STATE(145)] = 2676,
  [SMALL_STATE(146)] = 2683,
  [SMALL_STATE(147)] = 2690,
  [SMALL_STATE(148)] = 2697,
  [SMALL_STATE(149)] = 2704,
  [SMALL_STATE(150)] = 2711,
  [SMALL_STATE(151)] = 2718,
  [SMALL_STATE(152)] = 2725,
  [SMALL_STATE(153)] = 2732,
  [SMALL_STATE(154)] = 2739,
  [SMALL_STATE(155)] = 2746,
  [SMALL_STATE(156)] = 2753,
  [SMALL_STATE(157)] = 2760,
  [SMALL_STATE(158)] = 2767,
  [SMALL_STATE(159)] = 2774,
  [SMALL_STATE(160)] = 2781,
  [SMALL_STATE(161)] = 2788,
  [SMALL_STATE(162)] = 2795,
  [SMALL_STATE(163)] = 2802,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 4),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(140),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(144),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(145),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(148),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(150),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(153),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(154),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(123),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(88),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 2, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 6),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(129),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(46),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(152),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 10),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(25),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 3, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 15),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 9),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 11),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 10),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 15),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(129),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(68),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 22),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 22),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(129),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(152),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 21),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 21),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 24),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 24),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 26),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 26),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 20),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 20),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(147),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 18),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 18),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(129),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_variant, 2, .production_id = 13),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_variant, 2, .production_id = 13),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_union_body_repeat1, 2), SHIFT_REPEAT(132),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_body_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 25),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 25),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 27),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 27),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 27),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 27),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_variant, 3, .production_id = 19),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_variant, 3, .production_id = 19),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [484] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 28),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
