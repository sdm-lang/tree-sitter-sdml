#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 267
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 36

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
  anon_sym_assert = 12,
  sym_tautology = 13,
  sym_contradiction = 14,
  anon_sym_DOT = 15,
  sym_reserved_self = 16,
  sym_reserved_self_type = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_not = 20,
  anon_sym_ = 21,
  anon_sym_and = 22,
  anon_sym_2 = 23,
  anon_sym_or = 24,
  anon_sym_3 = 25,
  anon_sym_implies = 26,
  anon_sym_4 = 27,
  anon_sym_iff = 28,
  anon_sym_5 = 29,
  anon_sym_forall = 30,
  anon_sym_6 = 31,
  anon_sym_exists = 32,
  anon_sym_7 = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_string = 35,
  anon_sym_double = 36,
  anon_sym_decimal = 37,
  anon_sym_integer = 38,
  anon_sym_boolean = 39,
  anon_sym_iri = 40,
  sym_quoted_string = 41,
  sym_language_tag = 42,
  anon_sym_LT = 43,
  aux_sym_iri_reference_token1 = 44,
  anon_sym_GT = 45,
  sym_double = 46,
  sym_decimal = 47,
  sym_integer = 48,
  sym_unsigned = 49,
  anon_sym_true = 50,
  anon_sym_false = 51,
  anon_sym_datatype = 52,
  anon_sym_LT_DASH = 53,
  anon_sym_entity = 54,
  anon_sym_group = 55,
  anon_sym_enum = 56,
  anon_sym_of = 57,
  anon_sym_event = 58,
  anon_sym_source = 59,
  anon_sym_structure = 60,
  anon_sym_union = 61,
  anon_sym_as = 62,
  anon_sym_property = 63,
  anon_sym_ref = 64,
  anon_sym_identity = 65,
  sym_unknown_type = 66,
  anon_sym_LBRACE = 67,
  anon_sym_RBRACE = 68,
  anon_sym_DOT_DOT = 69,
  sym_line_comment = 70,
  sym_module = 71,
  sym_module_body = 72,
  sym_import_statement = 73,
  sym_import = 74,
  sym_member_import = 75,
  sym_module_import = 76,
  sym_qualified_identifier = 77,
  sym_identifier_reference = 78,
  sym_annotation = 79,
  sym_annotation_property = 80,
  sym_constraint = 81,
  sym_informal_constraint = 82,
  sym_formal_constraint = 83,
  sym_term = 84,
  sym_predicate_value = 85,
  sym_list_of_predicate_values = 86,
  sym_name_path = 87,
  sym_name = 88,
  sym_functional_term = 89,
  sym_constraint_statement = 90,
  sym_simple_statement = 91,
  sym_atomic_sentence = 92,
  sym_equation = 93,
  sym_boolean_statement = 94,
  sym_negation = 95,
  sym_conjunction = 96,
  sym_disjunction = 97,
  sym_implication = 98,
  sym_biconditional = 99,
  sym_quantified_sentence = 100,
  sym_universal = 101,
  sym_existential = 102,
  sym_quantifier_binding = 103,
  sym_binding_type_reference = 104,
  sym_value = 105,
  sym_list_of_values = 106,
  sym_value_constructor = 107,
  sym_builtin_simple_type = 108,
  sym_simple_value = 109,
  sym_string = 110,
  sym_iri_reference = 111,
  sym_boolean = 112,
  sym_type_def = 113,
  sym_data_type_def = 114,
  sym_data_type_base = 115,
  sym_annotation_only_body = 116,
  sym_entity_def = 117,
  sym_entity_group = 118,
  sym_entity_body = 119,
  sym_enum_def = 120,
  sym_enum_body = 121,
  sym_enum_variant = 122,
  sym_event_def = 123,
  sym_structure_def = 124,
  sym_structure_group = 125,
  sym_structure_body = 126,
  sym_union_def = 127,
  sym_union_body = 128,
  sym_type_variant = 129,
  sym_property_def = 130,
  sym_property_body = 131,
  sym_property_role = 132,
  sym_property_member = 133,
  sym_identity_member = 134,
  sym_member_by_value = 135,
  sym_member_by_reference = 136,
  sym__type_expression = 137,
  sym__type_expression_to = 138,
  sym__type_expression_from_to = 139,
  sym_type_reference = 140,
  sym_cardinality_expression = 141,
  sym_cardinality_range = 142,
  aux_sym_module_body_repeat1 = 143,
  aux_sym_module_body_repeat2 = 144,
  aux_sym_module_body_repeat3 = 145,
  aux_sym_import_statement_repeat1 = 146,
  aux_sym_list_of_predicate_values_repeat1 = 147,
  aux_sym_name_path_repeat1 = 148,
  aux_sym_functional_term_repeat1 = 149,
  aux_sym_universal_repeat1 = 150,
  aux_sym_list_of_values_repeat1 = 151,
  aux_sym_entity_group_repeat1 = 152,
  aux_sym_entity_body_repeat1 = 153,
  aux_sym_enum_body_repeat1 = 154,
  aux_sym_structure_group_repeat1 = 155,
  aux_sym_structure_body_repeat1 = 156,
  aux_sym_union_body_repeat1 = 157,
  aux_sym_property_body_repeat1 = 158,
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
  [anon_sym_assert] = "assert",
  [sym_tautology] = "tautology",
  [sym_contradiction] = "contradiction",
  [anon_sym_DOT] = ".",
  [sym_reserved_self] = "reserved_self",
  [sym_reserved_self_type] = "reserved_self_type",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_not] = "not",
  [anon_sym_] = "¬",
  [anon_sym_and] = "and",
  [anon_sym_2] = "∧",
  [anon_sym_or] = "or",
  [anon_sym_3] = "∨",
  [anon_sym_implies] = "implies",
  [anon_sym_4] = "⇒",
  [anon_sym_iff] = "iff",
  [anon_sym_5] = "⇔",
  [anon_sym_forall] = "forall",
  [anon_sym_6] = "∀",
  [anon_sym_exists] = "exists",
  [anon_sym_7] = "∃",
  [anon_sym_DASH_GT] = "->",
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
  [sym_annotation_property] = "annotation_property",
  [sym_constraint] = "constraint",
  [sym_informal_constraint] = "informal_constraint",
  [sym_formal_constraint] = "formal_constraint",
  [sym_term] = "term",
  [sym_predicate_value] = "predicate_value",
  [sym_list_of_predicate_values] = "list_of_predicate_values",
  [sym_name_path] = "name_path",
  [sym_name] = "name",
  [sym_functional_term] = "functional_term",
  [sym_constraint_statement] = "constraint_statement",
  [sym_simple_statement] = "simple_statement",
  [sym_atomic_sentence] = "atomic_sentence",
  [sym_equation] = "equation",
  [sym_boolean_statement] = "boolean_statement",
  [sym_negation] = "negation",
  [sym_conjunction] = "conjunction",
  [sym_disjunction] = "disjunction",
  [sym_implication] = "implication",
  [sym_biconditional] = "biconditional",
  [sym_quantified_sentence] = "quantified_sentence",
  [sym_universal] = "universal",
  [sym_existential] = "existential",
  [sym_quantifier_binding] = "quantifier_binding",
  [sym_binding_type_reference] = "binding_type_reference",
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
  [aux_sym_list_of_predicate_values_repeat1] = "list_of_predicate_values_repeat1",
  [aux_sym_name_path_repeat1] = "name_path_repeat1",
  [aux_sym_functional_term_repeat1] = "functional_term_repeat1",
  [aux_sym_universal_repeat1] = "universal_repeat1",
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
  [anon_sym_assert] = anon_sym_assert,
  [sym_tautology] = sym_tautology,
  [sym_contradiction] = sym_contradiction,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_reserved_self] = sym_reserved_self,
  [sym_reserved_self_type] = sym_reserved_self_type,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_] = anon_sym_,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_implies] = anon_sym_implies,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_iff] = anon_sym_iff,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
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
  [sym_annotation_property] = sym_annotation_property,
  [sym_constraint] = sym_constraint,
  [sym_informal_constraint] = sym_informal_constraint,
  [sym_formal_constraint] = sym_formal_constraint,
  [sym_term] = sym_term,
  [sym_predicate_value] = sym_predicate_value,
  [sym_list_of_predicate_values] = sym_list_of_predicate_values,
  [sym_name_path] = sym_name_path,
  [sym_name] = sym_name,
  [sym_functional_term] = sym_functional_term,
  [sym_constraint_statement] = sym_constraint_statement,
  [sym_simple_statement] = sym_simple_statement,
  [sym_atomic_sentence] = sym_atomic_sentence,
  [sym_equation] = sym_equation,
  [sym_boolean_statement] = sym_boolean_statement,
  [sym_negation] = sym_negation,
  [sym_conjunction] = sym_conjunction,
  [sym_disjunction] = sym_disjunction,
  [sym_implication] = sym_implication,
  [sym_biconditional] = sym_biconditional,
  [sym_quantified_sentence] = sym_quantified_sentence,
  [sym_universal] = sym_universal,
  [sym_existential] = sym_existential,
  [sym_quantifier_binding] = sym_quantifier_binding,
  [sym_binding_type_reference] = sym_binding_type_reference,
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
  [aux_sym_list_of_predicate_values_repeat1] = aux_sym_list_of_predicate_values_repeat1,
  [aux_sym_name_path_repeat1] = aux_sym_name_path_repeat1,
  [aux_sym_functional_term_repeat1] = aux_sym_functional_term_repeat1,
  [aux_sym_universal_repeat1] = aux_sym_universal_repeat1,
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
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [sym_tautology] = {
    .visible = true,
    .named = true,
  },
  [sym_contradiction] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_reserved_self] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved_self_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [sym_annotation_property] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_informal_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_value] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_predicate_values] = {
    .visible = true,
    .named = true,
  },
  [sym_name_path] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_functional_term] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_implication] = {
    .visible = true,
    .named = true,
  },
  [sym_biconditional] = {
    .visible = true,
    .named = true,
  },
  [sym_quantified_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_universal] = {
    .visible = true,
    .named = true,
  },
  [sym_existential] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_type_reference] = {
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
  [aux_sym_list_of_predicate_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functional_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_universal_repeat1] = {
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
  field_function = 3,
  field_identity = 4,
  field_language = 5,
  field_max = 6,
  field_member = 7,
  field_min = 8,
  field_module = 9,
  field_name = 10,
  field_predicate = 11,
  field_rename = 12,
  field_role = 13,
  field_source = 14,
  field_source_cardinality = 15,
  field_target = 16,
  field_target_cardinality = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_body] = "body",
  [field_function] = "function",
  [field_identity] = "identity",
  [field_language] = "language",
  [field_max] = "max",
  [field_member] = "member",
  [field_min] = "min",
  [field_module] = "module",
  [field_name] = "name",
  [field_predicate] = "predicate",
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
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 3},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 1},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 1},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 1},
  [22] = {.index = 35, .length = 4},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 3},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 4},
  [27] = {.index = 50, .length = 3},
  [28] = {.index = 53, .length = 2},
  [29] = {.index = 55, .length = 3},
  [30] = {.index = 58, .length = 4},
  [31] = {.index = 62, .length = 5},
  [32] = {.index = 67, .length = 3},
  [33] = {.index = 70, .length = 1},
  [34] = {.index = 71, .length = 5},
  [35] = {.index = 76, .length = 1},
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
    {field_body, 1},
  [7] =
    {field_name, 1},
  [8] =
    {field_member, 2},
    {field_module, 0},
  [10] =
    {field_name, 1},
    {field_value, 3},
  [12] =
    {field_language, 1},
  [13] =
    {field_base, 3},
    {field_name, 1},
  [15] =
    {field_name, 1},
    {field_source, 3},
  [17] =
    {field_function, 0},
  [18] =
    {field_predicate, 0},
  [19] =
    {field_identity, 1},
  [20] =
    {field_body, 4},
    {field_name, 1},
    {field_source, 3},
  [23] =
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [26] =
    {field_body, 1},
    {field_name, 0},
  [28] =
    {field_target, 1},
  [29] =
    {field_name, 1},
    {field_target, 2, .inherited = true},
  [31] =
    {field_identity, 2},
  [32] =
    {field_name, 0},
    {field_value, 2},
  [34] =
    {field_role, 1},
  [35] =
    {field_body, 2},
    {field_name, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [39] =
    {field_name, 0},
    {field_rename, 2},
  [41] =
    {field_body, 3},
    {field_name, 1},
    {field_target, 2, .inherited = true},
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
    {field_name, 0},
    {field_source_cardinality, 2},
    {field_target, 3, .inherited = true},
    {field_target_cardinality, 3, .inherited = true},
  [62] =
    {field_body, 3},
    {field_name, 1},
    {field_source_cardinality, 2, .inherited = true},
    {field_target, 2, .inherited = true},
    {field_target_cardinality, 2, .inherited = true},
  [67] =
    {field_source_cardinality, 0},
    {field_target, 1, .inherited = true},
    {field_target_cardinality, 1, .inherited = true},
  [70] =
    {field_min, 1},
  [71] =
    {field_body, 4},
    {field_name, 0},
    {field_source_cardinality, 2},
    {field_target, 3, .inherited = true},
    {field_target_cardinality, 3, .inherited = true},
  [76] =
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
  [170] = 18,
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
  [183] = 16,
  [184] = 184,
  [185] = 25,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 239,
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
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == 172) ADVANCE(61);
      if (lookahead == 8658) ADVANCE(64);
      if (lookahead == 8660) ADVANCE(65);
      if (lookahead == 8704) ADVANCE(66);
      if (lookahead == 8707) ADVANCE(67);
      if (lookahead == 8743) ADVANCE(62);
      if (lookahead == 8744) ADVANCE(63);
      if (lookahead == 8868) ADVANCE(55);
      if (lookahead == 8869) ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == 8658) ADVANCE(64);
      if (lookahead == 8660) ADVANCE(65);
      if (lookahead == 8743) ADVANCE(62);
      if (lookahead == 8744) ADVANCE(63);
      if (lookahead == 8868) ADVANCE(55);
      if (lookahead == 8869) ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == 8658) ADVANCE(64);
      if (lookahead == 8660) ADVANCE(65);
      if (lookahead == 8743) ADVANCE(62);
      if (lookahead == 8744) ADVANCE(63);
      if (lookahead == 8868) ADVANCE(55);
      if (lookahead == 8869) ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == 172) ADVANCE(61);
      if (lookahead == 8658) ADVANCE(64);
      if (lookahead == 8660) ADVANCE(65);
      if (lookahead == 8704) ADVANCE(66);
      if (lookahead == 8707) ADVANCE(67);
      if (lookahead == 8743) ADVANCE(62);
      if (lookahead == 8744) ADVANCE(63);
      if (lookahead == 8868) ADVANCE(55);
      if (lookahead == 8869) ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == 172) ADVANCE(61);
      if (lookahead == 8658) ADVANCE(64);
      if (lookahead == 8660) ADVANCE(65);
      if (lookahead == 8704) ADVANCE(66);
      if (lookahead == 8707) ADVANCE(67);
      if (lookahead == 8743) ADVANCE(62);
      if (lookahead == 8744) ADVANCE(63);
      if (lookahead == 8868) ADVANCE(55);
      if (lookahead == 8869) ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < 11 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == '>') ADVANCE(68);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '\\') ADVANCE(12);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      END_STATE();
    case 41:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 43:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
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
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == 172) ADVANCE(61);
      if (lookahead == 8658) ADVANCE(64);
      if (lookahead == 8660) ADVANCE(65);
      if (lookahead == 8704) ADVANCE(66);
      if (lookahead == 8707) ADVANCE(67);
      if (lookahead == 8743) ADVANCE(62);
      if (lookahead == 8744) ADVANCE(63);
      if (lookahead == 8868) ADVANCE(55);
      if (lookahead == 8869) ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(87);
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
      ACCEPT_TOKEN(sym_tautology);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_contradiction);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(93);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_language_tag);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_language_tag);
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_language_tag);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_iri_reference_token1);
      if (lookahead == '\\') ADVANCE(94);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= ' ') ||
          lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'U') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
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
      if (lookahead == 'S') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'v') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_iff);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_iri);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_reserved_self_type);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_reserved_self);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 127:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 149:
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_implies);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_unknown_type);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_identity);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 159:
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
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
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
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 3},
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
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 3},
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
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
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
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 13},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 77},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 13},
  [246] = {.lex_state = 13},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
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
    [anon_sym_assert] = ACTIONS(1),
    [sym_tautology] = ACTIONS(1),
    [sym_contradiction] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_reserved_self] = ACTIONS(1),
    [sym_reserved_self_type] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_implies] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_iff] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
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
    [sym_unknown_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_module] = STATE(253),
    [anon_sym_module] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(62), 1,
      sym_constraint_statement,
    STATE(94), 1,
      sym_negation,
    STATE(98), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_boolean_statement,
    STATE(102), 1,
      sym_quantified_sentence,
    STATE(232), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(17), 2,
      anon_sym_not,
      anon_sym_,
    ACTIONS(19), 2,
      anon_sym_forall,
      anon_sym_6,
    ACTIONS(21), 2,
      anon_sym_exists,
      anon_sym_7,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(99), 2,
      sym_atomic_sentence,
      sym_equation,
    STATE(103), 2,
      sym_universal,
      sym_existential,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [93] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(65), 1,
      sym_constraint_statement,
    STATE(94), 1,
      sym_negation,
    STATE(98), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_boolean_statement,
    STATE(102), 1,
      sym_quantified_sentence,
    STATE(232), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(17), 2,
      anon_sym_not,
      anon_sym_,
    ACTIONS(19), 2,
      anon_sym_forall,
      anon_sym_6,
    ACTIONS(21), 2,
      anon_sym_exists,
      anon_sym_7,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(99), 2,
      sym_atomic_sentence,
      sym_equation,
    STATE(103), 2,
      sym_universal,
      sym_existential,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [186] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(35), 36,
      anon_sym_is,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_assert,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
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
  [233] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(52), 1,
      sym_constraint_statement,
    STATE(94), 1,
      sym_negation,
    STATE(98), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_boolean_statement,
    STATE(102), 1,
      sym_quantified_sentence,
    STATE(232), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(17), 2,
      anon_sym_not,
      anon_sym_,
    ACTIONS(19), 2,
      anon_sym_forall,
      anon_sym_6,
    ACTIONS(21), 2,
      anon_sym_exists,
      anon_sym_7,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(99), 2,
      sym_atomic_sentence,
      sym_equation,
    STATE(103), 2,
      sym_universal,
      sym_existential,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [326] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(67), 1,
      sym_constraint_statement,
    STATE(94), 1,
      sym_negation,
    STATE(98), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_boolean_statement,
    STATE(102), 1,
      sym_quantified_sentence,
    STATE(232), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(17), 2,
      anon_sym_not,
      anon_sym_,
    ACTIONS(19), 2,
      anon_sym_forall,
      anon_sym_6,
    ACTIONS(21), 2,
      anon_sym_exists,
      anon_sym_7,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(99), 2,
      sym_atomic_sentence,
      sym_equation,
    STATE(103), 2,
      sym_universal,
      sym_existential,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [419] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(72), 1,
      sym_constraint_statement,
    STATE(94), 1,
      sym_negation,
    STATE(98), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_boolean_statement,
    STATE(102), 1,
      sym_quantified_sentence,
    STATE(232), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(17), 2,
      anon_sym_not,
      anon_sym_,
    ACTIONS(19), 2,
      anon_sym_forall,
      anon_sym_6,
    ACTIONS(21), 2,
      anon_sym_exists,
      anon_sym_7,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(99), 2,
      sym_atomic_sentence,
      sym_equation,
    STATE(103), 2,
      sym_universal,
      sym_existential,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [512] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(75), 1,
      sym_constraint_statement,
    STATE(94), 1,
      sym_negation,
    STATE(98), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_boolean_statement,
    STATE(102), 1,
      sym_quantified_sentence,
    STATE(232), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(17), 2,
      anon_sym_not,
      anon_sym_,
    ACTIONS(19), 2,
      anon_sym_forall,
      anon_sym_6,
    ACTIONS(21), 2,
      anon_sym_exists,
      anon_sym_7,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(99), 2,
      sym_atomic_sentence,
      sym_equation,
    STATE(103), 2,
      sym_universal,
      sym_existential,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [605] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(64), 1,
      sym_constraint_statement,
    STATE(94), 1,
      sym_negation,
    STATE(98), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_boolean_statement,
    STATE(102), 1,
      sym_quantified_sentence,
    STATE(232), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(17), 2,
      anon_sym_not,
      anon_sym_,
    ACTIONS(19), 2,
      anon_sym_forall,
      anon_sym_6,
    ACTIONS(21), 2,
      anon_sym_exists,
      anon_sym_7,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(99), 2,
      sym_atomic_sentence,
      sym_equation,
    STATE(103), 2,
      sym_universal,
      sym_existential,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [698] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(71), 1,
      sym_constraint_statement,
    STATE(94), 1,
      sym_negation,
    STATE(98), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_boolean_statement,
    STATE(102), 1,
      sym_quantified_sentence,
    STATE(232), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(17), 2,
      anon_sym_not,
      anon_sym_,
    ACTIONS(19), 2,
      anon_sym_forall,
      anon_sym_6,
    ACTIONS(21), 2,
      anon_sym_exists,
      anon_sym_7,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(99), 2,
      sym_atomic_sentence,
      sym_equation,
    STATE(103), 2,
      sym_universal,
      sym_existential,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [791] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(61), 1,
      sym_constraint_statement,
    STATE(94), 1,
      sym_negation,
    STATE(98), 1,
      sym_simple_statement,
    STATE(100), 1,
      sym_boolean_statement,
    STATE(102), 1,
      sym_quantified_sentence,
    STATE(232), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(17), 2,
      anon_sym_not,
      anon_sym_,
    ACTIONS(19), 2,
      anon_sym_forall,
      anon_sym_6,
    ACTIONS(21), 2,
      anon_sym_exists,
      anon_sym_7,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(99), 2,
      sym_atomic_sentence,
      sym_equation,
    STATE(103), 2,
      sym_universal,
      sym_existential,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [884] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      sym_language_tag,
    ACTIONS(37), 4,
      sym_identifier,
      anon_sym_AT,
      sym_decimal,
      sym_integer,
    ACTIONS(39), 34,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_assert,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
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
  [933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(45), 35,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_assert,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
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
  [979] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(49), 35,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_assert,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
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
  [1025] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(53), 35,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_assert,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
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
  [1071] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(57), 24,
      anon_sym_is,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_assert,
      sym_reserved_self,
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
      anon_sym_property,
      anon_sym_ref,
      anon_sym_identity,
  [1106] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_name_path_repeat1,
    ACTIONS(59), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(61), 22,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1145] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      anon_sym_COLON,
    ACTIONS(66), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(68), 23,
      anon_sym_is,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_assert,
      sym_reserved_self,
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
      anon_sym_property,
      anon_sym_ref,
      anon_sym_identity,
  [1182] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_name_path_repeat1,
    ACTIONS(72), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(74), 22,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1221] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_name_path_repeat1,
    ACTIONS(78), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(80), 22,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1260] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      anon_sym_end,
    ACTIONS(84), 1,
      anon_sym_import,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(90), 1,
      anon_sym_datatype,
    ACTIONS(92), 1,
      anon_sym_entity,
    ACTIONS(94), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_event,
    ACTIONS(98), 1,
      anon_sym_structure,
    ACTIONS(100), 1,
      anon_sym_union,
    ACTIONS(102), 1,
      anon_sym_property,
    STATE(23), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(37), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(48), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(141), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [1322] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(61), 23,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_tautology,
      sym_contradiction,
      anon_sym_DOT,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1356] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_import,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(90), 1,
      anon_sym_datatype,
    ACTIONS(92), 1,
      anon_sym_entity,
    ACTIONS(94), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_event,
    ACTIONS(98), 1,
      anon_sym_structure,
    ACTIONS(100), 1,
      anon_sym_union,
    ACTIONS(102), 1,
      anon_sym_property,
    ACTIONS(104), 1,
      anon_sym_end,
    STATE(39), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(43), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(76), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    STATE(141), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [1418] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(108), 23,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_tautology,
      sym_contradiction,
      anon_sym_DOT,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1452] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(68), 23,
      anon_sym_is,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_assert,
      sym_reserved_self,
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
      anon_sym_property,
      anon_sym_ref,
      anon_sym_identity,
  [1486] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(112), 22,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1519] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_name,
    STATE(33), 1,
      aux_sym_functional_term_repeat1,
    STATE(51), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [1580] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(118), 22,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1613] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(122), 22,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1646] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(126), 22,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1679] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_name,
    STATE(33), 1,
      aux_sym_functional_term_repeat1,
    STATE(51), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [1740] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_name,
    STATE(27), 1,
      aux_sym_functional_term_repeat1,
    STATE(51), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [1801] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 1,
      sym_quoted_string,
    ACTIONS(149), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(33), 1,
      aux_sym_functional_term_repeat1,
    STATE(51), 1,
      sym_term,
    ACTIONS(138), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(141), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(155), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [1862] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_name,
    STATE(31), 1,
      aux_sym_functional_term_repeat1,
    STATE(51), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [1923] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(165), 21,
      anon_sym_end,
      anon_sym_LBRACK,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1955] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(169), 21,
      anon_sym_end,
      anon_sym_LBRACK,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [1987] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(90), 1,
      anon_sym_datatype,
    ACTIONS(92), 1,
      anon_sym_entity,
    ACTIONS(94), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_event,
    ACTIONS(98), 1,
      anon_sym_structure,
    ACTIONS(100), 1,
      anon_sym_union,
    ACTIONS(102), 1,
      anon_sym_property,
    ACTIONS(104), 1,
      anon_sym_end,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(43), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(141), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [2042] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(20), 1,
      sym_name,
    STATE(93), 1,
      sym_term,
    ACTIONS(11), 2,
      sym_tautology,
      sym_contradiction,
    ACTIONS(13), 2,
      sym_reserved_self,
      sym_reserved_self_type,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 2,
      sym_list_of_predicate_values,
      sym_simple_value,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(28), 3,
      sym_predicate_value,
      sym_name_path,
      sym_functional_term,
  [2097] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(90), 1,
      anon_sym_datatype,
    ACTIONS(92), 1,
      anon_sym_entity,
    ACTIONS(94), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_event,
    ACTIONS(98), 1,
      anon_sym_structure,
    ACTIONS(100), 1,
      anon_sym_union,
    ACTIONS(102), 1,
      anon_sym_property,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(46), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(141), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [2152] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(175), 19,
      anon_sym_end,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_assert,
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
  [2182] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(50), 1,
      sym_identifier_reference,
    STATE(57), 1,
      sym_value,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(53), 3,
      sym_list_of_values,
      sym_value_constructor,
      sym_simple_value,
  [2228] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_AT,
    ACTIONS(188), 1,
      anon_sym_assert,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    ACTIONS(183), 11,
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
  [2262] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_datatype,
    ACTIONS(92), 1,
      anon_sym_entity,
    ACTIONS(94), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_event,
    ACTIONS(98), 1,
      anon_sym_structure,
    ACTIONS(100), 1,
      anon_sym_union,
    ACTIONS(102), 1,
      anon_sym_property,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(45), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(141), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [2303] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(95), 1,
      sym_identifier_reference,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(47), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [2346] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_end,
    ACTIONS(195), 1,
      anon_sym_datatype,
    ACTIONS(198), 1,
      anon_sym_entity,
    ACTIONS(201), 1,
      anon_sym_enum,
    ACTIONS(204), 1,
      anon_sym_event,
    ACTIONS(207), 1,
      anon_sym_structure,
    ACTIONS(210), 1,
      anon_sym_union,
    ACTIONS(213), 1,
      anon_sym_property,
    STATE(45), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(141), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [2387] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_datatype,
    ACTIONS(92), 1,
      anon_sym_entity,
    ACTIONS(94), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_event,
    ACTIONS(98), 1,
      anon_sym_structure,
    ACTIONS(100), 1,
      anon_sym_union,
    ACTIONS(102), 1,
      anon_sym_property,
    ACTIONS(216), 1,
      anon_sym_end,
    STATE(45), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(141), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [2428] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    ACTIONS(223), 1,
      sym_quoted_string,
    ACTIONS(226), 1,
      anon_sym_LT,
    ACTIONS(229), 1,
      sym_double,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(95), 1,
      sym_identifier_reference,
    ACTIONS(232), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(235), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(47), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [2471] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(90), 1,
      anon_sym_datatype,
    ACTIONS(92), 1,
      anon_sym_entity,
    ACTIONS(94), 1,
      anon_sym_enum,
    ACTIONS(96), 1,
      anon_sym_event,
    ACTIONS(98), 1,
      anon_sym_structure,
    ACTIONS(100), 1,
      anon_sym_union,
    ACTIONS(102), 1,
      anon_sym_property,
    ACTIONS(104), 1,
      anon_sym_end,
    STATE(45), 2,
      sym_type_def,
      aux_sym_module_body_repeat3,
    STATE(141), 7,
      sym_data_type_def,
      sym_entity_def,
      sym_enum_def,
      sym_event_def,
      sym_structure_def,
      sym_union_def,
      sym_property_def,
  [2512] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(95), 1,
      sym_identifier_reference,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
    STATE(44), 3,
      sym_value_constructor,
      sym_simple_value,
      aux_sym_list_of_values_repeat1,
  [2552] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 13,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
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
  [2577] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(246), 11,
      anon_sym_LBRACK,
      sym_tautology,
      sym_contradiction,
      sym_reserved_self,
      sym_reserved_self_type,
      anon_sym_RPAREN,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [2602] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(106), 4,
      sym_conjunction,
      sym_disjunction,
      sym_implication,
      sym_biconditional,
    ACTIONS(250), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [2624] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(240), 13,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
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
  [2646] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(254), 13,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
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
  [2668] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 13,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
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
  [2690] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(262), 13,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
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
  [2712] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 13,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
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
  [2734] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(270), 13,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
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
  [2756] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      anon_sym_COLON,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 12,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_assert,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [2780] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(278), 13,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
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
  [2802] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(106), 4,
      sym_conjunction,
      sym_disjunction,
      sym_implication,
      sym_biconditional,
    ACTIONS(280), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [2824] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(106), 4,
      sym_conjunction,
      sym_disjunction,
      sym_implication,
      sym_biconditional,
    ACTIONS(282), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [2846] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(286), 13,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
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
  [2868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(106), 4,
      sym_conjunction,
      sym_disjunction,
      sym_implication,
      sym_biconditional,
    ACTIONS(288), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [2890] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(106), 4,
      sym_conjunction,
      sym_disjunction,
      sym_implication,
      sym_biconditional,
    ACTIONS(290), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [2912] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(294), 1,
      sym_unknown_type,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(77), 1,
      sym_cardinality_expression,
    STATE(177), 1,
      sym_type_reference,
    STATE(179), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(292), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [2946] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    ACTIONS(300), 2,
      anon_sym_and,
      anon_sym_2,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_3,
    ACTIONS(304), 2,
      anon_sym_implies,
      anon_sym_4,
    ACTIONS(306), 2,
      anon_sym_iff,
      anon_sym_5,
    STATE(106), 4,
      sym_conjunction,
      sym_disjunction,
      sym_implication,
      sym_biconditional,
  [2975] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_simple_value,
      aux_sym_list_of_predicate_values_repeat1,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [3008] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(312), 12,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_assert,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3029] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(316), 12,
      anon_sym_end,
      anon_sym_import,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_assert,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3050] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(300), 2,
      anon_sym_and,
      anon_sym_2,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_3,
    ACTIONS(304), 2,
      anon_sym_implies,
      anon_sym_4,
    ACTIONS(306), 2,
      anon_sym_iff,
      anon_sym_5,
    STATE(106), 4,
      sym_conjunction,
      sym_disjunction,
      sym_implication,
      sym_biconditional,
  [3079] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(300), 2,
      anon_sym_and,
      anon_sym_2,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_3,
    ACTIONS(304), 2,
      anon_sym_implies,
      anon_sym_4,
    ACTIONS(306), 2,
      anon_sym_iff,
      anon_sym_5,
    STATE(106), 4,
      sym_conjunction,
      sym_disjunction,
      sym_implication,
      sym_biconditional,
  [3108] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    ACTIONS(324), 1,
      sym_quoted_string,
    ACTIONS(327), 1,
      anon_sym_LT,
    ACTIONS(330), 1,
      sym_double,
    ACTIONS(333), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 2,
      sym_simple_value,
      aux_sym_list_of_predicate_values_repeat1,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [3141] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 2,
      sym_simple_value,
      aux_sym_list_of_predicate_values_repeat1,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [3174] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_end,
    ACTIONS(300), 2,
      anon_sym_and,
      anon_sym_2,
    ACTIONS(302), 2,
      anon_sym_or,
      anon_sym_3,
    ACTIONS(304), 2,
      anon_sym_implies,
      anon_sym_4,
    ACTIONS(306), 2,
      anon_sym_iff,
      anon_sym_5,
    STATE(106), 4,
      sym_conjunction,
      sym_disjunction,
      sym_implication,
      sym_biconditional,
  [3203] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_import,
    STATE(76), 2,
      sym_import_statement,
      aux_sym_module_body_repeat1,
    ACTIONS(343), 10,
      anon_sym_end,
      anon_sym_AT,
      anon_sym_assert,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3226] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(294), 1,
      sym_unknown_type,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(172), 1,
      sym_type_reference,
    STATE(179), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(292), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [3254] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 2,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(348), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 2,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(350), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3294] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(294), 1,
      sym_unknown_type,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(174), 1,
      sym_type_reference,
    STATE(179), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(292), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [3322] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_end,
    ACTIONS(356), 1,
      anon_sym_group,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(82), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(166), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [3354] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_group,
    ACTIONS(358), 1,
      anon_sym_end,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(160), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [3386] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(362), 11,
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
  [3406] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_ref,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(165), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [3435] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 10,
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
  [3454] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(370), 11,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_assert,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3471] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(107), 1,
      sym_data_type_base,
    STATE(120), 2,
      sym_identifier_reference,
      sym_builtin_simple_type,
    ACTIONS(292), 6,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
  [3496] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(372), 1,
      sym_identifier,
    STATE(169), 1,
      sym_identifier_reference,
    STATE(185), 1,
      sym_qualified_identifier,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(91), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(164), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [3527] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_ref,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(84), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(167), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [3556] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 11,
      anon_sym_end,
      anon_sym_import,
      anon_sym_AT,
      anon_sym_assert,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3573] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(372), 1,
      sym_identifier,
    STATE(169), 1,
      sym_identifier_reference,
    STATE(185), 1,
      sym_qualified_identifier,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(158), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [3604] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym_double,
    STATE(242), 1,
      sym_simple_value,
    ACTIONS(29), 2,
      sym_decimal,
      sym_integer,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 3,
      sym_string,
      sym_iri_reference,
      sym_boolean,
  [3633] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3652] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3668] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 3,
      sym_identifier,
      sym_decimal,
      sym_integer,
    ACTIONS(382), 6,
      anon_sym_RBRACK,
      sym_quoted_string,
      anon_sym_LT,
      sym_double,
      anon_sym_true,
      anon_sym_false,
  [3688] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3704] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 1,
      anon_sym_is,
    STATE(143), 1,
      sym_entity_body,
    ACTIONS(388), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3724] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3740] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3772] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3788] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3820] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 1,
      anon_sym_of,
    STATE(142), 1,
      sym_enum_body,
    ACTIONS(398), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3840] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 1,
      anon_sym_is,
    STATE(139), 1,
      sym_structure_body,
    ACTIONS(404), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3876] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_is,
    STATE(122), 1,
      sym_annotation_only_body,
    ACTIONS(410), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3896] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      anon_sym_of,
    STATE(138), 1,
      sym_union_body,
    ACTIONS(412), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3916] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 1,
      anon_sym_is,
    STATE(136), 1,
      sym_structure_body,
    ACTIONS(416), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3936] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_2,
      anon_sym_or,
      anon_sym_3,
      anon_sym_implies,
      anon_sym_4,
      anon_sym_iff,
      anon_sym_5,
  [3952] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_is,
    STATE(137), 1,
      sym_property_body,
    ACTIONS(422), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [3972] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(115), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(208), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [3997] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(352), 1,
      sym_identifier,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(197), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [4022] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(352), 1,
      sym_identifier,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(113), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(184), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [4047] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(195), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 8,
      anon_sym_DASH_GT,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
      sym_unknown_type,
  [4089] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(186), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [4114] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(117), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(210), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [4139] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 8,
      anon_sym_DASH_GT,
      anon_sym_string,
      anon_sym_double,
      anon_sym_decimal,
      anon_sym_integer,
      anon_sym_boolean,
      anon_sym_iri,
      sym_unknown_type,
  [4156] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 9,
      anon_sym_is,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4171] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4185] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4199] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_ref,
    ACTIONS(442), 1,
      anon_sym_end,
    ACTIONS(444), 1,
      anon_sym_group,
    STATE(132), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [4221] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(446), 1,
      anon_sym_identity,
    STATE(145), 1,
      sym_identity_member,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
  [4245] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(448), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4259] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(450), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4273] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(452), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4287] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_ref,
    ACTIONS(444), 1,
      anon_sym_group,
    ACTIONS(454), 1,
      anon_sym_end,
    STATE(134), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(456), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4323] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(458), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4337] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(460), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4351] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_ref,
    ACTIONS(444), 1,
      anon_sym_group,
    ACTIONS(462), 1,
      anon_sym_end,
    STATE(134), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [4373] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(464), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4387] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_end,
    ACTIONS(471), 1,
      anon_sym_group,
    ACTIONS(474), 1,
      anon_sym_ref,
    STATE(134), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [4409] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4423] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(479), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4437] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4451] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4465] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(485), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4479] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(487), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4493] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(489), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(491), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4521] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(493), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4535] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(446), 1,
      anon_sym_identity,
    STATE(123), 1,
      sym_identity_member,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(124), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [4559] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_ref,
    ACTIONS(444), 1,
      anon_sym_group,
    ACTIONS(495), 1,
      anon_sym_end,
    STATE(128), 4,
      sym_entity_group,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_body_repeat1,
  [4581] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(497), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4595] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(499), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 8,
      anon_sym_end,
      anon_sym_datatype,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_event,
      anon_sym_structure,
      anon_sym_union,
      anon_sym_property,
  [4623] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      sym_qualified_identifier,
    STATE(69), 2,
      sym_member_import,
      sym_module_import,
    STATE(150), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [4644] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      sym_qualified_identifier,
    STATE(69), 2,
      sym_member_import,
      sym_module_import,
    STATE(150), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [4665] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    ACTIONS(512), 1,
      anon_sym_end,
    STATE(42), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
  [4686] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    ACTIONS(514), 1,
      anon_sym_DASH_GT,
    ACTIONS(516), 1,
      anon_sym_as,
    STATE(155), 1,
      sym__type_expression_from_to,
    STATE(173), 1,
      sym__type_expression_to,
    STATE(198), 1,
      sym_property_member,
    STATE(231), 1,
      sym_cardinality_expression,
  [4711] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(521), 1,
      anon_sym_end,
    STATE(169), 1,
      sym_identifier_reference,
    STATE(185), 1,
      sym_qualified_identifier,
    STATE(153), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [4731] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(523), 1,
      sym_identifier,
    ACTIONS(526), 1,
      anon_sym_end,
    ACTIONS(528), 1,
      anon_sym_ref,
    STATE(154), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [4749] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_is,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(188), 1,
      sym_annotation_only_body,
    ACTIONS(533), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [4767] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_qualified_identifier,
    STATE(90), 1,
      sym_import,
    STATE(69), 2,
      sym_member_import,
      sym_module_import,
  [4787] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 1,
      sym_identifier,
    STATE(70), 1,
      sym_qualified_identifier,
    STATE(69), 2,
      sym_member_import,
      sym_module_import,
    STATE(149), 2,
      sym_import,
      aux_sym_import_statement_repeat1,
  [4805] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(537), 1,
      anon_sym_end,
    STATE(169), 1,
      sym_identifier_reference,
    STATE(185), 1,
      sym_qualified_identifier,
    STATE(153), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [4825] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(539), 1,
      sym_identifier,
    ACTIONS(542), 1,
      anon_sym_end,
    ACTIONS(544), 1,
      anon_sym_group,
    STATE(159), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [4843] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_group,
    ACTIONS(547), 1,
      anon_sym_end,
    STATE(159), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [4861] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_is,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(191), 1,
      sym_annotation_only_body,
    ACTIONS(551), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [4879] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_is,
    ACTIONS(553), 1,
      sym_identifier,
    STATE(202), 1,
      sym_annotation_only_body,
    ACTIONS(555), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [4897] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_assert,
    STATE(60), 2,
      sym_annotation_property,
      sym_constraint,
    STATE(151), 2,
      sym_annotation,
      aux_sym_module_body_repeat2,
  [4915] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(557), 1,
      anon_sym_end,
    STATE(169), 1,
      sym_identifier_reference,
    STATE(185), 1,
      sym_qualified_identifier,
    STATE(153), 2,
      sym_type_variant,
      aux_sym_union_body_repeat1,
  [4935] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_ref,
    ACTIONS(559), 1,
      anon_sym_end,
    STATE(154), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [4953] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_group,
    ACTIONS(358), 1,
      anon_sym_end,
    STATE(159), 3,
      sym_structure_group,
      sym_member_by_value,
      aux_sym_structure_body_repeat1,
  [4971] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_ref,
    ACTIONS(561), 1,
      anon_sym_end,
    STATE(154), 3,
      sym_member_by_value,
      sym_member_by_reference,
      aux_sym_entity_group_repeat1,
  [4989] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      sym_reserved_self,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    STATE(180), 2,
      sym_quantifier_binding,
      aux_sym_universal_repeat1,
  [5006] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_is,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_end,
    ACTIONS(573), 1,
      anon_sym_as,
    STATE(225), 1,
      sym_annotation_only_body,
  [5025] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(68), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_as,
  [5040] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(579), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5053] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(583), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5066] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 1,
      sym_identifier,
    ACTIONS(587), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5079] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(589), 1,
      sym_identifier,
    ACTIONS(591), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5092] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      sym_identifier,
    ACTIONS(595), 1,
      anon_sym_is,
    ACTIONS(597), 1,
      anon_sym_EQ,
    STATE(55), 2,
      sym_informal_constraint,
      sym_formal_constraint,
  [5109] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_DASH_GT,
    STATE(216), 1,
      sym_binding_type_reference,
    ACTIONS(601), 2,
      sym_reserved_self,
      anon_sym_LPAREN,
  [5126] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(607), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5139] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      sym_reserved_self,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    STATE(180), 2,
      sym_quantifier_binding,
      aux_sym_universal_repeat1,
  [5156] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      sym_identifier,
    ACTIONS(613), 4,
      anon_sym_is,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5169] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      sym_identifier,
    ACTIONS(618), 1,
      sym_reserved_self,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    STATE(180), 2,
      sym_quantifier_binding,
      aux_sym_universal_repeat1,
  [5186] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(623), 1,
      sym_identifier,
    ACTIONS(626), 1,
      anon_sym_end,
    STATE(181), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [5200] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(516), 1,
      anon_sym_as,
    ACTIONS(628), 1,
      anon_sym_DASH_GT,
    STATE(162), 1,
      sym__type_expression,
    STATE(207), 1,
      sym_property_member,
  [5216] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_as,
  [5228] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(630), 1,
      anon_sym_end,
    STATE(201), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [5242] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 3,
      anon_sym_is,
      anon_sym_end,
      anon_sym_as,
  [5254] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(632), 1,
      anon_sym_end,
    STATE(192), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [5268] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 1,
      anon_sym_is,
    ACTIONS(597), 1,
      anon_sym_EQ,
    STATE(56), 2,
      sym_informal_constraint,
      sym_formal_constraint,
  [5282] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(634), 1,
      sym_identifier,
    ACTIONS(636), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5294] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(638), 1,
      sym_identifier,
    ACTIONS(640), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5306] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_is,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(644), 1,
      anon_sym_end,
    STATE(223), 1,
      sym_annotation_only_body,
  [5322] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(646), 1,
      sym_identifier,
    ACTIONS(648), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5334] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(653), 1,
      anon_sym_end,
    STATE(192), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [5348] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      sym_identifier,
    ACTIONS(657), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5360] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_is,
    ACTIONS(659), 1,
      sym_identifier,
    ACTIONS(661), 1,
      anon_sym_end,
    STATE(229), 1,
      sym_annotation_only_body,
  [5376] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(663), 1,
      anon_sym_end,
    STATE(181), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [5390] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_is,
    ACTIONS(665), 1,
      sym_identifier,
    ACTIONS(667), 1,
      anon_sym_end,
    STATE(226), 1,
      sym_annotation_only_body,
  [5406] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(669), 1,
      anon_sym_end,
    STATE(201), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [5420] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(673), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5432] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      sym_identifier,
    ACTIONS(677), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5444] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      anon_sym_is,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(681), 1,
      anon_sym_end,
    STATE(230), 1,
      sym_annotation_only_body,
  [5460] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      sym_identifier,
    ACTIONS(686), 1,
      anon_sym_end,
    STATE(201), 2,
      sym_member_by_value,
      aux_sym_structure_group_repeat1,
  [5474] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(688), 1,
      sym_identifier,
    ACTIONS(690), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      sym_reserved_self,
    STATE(178), 2,
      sym_quantifier_binding,
      aux_sym_universal_repeat1,
  [5500] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(692), 1,
      sym_reserved_self_type,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(217), 1,
      sym_identifier_reference,
  [5516] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5528] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      sym_reserved_self,
    STATE(168), 2,
      sym_quantifier_binding,
      aux_sym_universal_repeat1,
  [5542] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(698), 1,
      sym_identifier,
    ACTIONS(700), 3,
      anon_sym_end,
      anon_sym_group,
      anon_sym_ref,
  [5554] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(702), 1,
      anon_sym_end,
    STATE(181), 2,
      sym_property_role,
      aux_sym_property_body_repeat1,
  [5568] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DASH_GT,
    ACTIONS(516), 1,
      anon_sym_as,
    STATE(161), 1,
      sym__type_expression_to,
    STATE(205), 1,
      sym_property_member,
  [5584] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(704), 1,
      anon_sym_end,
    STATE(192), 2,
      sym_enum_variant,
      aux_sym_enum_body_repeat1,
  [5598] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(708), 2,
      anon_sym_end,
      anon_sym_group,
  [5609] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DASH_GT,
    ACTIONS(710), 1,
      anon_sym_ref,
    STATE(194), 1,
      sym__type_expression_to,
  [5622] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      sym_identifier,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(109), 1,
      sym_identifier_reference,
  [5635] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(716), 1,
      anon_sym_DOT_DOT,
    STATE(259), 1,
      sym_cardinality_range,
  [5648] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(718), 1,
      anon_sym_base,
    ACTIONS(720), 1,
      anon_sym_is,
    STATE(247), 1,
      sym_module_body,
  [5661] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(722), 1,
      sym_identifier,
    ACTIONS(724), 2,
      sym_reserved_self,
      anon_sym_LPAREN,
  [5672] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      sym_identifier,
    ACTIONS(728), 2,
      sym_reserved_self,
      anon_sym_LPAREN,
  [5683] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(730), 1,
      sym_identifier,
    ACTIONS(732), 2,
      anon_sym_end,
      anon_sym_group,
  [5694] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      sym_identifier,
    ACTIONS(736), 2,
      sym_reserved_self,
      anon_sym_LPAREN,
  [5705] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      sym_identifier,
    STATE(25), 1,
      sym_qualified_identifier,
    STATE(256), 1,
      sym_identifier_reference,
  [5718] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(720), 1,
      anon_sym_is,
    STATE(243), 1,
      sym_module_body,
  [5728] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(221), 1,
      sym_iri_reference,
  [5738] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      sym_identifier,
    ACTIONS(740), 1,
      anon_sym_end,
  [5748] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(742), 1,
      sym_unsigned,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
  [5758] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(746), 1,
      sym_identifier,
    ACTIONS(748), 1,
      anon_sym_end,
  [5768] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(750), 1,
      sym_identifier,
    ACTIONS(752), 1,
      anon_sym_end,
  [5778] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_cardinality_expression,
  [5788] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DASH_GT,
    STATE(190), 1,
      sym__type_expression_to,
  [5798] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      anon_sym_end,
  [5808] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(758), 1,
      sym_identifier,
    ACTIONS(760), 1,
      anon_sym_end,
  [5818] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(514), 1,
      anon_sym_DASH_GT,
    STATE(171), 1,
      sym__type_expression_to,
  [5828] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(762), 1,
      anon_sym_EQ,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
  [5838] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
  [5845] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(768), 1,
      anon_sym_GT,
  [5852] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(770), 1,
      sym_identifier,
  [5859] = 2,
    ACTIONS(772), 1,
      aux_sym_iri_reference_token1,
    ACTIONS(774), 1,
      sym_line_comment,
  [5866] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      sym_identifier,
  [5873] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      sym_identifier,
  [5880] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      sym_identifier,
  [5887] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      ts_builtin_sym_end,
  [5894] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(784), 1,
      ts_builtin_sym_end,
  [5901] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
  [5908] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
  [5915] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 1,
      anon_sym_source,
  [5922] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_unsigned,
  [5929] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_LT_DASH,
  [5936] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
  [5943] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(798), 1,
      sym_identifier,
  [5950] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_EQ,
  [5957] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      sym_unsigned,
  [5964] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      ts_builtin_sym_end,
  [5971] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(806), 1,
      sym_identifier,
  [5978] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      ts_builtin_sym_end,
  [5985] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(810), 1,
      sym_identifier,
  [5992] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(812), 1,
      sym_identifier,
  [5999] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(814), 1,
      anon_sym_EQ,
  [6006] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(816), 1,
      sym_quoted_string,
  [6013] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(818), 1,
      sym_identifier,
  [6020] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
  [6027] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(822), 1,
      sym_identifier,
  [6034] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
  [6041] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(826), 1,
      sym_identifier,
  [6048] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 1,
      sym_identifier,
  [6055] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(830), 1,
      sym_identifier,
  [6062] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(832), 1,
      sym_identifier,
  [6069] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(834), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 233,
  [SMALL_STATE(6)] = 326,
  [SMALL_STATE(7)] = 419,
  [SMALL_STATE(8)] = 512,
  [SMALL_STATE(9)] = 605,
  [SMALL_STATE(10)] = 698,
  [SMALL_STATE(11)] = 791,
  [SMALL_STATE(12)] = 884,
  [SMALL_STATE(13)] = 933,
  [SMALL_STATE(14)] = 979,
  [SMALL_STATE(15)] = 1025,
  [SMALL_STATE(16)] = 1071,
  [SMALL_STATE(17)] = 1106,
  [SMALL_STATE(18)] = 1145,
  [SMALL_STATE(19)] = 1182,
  [SMALL_STATE(20)] = 1221,
  [SMALL_STATE(21)] = 1260,
  [SMALL_STATE(22)] = 1322,
  [SMALL_STATE(23)] = 1356,
  [SMALL_STATE(24)] = 1418,
  [SMALL_STATE(25)] = 1452,
  [SMALL_STATE(26)] = 1486,
  [SMALL_STATE(27)] = 1519,
  [SMALL_STATE(28)] = 1580,
  [SMALL_STATE(29)] = 1613,
  [SMALL_STATE(30)] = 1646,
  [SMALL_STATE(31)] = 1679,
  [SMALL_STATE(32)] = 1740,
  [SMALL_STATE(33)] = 1801,
  [SMALL_STATE(34)] = 1862,
  [SMALL_STATE(35)] = 1923,
  [SMALL_STATE(36)] = 1955,
  [SMALL_STATE(37)] = 1987,
  [SMALL_STATE(38)] = 2042,
  [SMALL_STATE(39)] = 2097,
  [SMALL_STATE(40)] = 2152,
  [SMALL_STATE(41)] = 2182,
  [SMALL_STATE(42)] = 2228,
  [SMALL_STATE(43)] = 2262,
  [SMALL_STATE(44)] = 2303,
  [SMALL_STATE(45)] = 2346,
  [SMALL_STATE(46)] = 2387,
  [SMALL_STATE(47)] = 2428,
  [SMALL_STATE(48)] = 2471,
  [SMALL_STATE(49)] = 2512,
  [SMALL_STATE(50)] = 2552,
  [SMALL_STATE(51)] = 2577,
  [SMALL_STATE(52)] = 2602,
  [SMALL_STATE(53)] = 2624,
  [SMALL_STATE(54)] = 2646,
  [SMALL_STATE(55)] = 2668,
  [SMALL_STATE(56)] = 2690,
  [SMALL_STATE(57)] = 2712,
  [SMALL_STATE(58)] = 2734,
  [SMALL_STATE(59)] = 2756,
  [SMALL_STATE(60)] = 2780,
  [SMALL_STATE(61)] = 2802,
  [SMALL_STATE(62)] = 2824,
  [SMALL_STATE(63)] = 2846,
  [SMALL_STATE(64)] = 2868,
  [SMALL_STATE(65)] = 2890,
  [SMALL_STATE(66)] = 2912,
  [SMALL_STATE(67)] = 2946,
  [SMALL_STATE(68)] = 2975,
  [SMALL_STATE(69)] = 3008,
  [SMALL_STATE(70)] = 3029,
  [SMALL_STATE(71)] = 3050,
  [SMALL_STATE(72)] = 3079,
  [SMALL_STATE(73)] = 3108,
  [SMALL_STATE(74)] = 3141,
  [SMALL_STATE(75)] = 3174,
  [SMALL_STATE(76)] = 3203,
  [SMALL_STATE(77)] = 3226,
  [SMALL_STATE(78)] = 3254,
  [SMALL_STATE(79)] = 3274,
  [SMALL_STATE(80)] = 3294,
  [SMALL_STATE(81)] = 3322,
  [SMALL_STATE(82)] = 3354,
  [SMALL_STATE(83)] = 3386,
  [SMALL_STATE(84)] = 3406,
  [SMALL_STATE(85)] = 3435,
  [SMALL_STATE(86)] = 3454,
  [SMALL_STATE(87)] = 3471,
  [SMALL_STATE(88)] = 3496,
  [SMALL_STATE(89)] = 3527,
  [SMALL_STATE(90)] = 3556,
  [SMALL_STATE(91)] = 3573,
  [SMALL_STATE(92)] = 3604,
  [SMALL_STATE(93)] = 3633,
  [SMALL_STATE(94)] = 3652,
  [SMALL_STATE(95)] = 3668,
  [SMALL_STATE(96)] = 3688,
  [SMALL_STATE(97)] = 3704,
  [SMALL_STATE(98)] = 3724,
  [SMALL_STATE(99)] = 3740,
  [SMALL_STATE(100)] = 3756,
  [SMALL_STATE(101)] = 3772,
  [SMALL_STATE(102)] = 3788,
  [SMALL_STATE(103)] = 3804,
  [SMALL_STATE(104)] = 3820,
  [SMALL_STATE(105)] = 3840,
  [SMALL_STATE(106)] = 3860,
  [SMALL_STATE(107)] = 3876,
  [SMALL_STATE(108)] = 3896,
  [SMALL_STATE(109)] = 3916,
  [SMALL_STATE(110)] = 3936,
  [SMALL_STATE(111)] = 3952,
  [SMALL_STATE(112)] = 3972,
  [SMALL_STATE(113)] = 3997,
  [SMALL_STATE(114)] = 4022,
  [SMALL_STATE(115)] = 4047,
  [SMALL_STATE(116)] = 4072,
  [SMALL_STATE(117)] = 4089,
  [SMALL_STATE(118)] = 4114,
  [SMALL_STATE(119)] = 4139,
  [SMALL_STATE(120)] = 4156,
  [SMALL_STATE(121)] = 4171,
  [SMALL_STATE(122)] = 4185,
  [SMALL_STATE(123)] = 4199,
  [SMALL_STATE(124)] = 4221,
  [SMALL_STATE(125)] = 4245,
  [SMALL_STATE(126)] = 4259,
  [SMALL_STATE(127)] = 4273,
  [SMALL_STATE(128)] = 4287,
  [SMALL_STATE(129)] = 4309,
  [SMALL_STATE(130)] = 4323,
  [SMALL_STATE(131)] = 4337,
  [SMALL_STATE(132)] = 4351,
  [SMALL_STATE(133)] = 4373,
  [SMALL_STATE(134)] = 4387,
  [SMALL_STATE(135)] = 4409,
  [SMALL_STATE(136)] = 4423,
  [SMALL_STATE(137)] = 4437,
  [SMALL_STATE(138)] = 4451,
  [SMALL_STATE(139)] = 4465,
  [SMALL_STATE(140)] = 4479,
  [SMALL_STATE(141)] = 4493,
  [SMALL_STATE(142)] = 4507,
  [SMALL_STATE(143)] = 4521,
  [SMALL_STATE(144)] = 4535,
  [SMALL_STATE(145)] = 4559,
  [SMALL_STATE(146)] = 4581,
  [SMALL_STATE(147)] = 4595,
  [SMALL_STATE(148)] = 4609,
  [SMALL_STATE(149)] = 4623,
  [SMALL_STATE(150)] = 4644,
  [SMALL_STATE(151)] = 4665,
  [SMALL_STATE(152)] = 4686,
  [SMALL_STATE(153)] = 4711,
  [SMALL_STATE(154)] = 4731,
  [SMALL_STATE(155)] = 4749,
  [SMALL_STATE(156)] = 4767,
  [SMALL_STATE(157)] = 4787,
  [SMALL_STATE(158)] = 4805,
  [SMALL_STATE(159)] = 4825,
  [SMALL_STATE(160)] = 4843,
  [SMALL_STATE(161)] = 4861,
  [SMALL_STATE(162)] = 4879,
  [SMALL_STATE(163)] = 4897,
  [SMALL_STATE(164)] = 4915,
  [SMALL_STATE(165)] = 4935,
  [SMALL_STATE(166)] = 4953,
  [SMALL_STATE(167)] = 4971,
  [SMALL_STATE(168)] = 4989,
  [SMALL_STATE(169)] = 5006,
  [SMALL_STATE(170)] = 5025,
  [SMALL_STATE(171)] = 5040,
  [SMALL_STATE(172)] = 5053,
  [SMALL_STATE(173)] = 5066,
  [SMALL_STATE(174)] = 5079,
  [SMALL_STATE(175)] = 5092,
  [SMALL_STATE(176)] = 5109,
  [SMALL_STATE(177)] = 5126,
  [SMALL_STATE(178)] = 5139,
  [SMALL_STATE(179)] = 5156,
  [SMALL_STATE(180)] = 5169,
  [SMALL_STATE(181)] = 5186,
  [SMALL_STATE(182)] = 5200,
  [SMALL_STATE(183)] = 5216,
  [SMALL_STATE(184)] = 5228,
  [SMALL_STATE(185)] = 5242,
  [SMALL_STATE(186)] = 5254,
  [SMALL_STATE(187)] = 5268,
  [SMALL_STATE(188)] = 5282,
  [SMALL_STATE(189)] = 5294,
  [SMALL_STATE(190)] = 5306,
  [SMALL_STATE(191)] = 5322,
  [SMALL_STATE(192)] = 5334,
  [SMALL_STATE(193)] = 5348,
  [SMALL_STATE(194)] = 5360,
  [SMALL_STATE(195)] = 5376,
  [SMALL_STATE(196)] = 5390,
  [SMALL_STATE(197)] = 5406,
  [SMALL_STATE(198)] = 5420,
  [SMALL_STATE(199)] = 5432,
  [SMALL_STATE(200)] = 5444,
  [SMALL_STATE(201)] = 5460,
  [SMALL_STATE(202)] = 5474,
  [SMALL_STATE(203)] = 5486,
  [SMALL_STATE(204)] = 5500,
  [SMALL_STATE(205)] = 5516,
  [SMALL_STATE(206)] = 5528,
  [SMALL_STATE(207)] = 5542,
  [SMALL_STATE(208)] = 5554,
  [SMALL_STATE(209)] = 5568,
  [SMALL_STATE(210)] = 5584,
  [SMALL_STATE(211)] = 5598,
  [SMALL_STATE(212)] = 5609,
  [SMALL_STATE(213)] = 5622,
  [SMALL_STATE(214)] = 5635,
  [SMALL_STATE(215)] = 5648,
  [SMALL_STATE(216)] = 5661,
  [SMALL_STATE(217)] = 5672,
  [SMALL_STATE(218)] = 5683,
  [SMALL_STATE(219)] = 5694,
  [SMALL_STATE(220)] = 5705,
  [SMALL_STATE(221)] = 5718,
  [SMALL_STATE(222)] = 5728,
  [SMALL_STATE(223)] = 5738,
  [SMALL_STATE(224)] = 5748,
  [SMALL_STATE(225)] = 5758,
  [SMALL_STATE(226)] = 5768,
  [SMALL_STATE(227)] = 5778,
  [SMALL_STATE(228)] = 5788,
  [SMALL_STATE(229)] = 5798,
  [SMALL_STATE(230)] = 5808,
  [SMALL_STATE(231)] = 5818,
  [SMALL_STATE(232)] = 5828,
  [SMALL_STATE(233)] = 5838,
  [SMALL_STATE(234)] = 5845,
  [SMALL_STATE(235)] = 5852,
  [SMALL_STATE(236)] = 5859,
  [SMALL_STATE(237)] = 5866,
  [SMALL_STATE(238)] = 5873,
  [SMALL_STATE(239)] = 5880,
  [SMALL_STATE(240)] = 5887,
  [SMALL_STATE(241)] = 5894,
  [SMALL_STATE(242)] = 5901,
  [SMALL_STATE(243)] = 5908,
  [SMALL_STATE(244)] = 5915,
  [SMALL_STATE(245)] = 5922,
  [SMALL_STATE(246)] = 5929,
  [SMALL_STATE(247)] = 5936,
  [SMALL_STATE(248)] = 5943,
  [SMALL_STATE(249)] = 5950,
  [SMALL_STATE(250)] = 5957,
  [SMALL_STATE(251)] = 5964,
  [SMALL_STATE(252)] = 5971,
  [SMALL_STATE(253)] = 5978,
  [SMALL_STATE(254)] = 5985,
  [SMALL_STATE(255)] = 5992,
  [SMALL_STATE(256)] = 5999,
  [SMALL_STATE(257)] = 6006,
  [SMALL_STATE(258)] = 6013,
  [SMALL_STATE(259)] = 6020,
  [SMALL_STATE(260)] = 6027,
  [SMALL_STATE(261)] = 6034,
  [SMALL_STATE(262)] = 6041,
  [SMALL_STATE(263)] = 6048,
  [SMALL_STATE(264)] = 6055,
  [SMALL_STATE(265)] = 6062,
  [SMALL_STATE(266)] = 6069,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iri_reference, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iri_reference, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 8),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_value, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_path_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_path_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_path_repeat1, 2), SHIFT_REPEAT(258),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_reference, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_reference, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_path, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_path, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_path, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_path, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_predicate_values, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_predicate_values, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_predicate_values, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_predicate_values, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functional_term_repeat1, 2), SHIFT_REPEAT(24),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functional_term_repeat1, 2), SHIFT_REPEAT(68),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functional_term_repeat1, 2), SHIFT_REPEAT(29),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functional_term_repeat1, 2), SHIFT_REPEAT(24),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functional_term_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functional_term_repeat1, 2), SHIFT_REPEAT(12),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functional_term_repeat1, 2), SHIFT_REPEAT(236),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functional_term_repeat1, 2), SHIFT_REPEAT(14),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functional_term_repeat1, 2), SHIFT_REPEAT(14),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functional_term_repeat1, 2), SHIFT_REPEAT(15),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_term, 4, .production_id = 11),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functional_term, 4, .production_id = 11),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_term, 3, .production_id = 11),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functional_term, 3, .production_id = 11),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_constructor, 4, .production_id = 20),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_constructor, 4, .production_id = 20),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(220),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat2, 2), SHIFT_REPEAT(175),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(238),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(260),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(265),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(264),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(263),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(254),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat3, 2), SHIFT_REPEAT(252),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(18),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(12),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(236),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(14),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(14),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 2), SHIFT_REPEAT(15),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functional_term_repeat1, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functional_term_repeat1, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_informal_constraint, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_informal_constraint, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 2, .production_id = 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2, .production_id = 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_property, 4, .production_id = 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_property, 4, .production_id = 7),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_of_values, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_values, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 1, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_constraint, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_constraint, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implication, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_biconditional, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_import, 1, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_predicate_values_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_predicate_values_repeat1, 2), SHIFT_REPEAT(12),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_predicate_values_repeat1, 2), SHIFT_REPEAT(236),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_predicate_values_repeat1, 2), SHIFT_REPEAT(14),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_of_predicate_values_repeat1, 2), SHIFT_REPEAT(14),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_predicate_values_repeat1, 2), SHIFT_REPEAT(15),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(156),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_sentence, 3, .production_id = 12),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_sentence, 4, .production_id = 12),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_simple_type, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_simple_type, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_only_body, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_only_body, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_statement, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_values_repeat1, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal, 5),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 2, .production_id = 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_statement, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_statement, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_statement, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantified_sentence, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 2, .production_id = 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 2, .production_id = 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_statement, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 4, .production_id = 9),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 2, .production_id = 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 4, .production_id = 10),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_existential, 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 2, .production_id = 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 3, .production_id = 33),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 3, .production_id = 33),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_expression, 4, .production_id = 33),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_expression, 4, .production_id = 33),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_base, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_type_def, 5, .production_id = 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 13),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_body, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 4, .production_id = 19),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3, .production_id = 13),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(209),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(89),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(248),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_def, 5, .production_id = 14),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_def, 3, .production_id = 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_def, 3, .production_id = 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_def, 3, .production_id = 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_body, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_def, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_def, 3, .production_id = 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_def, 3, .production_id = 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_body, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_body, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 5, .production_id = 19),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(59),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_union_body_repeat1, 2), SHIFT_REPEAT(170),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_body_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(209),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_group_repeat1, 2), SHIFT_REPEAT(248),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 26),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 26),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(209),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_body_repeat1, 2), SHIFT_REPEAT(114),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 15),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 15),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 18),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 18),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 1, .production_id = 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 32),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 2, .production_id = 32),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 3, .production_id = 28),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 3, .production_id = 28),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 25),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_from_to, 1, .production_id = 25),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression, 2, .production_id = 17),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier_binding, 1, .production_id = 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier_binding, 1, .production_id = 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expression_to, 2, .production_id = 17),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_reference, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_reference, 1),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_universal_repeat1, 2), SHIFT_REPEAT(176),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_universal_repeat1, 2), SHIFT_REPEAT(219),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_universal_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_body_repeat1, 2), SHIFT_REPEAT(212),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_body_repeat1, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 4, .production_id = 31),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 4, .production_id = 31),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 4),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 4, .production_id = 30),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 4, .production_id = 30),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 3, .production_id = 22),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 3, .production_id = 22),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(249),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_member, 2, .production_id = 21),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_member, 2, .production_id = 21),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 2, .production_id = 15),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 2, .production_id = 15),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 3, .production_id = 23),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 3, .production_id = 23),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_reference, 3, .production_id = 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_reference, 3, .production_id = 5),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity_group, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_group, 3),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 20),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 20),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_structure_group_repeat1, 2), SHIFT_REPEAT(209),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_group_repeat1, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 4, .production_id = 24),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 4, .production_id = 24),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_by_value, 2, .production_id = 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_by_value, 2, .production_id = 3),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identity_member, 3, .production_id = 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identity_member, 3, .production_id = 5),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 4),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier_binding, 2, .production_id = 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier_binding, 2, .production_id = 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_type_reference, 2, .production_id = 17),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_type_reference, 2, .production_id = 17),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_group, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_group, 3),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier_binding, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier_binding, 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 5, .production_id = 34),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 5, .production_id = 34),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 1),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 2, .production_id = 16),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 2, .production_id = 16),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variant, 4, .production_id = 29),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variant, 4, .production_id = 29),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_role, 3, .production_id = 22),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_role, 3, .production_id = 22),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 27),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 27),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 5),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [808] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_range, 2, .production_id = 35),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
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
