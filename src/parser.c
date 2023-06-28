#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 33

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
  anon_sym_ref = 43,
  anon_sym_identity = 44,
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
  [anon_sym_ref] = "ref",
  [anon_sym_identity] = "identity",
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
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_identity] = anon_sym_identity,
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
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_identity] = {
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
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 1},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 1},
  [19] = {.index = 32, .length = 4},
  [20] = {.index = 36, .length = 2},
  [21] = {.index = 38, .length = 3},
  [22] = {.index = 41, .length = 2},
  [23] = {.index = 43, .length = 4},
  [24] = {.index = 47, .length = 3},
  [25] = {.index = 50, .length = 2},
  [26] = {.index = 52, .length = 3},
  [27] = {.index = 55, .length = 4},
  [28] = {.index = 59, .length = 5},
  [29] = {.index = 64, .length = 3},
  [30] = {.index = 67, .length = 1},
  [31] = {.index = 68, .length = 5},
  [32] = {.index = 73, .length = 1},
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
    {field_role, 1},
  [31] =
    {field_target, 1},
  [32] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [36] =
    {field_name, 0},
    {field_rename, 2},
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
    {field_name, 0},
    {field_rename, 2},
  [55] =
    {field_name, 0},
    {field_source_cardinality, 2},
    {field_target, 3, .inherited = true},
    {field_target_cardinality, 3, .inherited = true},
  [59] =
    {field_body, 3},
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [64] =
    {field_source_cardinality, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [67] =
    {field_min, 1},
  [68] =
    {field_body, 4},
    {field_name, 0},
    {field_source_cardinality, 2},
    {field_target, 3, .inherited = true},
    {field_target_cardinality, 3, .inherited = true},
  [73] =
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
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
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
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
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
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
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
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
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 65},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
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
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_identity] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_unknown_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_module] = STATE(190),
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
      anon_sym_ref,
      anon_sym_identity,
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
      anon_sym_ref,
      anon_sym_identity,
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
      anon_sym_ref,
      anon_sym_identity,
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
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(30), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(77), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [158] = 15,
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
    ACTIONS(37), 1,
      anon_sym_end,
    STATE(5), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(13), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(20), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [213] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(41), 20,
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
      anon_sym_ref,
      anon_sym_identity,
  [244] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_language_tag,
    ACTIONS(43), 4,
      sym_identifier,
      anon_sym_AT,
      sym_decimal,
      sym_integer,
    ACTIONS(45), 18,
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
      anon_sym_ref,
      anon_sym_identity,
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
      anon_sym_ref,
      anon_sym_identity,
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
      anon_sym_ref,
      anon_sym_identity,
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
      anon_sym_ref,
      anon_sym_identity,
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
      anon_sym_ref,
      anon_sym_identity,
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
    STATE(19), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(77), 7,
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
    STATE(16), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(77), 7,
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
    STATE(28), 1,
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
    STATE(29), 3,
      sym_list_of_values,
      sym_value_constructor,
      sym_simple_value,
  [538] = 11,
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
    ACTIONS(81), 1,
      anon_sym_end,
    STATE(18), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [579] = 12,
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
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(48), 1,
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
    STATE(21), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [622] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      anon_sym_end,
    ACTIONS(87), 1,
      anon_sym_datatype,
    ACTIONS(90), 1,
      anon_sym_entity,
    ACTIONS(93), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_event,
    ACTIONS(99), 1,
      anon_sym_structure,
    ACTIONS(102), 1,
      anon_sym_union,
    ACTIONS(105), 1,
      anon_sym_property,
    STATE(18), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [663] = 11,
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
    STATE(18), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [704] = 11,
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
    STATE(18), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(77), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [745] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(113), 1,
      sym_quoted_string,
    ACTIONS(116), 1,
      anon_sym_LT,
    ACTIONS(119), 1,
      sym_double,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(48), 1,
      sym_identifier_reference,
    ACTIONS(122), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(125), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(21), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
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
    STATE(48), 1,
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
    STATE(17), 3,
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
      anon_sym_ref,
      anon_sym_identity,
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
    STATE(34), 1,
      sym_cardinality_expression,
    STATE(111), 1,
      sym_type_reference,
    STATE(107), 2,
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
      anon_sym_ref,
      anon_sym_identity,
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
      anon_sym_ref,
      anon_sym_identity,
  [934] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 11,
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
  [957] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(157), 12,
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
      anon_sym_ref,
      anon_sym_identity,
  [978] = 3,
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
      anon_sym_ref,
      anon_sym_identity,
  [999] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 1,
      anon_sym_import,
    STATE(30), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    ACTIONS(159), 9,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1021] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(112), 1,
      sym_type_reference,
    STATE(107), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(135), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [1049] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 11,
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
  [1069] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 11,
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
  [1089] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym_unknown_type,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(109), 1,
      sym_type_reference,
    STATE(107), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(135), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [1117] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(174), 11,
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
  [1137] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      sym_quoted_string,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      sym_double,
    STATE(180), 1,
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
  [1166] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(42), 1,
      sym_data_type_base,
    STATE(51), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(135), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [1191] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 10,
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
  [1210] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      anon_sym_is,
    STATE(69), 1,
      sym_entity_body,
    ACTIONS(182), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1230] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 1,
      anon_sym_is,
    STATE(62), 1,
      sym_property_body,
    ACTIONS(186), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1250] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      anon_sym_is,
    STATE(80), 1,
      sym_structure_body,
    ACTIONS(190), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1270] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    STATE(61), 1,
      sym_annotation_only_body,
    ACTIONS(194), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1290] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_of,
    STATE(60), 1,
      sym_union_body,
    ACTIONS(196), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1310] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      anon_sym_is,
    STATE(58), 1,
      sym_structure_body,
    ACTIONS(200), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1330] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_of,
    STATE(57), 1,
      sym_enum_body,
    ACTIONS(202), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1350] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 10,
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
  [1366] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 10,
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
  [1382] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(212), 6,
      anon_sym_RBRACK,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1402] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 8,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [1419] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 8,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
      anon_sym_DASH_GT,
      sym_unknown_type,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 9,
      anon_sym_is,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1451] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_end,
    ACTIONS(228), 1,
      anon_sym_group,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(98), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1476] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_group,
    ACTIONS(230), 1,
      anon_sym_end,
    STATE(52), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(90), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [1501] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1529] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_ref,
    STATE(76), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(105), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1551] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1565] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1579] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(83), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(92), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1603] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1617] = 2,
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
  [1631] = 2,
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
  [1645] = 2,
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
  [1659] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_end,
    ACTIONS(257), 1,
      anon_sym_group,
    ACTIONS(260), 1,
      anon_sym_ref,
    STATE(64), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1681] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_ref,
    ACTIONS(263), 1,
      anon_sym_end,
    ACTIONS(265), 1,
      anon_sym_group,
    STATE(64), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1703] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1717] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_ref,
    ACTIONS(265), 1,
      anon_sym_group,
    ACTIONS(269), 1,
      anon_sym_end,
    STATE(64), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1739] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1753] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1767] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1781] = 2,
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
  [1795] = 2,
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
  [1809] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_ref,
    ACTIONS(265), 1,
      anon_sym_group,
    ACTIONS(281), 1,
      anon_sym_end,
    STATE(67), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1831] = 2,
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
  [1845] = 2,
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
  [1859] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_ref,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(97), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [1881] = 2,
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
  [1895] = 2,
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
  [1909] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_ref,
    ACTIONS(265), 1,
      anon_sym_group,
    ACTIONS(291), 1,
      anon_sym_end,
    STATE(65), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [1931] = 2,
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
  [1945] = 2,
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
  [1959] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [1973] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(99), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [1997] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_as,
    ACTIONS(301), 1,
      anon_sym_DASH_GT,
    STATE(93), 1,
      sym__type_expression_from_to,
    STATE(115), 1,
      sym__type_expression_to,
    STATE(129), 1,
      sym_property_member,
    STATE(149), 1,
      sym_cardinality_expression,
  [2022] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_qualified_identifier,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
    STATE(85), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [2043] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_qualified_identifier,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
    STATE(85), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [2064] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(137), 1,
      sym_annotation_only_body,
    ACTIONS(314), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2082] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    ACTIONS(316), 1,
      sym_identifier,
    STATE(127), 1,
      sym_annotation_only_body,
    ACTIONS(318), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2100] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(320), 1,
      sym_identifier,
    STATE(101), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(124), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2118] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_end,
    ACTIONS(228), 1,
      anon_sym_group,
    STATE(95), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2136] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_qualified_identifier,
    STATE(47), 1,
      sym_import,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
  [2156] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(100), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2176] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(126), 1,
      sym_annotation_only_body,
    ACTIONS(328), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2194] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(131), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2212] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(335), 1,
      anon_sym_end,
    ACTIONS(337), 1,
      anon_sym_group,
    STATE(95), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2230] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(343), 1,
      anon_sym_end,
    ACTIONS(345), 1,
      anon_sym_ref,
    STATE(96), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2248] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_ref,
    ACTIONS(348), 1,
      anon_sym_end,
    STATE(96), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2266] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_group,
    ACTIONS(350), 1,
      anon_sym_end,
    STATE(95), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [2284] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(352), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(100), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2304] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_end,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(110), 1,
      sym_identifier_reference,
    STATE(100), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [2324] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(320), 1,
      sym_identifier,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(122), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2342] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(118), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2360] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(102), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(139), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2378] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(94), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(140), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2396] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_ref,
    ACTIONS(361), 1,
      anon_sym_end,
    STATE(96), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [2414] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(33), 1,
      sym_qualified_identifier,
    STATE(32), 2,
      sym_member_import,
      sym_module_import,
    STATE(86), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [2432] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(365), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2445] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_identity,
    STATE(79), 1,
      sym_identity_member,
    STATE(114), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2462] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2475] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(375), 1,
      anon_sym_end,
    ACTIONS(377), 1,
      anon_sym_as,
    STATE(157), 1,
      sym_annotation_only_body,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(381), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2507] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(385), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2520] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      sym_identifier,
    ACTIONS(389), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2533] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(367), 1,
      anon_sym_identity,
    STATE(73), 1,
      sym_identity_member,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2550] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(393), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2563] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(397), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2575] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      anon_sym_as,
    ACTIONS(399), 1,
      anon_sym_DASH_GT,
    STATE(87), 1,
      sym__type_expression,
    STATE(116), 1,
      sym_property_member,
  [2591] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_end,
    STATE(120), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2605] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_end,
    STATE(155), 1,
      sym_annotation_only_body,
  [2621] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(412), 1,
      anon_sym_end,
    STATE(120), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2635] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(417), 1,
      anon_sym_end,
    STATE(121), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2649] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(419), 1,
      anon_sym_end,
    STATE(121), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(423), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2675] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_end,
    STATE(121), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [2689] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      anon_sym_as,
    ACTIONS(301), 1,
      anon_sym_DASH_GT,
    STATE(88), 1,
      sym__type_expression_to,
    STATE(123), 1,
      sym_property_member,
  [2705] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2717] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      sym_identifier,
    ACTIONS(433), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2729] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(437), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2741] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(441), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2753] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(445), 1,
      anon_sym_end,
    STATE(153), 1,
      sym_annotation_only_body,
  [2769] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(449), 1,
      anon_sym_end,
    STATE(133), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2783] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    ACTIONS(451), 1,
      sym_identifier,
    ACTIONS(453), 1,
      anon_sym_end,
    STATE(152), 1,
      sym_annotation_only_body,
  [2799] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(458), 1,
      anon_sym_end,
    STATE(133), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2813] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(462), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2825] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_is,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(466), 1,
      anon_sym_end,
    STATE(150), 1,
      sym_annotation_only_body,
  [2841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(468), 1,
      anon_sym_end,
    STATE(23), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2855] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      sym_identifier,
    ACTIONS(472), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2867] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(476), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [2879] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_end,
    STATE(120), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [2893] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_end,
    STATE(133), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [2907] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_DASH_GT,
    ACTIONS(482), 1,
      anon_sym_ref,
    STATE(130), 1,
      sym__type_expression_to,
  [2920] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      anon_sym_DOT_DOT,
    STATE(187), 1,
      sym_cardinality_range,
  [2933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    STATE(136), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [2944] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      sym_identifier,
    ACTIONS(490), 2,
      anon_sym_end,
      anon_sym_group,
  [2955] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(41), 1,
      sym_identifier_reference,
  [2968] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(4), 1,
      sym_qualified_identifier,
    STATE(182), 1,
      sym_identifier_reference,
  [2981] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(494), 2,
      anon_sym_end,
      anon_sym_group,
  [2992] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      anon_sym_base,
    ACTIONS(498), 1,
      anon_sym_is,
    STATE(165), 1,
      sym_module_body,
  [3005] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_DASH_GT,
    STATE(113), 1,
      sym__type_expression_to,
  [3015] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      anon_sym_end,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 1,
      anon_sym_LT,
    STATE(154), 1,
      sym_iri_reference,
  [3035] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(506), 1,
      anon_sym_end,
  [3045] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_end,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(498), 1,
      anon_sym_is,
    STATE(160), 1,
      sym_module_body,
  [3065] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(512), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_end,
  [3075] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_cardinality_expression,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_end,
  [3095] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(520), 1,
      sym_unsigned,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [3105] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_DASH_GT,
    STATE(132), 1,
      sym__type_expression_to,
  [3115] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
  [3122] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
  [3129] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
  [3136] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(530), 1,
      sym_identifier,
  [3143] = 2,
    ACTIONS(532), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(534), 1,
      sym_line_comment,
  [3150] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
  [3157] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      sym_unsigned,
  [3164] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(540), 1,
      sym_identifier,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      sym_identifier,
  [3178] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      sym_identifier,
  [3185] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(546), 1,
      sym_identifier,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      sym_identifier,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
  [3206] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(552), 1,
      sym_identifier,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(554), 1,
      sym_identifier,
  [3220] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(556), 1,
      sym_identifier,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(558), 1,
      sym_identifier,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      sym_identifier,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_EQ,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_GT,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [3262] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      sym_unsigned,
  [3269] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(570), 1,
      anon_sym_EQ,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 1,
      anon_sym_LT_DASH,
  [3283] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      sym_identifier,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(576), 1,
      anon_sym_source,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(582), 1,
      sym_identifier,
  [3318] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 277,
  [SMALL_STATE(10)] = 307,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 367,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 444,
  [SMALL_STATE(15)] = 492,
  [SMALL_STATE(16)] = 538,
  [SMALL_STATE(17)] = 579,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 663,
  [SMALL_STATE(20)] = 704,
  [SMALL_STATE(21)] = 745,
  [SMALL_STATE(22)] = 788,
  [SMALL_STATE(23)] = 828,
  [SMALL_STATE(24)] = 855,
  [SMALL_STATE(25)] = 889,
  [SMALL_STATE(26)] = 913,
  [SMALL_STATE(27)] = 934,
  [SMALL_STATE(28)] = 957,
  [SMALL_STATE(29)] = 978,
  [SMALL_STATE(30)] = 999,
  [SMALL_STATE(31)] = 1021,
  [SMALL_STATE(32)] = 1049,
  [SMALL_STATE(33)] = 1069,
  [SMALL_STATE(34)] = 1089,
  [SMALL_STATE(35)] = 1117,
  [SMALL_STATE(36)] = 1137,
  [SMALL_STATE(37)] = 1166,
  [SMALL_STATE(38)] = 1191,
  [SMALL_STATE(39)] = 1210,
  [SMALL_STATE(40)] = 1230,
  [SMALL_STATE(41)] = 1250,
  [SMALL_STATE(42)] = 1270,
  [SMALL_STATE(43)] = 1290,
  [SMALL_STATE(44)] = 1310,
  [SMALL_STATE(45)] = 1330,
  [SMALL_STATE(46)] = 1350,
  [SMALL_STATE(47)] = 1366,
  [SMALL_STATE(48)] = 1382,
  [SMALL_STATE(49)] = 1402,
  [SMALL_STATE(50)] = 1419,
  [SMALL_STATE(51)] = 1436,
  [SMALL_STATE(52)] = 1451,
  [SMALL_STATE(53)] = 1476,
  [SMALL_STATE(54)] = 1501,
  [SMALL_STATE(55)] = 1515,
  [SMALL_STATE(56)] = 1529,
  [SMALL_STATE(57)] = 1551,
  [SMALL_STATE(58)] = 1565,
  [SMALL_STATE(59)] = 1579,
  [SMALL_STATE(60)] = 1603,
  [SMALL_STATE(61)] = 1617,
  [SMALL_STATE(62)] = 1631,
  [SMALL_STATE(63)] = 1645,
  [SMALL_STATE(64)] = 1659,
  [SMALL_STATE(65)] = 1681,
  [SMALL_STATE(66)] = 1703,
  [SMALL_STATE(67)] = 1717,
  [SMALL_STATE(68)] = 1739,
  [SMALL_STATE(69)] = 1753,
  [SMALL_STATE(70)] = 1767,
  [SMALL_STATE(71)] = 1781,
  [SMALL_STATE(72)] = 1795,
  [SMALL_STATE(73)] = 1809,
  [SMALL_STATE(74)] = 1831,
  [SMALL_STATE(75)] = 1845,
  [SMALL_STATE(76)] = 1859,
  [SMALL_STATE(77)] = 1881,
  [SMALL_STATE(78)] = 1895,
  [SMALL_STATE(79)] = 1909,
  [SMALL_STATE(80)] = 1931,
  [SMALL_STATE(81)] = 1945,
  [SMALL_STATE(82)] = 1959,
  [SMALL_STATE(83)] = 1973,
  [SMALL_STATE(84)] = 1997,
  [SMALL_STATE(85)] = 2022,
  [SMALL_STATE(86)] = 2043,
  [SMALL_STATE(87)] = 2064,
  [SMALL_STATE(88)] = 2082,
  [SMALL_STATE(89)] = 2100,
  [SMALL_STATE(90)] = 2118,
  [SMALL_STATE(91)] = 2136,
  [SMALL_STATE(92)] = 2156,
  [SMALL_STATE(93)] = 2176,
  [SMALL_STATE(94)] = 2194,
  [SMALL_STATE(95)] = 2212,
  [SMALL_STATE(96)] = 2230,
  [SMALL_STATE(97)] = 2248,
  [SMALL_STATE(98)] = 2266,
  [SMALL_STATE(99)] = 2284,
  [SMALL_STATE(100)] = 2304,
  [SMALL_STATE(101)] = 2324,
  [SMALL_STATE(102)] = 2342,
  [SMALL_STATE(103)] = 2360,
  [SMALL_STATE(104)] = 2378,
  [SMALL_STATE(105)] = 2396,
  [SMALL_STATE(106)] = 2414,
  [SMALL_STATE(107)] = 2432,
  [SMALL_STATE(108)] = 2445,
  [SMALL_STATE(109)] = 2462,
  [SMALL_STATE(110)] = 2475,
  [SMALL_STATE(111)] = 2494,
  [SMALL_STATE(112)] = 2507,
  [SMALL_STATE(113)] = 2520,
  [SMALL_STATE(114)] = 2533,
  [SMALL_STATE(115)] = 2550,
  [SMALL_STATE(116)] = 2563,
  [SMALL_STATE(117)] = 2575,
  [SMALL_STATE(118)] = 2591,
  [SMALL_STATE(119)] = 2605,
  [SMALL_STATE(120)] = 2621,
  [SMALL_STATE(121)] = 2635,
  [SMALL_STATE(122)] = 2649,
  [SMALL_STATE(123)] = 2663,
  [SMALL_STATE(124)] = 2675,
  [SMALL_STATE(125)] = 2689,
  [SMALL_STATE(126)] = 2705,
  [SMALL_STATE(127)] = 2717,
  [SMALL_STATE(128)] = 2729,
  [SMALL_STATE(129)] = 2741,
  [SMALL_STATE(130)] = 2753,
  [SMALL_STATE(131)] = 2769,
  [SMALL_STATE(132)] = 2783,
  [SMALL_STATE(133)] = 2799,
  [SMALL_STATE(134)] = 2813,
  [SMALL_STATE(135)] = 2825,
  [SMALL_STATE(136)] = 2841,
  [SMALL_STATE(137)] = 2855,
  [SMALL_STATE(138)] = 2867,
  [SMALL_STATE(139)] = 2879,
  [SMALL_STATE(140)] = 2893,
  [SMALL_STATE(141)] = 2907,
  [SMALL_STATE(142)] = 2920,
  [SMALL_STATE(143)] = 2933,
  [SMALL_STATE(144)] = 2944,
  [SMALL_STATE(145)] = 2955,
  [SMALL_STATE(146)] = 2968,
  [SMALL_STATE(147)] = 2981,
  [SMALL_STATE(148)] = 2992,
  [SMALL_STATE(149)] = 3005,
  [SMALL_STATE(150)] = 3015,
  [SMALL_STATE(151)] = 3025,
  [SMALL_STATE(152)] = 3035,
  [SMALL_STATE(153)] = 3045,
  [SMALL_STATE(154)] = 3055,
  [SMALL_STATE(155)] = 3065,
  [SMALL_STATE(156)] = 3075,
  [SMALL_STATE(157)] = 3085,
  [SMALL_STATE(158)] = 3095,
  [SMALL_STATE(159)] = 3105,
  [SMALL_STATE(160)] = 3115,
  [SMALL_STATE(161)] = 3122,
  [SMALL_STATE(162)] = 3129,
  [SMALL_STATE(163)] = 3136,
  [SMALL_STATE(164)] = 3143,
  [SMALL_STATE(165)] = 3150,
  [SMALL_STATE(166)] = 3157,
  [SMALL_STATE(167)] = 3164,
  [SMALL_STATE(168)] = 3171,
  [SMALL_STATE(169)] = 3178,
  [SMALL_STATE(170)] = 3185,
  [SMALL_STATE(171)] = 3192,
  [SMALL_STATE(172)] = 3199,
  [SMALL_STATE(173)] = 3206,
  [SMALL_STATE(174)] = 3213,
  [SMALL_STATE(175)] = 3220,
  [SMALL_STATE(176)] = 3227,
  [SMALL_STATE(177)] = 3234,
  [SMALL_STATE(178)] = 3241,
  [SMALL_STATE(179)] = 3248,
  [SMALL_STATE(180)] = 3255,
  [SMALL_STATE(181)] = 3262,
  [SMALL_STATE(182)] = 3269,
  [SMALL_STATE(183)] = 3276,
  [SMALL_STATE(184)] = 3283,
  [SMALL_STATE(185)] = 3290,
  [SMALL_STATE(186)] = 3297,
  [SMALL_STATE(187)] = 3304,
  [SMALL_STATE(188)] = 3311,
  [SMALL_STATE(189)] = 3318,
  [SMALL_STATE(190)] = 3325,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 5),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 9),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(167),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(169),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(171),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(173),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(174),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(175),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(177),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(8),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(164),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(10),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(10),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(9),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(146),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4, .production_id = 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(91),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_simple_type, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_simple_type, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 2, .production_id = 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 7),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 2, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 30),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 30),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 30),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 30),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_base, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 10),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 10),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 3, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 3, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 3),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(125),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(56),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(176),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 15),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_body, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 15),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_body, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(27),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 14),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 12),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 23),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 23),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(125),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(89),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(125),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(176),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_union_body_repeat1, 2), SHIFT_REPEAT(3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_body_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 25),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 25),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 18),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 18),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 18),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 18),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 29),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 29),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 22),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 22),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 3, .production_id = 20),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 3, .production_id = 20),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(178),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(125),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 28),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 28),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 19),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 19),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 4),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 2, .production_id = 12),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 2, .production_id = 12),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 4, .production_id = 27),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 4, .production_id = 27),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_body_repeat1, 2), SHIFT_REPEAT(141),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_body_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_member, 2, .production_id = 17),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_member, 2, .production_id = 17),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 16),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 21),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 21),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 24),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 24),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 5, .production_id = 31),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 5, .production_id = 31),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 3, .production_id = 19),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 3, .production_id = 19),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 4, .production_id = 26),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 4, .production_id = 26),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 2, .production_id = 13),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 2, .production_id = 13),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 32),
  [586] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
