#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 35

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
  anon_sym_property = 42,
  anon_sym_identity = 43,
  anon_sym_ref = 44,
  anon_sym_DASH_GT = 45,
  sym_unknown_type = 46,
  anon_sym_LBRACE = 47,
  anon_sym_RBRACE = 48,
  anon_sym_DOT_DOT = 49,
  sym_line_comment = 50,
  sym_module = 51,
  sym_module_body = 52,
  sym_import_statement = 53,
  sym_import = 54,
  sym_member_import = 55,
  sym_module_import = 56,
  sym_qualified_identifier = 57,
  sym_identifier_reference = 58,
  sym_annotation = 59,
  sym_value = 60,
  sym_list_of_values = 61,
  sym_value_constructor = 62,
  sym_builtin_simple_type = 63,
  sym_simple_value = 64,
  sym_string = 65,
  sym_iri_reference = 66,
  sym_boolean = 67,
  sym_type_def = 68,
  sym_data_type_def = 69,
  sym_data_type_base = 70,
  sym_annotation_only_body = 71,
  sym_entity_def = 72,
  sym_entity_group = 73,
  sym_entity_body = 74,
  sym_enum_def = 75,
  sym_enum_body = 76,
  sym_enum_variant = 77,
  sym_event_def = 78,
  sym_structure_def = 79,
  sym_structure_group = 80,
  sym_structure_body = 81,
  sym_union_def = 82,
  sym_union_body = 83,
  sym_type_variant = 84,
  sym_property_def = 85,
  sym_property_body = 86,
  sym_property_role = 87,
  sym_property_member = 88,
  sym_identity_member = 89,
  sym_member_by_value = 90,
  sym_member_by_reference = 91,
  sym__type_expression = 92,
  sym__type_expression_to = 93,
  sym__type_expression_from_to = 94,
  sym_type_reference = 95,
  sym_cardinality_expression = 96,
  sym_cardinality_range = 97,
  aux_sym_module_body_repeat1 = 98,
  aux_sym_module_body_repeat2 = 99,
  aux_sym_module_body_repeat3 = 100,
  aux_sym_import_statement_repeat1 = 101,
  aux_sym_list_of_values_repeat1 = 102,
  aux_sym_entity_group_repeat1 = 103,
  aux_sym_entity_body_repeat1 = 104,
  aux_sym_enum_body_repeat1 = 105,
  aux_sym_structure_group_repeat1 = 106,
  aux_sym_structure_body_repeat1 = 107,
  aux_sym_union_body_repeat1 = 108,
  aux_sym_property_body_repeat1 = 109,
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
  [anon_sym_property] = "property",
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
  [sym_property_def] = "property_def",
  [sym_property_body] = "property_body",
  [sym_property_role] = "property_role",
  [sym_property_member] = "property_member",
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
  [aux_sym_property_body_repeat1] = "property_body_repeat1",
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
  [anon_sym_property] = anon_sym_property,
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
  [sym_property_def] = sym_property_def,
  [sym_property_body] = sym_property_body,
  [sym_property_role] = sym_property_role,
  [sym_property_member] = sym_property_member,
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
  [aux_sym_property_body_repeat1] = aux_sym_property_body_repeat1,
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
  [anon_sym_property] = {
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
  [sym_property_def] = {
    .visible = true,
    .named = true,
  },
  [sym_property_body] = {
    .visible = true,
    .named = true,
  },
  [sym_property_role] = {
    .visible = true,
    .named = true,
  },
  [sym_property_member] = {
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
  [aux_sym_property_body_repeat1] = {
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
  field_role = 11,
  field_source = 12,
  field_source_cardinality = 13,
  field_target = 14,
  field_target_cardinality = 15,
  field_value = 16,
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
  [field_role] = "role",
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
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 1},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 1},
  [21] = {.index = 36, .length = 4},
  [22] = {.index = 40, .length = 2},
  [23] = {.index = 42, .length = 2},
  [24] = {.index = 44, .length = 2},
  [25] = {.index = 46, .length = 4},
  [26] = {.index = 50, .length = 3},
  [27] = {.index = 53, .length = 2},
  [28] = {.index = 55, .length = 3},
  [29] = {.index = 58, .length = 2},
  [30] = {.index = 60, .length = 5},
  [31] = {.index = 65, .length = 3},
  [32] = {.index = 68, .length = 1},
  [33] = {.index = 69, .length = 3},
  [34] = {.index = 72, .length = 1},
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
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [9] =
    {field_member, 2},
    {field_module, 0},
  [11] =
    {field_name, 1},
    {field_value, 3},
  [13] =
    {field_base, 3},
    {field_name, 1},
  [15] =
    {field_name, 1},
    {field_source, 3},
  [17] =
    {field_target, 1},
  [18] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [21] =
    {field_language, 1},
  [22] =
    {field_identity, 1},
  [23] =
    {field_body, 4},
    {field_name, 1},
    {field_source, 3},
  [26] =
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [29] =
    {field_body, 1},
    {field_name, 0},
  [31] =
    {field_role, 0},
  [32] =
    {field_identity, 2},
  [33] =
    {field_name, 0},
    {field_value, 2},
  [35] =
    {field_role, 1},
  [36] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [40] =
    {field_name, 0},
    {field_rename, 2},
  [42] =
    {field_body, 1},
    {field_role, 0},
  [44] =
    {field_target, 0, .inherited = true},
    {field_target_cardinality, 0, .inherited = true},
  [46] =
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [50] =
    {field_body, 3},
    {field_name, 0},
    {field_value, 2},
  [53] =
    {field_target, 2},
    {field_target_cardinality, 1},
  [55] =
    {field_body, 3},
    {field_name, 0},
    {field_rename, 2},
  [58] =
    {field_role, 0},
    {field_target_cardinality, 2},
  [60] =
    {field_body, 3},
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [65] =
    {field_source_cardinality, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [68] =
    {field_min, 1},
  [69] =
    {field_body, 3},
    {field_role, 0},
    {field_target_cardinality, 2},
  [72] =
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
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
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
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_iri);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 99:
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 117:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_unknown_type);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 126:
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
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
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
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
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
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 13},
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
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 65},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
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
    [anon_sym_property] = ACTIONS(1),
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
    [sym_module] = STATE(164),
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
    ACTIONS(9), 23,
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
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [34] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(11), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(13), 22,
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
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [70] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(13), 22,
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
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [103] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_end,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_datatype,
    ACTIONS(25), 1,
      anon_sym_entity,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_event,
    ACTIONS(31), 1,
      anon_sym_structure,
    ACTIONS(33), 1,
      anon_sym_union,
    ACTIONS(35), 1,
      anon_sym_property,
    STATE(14), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(36), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(62), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [158] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      sym_language_tag,
    ACTIONS(37), 4,
      sym_identifier,
      anon_sym_AT,
      sym_decimal,
      sym_integer,
    ACTIONS(39), 18,
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
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [191] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_datatype,
    ACTIONS(25), 1,
      anon_sym_entity,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_event,
    ACTIONS(31), 1,
      anon_sym_structure,
    ACTIONS(33), 1,
      anon_sym_union,
    ACTIONS(35), 1,
      anon_sym_property,
    ACTIONS(43), 1,
      anon_sym_end,
    STATE(5), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [246] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(47), 20,
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
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [277] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(51), 19,
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
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [307] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(55), 19,
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
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [337] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(59), 19,
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
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [367] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(63), 18,
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
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [396] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_end,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_datatype,
    ACTIONS(25), 1,
      anon_sym_entity,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_event,
    ACTIONS(31), 1,
      anon_sym_structure,
    ACTIONS(33), 1,
      anon_sym_union,
    ACTIONS(35), 1,
      anon_sym_property,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(62), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [444] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_datatype,
    ACTIONS(25), 1,
      anon_sym_entity,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_event,
    ACTIONS(31), 1,
      anon_sym_structure,
    ACTIONS(33), 1,
      anon_sym_union,
    ACTIONS(35), 1,
      anon_sym_property,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(17), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(62), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [492] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_quoted_string,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(25), 1,
      sym_identifier_reference,
    STATE(27), 1,
      sym_value,
    ACTIONS(77), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_list_of_values,
      sym_value_constructor,
      sym_simple_value,
  [538] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(71), 1,
      sym_quoted_string,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      sym_double,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(45), 1,
      sym_identifier_reference,
    ACTIONS(77), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(18), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [581] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_datatype,
    ACTIONS(25), 1,
      anon_sym_entity,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_event,
    ACTIONS(31), 1,
      anon_sym_structure,
    ACTIONS(33), 1,
      anon_sym_union,
    ACTIONS(35), 1,
      anon_sym_property,
    ACTIONS(83), 1,
      anon_sym_end,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [622] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      sym_quoted_string,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(45), 1,
      sym_identifier_reference,
    ACTIONS(99), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(102), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(18), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [665] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_end,
    ACTIONS(23), 1,
      anon_sym_datatype,
    ACTIONS(25), 1,
      anon_sym_entity,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_event,
    ACTIONS(31), 1,
      anon_sym_structure,
    ACTIONS(33), 1,
      anon_sym_union,
    ACTIONS(35), 1,
      anon_sym_property,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [706] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_datatype,
    ACTIONS(25), 1,
      anon_sym_entity,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_event,
    ACTIONS(31), 1,
      anon_sym_structure,
    ACTIONS(33), 1,
      anon_sym_union,
    ACTIONS(35), 1,
      anon_sym_property,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [747] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_end,
    ACTIONS(107), 1,
      anon_sym_datatype,
    ACTIONS(110), 1,
      anon_sym_entity,
    ACTIONS(113), 1,
      anon_sym_enum,
    ACTIONS(116), 1,
      anon_sym_event,
    ACTIONS(119), 1,
      anon_sym_structure,
    ACTIONS(122), 1,
      anon_sym_union,
    ACTIONS(125), 1,
      anon_sym_property,
    STATE(21), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(62), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [788] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(71), 1,
      sym_quoted_string,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(45), 1,
      sym_identifier_reference,
    ACTIONS(77), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(16), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [828] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_AT,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    ACTIONS(130), 11,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [855] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym_unknown_type,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(35), 1,
      sym_cardinality_expression,
    STATE(116), 1,
      sym_type_reference,
    STATE(37), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(135), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [889] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 12,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [913] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 12,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [934] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 12,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [955] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 12,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
      anon_sym_identity,
      anon_sym_ref,
  [976] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(157), 11,
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
      anon_sym_property,
  [999] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 11,
      anon_sym_is,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
      anon_sym_ref,
  [1019] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 11,
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
      anon_sym_property,
  [1039] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 11,
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
      anon_sym_property,
  [1059] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(30), 1,
      sym_type_reference,
    STATE(37), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(135), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [1087] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 11,
      anon_sym_is,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
      anon_sym_ref,
  [1107] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_type_reference,
    STATE(37), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(135), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [1135] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      anon_sym_import,
    STATE(36), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    ACTIONS(175), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1157] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(182), 11,
      anon_sym_is,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
      anon_sym_ref,
  [1177] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(46), 1,
      sym_data_type_base,
    STATE(53), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(135), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [1202] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 10,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_group,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
      anon_sym_ref,
  [1221] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 10,
      anon_sym_is,
      anon_sym_end,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [1240] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(194), 10,
      anon_sym_is,
      anon_sym_end,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [1259] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      sym_quoted_string,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      sym_double,
    STATE(162), 1,
      sym_simple_value,
    ACTIONS(77), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [1288] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      anon_sym_is,
    STATE(75), 1,
      sym_property_body,
    ACTIONS(198), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 10,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1324] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(204), 6,
      anon_sym_RBRACK,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1344] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_is,
    STATE(71), 1,
      sym_annotation_only_body,
    ACTIONS(208), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 10,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1380] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      anon_sym_is,
    STATE(78), 1,
      sym_structure_body,
    ACTIONS(214), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1400] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 1,
      anon_sym_of,
    STATE(80), 1,
      sym_union_body,
    ACTIONS(216), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1420] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 1,
      anon_sym_is,
    STATE(74), 1,
      sym_entity_body,
    ACTIONS(222), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1440] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      anon_sym_of,
    STATE(76), 1,
      sym_enum_body,
    ACTIONS(224), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1460] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      anon_sym_is,
    STATE(69), 1,
      sym_structure_body,
    ACTIONS(228), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1480] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(230), 9,
      anon_sym_is,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1495] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_end,
    ACTIONS(236), 1,
      anon_sym_group,
    STATE(55), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(100), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1520] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_group,
    ACTIONS(238), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(101), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1545] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_end,
    ACTIONS(242), 1,
      anon_sym_group,
    ACTIONS(244), 1,
      anon_sym_ref,
    STATE(65), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1567] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1581] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1595] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1609] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1623] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1637] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1679] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_group,
    ACTIONS(244), 1,
      anon_sym_ref,
    ACTIONS(262), 1,
      anon_sym_end,
    STATE(67), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1715] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_end,
    ACTIONS(271), 1,
      anon_sym_group,
    ACTIONS(274), 1,
      anon_sym_ref,
    STATE(67), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1751] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1765] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_ref,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(94), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1787] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1801] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1815] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1829] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1843] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1857] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1871] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(293), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1885] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1899] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(113), 1,
      sym_identifier_reference,
    STATE(85), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(90), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1937] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_ref,
    STATE(70), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(98), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1959] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_group,
    ACTIONS(244), 1,
      anon_sym_ref,
    ACTIONS(301), 1,
      anon_sym_end,
    STATE(67), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1995] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_group,
    ACTIONS(244), 1,
      anon_sym_ref,
    ACTIONS(305), 1,
      anon_sym_end,
    STATE(82), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [2017] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(113), 1,
      sym_identifier_reference,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(108), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2041] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_qualified_identifier,
    STATE(31), 2,
      sym_member_import,
      sym_module_import,
    STATE(86), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [2062] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_qualified_identifier,
    STATE(31), 2,
      sym_member_import,
      sym_module_import,
    STATE(86), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [2083] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_as,
    ACTIONS(318), 1,
      anon_sym_DASH_GT,
    STATE(106), 1,
      sym__type_expression_from_to,
    STATE(111), 1,
      sym__type_expression_to,
    STATE(126), 1,
      sym_property_member,
    STATE(155), 1,
      sym_cardinality_expression,
  [2108] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(320), 1,
      sym_identifier,
    STATE(92), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(120), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2126] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(113), 1,
      sym_identifier_reference,
    STATE(107), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2146] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_qualified_identifier,
    STATE(47), 1,
      sym_import,
    STATE(31), 2,
      sym_member_import,
      sym_module_import,
  [2166] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(320), 1,
      sym_identifier,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(137), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2184] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(329), 1,
      anon_sym_end,
    ACTIONS(331), 1,
      anon_sym_ref,
    STATE(93), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2202] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_ref,
    ACTIONS(334), 1,
      anon_sym_end,
    STATE(93), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2220] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(32), 1,
      sym_qualified_identifier,
    STATE(31), 2,
      sym_member_import,
      sym_module_import,
    STATE(87), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [2238] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(123), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2256] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(96), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(130), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2274] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_ref,
    ACTIONS(338), 1,
      anon_sym_end,
    STATE(93), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2292] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_is,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(124), 1,
      sym_annotation_only_body,
    ACTIONS(342), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2310] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_group,
    ACTIONS(238), 1,
      anon_sym_end,
    STATE(105), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2328] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_group,
    ACTIONS(344), 1,
      anon_sym_end,
    STATE(105), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2346] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_is,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(119), 1,
      sym_annotation_only_body,
    ACTIONS(348), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2364] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(118), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2382] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(103), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(131), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2400] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(355), 1,
      anon_sym_end,
    ACTIONS(357), 1,
      anon_sym_group,
    STATE(105), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2418] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_is,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(128), 1,
      sym_annotation_only_body,
    ACTIONS(362), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2436] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(367), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(113), 1,
      sym_identifier_reference,
    STATE(107), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2456] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(113), 1,
      sym_identifier_reference,
    STATE(107), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2476] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
      anon_sym_identity,
    STATE(84), 1,
      sym_identity_member,
    STATE(114), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2493] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(375), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2519] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_is,
    ACTIONS(381), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_end,
    ACTIONS(385), 1,
      anon_sym_EQ,
    STATE(149), 1,
      sym_annotation_only_body,
  [2538] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_is,
    ACTIONS(387), 1,
      sym_identifier,
    ACTIONS(389), 1,
      anon_sym_end,
    ACTIONS(391), 1,
      anon_sym_as,
    STATE(157), 1,
      sym_annotation_only_body,
  [2557] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(371), 1,
      anon_sym_identity,
    STATE(56), 1,
      sym_identity_member,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2574] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 1,
      sym_identifier,
    ACTIONS(399), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2600] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_is,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_end,
    STATE(150), 1,
      sym_annotation_only_body,
  [2616] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_end,
    STATE(125), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2630] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2642] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_end,
    STATE(138), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2656] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(417), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2668] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(422), 1,
      anon_sym_end,
    STATE(122), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2682] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(426), 1,
      anon_sym_end,
    STATE(122), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2696] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(430), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2708] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(435), 1,
      anon_sym_end,
    STATE(125), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2722] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(439), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2734] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_as,
    ACTIONS(441), 1,
      anon_sym_DASH_GT,
    STATE(99), 1,
      sym__type_expression,
    STATE(136), 1,
      sym_property_member,
  [2750] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(445), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2762] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(449), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2774] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_end,
    STATE(122), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2788] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(453), 1,
      anon_sym_end,
    STATE(125), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2802] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(457), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2814] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_is,
    ACTIONS(459), 1,
      sym_identifier,
    ACTIONS(461), 1,
      anon_sym_end,
    STATE(154), 1,
      sym_annotation_only_body,
  [2830] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_is,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(465), 1,
      anon_sym_end,
    STATE(152), 1,
      sym_annotation_only_body,
  [2846] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(467), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2860] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 1,
      sym_identifier,
    ACTIONS(471), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2872] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_end,
    STATE(138), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2886] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(475), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_end,
    STATE(138), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2900] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(482), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2912] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      anon_sym_as,
    ACTIONS(318), 1,
      anon_sym_DASH_GT,
    STATE(102), 1,
      sym__type_expression_to,
    STATE(132), 1,
      sym_property_member,
  [2928] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(486), 2,
      anon_sym_end,
      anon_sym_group,
  [2939] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      anon_sym_base,
    ACTIONS(490), 1,
      anon_sym_is,
    STATE(168), 1,
      sym_module_body,
  [2952] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(494), 2,
      anon_sym_end,
      anon_sym_group,
  [2963] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(498), 1,
      anon_sym_DOT_DOT,
    STATE(186), 1,
      sym_cardinality_range,
  [2976] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    STATE(135), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2987] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(187), 1,
      sym_identifier_reference,
  [3000] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(52), 1,
      sym_identifier_reference,
  [3013] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(441), 1,
      anon_sym_DASH_GT,
    STATE(43), 1,
      sym__type_expression,
  [3023] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      anon_sym_end,
  [3033] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(506), 1,
      anon_sym_end,
  [3043] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(508), 1,
      sym_unsigned,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
  [3053] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_end,
  [3063] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      anon_sym_is,
    STATE(160), 1,
      sym_module_body,
  [3073] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_end,
  [3083] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_DASH_GT,
    STATE(115), 1,
      sym__type_expression_to,
  [3093] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 1,
      anon_sym_LT,
    STATE(153), 1,
      sym_iri_reference,
  [3103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(522), 1,
      anon_sym_end,
  [3113] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_cardinality_expression,
  [3123] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      sym_identifier,
  [3130] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
  [3137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 1,
      anon_sym_GT,
  [3144] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [3151] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      sym_identifier,
  [3158] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
  [3165] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      sym_identifier,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      sym_identifier,
  [3179] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(540), 1,
      sym_identifier,
  [3186] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
  [3193] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      anon_sym_source,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(546), 1,
      sym_unsigned,
  [3207] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
  [3214] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(550), 1,
      anon_sym_LT_DASH,
  [3221] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      sym_identifier,
  [3228] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(554), 1,
      sym_identifier,
  [3235] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      sym_identifier,
  [3242] = 2,
    ACTIONS(558), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(560), 1,
      sym_line_comment,
  [3249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
  [3256] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
  [3263] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
  [3270] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      sym_identifier,
  [3277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      sym_identifier,
  [3284] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 1,
      sym_identifier,
  [3291] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      anon_sym_EQ,
  [3298] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(576), 1,
      sym_identifier,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(578), 1,
      sym_unsigned,
  [3312] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [3319] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(582), 1,
      anon_sym_EQ,
  [3326] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [3333] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(586), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 191,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 277,
  [SMALL_STATE(10)] = 307,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 367,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 444,
  [SMALL_STATE(15)] = 492,
  [SMALL_STATE(16)] = 538,
  [SMALL_STATE(17)] = 581,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 665,
  [SMALL_STATE(20)] = 706,
  [SMALL_STATE(21)] = 747,
  [SMALL_STATE(22)] = 788,
  [SMALL_STATE(23)] = 828,
  [SMALL_STATE(24)] = 855,
  [SMALL_STATE(25)] = 889,
  [SMALL_STATE(26)] = 913,
  [SMALL_STATE(27)] = 934,
  [SMALL_STATE(28)] = 955,
  [SMALL_STATE(29)] = 976,
  [SMALL_STATE(30)] = 999,
  [SMALL_STATE(31)] = 1019,
  [SMALL_STATE(32)] = 1039,
  [SMALL_STATE(33)] = 1059,
  [SMALL_STATE(34)] = 1087,
  [SMALL_STATE(35)] = 1107,
  [SMALL_STATE(36)] = 1135,
  [SMALL_STATE(37)] = 1157,
  [SMALL_STATE(38)] = 1177,
  [SMALL_STATE(39)] = 1202,
  [SMALL_STATE(40)] = 1221,
  [SMALL_STATE(41)] = 1240,
  [SMALL_STATE(42)] = 1259,
  [SMALL_STATE(43)] = 1288,
  [SMALL_STATE(44)] = 1308,
  [SMALL_STATE(45)] = 1324,
  [SMALL_STATE(46)] = 1344,
  [SMALL_STATE(47)] = 1364,
  [SMALL_STATE(48)] = 1380,
  [SMALL_STATE(49)] = 1400,
  [SMALL_STATE(50)] = 1420,
  [SMALL_STATE(51)] = 1440,
  [SMALL_STATE(52)] = 1460,
  [SMALL_STATE(53)] = 1480,
  [SMALL_STATE(54)] = 1495,
  [SMALL_STATE(55)] = 1520,
  [SMALL_STATE(56)] = 1545,
  [SMALL_STATE(57)] = 1567,
  [SMALL_STATE(58)] = 1581,
  [SMALL_STATE(59)] = 1595,
  [SMALL_STATE(60)] = 1609,
  [SMALL_STATE(61)] = 1623,
  [SMALL_STATE(62)] = 1637,
  [SMALL_STATE(63)] = 1651,
  [SMALL_STATE(64)] = 1665,
  [SMALL_STATE(65)] = 1679,
  [SMALL_STATE(66)] = 1701,
  [SMALL_STATE(67)] = 1715,
  [SMALL_STATE(68)] = 1737,
  [SMALL_STATE(69)] = 1751,
  [SMALL_STATE(70)] = 1765,
  [SMALL_STATE(71)] = 1787,
  [SMALL_STATE(72)] = 1801,
  [SMALL_STATE(73)] = 1815,
  [SMALL_STATE(74)] = 1829,
  [SMALL_STATE(75)] = 1843,
  [SMALL_STATE(76)] = 1857,
  [SMALL_STATE(77)] = 1871,
  [SMALL_STATE(78)] = 1885,
  [SMALL_STATE(79)] = 1899,
  [SMALL_STATE(80)] = 1923,
  [SMALL_STATE(81)] = 1937,
  [SMALL_STATE(82)] = 1959,
  [SMALL_STATE(83)] = 1981,
  [SMALL_STATE(84)] = 1995,
  [SMALL_STATE(85)] = 2017,
  [SMALL_STATE(86)] = 2041,
  [SMALL_STATE(87)] = 2062,
  [SMALL_STATE(88)] = 2083,
  [SMALL_STATE(89)] = 2108,
  [SMALL_STATE(90)] = 2126,
  [SMALL_STATE(91)] = 2146,
  [SMALL_STATE(92)] = 2166,
  [SMALL_STATE(93)] = 2184,
  [SMALL_STATE(94)] = 2202,
  [SMALL_STATE(95)] = 2220,
  [SMALL_STATE(96)] = 2238,
  [SMALL_STATE(97)] = 2256,
  [SMALL_STATE(98)] = 2274,
  [SMALL_STATE(99)] = 2292,
  [SMALL_STATE(100)] = 2310,
  [SMALL_STATE(101)] = 2328,
  [SMALL_STATE(102)] = 2346,
  [SMALL_STATE(103)] = 2364,
  [SMALL_STATE(104)] = 2382,
  [SMALL_STATE(105)] = 2400,
  [SMALL_STATE(106)] = 2418,
  [SMALL_STATE(107)] = 2436,
  [SMALL_STATE(108)] = 2456,
  [SMALL_STATE(109)] = 2476,
  [SMALL_STATE(110)] = 2493,
  [SMALL_STATE(111)] = 2506,
  [SMALL_STATE(112)] = 2519,
  [SMALL_STATE(113)] = 2538,
  [SMALL_STATE(114)] = 2557,
  [SMALL_STATE(115)] = 2574,
  [SMALL_STATE(116)] = 2587,
  [SMALL_STATE(117)] = 2600,
  [SMALL_STATE(118)] = 2616,
  [SMALL_STATE(119)] = 2630,
  [SMALL_STATE(120)] = 2642,
  [SMALL_STATE(121)] = 2656,
  [SMALL_STATE(122)] = 2668,
  [SMALL_STATE(123)] = 2682,
  [SMALL_STATE(124)] = 2696,
  [SMALL_STATE(125)] = 2708,
  [SMALL_STATE(126)] = 2722,
  [SMALL_STATE(127)] = 2734,
  [SMALL_STATE(128)] = 2750,
  [SMALL_STATE(129)] = 2762,
  [SMALL_STATE(130)] = 2774,
  [SMALL_STATE(131)] = 2788,
  [SMALL_STATE(132)] = 2802,
  [SMALL_STATE(133)] = 2814,
  [SMALL_STATE(134)] = 2830,
  [SMALL_STATE(135)] = 2846,
  [SMALL_STATE(136)] = 2860,
  [SMALL_STATE(137)] = 2872,
  [SMALL_STATE(138)] = 2886,
  [SMALL_STATE(139)] = 2900,
  [SMALL_STATE(140)] = 2912,
  [SMALL_STATE(141)] = 2928,
  [SMALL_STATE(142)] = 2939,
  [SMALL_STATE(143)] = 2952,
  [SMALL_STATE(144)] = 2963,
  [SMALL_STATE(145)] = 2976,
  [SMALL_STATE(146)] = 2987,
  [SMALL_STATE(147)] = 3000,
  [SMALL_STATE(148)] = 3013,
  [SMALL_STATE(149)] = 3023,
  [SMALL_STATE(150)] = 3033,
  [SMALL_STATE(151)] = 3043,
  [SMALL_STATE(152)] = 3053,
  [SMALL_STATE(153)] = 3063,
  [SMALL_STATE(154)] = 3073,
  [SMALL_STATE(155)] = 3083,
  [SMALL_STATE(156)] = 3093,
  [SMALL_STATE(157)] = 3103,
  [SMALL_STATE(158)] = 3113,
  [SMALL_STATE(159)] = 3123,
  [SMALL_STATE(160)] = 3130,
  [SMALL_STATE(161)] = 3137,
  [SMALL_STATE(162)] = 3144,
  [SMALL_STATE(163)] = 3151,
  [SMALL_STATE(164)] = 3158,
  [SMALL_STATE(165)] = 3165,
  [SMALL_STATE(166)] = 3172,
  [SMALL_STATE(167)] = 3179,
  [SMALL_STATE(168)] = 3186,
  [SMALL_STATE(169)] = 3193,
  [SMALL_STATE(170)] = 3200,
  [SMALL_STATE(171)] = 3207,
  [SMALL_STATE(172)] = 3214,
  [SMALL_STATE(173)] = 3221,
  [SMALL_STATE(174)] = 3228,
  [SMALL_STATE(175)] = 3235,
  [SMALL_STATE(176)] = 3242,
  [SMALL_STATE(177)] = 3249,
  [SMALL_STATE(178)] = 3256,
  [SMALL_STATE(179)] = 3263,
  [SMALL_STATE(180)] = 3270,
  [SMALL_STATE(181)] = 3277,
  [SMALL_STATE(182)] = 3284,
  [SMALL_STATE(183)] = 3291,
  [SMALL_STATE(184)] = 3298,
  [SMALL_STATE(185)] = 3305,
  [SMALL_STATE(186)] = 3312,
  [SMALL_STATE(187)] = 3319,
  [SMALL_STATE(188)] = 3326,
  [SMALL_STATE(189)] = 3333,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 6),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 12),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 19),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(6),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(176),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(10),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(10),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(184),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(165),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(182),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(167),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(180),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(173),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(163),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(146),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 7),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 7),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 10),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 10),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_simple_type, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_simple_type, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(91),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 32),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 32),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 32),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 32),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 3, .production_id = 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 2, .production_id = 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 9),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_base, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_body, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 18),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_body, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 18),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(140),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(81),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(175),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 13),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 14),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 4, .production_id = 11),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 13),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 3, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(29),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(140),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(175),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 15),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 15),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(140),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(89),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 25),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 25),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_union_body_repeat1, 2), SHIFT_REPEAT(3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_body_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 27),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 27),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 24),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 24),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 1, .production_id = 17),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 1, .production_id = 17),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 31),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 31),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 10),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 10),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 3, .production_id = 29),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 3, .production_id = 29),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 21),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 21),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(183),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 11),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 11),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_body_repeat1, 2), SHIFT_REPEAT(112),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_body_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 30),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 30),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_member, 2, .production_id = 20),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_member, 2, .production_id = 20),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 19),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 19),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 3, .production_id = 22),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 3, .production_id = 22),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(140),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 2, .production_id = 23),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 2, .production_id = 23),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 4, .production_id = 33),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 4, .production_id = 33),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 4, .production_id = 28),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 4, .production_id = 28),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 2, .production_id = 16),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 2, .production_id = 16),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [534] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 34),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
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
