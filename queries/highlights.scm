;; ---------------------------------------------------------------------------
;; Comments
;; ---------------------------------------------------------------------------

(line_comment) @comment

;; ---------------------------------------------------------------------------
;; Global Reserved Keywords
;; ---------------------------------------------------------------------------

[
 "as"
 "assert"
 "class"
 "datatype"
 "dimension"
 "end"
 "entity"
 "enum"
 "event"
 "from"
 "import"
 "is"
 "module"
 "of"
 "property"
 "rdf"
 "structure"
 "union"
 (unknown_type)
 ] @keyword

;; ---------------------------------------------------------------------------
;; Global Operators
;; ---------------------------------------------------------------------------

[
 ;; has_type
 "->" "→"
 ;; has_base_type
 "<-" "←"
 ;; cardinality_range
 ".."
 "="
 (op_equality)
] @operator

;; ---------------------------------------------------------------------------
;; Global Punctuation
;; ---------------------------------------------------------------------------

[
 "["
 "]"
 "("
 ")"
 "{"
 "}"
 ] @punctuation.bracket

;; ---------------------------------------------------------------------------
;; Module & Imports
;; ---------------------------------------------------------------------------

(module name: (identifier) @module.definition)
(module_version "version" @keyword)

(module_path_root_only "::" @punctuation.separator)
(module_path_relative "::" @punctuation.separator)
(module_path_relative segment: (identifier) @module.special)
(module_path_absolute
 "::" @punctuation.separator
 segment: (identifier) @module.special)

(member_import name: (qualified_identifier) @type)
(member_import rename: (identifier) @type)

(module_import name: (identifier) @module)
(module_import rename: (identifier) @module)

;; ---------------------------------------------------------------------------
;; Annotations and Constraints
;; ---------------------------------------------------------------------------

(annotation_property "@" @property name: (identifier_reference) @property)

(annotation_property value: (value (identifier_reference) @type))

(constraint name: (identifier) @property)

(informal_constraint (quoted_string) @embedded)
(informal_constraint language: (controlled_language_tag) @property)

(inequation
 (inequality_relation) @operator)

(unary_boolean_sentence
 (logical_op_negation) @operator)

(binary_boolean_sentence
 (logical_connective) @operator)

(quantified_variable_binding
 (logical_quantifier) @operator)

(quantified_variable (set_membership) @operator)

(set_expression_sentence
 (set_operator) @operator)

(arithmetic_expression_sentence
 (math_operator) @operator)

(constraint_environment "with" @keyword)

(function_def (function_signature name: (identifier) @function.definition))

(function_signature "def" @keyword)
(function_signature target: (_) @type)

(function_parameter name: (identifier) @variable.parameter)
(function_parameter target: (_) @type)

(cardinality_reference_expression (sequence_ordering) @keyword)
(cardinality_reference_expression (sequence_uniqueness) @keyword)

(function_body [ ":=" "≔" ] @operator)

(function_composition subject: (reserved_self) @variable.builtin)
(function_composition name: (identifier) @function.call)
(function_composition [ "." "∘" ] @operator)

(atomic_sentence
 predicate: (term (identifier_reference) @function.call))
(atomic_sentence
 argument: (term (identifier_reference (identifier) @variable)))

(term (reserved_self) @variable.builtin)

((equation lhs: (term (identifier_reference) @variable)) (#is-not? local))

((equation rhs: (term (identifier_reference) @variable)) (#is-not? local))

(quantified_sentence "," @punctuation.separator)

(variable (identifier) @variable)
(variable range: (identifier_reference) @type)

(functional_term
 function: (term (identifier_reference) @function.call))
(functional_term
 argument: (term (identifier_reference (identifier) @variable)))

(sequence_builder
 (seq_builder_separator) @punctuation.separator)

(sequence_of_predicate_values (sequence_ordering) @keyword)
(sequence_of_predicate_values (sequence_uniqueness) @keyword)
(sequence_of_predicate_values (identifier_reference) @type)

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

[
 (builtin_types)
 (unknown_type)
 ] @type.builtin

(datatype_def
 "datatype" @keyword
 name: (identifier) @type.definition)
(datatype_def base: (identifier_reference) @type)
(datatype_def base: (builtin_types) @type.builtin)
(datatype_def opaque: (opaque) @keyword)

(length_restriction_facet
 [ "length" "maxLength" "minLength" ] @property)
(digit_restriction_facet
 [ "fractionDigits" "totalDigits" ] @property)
(value_restriction_facet
 [ "maxExclusive" "maxInclusive" "minExclusive" "minInclusive" ] @property)
(tz_restriction_facet
 "explicitTimezone" @property
 (tz_restriction_value) @keyword)
(pattern_restriction_facet
 "pattern" @property
 (quoted_string) @string)

(kw_is_fixed) @keyword

(dimension_def name: (identifier) @type.definition)

(entity_def name: (identifier) @type.definition)

(enum_def name: (identifier) @type.definition)

(event_def name: (identifier) @type.definition)

(structure_def name: (identifier) @type.definition)

(union_def name: (identifier) @type.definition)

(from_definition_clause "from" @keyword from: (identifier_reference) @type)

(from_definition_with "with" @keyword)
(from_definition_with wildcard: (_)  @type.builtin)
(from_definition_with member: (identifier)  @variable)

(from_definition_without "without" @keyword)
(from_definition_without member: (identifier)  @variable)

(source_entity "source" @keyword entity: (identifier_reference) @type)
(source_entity "with" @keyword)
(source_entity member: (identifier) @variable.field)

;; ---------------------------------------------------------------------------
;; RDF Definitions
;; ---------------------------------------------------------------------------

(rdf_def "rdf" @keyword name: (identifier) @type.definition)
(rdf_def [ "a" "type" ] @keyword)
(rdf_def type: (identifier_reference) @type)

;; ---------------------------------------------------------------------------
;; Type Classes
;; ---------------------------------------------------------------------------

(type_class_def "class" @keyword name: (identifier) @type.definition)

(type_parameter name: (identifier) @type.definition)
(type_parameter (type_op_combiner) @operator)

(type_parameter_restriction class: (identifier_reference) @type)

(type_restriction_argument (identifier) @type.definition)

(class_function_def
 (function_signature name: (identifier) @method.definition))

(wildcard) @type.builtin

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(entity_identity "identity" @keyword)

(member_def
 name: (identifier) @variable.field
 target: (type_reference) @type)

(property_ref
 "ref" @keyword
 property: (identifier_reference) @variable.field)

(dimension_parent
 "parent" @keyword
 name: (identifier) @variable.field
 parent: (identifier_reference) @type)

(value_variant name: (identifier) @constant)

(type_variant name: (identifier_reference) @type.definition)
(type_variant rename: (identifier) @type)

(cardinality_expression (sequence_ordering) @keyword)
(cardinality_expression (sequence_uniqueness) @keyword)

;; ---------------------------------------------------------------------------
;; Values
;; ---------------------------------------------------------------------------

(string (quoted_string) @string)
(string language: (language_tag) @property)

[
 (binary)
 (iri) ] @string.special

[
 (rational)
 (decimal)
 (double)
 (integer)
 (unsigned)
 ] @number

(boolean) @boolean

(value_constructor name: (identifier_reference) @function.call)

(value (identifier_reference) @type)

(sequence_of_values (sequence_ordering) @keyword)
(sequence_of_values (sequence_uniqueness) @keyword)
(sequence_of_values (identifier_reference) @type)

;; ---------------------------------------------------------------------------
;; Errors
;; ---------------------------------------------------------------------------

;; Highlight errors in red. This is not very useful in practice, as text will
;; be highlighted as user types, and the error could be elsewhere in the code.

(
 (ERROR) @error
 (#set! "priority" 110)
)
