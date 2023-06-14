#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 173
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  anon_sym_string = 14,
  anon_sym_double = 15,
  anon_sym_decimal = 16,
  anon_sym_integer = 17,
  anon_sym_boolean = 18,
  anon_sym_iri = 19,
  sym_quoted_string = 20,
  sym_language_tag = 21,
  anon_sym_LT = 22,
  aux_sym_iri_reference_token1 = 23,
  anon_sym_GT = 24,
  sym_double = 25,
  sym_decimal = 26,
  sym_integer = 27,
  sym_unsigned = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  anon_sym_datatype = 31,
  anon_sym_LT_DASH = 32,
  anon_sym_entity = 33,
  anon_sym_group = 34,
  anon_sym_enum = 35,
  anon_sym_of = 36,
  anon_sym_event = 37,
  anon_sym_source = 38,
  anon_sym_structure = 39,
  anon_sym_union = 40,
  anon_sym_as = 41,
  anon_sym_identity = 42,
  anon_sym_ref = 43,
  anon_sym_DASH_GT = 44,
  sym_unknown_type = 45,
  anon_sym_LBRACE = 46,
  anon_sym_RBRACE = 47,
  anon_sym_DOT_DOT = 48,
  sym_line_comment = 49,
  sym_module = 50,
  sym_module_body = 51,
  sym_import_statement = 52,
  sym_import = 53,
  sym_member_import = 54,
  sym_module_import = 55,
  sym_qualified_identifier = 56,
  sym_identifier_reference = 57,
  sym_annotation = 58,
  sym_value = 59,
  sym_list_of_values = 60,
  sym_value_constructor = 61,
  sym_builtin_simple_type = 62,
  sym_simple_value = 63,
  sym_string = 64,
  sym_iri_reference = 65,
  sym_boolean = 66,
  sym_type_def = 67,
  sym_data_type_def = 68,
  sym_data_type_base = 69,
  sym_annotation_only_body = 70,
  sym_entity_def = 71,
  sym_entity_group = 72,
  sym_entity_body = 73,
  sym_enum_def = 74,
  sym_enum_body = 75,
  sym_enum_variant = 76,
  sym_event_def = 77,
  sym_structure_def = 78,
  sym_structure_group = 79,
  sym_structure_body = 80,
  sym_union_def = 81,
  sym_union_body = 82,
  sym_type_variant = 83,
  sym_identity_member = 84,
  sym_member_by_value = 85,
  sym_member_by_reference = 86,
  sym__type_expression = 87,
  sym__type_expression_to = 88,
  sym__type_expression_from_to = 89,
  sym_type_reference = 90,
  sym_cardinality_expression = 91,
  sym_cardinality_range = 92,
  aux_sym_module_body_repeat1 = 93,
  aux_sym_module_body_repeat2 = 94,
  aux_sym_module_body_repeat3 = 95,
  aux_sym_import_statement_repeat1 = 96,
  aux_sym_list_of_values_repeat1 = 97,
  aux_sym_entity_group_repeat1 = 98,
  aux_sym_entity_body_repeat1 = 99,
  aux_sym_enum_body_repeat1 = 100,
  aux_sym_structure_group_repeat1 = 101,
  aux_sym_structure_body_repeat1 = 102,
  aux_sym_union_body_repeat1 = 103,
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
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_decimal] = "decimal",
  [anon_sym_integer] = "integer",
  [anon_sym_boolean] = "boolean",
  [anon_sym_iri] = "iri",
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
  [sym_builtin_simple_type] = "builtin_simple_type",
  [sym_simple_value] = "simple_value",
  [sym_string] = "string",
  [sym_iri_reference] = "iri_reference",
  [sym_boolean] = "boolean",
  [sym_type_def] = "type_def",
  [sym_data_type_def] = "data_type_def",
  [sym_data_type_base] = "data_type_base",
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
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_iri] = anon_sym_iri,
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
  [sym_builtin_simple_type] = sym_builtin_simple_type,
  [sym_simple_value] = sym_simple_value,
  [sym_string] = sym_string,
  [sym_iri_reference] = sym_iri_reference,
  [sym_boolean] = sym_boolean,
  [sym_type_def] = sym_type_def,
  [sym_data_type_def] = sym_data_type_def,
  [sym_data_type_base] = sym_data_type_base,
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
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iri] = {
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
  [sym_builtin_simple_type] = {
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
  [sym_data_type_base] = {
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
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
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
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_iri);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 94:
      if (lookahead == 'w') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_unknown_type);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 118:
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
  [6] = {.lex_state = 3},
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
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
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
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
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
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
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
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 65},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
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
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_iri] = ACTIONS(1),
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
    [sym_module] = STATE(172),
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
  [100] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(19), 19,
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
  [130] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      sym_language_tag,
    ACTIONS(21), 4,
      sym_identifier,
      anon_sym_AT,
      sym_decimal,
      sym_integer,
    ACTIONS(23), 17,
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
    STATE(15), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(22), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(84), 6,
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
    STATE(14), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(37), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(84), 6,
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
  [379] = 13,
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
    STATE(25), 1,
      sym_identifier_reference,
    STATE(28), 1,
      sym_value,
    ACTIONS(73), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(27), 3,
      sym_list_of_values,
      sym_value_constructor,
      sym_simple_value,
  [425] = 12,
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
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(84), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
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
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(84), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [513] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 1,
      sym_quoted_string,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(90), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(39), 1,
      sym_identifier_reference,
    ACTIONS(93), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(16), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [556] = 12,
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
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(39), 1,
      sym_identifier_reference,
    ACTIONS(73), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(16), 3,
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
    STATE(39), 1,
      sym_identifier_reference,
    ACTIONS(73), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(17), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [639] = 10,
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
    ACTIONS(101), 1,
      anon_sym_end,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(84), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [676] = 10,
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
    STATE(84), 6,
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
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(84), 6,
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
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(84), 6,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
  [787] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_unknown_type,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(29), 1,
      sym_cardinality_expression,
    STATE(104), 1,
      sym_type_reference,
    STATE(106), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(123), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [821] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_AT,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(131), 10,
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
  [847] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
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
  [870] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(144), 10,
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
  [892] = 3,
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
  [912] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 11,
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
  [932] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(102), 1,
      sym_type_reference,
    STATE(106), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(123), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [960] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(105), 1,
      sym_type_reference,
    STATE(106), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(123), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [988] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 11,
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
  [1008] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(156), 10,
      anon_sym_is,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_ref,
  [1027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 10,
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
  [1046] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(164), 10,
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
  [1065] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(54), 1,
      sym_data_type_base,
    STATE(56), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(123), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [1090] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_quoted_string,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      sym_double,
    STATE(146), 1,
      sym_simple_value,
    ACTIONS(73), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [1119] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      anon_sym_import,
    STATE(37), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    ACTIONS(166), 8,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1140] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 9,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_ref,
  [1158] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(177), 6,
      anon_sym_RBRACK,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1178] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      anon_sym_is,
    STATE(69), 1,
      sym_entity_body,
    ACTIONS(181), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1197] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 8,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [1214] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1229] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(99), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1256] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      anon_sym_is,
    STATE(73), 1,
      sym_structure_body,
    ACTIONS(193), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1275] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_of,
    STATE(74), 1,
      sym_union_body,
    ACTIONS(195), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1294] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_end,
    ACTIONS(203), 1,
      anon_sym_group,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(97), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1319] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_end,
    ACTIONS(207), 1,
      anon_sym_ref,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(94), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1344] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      anon_sym_is,
    STATE(72), 1,
      sym_structure_body,
    ACTIONS(209), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1363] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      anon_sym_of,
    STATE(71), 1,
      sym_enum_body,
    ACTIONS(211), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1382] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 9,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1397] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_ref,
    ACTIONS(217), 1,
      anon_sym_end,
    STATE(47), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(95), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1422] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(43), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(90), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1449] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 8,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [1466] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_is,
    STATE(82), 1,
      sym_annotation_only_body,
    ACTIONS(227), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1485] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_group,
    ACTIONS(229), 1,
      anon_sym_end,
    STATE(46), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(91), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1510] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 8,
      anon_sym_is,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1524] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_ref,
    ACTIONS(233), 1,
      anon_sym_end,
    ACTIONS(235), 1,
      anon_sym_group,
    STATE(58), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1546] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_ref,
    ACTIONS(235), 1,
      anon_sym_group,
    ACTIONS(237), 1,
      anon_sym_end,
    STATE(60), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1568] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_ref,
    ACTIONS(235), 1,
      anon_sym_group,
    ACTIONS(239), 1,
      anon_sym_end,
    STATE(61), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1590] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_end,
    ACTIONS(246), 1,
      anon_sym_group,
    ACTIONS(249), 1,
      anon_sym_ref,
    STATE(60), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1612] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_ref,
    ACTIONS(235), 1,
      anon_sym_group,
    ACTIONS(252), 1,
      anon_sym_end,
    STATE(60), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1634] = 2,
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
  [1647] = 2,
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
  [1660] = 2,
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
  [1673] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1686] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_qualified_identifier,
    STATE(33), 2,
      sym_member_import,
      sym_module_import,
    STATE(76), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1707] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1720] = 2,
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
  [1733] = 2,
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
  [1746] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_end,
    STATE(81), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(117), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1767] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1780] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1793] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1819] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym_end,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(118), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1840] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_qualified_identifier,
    STATE(33), 2,
      sym_member_import,
      sym_module_import,
    STATE(76), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [1861] = 2,
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
  [1874] = 2,
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
  [1887] = 2,
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
  [1900] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1913] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_end,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(116), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [1934] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1947] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1960] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [1973] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(307), 1,
      anon_sym_end,
    STATE(75), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(124), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [1994] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 7,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
  [2020] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_qualified_identifier,
    STATE(50), 1,
      sym_import,
    STATE(33), 2,
      sym_member_import,
      sym_module_import,
  [2040] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_is,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(125), 1,
      sym_annotation_only_body,
    ACTIONS(317), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2058] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(100), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2078] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_end,
    ACTIONS(203), 1,
      anon_sym_group,
    STATE(98), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2096] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(34), 1,
      sym_qualified_identifier,
    STATE(33), 2,
      sym_member_import,
      sym_module_import,
    STATE(66), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [2114] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_end,
    ACTIONS(324), 1,
      anon_sym_ref,
    STATE(93), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2132] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_ref,
    ACTIONS(327), 1,
      anon_sym_end,
    STATE(93), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2150] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_end,
    ACTIONS(207), 1,
      anon_sym_ref,
    STATE(93), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2168] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_is,
    ACTIONS(329), 1,
      sym_identifier,
    STATE(114), 1,
      sym_annotation_only_body,
    ACTIONS(331), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2186] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_group,
    ACTIONS(333), 1,
      anon_sym_end,
    STATE(98), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2204] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_end,
    ACTIONS(340), 1,
      anon_sym_group,
    STATE(98), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2222] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(343), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(100), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2242] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(100), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2262] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_is,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(115), 1,
      sym_annotation_only_body,
    ACTIONS(352), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2280] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(356), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2293] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(358), 1,
      anon_sym_identity,
    STATE(59), 1,
      sym_identity_member,
    STATE(109), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2310] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(362), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2349] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(374), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2362] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(376), 1,
      anon_sym_DASH_GT,
    STATE(89), 1,
      sym__type_expression_from_to,
    STATE(111), 1,
      sym__type_expression_to,
    STATE(141), 1,
      sym_cardinality_expression,
  [2381] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(358), 1,
      anon_sym_identity,
    STATE(57), 1,
      sym_identity_member,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2398] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_is,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 1,
      anon_sym_end,
    ACTIONS(382), 1,
      anon_sym_as,
    STATE(135), 1,
      sym_annotation_only_body,
  [2417] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(386), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2430] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_is,
    ACTIONS(388), 1,
      sym_identifier,
    ACTIONS(390), 1,
      anon_sym_end,
    STATE(138), 1,
      sym_annotation_only_body,
  [2446] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_is,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(394), 1,
      anon_sym_end,
    STATE(140), 1,
      sym_annotation_only_body,
  [2462] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 1,
      sym_identifier,
    ACTIONS(398), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2474] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(402), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_end,
    STATE(121), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2500] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_end,
    STATE(121), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2514] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(406), 1,
      anon_sym_end,
    STATE(119), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2528] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_end,
    STATE(119), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2542] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(413), 1,
      anon_sym_end,
    STATE(24), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2556] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(418), 1,
      anon_sym_end,
    STATE(121), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(422), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2582] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(426), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2594] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym_end,
    STATE(119), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2608] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(430), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2620] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(120), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2643] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(48), 1,
      sym_identifier_reference,
  [2656] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(440), 2,
      anon_sym_end,
      anon_sym_group,
  [2667] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(145), 1,
      sym_identifier_reference,
  [2680] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    ACTIONS(444), 1,
      anon_sym_DOT_DOT,
    STATE(170), 1,
      sym_cardinality_range,
  [2693] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(446), 1,
      anon_sym_base,
    ACTIONS(448), 1,
      anon_sym_is,
    STATE(150), 1,
      sym_module_body,
  [2706] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(452), 2,
      anon_sym_end,
      anon_sym_group,
  [2717] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(456), 2,
      anon_sym_end,
      anon_sym_group,
  [2728] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(460), 1,
      anon_sym_end,
  [2738] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_is,
    STATE(156), 1,
      sym_module_body,
  [2748] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(462), 1,
      sym_unsigned,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
  [2758] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(468), 1,
      anon_sym_end,
  [2768] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      anon_sym_DASH_GT,
    STATE(96), 1,
      sym__type_expression_to,
  [2778] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_end,
  [2788] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      anon_sym_DASH_GT,
    STATE(107), 1,
      sym__type_expression_to,
  [2798] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(474), 1,
      anon_sym_DASH_GT,
    STATE(101), 1,
      sym__type_expression,
  [2808] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(69), 1,
      anon_sym_LT,
    STATE(136), 1,
      sym_iri_reference,
  [2818] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_source,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_EQ,
  [2832] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [2839] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 1,
      sym_identifier,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      sym_unsigned,
  [2853] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 1,
      sym_identifier,
  [2860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [2867] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      sym_identifier,
  [2874] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [2881] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      sym_identifier,
  [2888] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      anon_sym_LT_DASH,
  [2895] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(498), 1,
      anon_sym_GT,
  [2902] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
  [2909] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(506), 1,
      sym_identifier,
  [2930] = 2,
    ACTIONS(508), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(510), 1,
      sym_line_comment,
  [2937] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 1,
      sym_identifier,
  [2944] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      sym_identifier,
  [2951] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(516), 1,
      anon_sym_EQ,
  [2958] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(518), 1,
      sym_unsigned,
  [2965] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      sym_identifier,
  [2972] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      sym_identifier,
  [2986] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 1,
      sym_identifier,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
  [3007] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
  [3014] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 249,
  [SMALL_STATE(11)] = 300,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 379,
  [SMALL_STATE(14)] = 425,
  [SMALL_STATE(15)] = 469,
  [SMALL_STATE(16)] = 513,
  [SMALL_STATE(17)] = 556,
  [SMALL_STATE(18)] = 599,
  [SMALL_STATE(19)] = 639,
  [SMALL_STATE(20)] = 676,
  [SMALL_STATE(21)] = 713,
  [SMALL_STATE(22)] = 750,
  [SMALL_STATE(23)] = 787,
  [SMALL_STATE(24)] = 821,
  [SMALL_STATE(25)] = 847,
  [SMALL_STATE(26)] = 870,
  [SMALL_STATE(27)] = 892,
  [SMALL_STATE(28)] = 912,
  [SMALL_STATE(29)] = 932,
  [SMALL_STATE(30)] = 960,
  [SMALL_STATE(31)] = 988,
  [SMALL_STATE(32)] = 1008,
  [SMALL_STATE(33)] = 1027,
  [SMALL_STATE(34)] = 1046,
  [SMALL_STATE(35)] = 1065,
  [SMALL_STATE(36)] = 1090,
  [SMALL_STATE(37)] = 1119,
  [SMALL_STATE(38)] = 1140,
  [SMALL_STATE(39)] = 1158,
  [SMALL_STATE(40)] = 1178,
  [SMALL_STATE(41)] = 1197,
  [SMALL_STATE(42)] = 1214,
  [SMALL_STATE(43)] = 1229,
  [SMALL_STATE(44)] = 1256,
  [SMALL_STATE(45)] = 1275,
  [SMALL_STATE(46)] = 1294,
  [SMALL_STATE(47)] = 1319,
  [SMALL_STATE(48)] = 1344,
  [SMALL_STATE(49)] = 1363,
  [SMALL_STATE(50)] = 1382,
  [SMALL_STATE(51)] = 1397,
  [SMALL_STATE(52)] = 1422,
  [SMALL_STATE(53)] = 1449,
  [SMALL_STATE(54)] = 1466,
  [SMALL_STATE(55)] = 1485,
  [SMALL_STATE(56)] = 1510,
  [SMALL_STATE(57)] = 1524,
  [SMALL_STATE(58)] = 1546,
  [SMALL_STATE(59)] = 1568,
  [SMALL_STATE(60)] = 1590,
  [SMALL_STATE(61)] = 1612,
  [SMALL_STATE(62)] = 1634,
  [SMALL_STATE(63)] = 1647,
  [SMALL_STATE(64)] = 1660,
  [SMALL_STATE(65)] = 1673,
  [SMALL_STATE(66)] = 1686,
  [SMALL_STATE(67)] = 1707,
  [SMALL_STATE(68)] = 1720,
  [SMALL_STATE(69)] = 1733,
  [SMALL_STATE(70)] = 1746,
  [SMALL_STATE(71)] = 1767,
  [SMALL_STATE(72)] = 1780,
  [SMALL_STATE(73)] = 1793,
  [SMALL_STATE(74)] = 1806,
  [SMALL_STATE(75)] = 1819,
  [SMALL_STATE(76)] = 1840,
  [SMALL_STATE(77)] = 1861,
  [SMALL_STATE(78)] = 1874,
  [SMALL_STATE(79)] = 1887,
  [SMALL_STATE(80)] = 1900,
  [SMALL_STATE(81)] = 1913,
  [SMALL_STATE(82)] = 1934,
  [SMALL_STATE(83)] = 1947,
  [SMALL_STATE(84)] = 1960,
  [SMALL_STATE(85)] = 1973,
  [SMALL_STATE(86)] = 1994,
  [SMALL_STATE(87)] = 2007,
  [SMALL_STATE(88)] = 2020,
  [SMALL_STATE(89)] = 2040,
  [SMALL_STATE(90)] = 2058,
  [SMALL_STATE(91)] = 2078,
  [SMALL_STATE(92)] = 2096,
  [SMALL_STATE(93)] = 2114,
  [SMALL_STATE(94)] = 2132,
  [SMALL_STATE(95)] = 2150,
  [SMALL_STATE(96)] = 2168,
  [SMALL_STATE(97)] = 2186,
  [SMALL_STATE(98)] = 2204,
  [SMALL_STATE(99)] = 2222,
  [SMALL_STATE(100)] = 2242,
  [SMALL_STATE(101)] = 2262,
  [SMALL_STATE(102)] = 2280,
  [SMALL_STATE(103)] = 2293,
  [SMALL_STATE(104)] = 2310,
  [SMALL_STATE(105)] = 2323,
  [SMALL_STATE(106)] = 2336,
  [SMALL_STATE(107)] = 2349,
  [SMALL_STATE(108)] = 2362,
  [SMALL_STATE(109)] = 2381,
  [SMALL_STATE(110)] = 2398,
  [SMALL_STATE(111)] = 2417,
  [SMALL_STATE(112)] = 2430,
  [SMALL_STATE(113)] = 2446,
  [SMALL_STATE(114)] = 2462,
  [SMALL_STATE(115)] = 2474,
  [SMALL_STATE(116)] = 2486,
  [SMALL_STATE(117)] = 2500,
  [SMALL_STATE(118)] = 2514,
  [SMALL_STATE(119)] = 2528,
  [SMALL_STATE(120)] = 2542,
  [SMALL_STATE(121)] = 2556,
  [SMALL_STATE(122)] = 2570,
  [SMALL_STATE(123)] = 2582,
  [SMALL_STATE(124)] = 2594,
  [SMALL_STATE(125)] = 2608,
  [SMALL_STATE(126)] = 2620,
  [SMALL_STATE(127)] = 2632,
  [SMALL_STATE(128)] = 2643,
  [SMALL_STATE(129)] = 2656,
  [SMALL_STATE(130)] = 2667,
  [SMALL_STATE(131)] = 2680,
  [SMALL_STATE(132)] = 2693,
  [SMALL_STATE(133)] = 2706,
  [SMALL_STATE(134)] = 2717,
  [SMALL_STATE(135)] = 2728,
  [SMALL_STATE(136)] = 2738,
  [SMALL_STATE(137)] = 2748,
  [SMALL_STATE(138)] = 2758,
  [SMALL_STATE(139)] = 2768,
  [SMALL_STATE(140)] = 2778,
  [SMALL_STATE(141)] = 2788,
  [SMALL_STATE(142)] = 2798,
  [SMALL_STATE(143)] = 2808,
  [SMALL_STATE(144)] = 2818,
  [SMALL_STATE(145)] = 2825,
  [SMALL_STATE(146)] = 2832,
  [SMALL_STATE(147)] = 2839,
  [SMALL_STATE(148)] = 2846,
  [SMALL_STATE(149)] = 2853,
  [SMALL_STATE(150)] = 2860,
  [SMALL_STATE(151)] = 2867,
  [SMALL_STATE(152)] = 2874,
  [SMALL_STATE(153)] = 2881,
  [SMALL_STATE(154)] = 2888,
  [SMALL_STATE(155)] = 2895,
  [SMALL_STATE(156)] = 2902,
  [SMALL_STATE(157)] = 2909,
  [SMALL_STATE(158)] = 2916,
  [SMALL_STATE(159)] = 2923,
  [SMALL_STATE(160)] = 2930,
  [SMALL_STATE(161)] = 2937,
  [SMALL_STATE(162)] = 2944,
  [SMALL_STATE(163)] = 2951,
  [SMALL_STATE(164)] = 2958,
  [SMALL_STATE(165)] = 2965,
  [SMALL_STATE(166)] = 2972,
  [SMALL_STATE(167)] = 2979,
  [SMALL_STATE(168)] = 2986,
  [SMALL_STATE(169)] = 2993,
  [SMALL_STATE(170)] = 3000,
  [SMALL_STATE(171)] = 3007,
  [SMALL_STATE(172)] = 3014,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 9),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 9),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(6),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(160),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(7),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(7),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(159),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(162),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(147),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(149),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(151),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(153),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(130),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_simple_type, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_simple_type, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(88),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 28),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 28),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 2, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 8),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 28),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 28),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_base, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(139),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(51),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(152),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 15),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 10),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 11),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 3, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(26),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 10),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 15),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 22),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 22),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(139),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(152),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(139),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(85),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_union_body_repeat1, 2), SHIFT_REPEAT(2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_body_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 24),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 24),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 27),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 27),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 21),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 21),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 3, .production_id = 19),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 3, .production_id = 19),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 18),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 18),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 20),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 20),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(139),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(163),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 26),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 26),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 2, .production_id = 13),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 2, .production_id = 13),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 4, .production_id = 25),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 4, .production_id = 25),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 23),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 29),
  [534] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
