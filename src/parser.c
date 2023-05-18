#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  anon_sym_group = 18,
  anon_sym_structure = 19,
  anon_sym_event = 20,
  anon_sym_source = 21,
  anon_sym_enum = 22,
  anon_sym_datatype = 23,
  anon_sym_identity = 24,
  anon_sym_ref = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  sym_quoted_string = 28,
  sym_language_tag = 29,
  anon_sym_LT = 30,
  aux_sym_iri_reference_token1 = 31,
  anon_sym_GT = 32,
  sym_double = 33,
  sym_decimal = 34,
  sym_integer = 35,
  sym_unsigned = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  sym_line_comment = 39,
  sym_module = 40,
  sym_module_body = 41,
  sym_import = 42,
  sym__single_import = 43,
  sym_member_import = 44,
  sym_module_import = 45,
  sym_qualified_identifier = 46,
  sym_identifier_reference = 47,
  sym_annotation_only_body = 48,
  sym_annotation = 49,
  sym__type_expression = 50,
  sym__type_restriction = 51,
  sym__type_expression_to = 52,
  sym__type_expression_from_to = 53,
  sym_cardinality_expression = 54,
  sym__type_def = 55,
  sym_entity_def = 56,
  sym_entity_group = 57,
  sym_entity_body = 58,
  sym_structure_def = 59,
  sym_structure_group = 60,
  sym_structure_body = 61,
  sym_event_def = 62,
  sym_enum_def = 63,
  sym_enum_body = 64,
  sym_enum_variant = 65,
  sym_data_type_def = 66,
  sym_identity_member = 67,
  sym_member_by_value = 68,
  sym_member_by_reference = 69,
  sym_value = 70,
  sym_list_of_values = 71,
  sym_value_constructor = 72,
  sym__simple_value = 73,
  sym_string = 74,
  sym_iri_reference = 75,
  sym_boolean = 76,
  aux_sym_module_body_repeat1 = 77,
  aux_sym_module_body_repeat2 = 78,
  aux_sym_module_body_repeat3 = 79,
  aux_sym_import_repeat1 = 80,
  aux_sym_entity_group_repeat1 = 81,
  aux_sym_entity_body_repeat1 = 82,
  aux_sym_structure_group_repeat1 = 83,
  aux_sym_structure_body_repeat1 = 84,
  aux_sym_enum_body_repeat1 = 85,
  aux_sym_list_of_values_repeat1 = 86,
  aux_sym_list_of_values_repeat2 = 87,
  aux_sym_list_of_values_repeat3 = 88,
  aux_sym_list_of_values_repeat4 = 89,
  aux_sym_list_of_values_repeat5 = 90,
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
  [anon_sym_group] = "group",
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
  [aux_sym_entity_group_repeat1] = "entity_group_repeat1",
  [aux_sym_entity_body_repeat1] = "entity_body_repeat1",
  [aux_sym_structure_group_repeat1] = "structure_group_repeat1",
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
  [anon_sym_group] = anon_sym_group,
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
  [aux_sym_entity_group_repeat1] = aux_sym_entity_group_repeat1,
  [aux_sym_entity_body_repeat1] = aux_sym_entity_body_repeat1,
  [aux_sym_structure_group_repeat1] = aux_sym_structure_group_repeat1,
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
      if (lookahead == 'g') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(6);
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
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
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
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(30);
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
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(44);
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
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 52:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 75:
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
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
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
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
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
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
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
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 72},
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
  [161] = {.lex_state = 13},
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
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
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
    [sym_module] = STATE(156),
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
    STATE(11), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(64), 5,
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
    STATE(31), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    STATE(64), 5,
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
    STATE(21), 1,
      sym_qualified_identifier,
    STATE(24), 1,
      sym_value,
    STATE(152), 1,
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
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(14), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(64), 5,
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
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(15), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(64), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [218] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 14,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
      anon_sym_LT,
  [241] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 14,
      anon_sym_is,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
      anon_sym_LPAREN,
  [264] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      sym_language_tag,
    ACTIONS(49), 2,
      sym_identifier,
      anon_sym_AT,
    ACTIONS(51), 12,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
      sym_quoted_string,
  [289] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 13,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
      anon_sym_RPAREN,
      sym_quoted_string,
  [311] = 9,
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
    STATE(18), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(64), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [344] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(61), 11,
      anon_sym_is,
      anon_sym_end,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
      anon_sym_LPAREN,
  [367] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_AT,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(67), 9,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_identity,
      anon_sym_ref,
  [392] = 9,
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
    STATE(18), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(64), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [425] = 9,
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
    ACTIONS(72), 1,
      anon_sym_end,
    STATE(18), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(64), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [458] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_end,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(80), 1,
      anon_sym_identity,
    ACTIONS(82), 1,
      anon_sym_ref,
    STATE(38), 1,
      sym_identity_member,
    STATE(17), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(46), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [493] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(80), 1,
      anon_sym_identity,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(84), 1,
      anon_sym_end,
    STATE(43), 1,
      sym_identity_member,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(42), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [528] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_end,
    ACTIONS(88), 1,
      anon_sym_entity,
    ACTIONS(91), 1,
      anon_sym_structure,
    ACTIONS(94), 1,
      anon_sym_event,
    ACTIONS(97), 1,
      anon_sym_enum,
    ACTIONS(100), 1,
      anon_sym_datatype,
    STATE(18), 2,
      sym__type_def,
      aux_sym_module_body_repeat3,
    STATE(64), 5,
      sym_entity_def,
      sym_structure_def,
      sym_event_def,
      sym_enum_def,
      sym_data_type_def,
  [561] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 11,
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
      anon_sym_RPAREN,
  [581] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_from,
    ACTIONS(109), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [605] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 11,
      anon_sym_is,
      anon_sym_end,
      anon_sym_EQ,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
      anon_sym_LPAREN,
  [625] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(113), 1,
      sym_double,
    ACTIONS(115), 1,
      sym_decimal,
    ACTIONS(117), 1,
      sym_integer,
    STATE(114), 1,
      aux_sym_list_of_values_repeat4,
    STATE(117), 1,
      aux_sym_list_of_values_repeat2,
    STATE(119), 1,
      aux_sym_list_of_values_repeat3,
    STATE(98), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
    STATE(99), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
  [661] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 10,
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
  [680] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 10,
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
  [699] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 10,
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
  [718] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(131), 1,
      sym_double,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(133), 2,
      sym_decimal,
      sym_integer,
    STATE(160), 4,
      sym__simple_value,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [745] = 3,
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
  [764] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 9,
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
  [800] = 3,
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
  [818] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      anon_sym_import,
    STATE(31), 2,
      sym_import,
      aux_sym_module_body_repeat1,
    ACTIONS(151), 7,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [838] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_end,
    ACTIONS(158), 1,
      anon_sym_group,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(57), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [863] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(160), 1,
      anon_sym_end,
    STATE(35), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(77), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [888] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_group,
    ACTIONS(162), 1,
      anon_sym_end,
    STATE(32), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(56), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [913] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(164), 1,
      anon_sym_end,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(66), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [938] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 8,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
      anon_sym_ref,
  [955] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_is,
    STATE(75), 1,
      sym_structure_body,
    ACTIONS(172), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [973] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(174), 1,
      anon_sym_end,
    STATE(44), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [995] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      anon_sym_is,
    STATE(76), 1,
      sym_enum_body,
    ACTIONS(178), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1013] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_end,
    ACTIONS(185), 1,
      anon_sym_group,
    ACTIONS(188), 1,
      anon_sym_ref,
    STATE(40), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1035] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(191), 1,
      anon_sym_end,
    STATE(40), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1057] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(193), 1,
      anon_sym_end,
    STATE(40), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1079] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(195), 1,
      anon_sym_end,
    STATE(41), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1101] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(197), 1,
      anon_sym_end,
    STATE(40), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1123] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_is,
    STATE(68), 1,
      sym_structure_body,
    ACTIONS(199), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1141] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_group,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(84), 1,
      anon_sym_end,
    STATE(40), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1163] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_is,
    STATE(82), 1,
      sym_annotation_only_body,
    ACTIONS(203), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1181] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1195] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(207), 8,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1209] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 1,
      anon_sym_is,
    STATE(84), 1,
      sym_entity_body,
    ACTIONS(211), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1227] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_end,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(104), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1248] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(28), 2,
      sym_member_import,
      sym_module_import,
    STATE(55), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 7,
      anon_sym_is,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1282] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_end,
    STATE(51), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(100), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1303] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(28), 2,
      sym_member_import,
      sym_module_import,
    STATE(55), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1324] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_end,
    ACTIONS(158), 1,
      anon_sym_group,
    STATE(71), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1342] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_group,
    ACTIONS(228), 1,
      anon_sym_end,
    STATE(71), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1360] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(96), 1,
      sym_annotation_only_body,
    ACTIONS(232), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1390] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1402] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1414] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_end,
    ACTIONS(245), 1,
      anon_sym_ref,
    STATE(62), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1432] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(28), 2,
      sym_member_import,
      sym_module_import,
    STATE(52), 2,
      sym__single_import,
      aux_sym_import_repeat1,
  [1450] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1474] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(252), 1,
      anon_sym_end,
    STATE(62), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1504] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1516] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1540] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_end,
    ACTIONS(267), 1,
      anon_sym_group,
    STATE(71), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1558] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1570] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(109), 1,
      sym_annotation_only_body,
    ACTIONS(274), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1588] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1600] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1612] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1624] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_ref,
    ACTIONS(164), 1,
      anon_sym_end,
    STATE(62), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1642] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(282), 1,
      sym_identifier,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(105), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1660] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(284), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1672] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(282), 1,
      sym_identifier,
    STATE(78), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(102), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1690] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(288), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1714] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1726] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 6,
      anon_sym_end,
      anon_sym_entity,
      anon_sym_structure,
      anon_sym_event,
      anon_sym_enum,
      anon_sym_datatype,
  [1738] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_qualified_identifier,
    STATE(48), 1,
      sym__single_import,
    STATE(28), 2,
      sym_member_import,
      sym_module_import,
  [1758] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(94), 1,
      sym_annotation_only_body,
    ACTIONS(298), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1776] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_qualified_identifier,
    STATE(89), 1,
      sym_identifier_reference,
    STATE(126), 1,
      sym_cardinality_expression,
  [1795] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1808] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(310), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1821] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DASH_GT,
    STATE(73), 1,
      sym__type_expression_from_to,
    STATE(92), 1,
      sym__type_expression_to,
    STATE(136), 1,
      sym_cardinality_expression,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(316), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1853] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(320), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1866] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(324), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(328), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1891] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1903] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1915] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    ACTIONS(340), 1,
      anon_sym_LT,
    STATE(97), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [1929] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(97), 2,
      sym_iri_reference,
      aux_sym_list_of_values_repeat5,
  [1943] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      sym_quoted_string,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(111), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
  [1957] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_end,
    STATE(103), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1971] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(347), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [1983] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_end,
    STATE(107), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1997] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_end,
    STATE(103), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2011] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(358), 1,
      anon_sym_end,
    STATE(103), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2025] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(360), 1,
      anon_sym_end,
    STATE(107), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2039] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(364), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2051] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_end,
    STATE(107), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2065] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
      anon_sym_end,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2079] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(375), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2091] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_end,
    STATE(127), 1,
      sym_annotation_only_body,
  [2107] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    ACTIONS(383), 1,
      sym_quoted_string,
    STATE(111), 2,
      sym_string,
      aux_sym_list_of_values_repeat1,
  [2121] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_AT,
    STATE(108), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2132] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 2,
      anon_sym_end,
      anon_sym_group,
  [2143] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    ACTIONS(390), 1,
      sym_integer,
    STATE(122), 1,
      aux_sym_list_of_values_repeat4,
  [2156] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(21), 1,
      sym_qualified_identifier,
    STATE(45), 1,
      sym_identifier_reference,
  [2169] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(21), 1,
      sym_qualified_identifier,
    STATE(53), 1,
      sym_identifier_reference,
  [2182] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    ACTIONS(392), 1,
      sym_double,
    STATE(120), 1,
      aux_sym_list_of_values_repeat2,
  [2195] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 1,
      sym_identifier,
    ACTIONS(396), 2,
      anon_sym_end,
      anon_sym_group,
  [2206] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    ACTIONS(398), 1,
      sym_decimal,
    STATE(121), 1,
      aux_sym_list_of_values_repeat3,
  [2219] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
    ACTIONS(402), 1,
      sym_double,
    STATE(120), 1,
      aux_sym_list_of_values_repeat2,
  [2232] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    ACTIONS(407), 1,
      sym_decimal,
    STATE(121), 1,
      aux_sym_list_of_values_repeat3,
  [2245] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    ACTIONS(412), 1,
      sym_integer,
    STATE(122), 1,
      aux_sym_list_of_values_repeat4,
  [2258] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(21), 1,
      sym_qualified_identifier,
    STATE(88), 1,
      sym_identifier_reference,
  [2271] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(21), 1,
      sym_qualified_identifier,
    STATE(145), 1,
      sym_identifier_reference,
  [2284] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(417), 2,
      anon_sym_end,
      anon_sym_group,
  [2295] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(21), 1,
      sym_qualified_identifier,
    STATE(91), 1,
      sym_identifier_reference,
  [2308] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_end,
  [2318] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
    STATE(30), 1,
      sym_iri_reference,
  [2328] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      anon_sym_is,
    STATE(154), 1,
      sym_module_body,
  [2338] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    ACTIONS(427), 1,
      sym_unsigned,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      anon_sym_DASH_GT,
    STATE(86), 1,
      sym__type_expression_to,
  [2358] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_DOT_DOT,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(435), 1,
      anon_sym_LT_DASH,
    STATE(47), 1,
      sym__type_restriction,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      anon_sym_DASH_GT,
    STATE(58), 1,
      sym__type_expression,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      anon_sym_DASH_GT,
    STATE(93), 1,
      sym__type_expression_to,
  [2406] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2414] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(441), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(443), 1,
      sym_unsigned,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(445), 1,
      sym_identifier,
  [2436] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      anon_sym_GT,
  [2443] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
  [2457] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_source,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(455), 1,
      anon_sym_EQ,
  [2471] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(459), 1,
      sym_identifier,
  [2485] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(461), 1,
      sym_identifier,
  [2492] = 2,
    ACTIONS(463), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(465), 1,
      sym_line_comment,
  [2499] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [2506] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [2513] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
  [2520] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
  [2527] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      sym_identifier,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      sym_identifier,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_EQ,
  [2562] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(485), 1,
      sym_identifier,
  [2569] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [2576] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(489), 1,
      sym_unsigned,
  [2583] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [2590] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(493), 1,
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
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 344,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 425,
  [SMALL_STATE(16)] = 458,
  [SMALL_STATE(17)] = 493,
  [SMALL_STATE(18)] = 528,
  [SMALL_STATE(19)] = 561,
  [SMALL_STATE(20)] = 581,
  [SMALL_STATE(21)] = 605,
  [SMALL_STATE(22)] = 625,
  [SMALL_STATE(23)] = 661,
  [SMALL_STATE(24)] = 680,
  [SMALL_STATE(25)] = 699,
  [SMALL_STATE(26)] = 718,
  [SMALL_STATE(27)] = 745,
  [SMALL_STATE(28)] = 764,
  [SMALL_STATE(29)] = 782,
  [SMALL_STATE(30)] = 800,
  [SMALL_STATE(31)] = 818,
  [SMALL_STATE(32)] = 838,
  [SMALL_STATE(33)] = 863,
  [SMALL_STATE(34)] = 888,
  [SMALL_STATE(35)] = 913,
  [SMALL_STATE(36)] = 938,
  [SMALL_STATE(37)] = 955,
  [SMALL_STATE(38)] = 973,
  [SMALL_STATE(39)] = 995,
  [SMALL_STATE(40)] = 1013,
  [SMALL_STATE(41)] = 1035,
  [SMALL_STATE(42)] = 1057,
  [SMALL_STATE(43)] = 1079,
  [SMALL_STATE(44)] = 1101,
  [SMALL_STATE(45)] = 1123,
  [SMALL_STATE(46)] = 1141,
  [SMALL_STATE(47)] = 1163,
  [SMALL_STATE(48)] = 1181,
  [SMALL_STATE(49)] = 1195,
  [SMALL_STATE(50)] = 1209,
  [SMALL_STATE(51)] = 1227,
  [SMALL_STATE(52)] = 1248,
  [SMALL_STATE(53)] = 1269,
  [SMALL_STATE(54)] = 1282,
  [SMALL_STATE(55)] = 1303,
  [SMALL_STATE(56)] = 1324,
  [SMALL_STATE(57)] = 1342,
  [SMALL_STATE(58)] = 1360,
  [SMALL_STATE(59)] = 1378,
  [SMALL_STATE(60)] = 1390,
  [SMALL_STATE(61)] = 1402,
  [SMALL_STATE(62)] = 1414,
  [SMALL_STATE(63)] = 1432,
  [SMALL_STATE(64)] = 1450,
  [SMALL_STATE(65)] = 1462,
  [SMALL_STATE(66)] = 1474,
  [SMALL_STATE(67)] = 1492,
  [SMALL_STATE(68)] = 1504,
  [SMALL_STATE(69)] = 1516,
  [SMALL_STATE(70)] = 1528,
  [SMALL_STATE(71)] = 1540,
  [SMALL_STATE(72)] = 1558,
  [SMALL_STATE(73)] = 1570,
  [SMALL_STATE(74)] = 1588,
  [SMALL_STATE(75)] = 1600,
  [SMALL_STATE(76)] = 1612,
  [SMALL_STATE(77)] = 1624,
  [SMALL_STATE(78)] = 1642,
  [SMALL_STATE(79)] = 1660,
  [SMALL_STATE(80)] = 1672,
  [SMALL_STATE(81)] = 1690,
  [SMALL_STATE(82)] = 1702,
  [SMALL_STATE(83)] = 1714,
  [SMALL_STATE(84)] = 1726,
  [SMALL_STATE(85)] = 1738,
  [SMALL_STATE(86)] = 1758,
  [SMALL_STATE(87)] = 1776,
  [SMALL_STATE(88)] = 1795,
  [SMALL_STATE(89)] = 1808,
  [SMALL_STATE(90)] = 1821,
  [SMALL_STATE(91)] = 1840,
  [SMALL_STATE(92)] = 1853,
  [SMALL_STATE(93)] = 1866,
  [SMALL_STATE(94)] = 1879,
  [SMALL_STATE(95)] = 1891,
  [SMALL_STATE(96)] = 1903,
  [SMALL_STATE(97)] = 1915,
  [SMALL_STATE(98)] = 1929,
  [SMALL_STATE(99)] = 1943,
  [SMALL_STATE(100)] = 1957,
  [SMALL_STATE(101)] = 1971,
  [SMALL_STATE(102)] = 1983,
  [SMALL_STATE(103)] = 1997,
  [SMALL_STATE(104)] = 2011,
  [SMALL_STATE(105)] = 2025,
  [SMALL_STATE(106)] = 2039,
  [SMALL_STATE(107)] = 2051,
  [SMALL_STATE(108)] = 2065,
  [SMALL_STATE(109)] = 2079,
  [SMALL_STATE(110)] = 2091,
  [SMALL_STATE(111)] = 2107,
  [SMALL_STATE(112)] = 2121,
  [SMALL_STATE(113)] = 2132,
  [SMALL_STATE(114)] = 2143,
  [SMALL_STATE(115)] = 2156,
  [SMALL_STATE(116)] = 2169,
  [SMALL_STATE(117)] = 2182,
  [SMALL_STATE(118)] = 2195,
  [SMALL_STATE(119)] = 2206,
  [SMALL_STATE(120)] = 2219,
  [SMALL_STATE(121)] = 2232,
  [SMALL_STATE(122)] = 2245,
  [SMALL_STATE(123)] = 2258,
  [SMALL_STATE(124)] = 2271,
  [SMALL_STATE(125)] = 2284,
  [SMALL_STATE(126)] = 2295,
  [SMALL_STATE(127)] = 2308,
  [SMALL_STATE(128)] = 2318,
  [SMALL_STATE(129)] = 2328,
  [SMALL_STATE(130)] = 2338,
  [SMALL_STATE(131)] = 2348,
  [SMALL_STATE(132)] = 2358,
  [SMALL_STATE(133)] = 2366,
  [SMALL_STATE(134)] = 2376,
  [SMALL_STATE(135)] = 2386,
  [SMALL_STATE(136)] = 2396,
  [SMALL_STATE(137)] = 2406,
  [SMALL_STATE(138)] = 2414,
  [SMALL_STATE(139)] = 2422,
  [SMALL_STATE(140)] = 2429,
  [SMALL_STATE(141)] = 2436,
  [SMALL_STATE(142)] = 2443,
  [SMALL_STATE(143)] = 2450,
  [SMALL_STATE(144)] = 2457,
  [SMALL_STATE(145)] = 2464,
  [SMALL_STATE(146)] = 2471,
  [SMALL_STATE(147)] = 2478,
  [SMALL_STATE(148)] = 2485,
  [SMALL_STATE(149)] = 2492,
  [SMALL_STATE(150)] = 2499,
  [SMALL_STATE(151)] = 2506,
  [SMALL_STATE(152)] = 2513,
  [SMALL_STATE(153)] = 2520,
  [SMALL_STATE(154)] = 2527,
  [SMALL_STATE(155)] = 2534,
  [SMALL_STATE(156)] = 2541,
  [SMALL_STATE(157)] = 2548,
  [SMALL_STATE(158)] = 2555,
  [SMALL_STATE(159)] = 2562,
  [SMALL_STATE(160)] = 2569,
  [SMALL_STATE(161)] = 2576,
  [SMALL_STATE(162)] = 2583,
  [SMALL_STATE(163)] = 2590,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 6),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 6),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 11),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 11),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(124),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(151),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(150),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(148),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(147),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(146),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 21),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 21),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_import, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_import, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(85),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 3),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(131),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(33),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(157),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 3, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_restriction, 2, .production_id = 9),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(20),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 17),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 17),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 20),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(131),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(157),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_def, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 14),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 13),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(131),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(54),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 19),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 19),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 13),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 10),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 20),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 15),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 15),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 15),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 15),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 22),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 22),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 18),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 18),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 25),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 25),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 16),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 16),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 23),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 23),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat5, 2), SHIFT_REPEAT(149),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(131),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(158),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 24),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 24),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 21),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 21),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat2, 2), SHIFT_REPEAT(120),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat3, 2), SHIFT_REPEAT(121),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat4, 2), SHIFT_REPEAT(122),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 27),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 27),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 5, .production_id = 28),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [479] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
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
