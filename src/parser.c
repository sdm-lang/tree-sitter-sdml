#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 30

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
  anon_sym_as = 34,
  anon_sym_identity = 35,
  anon_sym_ref = 36,
  anon_sym_DASH_GT = 37,
  sym_unknown_type = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  anon_sym_DOT_DOT = 41,
  sym_line_comment = 42,
  sym_module = 43,
  sym_module_body = 44,
  sym_import_statement = 45,
  sym_import = 46,
  sym_member_import = 47,
  sym_module_import = 48,
  sym_qualified_identifier = 49,
  sym_identifier_reference = 50,
  sym_annotation = 51,
  sym_value = 52,
  sym_list_of_values = 53,
  sym_value_constructor = 54,
  sym_simple_value = 55,
  sym_string = 56,
  sym_iri_reference = 57,
  sym_boolean = 58,
  sym_type_def = 59,
  sym_data_type_def = 60,
  sym_annotation_only_body = 61,
  sym_entity_def = 62,
  sym_entity_group = 63,
  sym_entity_body = 64,
  sym_enum_def = 65,
  sym_enum_body = 66,
  sym_enum_variant = 67,
  sym_event_def = 68,
  sym_structure_def = 69,
  sym_structure_group = 70,
  sym_structure_body = 71,
  sym_union_def = 72,
  sym_union_body = 73,
  sym_type_variant = 74,
  sym_identity_member = 75,
  sym_member_by_value = 76,
  sym_member_by_reference = 77,
  sym__type_expression = 78,
  sym__type_expression_to = 79,
  sym__type_expression_from_to = 80,
  sym_type_reference = 81,
  sym_cardinality_expression = 82,
  sym_cardinality_range = 83,
  aux_sym_module_body_repeat1 = 84,
  aux_sym_module_body_repeat2 = 85,
  aux_sym_module_body_repeat3 = 86,
  aux_sym_import_statement_repeat1 = 87,
  aux_sym_list_of_values_repeat1 = 88,
  aux_sym_entity_group_repeat1 = 89,
  aux_sym_entity_body_repeat1 = 90,
  aux_sym_enum_body_repeat1 = 91,
  aux_sym_structure_group_repeat1 = 92,
  aux_sym_structure_body_repeat1 = 93,
  aux_sym_union_body_repeat1 = 94,
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
  [anon_sym_as] = "as",
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
  [anon_sym_as] = anon_sym_as,
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
  [anon_sym_as] = {
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
  field_rename = 10,
  field_source = 11,
  field_source_cardinality = 12,
  field_target = 13,
  field_target_cardinality = 14,
  field_value = 15,
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
  [field_rename] = "rename",
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
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 1},
  [18] = {.index = 30, .length = 4},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 36, .length = 3},
  [21] = {.index = 39, .length = 2},
  [22] = {.index = 41, .length = 4},
  [23] = {.index = 45, .length = 3},
  [24] = {.index = 48, .length = 2},
  [25] = {.index = 50, .length = 3},
  [26] = {.index = 53, .length = 5},
  [27] = {.index = 58, .length = 3},
  [28] = {.index = 61, .length = 1},
  [29] = {.index = 62, .length = 1},
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
    {field_body, 1},
  [24] =
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [26] =
    {field_identity, 2},
  [27] =
    {field_name, 0},
    {field_value, 2},
  [29] =
    {field_target, 1},
  [30] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [34] =
    {field_rename, 1},
    {field_rename, 2},
  [36] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [39] =
    {field_target, 0, .inherited = true},
    {field_target_cardinality, 0, .inherited = true},
  [41] =
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [45] =
    {field_body, 3},
    {field_name, 0},
    {field_value, 2},
  [48] =
    {field_target, 2},
    {field_target_cardinality, 1},
  [50] =
    {field_body, 3},
    {field_rename, 1},
    {field_rename, 2},
  [53] =
    {field_body, 3},
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [58] =
    {field_source_cardinality, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [61] =
    {field_min, 1},
  [62] =
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
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
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
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(68);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < 11 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == '>') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(12);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      END_STATE();
    case 41:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 44:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 45:
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(45);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_language_tag);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_language_tag);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(83);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= ' ') ||
          lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'U') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
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
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_unknown_type);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 86:
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
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
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
  [63] = {.lex_state = 1},
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
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
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
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
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
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 65},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
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
    [anon_sym_as] = ACTIONS(1),
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
    [sym_module] = STATE(154),
    [anon_sym_module] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 4,
      sym_identifier,
      sym_decimal,
      sym_integer,
      anon_sym_as,
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
  [33] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(11), 4,
      sym_identifier,
      sym_decimal,
      sym_integer,
      anon_sym_as,
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
  [68] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 4,
      sym_identifier,
      sym_decimal,
      sym_integer,
      anon_sym_as,
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
  [100] = 4,
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
  [132] = 3,
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
  [161] = 14,
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
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(76), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [212] = 3,
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
  [241] = 3,
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
  [270] = 3,
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
  [299] = 14,
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
    STATE(22), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(32), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(76), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [350] = 3,
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
  [378] = 13,
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
    STATE(28), 1,
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
    STATE(26), 3,
      sym_list_of_values,
      sym_value_constructor,
      sym_simple_value,
  [424] = 12,
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
    STATE(76), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [468] = 12,
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
    STATE(76), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [512] = 12,
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
    STATE(34), 1,
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
  [555] = 12,
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
    STATE(34), 1,
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
  [598] = 11,
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
    STATE(34), 1,
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
  [638] = 10,
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
    STATE(76), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [675] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_end,
    ACTIONS(103), 1,
      anon_sym_datatype,
    ACTIONS(106), 1,
      anon_sym_entity,
    ACTIONS(109), 1,
      anon_sym_enum,
    ACTIONS(112), 1,
      anon_sym_event,
    ACTIONS(115), 1,
      anon_sym_structure,
    ACTIONS(118), 1,
      anon_sym_union,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(76), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [712] = 10,
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
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(76), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [749] = 10,
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
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(76), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [786] = 5,
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
  [812] = 4,
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
  [835] = 4,
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
  [857] = 3,
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
  [877] = 3,
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
  [897] = 3,
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
  [917] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_quoted_string,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym_double,
    STATE(142), 1,
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
  [946] = 3,
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
  [965] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 10,
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
  [984] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_import,
    STATE(32), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    ACTIONS(156), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1005] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 9,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_ref,
  [1023] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(167), 6,
      anon_sym_RBRACK,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1043] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      anon_sym_of,
    STATE(56), 1,
      sym_union_body,
    ACTIONS(169), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1062] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_end,
    ACTIONS(177), 1,
      anon_sym_ref,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(92), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1087] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      anon_sym_is,
    STATE(67), 1,
      sym_structure_body,
    ACTIONS(181), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1106] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(103), 1,
      sym_identifier_reference,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(88), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1133] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_end,
    ACTIONS(187), 1,
      anon_sym_group,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(91), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1158] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      anon_sym_is,
    STATE(68), 1,
      sym_structure_body,
    ACTIONS(189), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1177] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1192] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_is,
    STATE(69), 1,
      sym_annotation_only_body,
    ACTIONS(195), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1211] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_is,
    STATE(64), 1,
      sym_entity_body,
    ACTIONS(199), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1230] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      anon_sym_of,
    STATE(60), 1,
      sym_enum_body,
    ACTIONS(201), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1249] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_ref,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(36), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(81), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1274] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_group,
    ACTIONS(207), 1,
      anon_sym_end,
    STATE(39), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(89), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1299] = 2,
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
  [1314] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(103), 1,
      sym_identifier_reference,
    STATE(38), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(83), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1341] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_ref,
    ACTIONS(213), 1,
      anon_sym_end,
    ACTIONS(215), 1,
      anon_sym_group,
    STATE(53), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1363] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_ref,
    ACTIONS(215), 1,
      anon_sym_group,
    ACTIONS(217), 1,
      anon_sym_end,
    STATE(52), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1385] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_ref,
    ACTIONS(215), 1,
      anon_sym_group,
    ACTIONS(219), 1,
      anon_sym_end,
    STATE(50), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1407] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_end,
    ACTIONS(226), 1,
      anon_sym_group,
    ACTIONS(229), 1,
      anon_sym_ref,
    STATE(52), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1429] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_ref,
    ACTIONS(215), 1,
      anon_sym_group,
    ACTIONS(232), 1,
      anon_sym_end,
    STATE(52), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1451] = 2,
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
  [1464] = 2,
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
  [1477] = 2,
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
  [1490] = 6,
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
  [1511] = 2,
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
  [1524] = 2,
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
  [1537] = 2,
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
  [1550] = 2,
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
  [1563] = 2,
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
  [1576] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_end,
    STATE(72), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(114), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1597] = 2,
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
  [1610] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1623] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1636] = 2,
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
  [1649] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1662] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1675] = 2,
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
  [1688] = 2,
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
  [1701] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(110), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1722] = 2,
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
  [1735] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_unknown_type,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(97), 1,
      sym_cardinality_expression,
    STATE(99), 1,
      sym_type_reference,
    STATE(100), 1,
      sym_identifier_reference,
  [1760] = 2,
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
  [1773] = 2,
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
  [1786] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_end,
    STATE(80), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(120), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1807] = 6,
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
  [1828] = 2,
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
  [1841] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(118), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1862] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_end,
    ACTIONS(177), 1,
      anon_sym_ref,
    STATE(82), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1880] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_end,
    ACTIONS(302), 1,
      anon_sym_ref,
    STATE(82), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1898] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(103), 1,
      sym_identifier_reference,
    STATE(87), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1918] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_is,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(112), 1,
      sym_annotation_only_body,
    ACTIONS(307), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1936] = 5,
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
  [1954] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(41), 1,
      sym_import,
    STATE(30), 2,
      sym_member_import,
      sym_module_import,
  [1974] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(103), 1,
      sym_identifier_reference,
    STATE(87), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1994] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(316), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(103), 1,
      sym_identifier_reference,
    STATE(87), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2014] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_end,
    ACTIONS(187), 1,
      anon_sym_group,
    STATE(90), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2032] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(321), 1,
      anon_sym_end,
    ACTIONS(323), 1,
      anon_sym_group,
    STATE(90), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2050] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_group,
    ACTIONS(326), 1,
      anon_sym_end,
    STATE(90), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2068] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_ref,
    ACTIONS(328), 1,
      anon_sym_end,
    STATE(82), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2086] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_is,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(121), 1,
      sym_annotation_only_body,
    ACTIONS(332), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2104] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_is,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(115), 1,
      sym_annotation_only_body,
    ACTIONS(336), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2122] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(340), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2135] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2148] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(95), 1,
      sym_type_reference,
    STATE(100), 1,
      sym_identifier_reference,
  [2167] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2180] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(352), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2193] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2206] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_DASH_GT,
    STATE(94), 1,
      sym__type_expression_from_to,
    STATE(98), 1,
      sym__type_expression_to,
    STATE(139), 1,
      sym_cardinality_expression,
  [2225] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(360), 1,
      anon_sym_identity,
    STATE(49), 1,
      sym_identity_member,
    STATE(106), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2242] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_is,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_end,
    ACTIONS(366), 1,
      anon_sym_as,
    STATE(133), 1,
      sym_annotation_only_body,
  [2261] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(96), 1,
      sym_type_reference,
    STATE(100), 1,
      sym_identifier_reference,
  [2280] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2293] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(360), 1,
      anon_sym_identity,
    STATE(51), 1,
      sym_identity_member,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2310] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(374), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2322] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(376), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2348] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_end,
    STATE(113), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2362] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(386), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2374] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 1,
      sym_identifier,
    ACTIONS(390), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2386] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_end,
    STATE(113), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2400] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_end,
    STATE(113), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2414] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 1,
      sym_identifier,
    ACTIONS(399), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2426] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_is,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_end,
    STATE(137), 1,
      sym_annotation_only_body,
  [2442] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_is,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_end,
    STATE(138), 1,
      sym_annotation_only_body,
  [2458] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_end,
    STATE(119), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2472] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(411), 1,
      sym_identifier,
    ACTIONS(414), 1,
      anon_sym_end,
    STATE(119), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_end,
    STATE(119), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2500] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(418), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2512] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2523] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(426), 2,
      anon_sym_end,
      anon_sym_group,
  [2534] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(430), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 2,
      anon_sym_end,
      anon_sym_group,
  [2556] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(42), 1,
      sym_identifier_reference,
  [2569] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    ACTIONS(440), 1,
      anon_sym_DOT_DOT,
    STATE(165), 1,
      sym_cardinality_range,
  [2582] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(143), 1,
      sym_identifier_reference,
  [2595] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    STATE(108), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2606] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(444), 2,
      anon_sym_end,
      anon_sym_group,
  [2617] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(40), 1,
      sym_identifier_reference,
  [2630] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(446), 1,
      anon_sym_is,
    STATE(145), 1,
      sym_module_body,
  [2640] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_end,
  [2650] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(452), 1,
      sym_unsigned,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
  [2660] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 1,
      anon_sym_DASH_GT,
    STATE(93), 1,
      sym__type_expression_to,
  [2670] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_DASH_GT,
    STATE(84), 1,
      sym__type_expression,
  [2680] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(460), 1,
      anon_sym_end,
  [2690] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(464), 1,
      anon_sym_end,
  [2700] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 1,
      anon_sym_DASH_GT,
    STATE(105), 1,
      sym__type_expression_to,
  [2710] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
  [2717] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 1,
      sym_unsigned,
  [2724] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [2731] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_EQ,
  [2738] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      ts_builtin_sym_end,
  [2752] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_LT_DASH,
  [2759] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_source,
  [2766] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 1,
      sym_identifier,
  [2773] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      sym_identifier,
  [2780] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 1,
      sym_identifier,
  [2787] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      sym_unsigned,
  [2794] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
  [2801] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [2808] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
  [2815] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      sym_identifier,
  [2822] = 2,
    ACTIONS(498), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(500), 1,
      sym_line_comment,
  [2829] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      sym_identifier,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      sym_identifier,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(508), 1,
      sym_identifier,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(510), 1,
      anon_sym_EQ,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 1,
      anon_sym_GT,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      sym_identifier,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(516), 1,
      sym_identifier,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
  [2899] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 212,
  [SMALL_STATE(9)] = 241,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 299,
  [SMALL_STATE(12)] = 350,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 424,
  [SMALL_STATE(15)] = 468,
  [SMALL_STATE(16)] = 512,
  [SMALL_STATE(17)] = 555,
  [SMALL_STATE(18)] = 598,
  [SMALL_STATE(19)] = 638,
  [SMALL_STATE(20)] = 675,
  [SMALL_STATE(21)] = 712,
  [SMALL_STATE(22)] = 749,
  [SMALL_STATE(23)] = 786,
  [SMALL_STATE(24)] = 812,
  [SMALL_STATE(25)] = 835,
  [SMALL_STATE(26)] = 857,
  [SMALL_STATE(27)] = 877,
  [SMALL_STATE(28)] = 897,
  [SMALL_STATE(29)] = 917,
  [SMALL_STATE(30)] = 946,
  [SMALL_STATE(31)] = 965,
  [SMALL_STATE(32)] = 984,
  [SMALL_STATE(33)] = 1005,
  [SMALL_STATE(34)] = 1023,
  [SMALL_STATE(35)] = 1043,
  [SMALL_STATE(36)] = 1062,
  [SMALL_STATE(37)] = 1087,
  [SMALL_STATE(38)] = 1106,
  [SMALL_STATE(39)] = 1133,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1177,
  [SMALL_STATE(42)] = 1192,
  [SMALL_STATE(43)] = 1211,
  [SMALL_STATE(44)] = 1230,
  [SMALL_STATE(45)] = 1249,
  [SMALL_STATE(46)] = 1274,
  [SMALL_STATE(47)] = 1299,
  [SMALL_STATE(48)] = 1314,
  [SMALL_STATE(49)] = 1341,
  [SMALL_STATE(50)] = 1363,
  [SMALL_STATE(51)] = 1385,
  [SMALL_STATE(52)] = 1407,
  [SMALL_STATE(53)] = 1429,
  [SMALL_STATE(54)] = 1451,
  [SMALL_STATE(55)] = 1464,
  [SMALL_STATE(56)] = 1477,
  [SMALL_STATE(57)] = 1490,
  [SMALL_STATE(58)] = 1511,
  [SMALL_STATE(59)] = 1524,
  [SMALL_STATE(60)] = 1537,
  [SMALL_STATE(61)] = 1550,
  [SMALL_STATE(62)] = 1563,
  [SMALL_STATE(63)] = 1576,
  [SMALL_STATE(64)] = 1597,
  [SMALL_STATE(65)] = 1610,
  [SMALL_STATE(66)] = 1623,
  [SMALL_STATE(67)] = 1636,
  [SMALL_STATE(68)] = 1649,
  [SMALL_STATE(69)] = 1662,
  [SMALL_STATE(70)] = 1675,
  [SMALL_STATE(71)] = 1688,
  [SMALL_STATE(72)] = 1701,
  [SMALL_STATE(73)] = 1722,
  [SMALL_STATE(74)] = 1735,
  [SMALL_STATE(75)] = 1760,
  [SMALL_STATE(76)] = 1773,
  [SMALL_STATE(77)] = 1786,
  [SMALL_STATE(78)] = 1807,
  [SMALL_STATE(79)] = 1828,
  [SMALL_STATE(80)] = 1841,
  [SMALL_STATE(81)] = 1862,
  [SMALL_STATE(82)] = 1880,
  [SMALL_STATE(83)] = 1898,
  [SMALL_STATE(84)] = 1918,
  [SMALL_STATE(85)] = 1936,
  [SMALL_STATE(86)] = 1954,
  [SMALL_STATE(87)] = 1974,
  [SMALL_STATE(88)] = 1994,
  [SMALL_STATE(89)] = 2014,
  [SMALL_STATE(90)] = 2032,
  [SMALL_STATE(91)] = 2050,
  [SMALL_STATE(92)] = 2068,
  [SMALL_STATE(93)] = 2086,
  [SMALL_STATE(94)] = 2104,
  [SMALL_STATE(95)] = 2122,
  [SMALL_STATE(96)] = 2135,
  [SMALL_STATE(97)] = 2148,
  [SMALL_STATE(98)] = 2167,
  [SMALL_STATE(99)] = 2180,
  [SMALL_STATE(100)] = 2193,
  [SMALL_STATE(101)] = 2206,
  [SMALL_STATE(102)] = 2225,
  [SMALL_STATE(103)] = 2242,
  [SMALL_STATE(104)] = 2261,
  [SMALL_STATE(105)] = 2280,
  [SMALL_STATE(106)] = 2293,
  [SMALL_STATE(107)] = 2310,
  [SMALL_STATE(108)] = 2322,
  [SMALL_STATE(109)] = 2336,
  [SMALL_STATE(110)] = 2348,
  [SMALL_STATE(111)] = 2362,
  [SMALL_STATE(112)] = 2374,
  [SMALL_STATE(113)] = 2386,
  [SMALL_STATE(114)] = 2400,
  [SMALL_STATE(115)] = 2414,
  [SMALL_STATE(116)] = 2426,
  [SMALL_STATE(117)] = 2442,
  [SMALL_STATE(118)] = 2458,
  [SMALL_STATE(119)] = 2472,
  [SMALL_STATE(120)] = 2486,
  [SMALL_STATE(121)] = 2500,
  [SMALL_STATE(122)] = 2512,
  [SMALL_STATE(123)] = 2523,
  [SMALL_STATE(124)] = 2534,
  [SMALL_STATE(125)] = 2545,
  [SMALL_STATE(126)] = 2556,
  [SMALL_STATE(127)] = 2569,
  [SMALL_STATE(128)] = 2582,
  [SMALL_STATE(129)] = 2595,
  [SMALL_STATE(130)] = 2606,
  [SMALL_STATE(131)] = 2617,
  [SMALL_STATE(132)] = 2630,
  [SMALL_STATE(133)] = 2640,
  [SMALL_STATE(134)] = 2650,
  [SMALL_STATE(135)] = 2660,
  [SMALL_STATE(136)] = 2670,
  [SMALL_STATE(137)] = 2680,
  [SMALL_STATE(138)] = 2690,
  [SMALL_STATE(139)] = 2700,
  [SMALL_STATE(140)] = 2710,
  [SMALL_STATE(141)] = 2717,
  [SMALL_STATE(142)] = 2724,
  [SMALL_STATE(143)] = 2731,
  [SMALL_STATE(144)] = 2738,
  [SMALL_STATE(145)] = 2745,
  [SMALL_STATE(146)] = 2752,
  [SMALL_STATE(147)] = 2759,
  [SMALL_STATE(148)] = 2766,
  [SMALL_STATE(149)] = 2773,
  [SMALL_STATE(150)] = 2780,
  [SMALL_STATE(151)] = 2787,
  [SMALL_STATE(152)] = 2794,
  [SMALL_STATE(153)] = 2801,
  [SMALL_STATE(154)] = 2808,
  [SMALL_STATE(155)] = 2815,
  [SMALL_STATE(156)] = 2822,
  [SMALL_STATE(157)] = 2829,
  [SMALL_STATE(158)] = 2836,
  [SMALL_STATE(159)] = 2843,
  [SMALL_STATE(160)] = 2850,
  [SMALL_STATE(161)] = 2857,
  [SMALL_STATE(162)] = 2864,
  [SMALL_STATE(163)] = 2871,
  [SMALL_STATE(164)] = 2878,
  [SMALL_STATE(165)] = 2885,
  [SMALL_STATE(166)] = 2892,
  [SMALL_STATE(167)] = 2899,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 4),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(156),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(164),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(149),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(160),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(163),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(155),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(153),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(128),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(86),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 2, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(135),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(45),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(157),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 15),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 10),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 3, .production_id = 1),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(25),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 10),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 11),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 9),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 15),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(135),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(157),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_union_body_repeat1, 2), SHIFT_REPEAT(3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_body_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(135),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(77),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 22),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 22),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 24),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 24),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 21),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 21),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 27),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 27),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 20),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 20),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(161),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 26),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 26),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 3, .production_id = 19),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 3, .production_id = 19),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(135),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 18),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 18),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 28),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 28),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 28),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 28),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 2, .production_id = 13),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 2, .production_id = 13),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 4, .production_id = 25),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 4, .production_id = 25),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [494] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 29),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
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
