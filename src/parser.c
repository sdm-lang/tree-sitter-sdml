#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 30

enum {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_base = 3,
  anon_sym_is = 4,
  anon_sym_end = 5,
  anon_sym_import = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
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
  anon_sym_datatype = 25,
  anon_sym_LT_DASH = 26,
  anon_sym_entity = 27,
  anon_sym_group = 28,
  anon_sym_enum = 29,
  anon_sym_of = 30,
  anon_sym_event = 31,
  anon_sym_source = 32,
  anon_sym_structure = 33,
  anon_sym_union = 34,
  anon_sym_as = 35,
  anon_sym_identity = 36,
  anon_sym_ref = 37,
  anon_sym_DASH_GT = 38,
  sym_unknown_type = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  anon_sym_DOT_DOT = 42,
  sym_line_comment = 43,
  sym_module = 44,
  sym_module_body = 45,
  sym_import_statement = 46,
  sym_import = 47,
  sym_member_import = 48,
  sym_module_import = 49,
  sym_qualified_identifier = 50,
  sym_identifier_reference = 51,
  sym_annotation = 52,
  sym_value = 53,
  sym_list_of_values = 54,
  sym_value_constructor = 55,
  sym_simple_value = 56,
  sym_string = 57,
  sym_iri_reference = 58,
  sym_boolean = 59,
  sym_type_def = 60,
  sym_data_type_def = 61,
  sym_annotation_only_body = 62,
  sym_entity_def = 63,
  sym_entity_group = 64,
  sym_entity_body = 65,
  sym_enum_def = 66,
  sym_enum_body = 67,
  sym_enum_variant = 68,
  sym_event_def = 69,
  sym_structure_def = 70,
  sym_structure_group = 71,
  sym_structure_body = 72,
  sym_union_def = 73,
  sym_union_body = 74,
  sym_type_variant = 75,
  sym_identity_member = 76,
  sym_member_by_value = 77,
  sym_member_by_reference = 78,
  sym__type_expression = 79,
  sym__type_expression_to = 80,
  sym__type_expression_from_to = 81,
  sym_type_reference = 82,
  sym_cardinality_expression = 83,
  sym_cardinality_range = 84,
  aux_sym_module_body_repeat1 = 85,
  aux_sym_module_body_repeat2 = 86,
  aux_sym_module_body_repeat3 = 87,
  aux_sym_import_statement_repeat1 = 88,
  aux_sym_list_of_values_repeat1 = 89,
  aux_sym_entity_group_repeat1 = 90,
  aux_sym_entity_body_repeat1 = 91,
  aux_sym_enum_body_repeat1 = 92,
  aux_sym_structure_group_repeat1 = 93,
  aux_sym_structure_body_repeat1 = 94,
  aux_sym_union_body_repeat1 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_module] = "module",
  [anon_sym_base] = "base",
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
  [anon_sym_base] = anon_sym_base,
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
  [anon_sym_base] = {
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
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 1},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 4},
  [19] = {.index = 35, .length = 2},
  [20] = {.index = 37, .length = 3},
  [21] = {.index = 40, .length = 2},
  [22] = {.index = 42, .length = 4},
  [23] = {.index = 46, .length = 3},
  [24] = {.index = 49, .length = 2},
  [25] = {.index = 51, .length = 3},
  [26] = {.index = 54, .length = 5},
  [27] = {.index = 59, .length = 3},
  [28] = {.index = 62, .length = 1},
  [29] = {.index = 63, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_base, 3},
    {field_body, 4},
    {field_name, 1},
  [5] =
    {field_name, 0},
  [6] =
    {field_name, 1},
  [7] =
    {field_member, 2},
    {field_module, 0},
  [9] =
    {field_name, 1},
    {field_value, 3},
  [11] =
    {field_base, 3},
    {field_name, 1},
  [13] =
    {field_name, 1},
    {field_source, 3},
  [15] =
    {field_language, 1},
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
    {field_name, 0},
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
    {field_name, 0},
    {field_rename, 2},
  [37] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [40] =
    {field_target, 0, .inherited = true},
    {field_target_cardinality, 0, .inherited = true},
  [42] =
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [46] =
    {field_body, 3},
    {field_name, 0},
    {field_value, 2},
  [49] =
    {field_target, 2},
    {field_target_cardinality, 1},
  [51] =
    {field_body, 3},
    {field_name, 0},
    {field_rename, 2},
  [54] =
    {field_body, 3},
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [59] =
    {field_source_cardinality, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [62] =
    {field_min, 1},
  [63] =
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

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 8029
    ? (c < 3302
      ? (c < 902
        ? (c < 454
          ? (c < 192
            ? (c < 'a'
              ? (c < 'A'
                ? (c >= '0' && c <= '9')
                : c <= 'Z')
              : (c <= 'z' || c == 181))
            : (c <= 214 || (c < 444
              ? (c < 248
                ? (c >= 216 && c <= 246)
                : c <= 442)
              : (c <= 447 || c == 452))))
          : (c <= 455 || (c < 880
            ? (c < 499
              ? (c < 460
                ? (c >= 457 && c <= 458)
                : c <= 497)
              : (c <= 659 || (c >= 661 && c <= 687)))
            : (c <= 883 || (c < 891
              ? (c >= 886 && c <= 887)
              : (c <= 893 || c == 895))))))
        : (c <= 902 || (c < 1776
          ? (c < 1015
            ? (c < 910
              ? (c < 908
                ? (c >= 904 && c <= 906)
                : c <= 908)
              : (c <= 929 || (c >= 931 && c <= 1013)))
            : (c <= 1153 || (c < 1376
              ? (c < 1329
                ? (c >= 1162 && c <= 1327)
                : c <= 1366)
              : (c <= 1416 || (c >= 1632 && c <= 1641)))))
          : (c <= 1785 || (c < 2790
            ? (c < 2534
              ? (c < 2406
                ? (c >= 1984 && c <= 1993)
                : c <= 2415)
              : (c <= 2543 || (c >= 2662 && c <= 2671)))
            : (c <= 2799 || (c < 3046
              ? (c >= 2918 && c <= 2927)
              : (c <= 3055 || (c >= 3174 && c <= 3183)))))))))
      : (c <= 3311 || (c < 6784
        ? (c < 4301
          ? (c < 3872
            ? (c < 3664
              ? (c < 3558
                ? (c >= 3430 && c <= 3439)
                : c <= 3567)
              : (c <= 3673 || (c >= 3792 && c <= 3801)))
            : (c <= 3881 || (c < 4256
              ? (c < 4240
                ? (c >= 4160 && c <= 4169)
                : c <= 4249)
              : (c <= 4293 || c == 4295))))
          : (c <= 4301 || (c < 6112
            ? (c < 5024
              ? (c < 4349
                ? (c >= 4304 && c <= 4346)
                : c <= 4351)
              : (c <= 5109 || (c >= 5112 && c <= 5117)))
            : (c <= 6121 || (c < 6470
              ? (c >= 6160 && c <= 6169)
              : (c <= 6479 || (c >= 6608 && c <= 6617)))))))
        : (c <= 6793 || (c < 7531
          ? (c < 7248
            ? (c < 7088
              ? (c < 6992
                ? (c >= 6800 && c <= 6809)
                : c <= 7001)
              : (c <= 7097 || (c >= 7232 && c <= 7241)))
            : (c <= 7257 || (c < 7357
              ? (c < 7312
                ? (c >= 7296 && c <= 7304)
                : c <= 7354)
              : (c <= 7359 || (c >= 7424 && c <= 7467)))))
          : (c <= 7543 || (c < 8008
            ? (c < 7960
              ? (c < 7680
                ? (c >= 7545 && c <= 7578)
                : c <= 7957)
              : (c <= 7965 || (c >= 7968 && c <= 8005)))
            : (c <= 8013 || (c < 8025
              ? (c >= 8016 && c <= 8023)
              : (c <= 8025 || c == 8027))))))))))
    : (c <= 8029 || (c < 42560
      ? (c < 8473
        ? (c < 8144
          ? (c < 8112
            ? (c < 8080
              ? (c < 8064
                ? (c >= 8031 && c <= 8061)
                : c <= 8071)
              : (c <= 8087 || (c >= 8096 && c <= 8103)))
            : (c <= 8116 || (c < 8130
              ? (c < 8126
                ? (c >= 8118 && c <= 8123)
                : c <= 8126)
              : (c <= 8132 || (c >= 8134 && c <= 8139)))))
          : (c <= 8147 || (c < 8450
            ? (c < 8178
              ? (c < 8160
                ? (c >= 8150 && c <= 8155)
                : c <= 8172)
              : (c <= 8180 || (c >= 8182 && c <= 8187)))
            : (c <= 8450 || (c < 8458
              ? c == 8455
              : (c <= 8467 || c == 8469))))))
        : (c <= 8477 || (c < 8579
          ? (c < 8495
            ? (c < 8488
              ? (c < 8486
                ? c == 8484
                : c <= 8486)
              : (c <= 8488 || (c >= 8490 && c <= 8493)))
            : (c <= 8500 || (c < 8517
              ? (c < 8508
                ? c == 8505
                : c <= 8511)
              : (c <= 8521 || c == 8526))))
          : (c <= 8580 || (c < 11520
            ? (c < 11499
              ? (c < 11390
                ? (c >= 11264 && c <= 11387)
                : c <= 11492)
              : (c <= 11502 || (c >= 11506 && c <= 11507)))
            : (c <= 11557 || (c < 11565
              ? c == 11559
              : (c <= 11565 || (c >= 42528 && c <= 42537)))))))))
      : (c <= 42605 || (c < 44016
        ? (c < 43002
          ? (c < 42896
            ? (c < 42865
              ? (c < 42786
                ? (c >= 42624 && c <= 42651)
                : c <= 42863)
              : (c <= 42887 || (c >= 42891 && c <= 42894)))
            : (c <= 42954 || (c < 42965
              ? (c < 42963
                ? (c >= 42960 && c <= 42961)
                : c <= 42963)
              : (c <= 42969 || (c >= 42997 && c <= 42998)))))
          : (c <= 43002 || (c < 43600
            ? (c < 43472
              ? (c < 43264
                ? (c >= 43216 && c <= 43225)
                : c <= 43273)
              : (c <= 43481 || (c >= 43504 && c <= 43513)))
            : (c <= 43609 || (c < 43872
              ? (c >= 43824 && c <= 43866)
              : (c <= 43880 || (c >= 43888 && c <= 43967)))))))
        : (c <= 44025 || (c < 66776
          ? (c < 65345
            ? (c < 65296
              ? (c < 64275
                ? (c >= 64256 && c <= 64262)
                : c <= 64279)
              : (c <= 65305 || (c >= 65313 && c <= 65338)))
            : (c <= 65370 || (c < 66720
              ? (c >= 66560 && c <= 66639)
              : (c <= 66729 || (c >= 66736 && c <= 66771)))))
          : (c <= 66811 || (c < 66967
            ? (c < 66956
              ? (c < 66940
                ? (c >= 66928 && c <= 66938)
                : c <= 66954)
              : (c <= 66962 || (c >= 66964 && c <= 66965)))
            : (c <= 66977 || (c < 66995
              ? (c >= 66979 && c <= 66993)
              : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))));
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
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(50);
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
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(50);
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
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 74:
      if (lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_unknown_type);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 90:
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
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
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
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
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
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
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
  [124] = {.lex_state = 1},
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
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 65},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
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
    [sym_module] = STATE(148),
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
    ACTIONS(9), 21,
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
      anon_sym_as,
      anon_sym_identity,
      anon_sym_ref,
  [35] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(15), 22,
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
      anon_sym_as,
      anon_sym_identity,
      anon_sym_ref,
  [68] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(9), 21,
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
      anon_sym_as,
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
    ACTIONS(25), 19,
      anon_sym_is,
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
  [162] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(29), 18,
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
  [191] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(33), 18,
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
  [220] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(37), 18,
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
  [249] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_end,
    ACTIONS(41), 1,
      anon_sym_import,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_datatype,
    ACTIONS(47), 1,
      anon_sym_entity,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(51), 1,
      anon_sym_event,
    ACTIONS(53), 1,
      anon_sym_structure,
    ACTIONS(55), 1,
      anon_sym_union,
    STATE(11), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [300] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_import,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_datatype,
    ACTIONS(47), 1,
      anon_sym_entity,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(51), 1,
      anon_sym_event,
    ACTIONS(53), 1,
      anon_sym_structure,
    ACTIONS(55), 1,
      anon_sym_union,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(15), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(30), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(78), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [351] = 3,
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
  [379] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_datatype,
    ACTIONS(47), 1,
      anon_sym_entity,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(51), 1,
      anon_sym_event,
    ACTIONS(53), 1,
      anon_sym_structure,
    ACTIONS(55), 1,
      anon_sym_union,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(78), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [423] = 13,
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
    STATE(28), 3,
      sym_list_of_values,
      sym_value_constructor,
      sym_simple_value,
  [469] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_datatype,
    ACTIONS(47), 1,
      anon_sym_entity,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(51), 1,
      anon_sym_event,
    ACTIONS(53), 1,
      anon_sym_structure,
    ACTIONS(55), 1,
      anon_sym_union,
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(22), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(78), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [513] = 12,
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
  [556] = 12,
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
  [599] = 11,
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
  [639] = 10,
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
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [676] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_datatype,
    ACTIONS(47), 1,
      anon_sym_entity,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(51), 1,
      anon_sym_event,
    ACTIONS(53), 1,
      anon_sym_structure,
    ACTIONS(55), 1,
      anon_sym_union,
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [713] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_datatype,
    ACTIONS(47), 1,
      anon_sym_entity,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(51), 1,
      anon_sym_event,
    ACTIONS(53), 1,
      anon_sym_structure,
    ACTIONS(55), 1,
      anon_sym_union,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [750] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_datatype,
    ACTIONS(47), 1,
      anon_sym_entity,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(51), 1,
      anon_sym_event,
    ACTIONS(53), 1,
      anon_sym_structure,
    ACTIONS(55), 1,
      anon_sym_union,
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(78), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [787] = 5,
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
  [813] = 4,
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
  [836] = 3,
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
  [856] = 3,
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
  [876] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
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
  [898] = 3,
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
  [918] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_quoted_string,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym_double,
    STATE(163), 1,
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
  [947] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      anon_sym_import,
    STATE(30), 2,
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
  [968] = 3,
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
  [987] = 3,
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
  [1006] = 4,
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
  [1026] = 3,
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
  [1044] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_is,
    STATE(79), 1,
      sym_structure_body,
    ACTIONS(171), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_is,
    STATE(55), 1,
      sym_annotation_only_body,
    ACTIONS(175), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1082] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      anon_sym_is,
    STATE(69), 1,
      sym_structure_body,
    ACTIONS(177), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1101] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      anon_sym_of,
    STATE(70), 1,
      sym_union_body,
    ACTIONS(179), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1120] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1135] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(100), 1,
      sym_identifier_reference,
    STATE(44), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(92), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1162] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_end,
    ACTIONS(191), 1,
      anon_sym_group,
    STATE(43), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(89), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1187] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      anon_sym_of,
    STATE(67), 1,
      sym_enum_body,
    ACTIONS(193), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1206] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_group,
    ACTIONS(197), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(81), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1231] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(100), 1,
      sym_identifier_reference,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(83), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1258] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_is,
    STATE(65), 1,
      sym_entity_body,
    ACTIONS(203), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1292] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_end,
    ACTIONS(209), 1,
      anon_sym_ref,
    STATE(48), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(94), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1317] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_ref,
    ACTIONS(211), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(91), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1342] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_ref,
    ACTIONS(213), 1,
      anon_sym_end,
    ACTIONS(215), 1,
      anon_sym_group,
    STATE(50), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1364] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(209), 1,
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
  [1386] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_ref,
    ACTIONS(215), 1,
      anon_sym_group,
    ACTIONS(219), 1,
      anon_sym_end,
    STATE(53), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1408] = 6,
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
  [1430] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(209), 1,
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
  [1452] = 2,
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
  [1465] = 2,
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
  [1478] = 2,
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
  [1491] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1504] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1517] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1530] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1543] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
    STATE(72), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1577] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1590] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1603] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1616] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_end,
    STATE(77), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(118), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1637] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1650] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(120), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1671] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1684] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1697] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(272), 1,
      sym_unknown_type,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(95), 1,
      sym_type_reference,
    STATE(96), 1,
      sym_identifier_reference,
    STATE(98), 1,
      sym_cardinality_expression,
  [1722] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
    STATE(72), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1743] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_end,
    STATE(68), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(116), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1764] = 2,
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
  [1777] = 2,
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
  [1790] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1803] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(112), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1824] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1837] = 2,
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
  [1850] = 2,
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
  [1863] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_group,
    ACTIONS(297), 1,
      anon_sym_end,
    STATE(87), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1881] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_is,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(109), 1,
      sym_annotation_only_body,
    ACTIONS(301), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1899] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(303), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(100), 1,
      sym_identifier_reference,
    STATE(85), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1919] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(39), 1,
      sym_import,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
  [1939] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(100), 1,
      sym_identifier_reference,
    STATE(85), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1959] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_is,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(119), 1,
      sym_annotation_only_body,
    ACTIONS(314), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1977] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_end,
    ACTIONS(321), 1,
      anon_sym_group,
    STATE(87), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1995] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(327), 1,
      anon_sym_end,
    ACTIONS(329), 1,
      anon_sym_ref,
    STATE(88), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2013] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_group,
    ACTIONS(197), 1,
      anon_sym_end,
    STATE(87), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2031] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_identifier,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
    STATE(61), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [2049] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_ref,
    ACTIONS(332), 1,
      anon_sym_end,
    STATE(88), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2067] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(100), 1,
      sym_identifier_reference,
    STATE(85), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2087] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_is,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(114), 1,
      sym_annotation_only_body,
    ACTIONS(336), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2105] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_ref,
    ACTIONS(211), 1,
      anon_sym_end,
    STATE(88), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2123] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(340), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2149] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(346), 1,
      anon_sym_DASH_GT,
    STATE(86), 1,
      sym__type_expression_from_to,
    STATE(101), 1,
      sym__type_expression_to,
    STATE(138), 1,
      sym_cardinality_expression,
  [2168] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(272), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(96), 1,
      sym_identifier_reference,
    STATE(102), 1,
      sym_type_reference,
  [2187] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2200] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_is,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_end,
    ACTIONS(356), 1,
      anon_sym_as,
    STATE(135), 1,
      sym_annotation_only_body,
  [2219] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2232] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2245] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2258] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(272), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(96), 1,
      sym_identifier_reference,
    STATE(99), 1,
      sym_type_reference,
  [2277] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_identity,
    STATE(49), 1,
      sym_identity_member,
    STATE(106), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2294] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_identity,
    STATE(51), 1,
      sym_identity_member,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2311] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(374), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2323] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(376), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2337] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2349] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      sym_identifier,
    ACTIONS(385), 1,
      anon_sym_end,
    STATE(110), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2363] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_is,
    ACTIONS(387), 1,
      sym_identifier,
    ACTIONS(389), 1,
      anon_sym_end,
    STATE(134), 1,
      sym_annotation_only_body,
  [2379] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_end,
    STATE(113), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2393] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(396), 1,
      anon_sym_end,
    STATE(113), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2407] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2419] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2431] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_end,
    STATE(110), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2445] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_is,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_end,
    STATE(136), 1,
      sym_annotation_only_body,
  [2461] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_end,
    STATE(113), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2475] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(412), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2487] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(414), 1,
      anon_sym_end,
    STATE(110), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2501] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(418), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2513] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 2,
      anon_sym_end,
      anon_sym_group,
  [2524] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      anon_sym_DOT_DOT,
    STATE(168), 1,
      sym_cardinality_range,
  [2537] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(108), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2548] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(36), 1,
      sym_identifier_reference,
  [2561] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(35), 1,
      sym_identifier_reference,
  [2574] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(432), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2585] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      sym_identifier,
    ACTIONS(436), 2,
      anon_sym_end,
      anon_sym_group,
  [2596] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_base,
    ACTIONS(440), 1,
      anon_sym_is,
    STATE(158), 1,
      sym_module_body,
  [2609] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(157), 1,
      sym_identifier_reference,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(444), 2,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [2633] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(448), 2,
      anon_sym_end,
      anon_sym_group,
  [2644] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      anon_sym_is,
    STATE(166), 1,
      sym_module_body,
  [2654] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_end,
  [2664] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(456), 1,
      anon_sym_end,
  [2674] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(460), 1,
      anon_sym_end,
  [2684] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      anon_sym_DASH_GT,
    STATE(93), 1,
      sym__type_expression,
  [2694] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      anon_sym_DASH_GT,
    STATE(103), 1,
      sym__type_expression_to,
  [2704] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      anon_sym_DASH_GT,
    STATE(82), 1,
      sym__type_expression_to,
  [2714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(69), 1,
      anon_sym_LT,
    STATE(133), 1,
      sym_iri_reference,
  [2724] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(464), 1,
      sym_unsigned,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(468), 1,
      sym_identifier,
  [2741] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      sym_identifier,
  [2748] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_source,
  [2755] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(474), 1,
      sym_identifier,
  [2762] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_LT_DASH,
  [2769] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      sym_identifier,
  [2776] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
  [2783] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 1,
      sym_identifier,
  [2790] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      sym_unsigned,
  [2797] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 1,
      sym_identifier,
  [2804] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [2811] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      sym_identifier,
  [2818] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      anon_sym_GT,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
  [2832] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      sym_identifier,
  [2839] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(498), 1,
      anon_sym_EQ,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
  [2853] = 2,
    ACTIONS(502), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(504), 1,
      sym_line_comment,
  [2860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      sym_identifier,
  [2867] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(508), 1,
      sym_identifier,
  [2874] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(510), 1,
      anon_sym_EQ,
  [2881] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [2888] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
  [2895] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(516), 1,
      sym_identifier,
  [2902] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
  [2909] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(526), 1,
      sym_unsigned,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 249,
  [SMALL_STATE(11)] = 300,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 379,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 469,
  [SMALL_STATE(16)] = 513,
  [SMALL_STATE(17)] = 556,
  [SMALL_STATE(18)] = 599,
  [SMALL_STATE(19)] = 639,
  [SMALL_STATE(20)] = 676,
  [SMALL_STATE(21)] = 713,
  [SMALL_STATE(22)] = 750,
  [SMALL_STATE(23)] = 787,
  [SMALL_STATE(24)] = 813,
  [SMALL_STATE(25)] = 836,
  [SMALL_STATE(26)] = 856,
  [SMALL_STATE(27)] = 876,
  [SMALL_STATE(28)] = 898,
  [SMALL_STATE(29)] = 918,
  [SMALL_STATE(30)] = 947,
  [SMALL_STATE(31)] = 968,
  [SMALL_STATE(32)] = 987,
  [SMALL_STATE(33)] = 1006,
  [SMALL_STATE(34)] = 1026,
  [SMALL_STATE(35)] = 1044,
  [SMALL_STATE(36)] = 1063,
  [SMALL_STATE(37)] = 1082,
  [SMALL_STATE(38)] = 1101,
  [SMALL_STATE(39)] = 1120,
  [SMALL_STATE(40)] = 1135,
  [SMALL_STATE(41)] = 1162,
  [SMALL_STATE(42)] = 1187,
  [SMALL_STATE(43)] = 1206,
  [SMALL_STATE(44)] = 1231,
  [SMALL_STATE(45)] = 1258,
  [SMALL_STATE(46)] = 1277,
  [SMALL_STATE(47)] = 1292,
  [SMALL_STATE(48)] = 1317,
  [SMALL_STATE(49)] = 1342,
  [SMALL_STATE(50)] = 1364,
  [SMALL_STATE(51)] = 1386,
  [SMALL_STATE(52)] = 1408,
  [SMALL_STATE(53)] = 1430,
  [SMALL_STATE(54)] = 1452,
  [SMALL_STATE(55)] = 1465,
  [SMALL_STATE(56)] = 1478,
  [SMALL_STATE(57)] = 1491,
  [SMALL_STATE(58)] = 1504,
  [SMALL_STATE(59)] = 1517,
  [SMALL_STATE(60)] = 1530,
  [SMALL_STATE(61)] = 1543,
  [SMALL_STATE(62)] = 1564,
  [SMALL_STATE(63)] = 1577,
  [SMALL_STATE(64)] = 1590,
  [SMALL_STATE(65)] = 1603,
  [SMALL_STATE(66)] = 1616,
  [SMALL_STATE(67)] = 1637,
  [SMALL_STATE(68)] = 1650,
  [SMALL_STATE(69)] = 1671,
  [SMALL_STATE(70)] = 1684,
  [SMALL_STATE(71)] = 1697,
  [SMALL_STATE(72)] = 1722,
  [SMALL_STATE(73)] = 1743,
  [SMALL_STATE(74)] = 1764,
  [SMALL_STATE(75)] = 1777,
  [SMALL_STATE(76)] = 1790,
  [SMALL_STATE(77)] = 1803,
  [SMALL_STATE(78)] = 1824,
  [SMALL_STATE(79)] = 1837,
  [SMALL_STATE(80)] = 1850,
  [SMALL_STATE(81)] = 1863,
  [SMALL_STATE(82)] = 1881,
  [SMALL_STATE(83)] = 1899,
  [SMALL_STATE(84)] = 1919,
  [SMALL_STATE(85)] = 1939,
  [SMALL_STATE(86)] = 1959,
  [SMALL_STATE(87)] = 1977,
  [SMALL_STATE(88)] = 1995,
  [SMALL_STATE(89)] = 2013,
  [SMALL_STATE(90)] = 2031,
  [SMALL_STATE(91)] = 2049,
  [SMALL_STATE(92)] = 2067,
  [SMALL_STATE(93)] = 2087,
  [SMALL_STATE(94)] = 2105,
  [SMALL_STATE(95)] = 2123,
  [SMALL_STATE(96)] = 2136,
  [SMALL_STATE(97)] = 2149,
  [SMALL_STATE(98)] = 2168,
  [SMALL_STATE(99)] = 2187,
  [SMALL_STATE(100)] = 2200,
  [SMALL_STATE(101)] = 2219,
  [SMALL_STATE(102)] = 2232,
  [SMALL_STATE(103)] = 2245,
  [SMALL_STATE(104)] = 2258,
  [SMALL_STATE(105)] = 2277,
  [SMALL_STATE(106)] = 2294,
  [SMALL_STATE(107)] = 2311,
  [SMALL_STATE(108)] = 2323,
  [SMALL_STATE(109)] = 2337,
  [SMALL_STATE(110)] = 2349,
  [SMALL_STATE(111)] = 2363,
  [SMALL_STATE(112)] = 2379,
  [SMALL_STATE(113)] = 2393,
  [SMALL_STATE(114)] = 2407,
  [SMALL_STATE(115)] = 2419,
  [SMALL_STATE(116)] = 2431,
  [SMALL_STATE(117)] = 2445,
  [SMALL_STATE(118)] = 2461,
  [SMALL_STATE(119)] = 2475,
  [SMALL_STATE(120)] = 2487,
  [SMALL_STATE(121)] = 2501,
  [SMALL_STATE(122)] = 2513,
  [SMALL_STATE(123)] = 2524,
  [SMALL_STATE(124)] = 2537,
  [SMALL_STATE(125)] = 2548,
  [SMALL_STATE(126)] = 2561,
  [SMALL_STATE(127)] = 2574,
  [SMALL_STATE(128)] = 2585,
  [SMALL_STATE(129)] = 2596,
  [SMALL_STATE(130)] = 2609,
  [SMALL_STATE(131)] = 2622,
  [SMALL_STATE(132)] = 2633,
  [SMALL_STATE(133)] = 2644,
  [SMALL_STATE(134)] = 2654,
  [SMALL_STATE(135)] = 2664,
  [SMALL_STATE(136)] = 2674,
  [SMALL_STATE(137)] = 2684,
  [SMALL_STATE(138)] = 2694,
  [SMALL_STATE(139)] = 2704,
  [SMALL_STATE(140)] = 2714,
  [SMALL_STATE(141)] = 2724,
  [SMALL_STATE(142)] = 2734,
  [SMALL_STATE(143)] = 2741,
  [SMALL_STATE(144)] = 2748,
  [SMALL_STATE(145)] = 2755,
  [SMALL_STATE(146)] = 2762,
  [SMALL_STATE(147)] = 2769,
  [SMALL_STATE(148)] = 2776,
  [SMALL_STATE(149)] = 2783,
  [SMALL_STATE(150)] = 2790,
  [SMALL_STATE(151)] = 2797,
  [SMALL_STATE(152)] = 2804,
  [SMALL_STATE(153)] = 2811,
  [SMALL_STATE(154)] = 2818,
  [SMALL_STATE(155)] = 2825,
  [SMALL_STATE(156)] = 2832,
  [SMALL_STATE(157)] = 2839,
  [SMALL_STATE(158)] = 2846,
  [SMALL_STATE(159)] = 2853,
  [SMALL_STATE(160)] = 2860,
  [SMALL_STATE(161)] = 2867,
  [SMALL_STATE(162)] = 2874,
  [SMALL_STATE(163)] = 2881,
  [SMALL_STATE(164)] = 2888,
  [SMALL_STATE(165)] = 2895,
  [SMALL_STATE(166)] = 2902,
  [SMALL_STATE(167)] = 2909,
  [SMALL_STATE(168)] = 2916,
  [SMALL_STATE(169)] = 2923,
  [SMALL_STATE(170)] = 2930,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 9),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(159),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(147),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(151),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(142),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(145),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(149),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(153),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(130),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 6),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(84),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 2, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(139),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(47),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(143),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 15),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 15),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 10),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 3, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(27),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 10),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_union_body_repeat1, 2), SHIFT_REPEAT(2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_body_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 22),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 22),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(139),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(73),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(139),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(143),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 21),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 21),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 24),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 24),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 27),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 27),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 18),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 18),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(139),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 3, .production_id = 19),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 3, .production_id = 19),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(162),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 20),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 20),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 26),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 26),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 28),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 28),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 28),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 28),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 4, .production_id = 25),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 4, .production_id = 25),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 2, .production_id = 13),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 2, .production_id = 13),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [480] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 29),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
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
