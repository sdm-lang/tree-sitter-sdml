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
 "group"
 "import"
 "is"
 "metric"
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

;; ---------------------------------------------------------------------------
;; Module ❱ Imports
;; ---------------------------------------------------------------------------

(module_path_absolute "::" @punctuation.separator)

(module_path_relative "::" @punctuation.separator)
(module_path_relative segment: (identifier) @module)

(member_import name: (qualified_identifier) @type)
(single_import
 (member_import)
 rename: (identifier) @type)

(module_import name: (identifier) @module)
(single_import
 (module_import)
 rename: (identifier) @module)

;; ---------------------------------------------------------------------------
;; Annotation ❱ Properties
;; ---------------------------------------------------------------------------

(annotation_property "@" @property name: (identifier_reference) @property)

(annotation_property value: (value (identifier_reference) @type))

;; ---------------------------------------------------------------------------
;; Annotation ❱ Constraints
;; ---------------------------------------------------------------------------

(constraint name: (identifier) @property)

(informal_constraint (quoted_string) @embedded)
(informal_constraint language: (controlled_language_tag) @property)

;; ---------------------------------------------------------------------------
;; Annotation ❱ Constraints ❱ Formal
;; ---------------------------------------------------------------------------

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

(sentence_with_environment [ "with" "for" ] @keyword)

(keyword_function_def "def" @keyword)

(function_signature name: (identifier) @function.definition)
(function_signature target: (_) @type)

(function_parameter name: (identifier) @variable.parameter)
(function_parameter target: (_) @type)

(cardinality_reference_expression (sequence_ordering) @keyword)
(cardinality_reference_expression (sequence_uniqueness) @keyword)

(function_body [ ":=" "≔" ] @operator)

(atomic_sentence
 predicate: (term (identifier_reference) @function.call))
(atomic_sentence
 argument: (term (identifier_reference (identifier) @variable)))

(equation (term (identifier_reference) @variable))
(inequation (term (identifier_reference) @variable))

(set_expression_sentence (term (identifier_reference) @variable))
(arithmetic_expression_sentence (term (identifier_reference) @variable))

(quantified_sentence "," @punctuation.separator)
(variable (identifier) @variable)
(variable range: (identifier_reference) @type)

(sequence_builder
 (seq_builder_separator) @punctuation.separator)

(functional_term
 function: (term (identifier_reference) @function.call))
(functional_term
 argument: (term (identifier_reference (identifier) @variable)))

(function_composition subject: [ (reserved_self) (reserved_event) ] @variable.builtin)
(function_composition subject: (identifier) @variable)
(function_composition name: (identifier) @function.call)
(function_composition [ "." "∘" ] @operator)

(term [ (reserved_self) (reserved_event) ] @variable.builtin)
(reserved_event "event"  @variable.builtin)

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

;; ---------------------------------------------------------------------------
;; Definition
;; ---------------------------------------------------------------------------

(mixin_with_members "with" @keyword)
(mixin_with_members wildcard: (_)  @type.builtin)
(mixin_without_members "without" @keyword)
(mixin_member member: (identifier)  @variable.field)
(mixin_member rename: (identifier)  @variable.field)

(from_definition_clause "from" @keyword from: (identifier_reference) @type)
(source_entity "source" @keyword from: (identifier_reference) @type)

;; ---------------------------------------------------------------------------
;; Definition ❱ Datatype
;; ---------------------------------------------------------------------------

(datatype_def
 "datatype" @keyword
 name: (identifier) @type.definition)
(datatype_def opaque: (opaque) @keyword)
(datatype_base_type_reference (identifier_reference) @type)
(datatype_base_type_reference (builtin_types) @type.builtin)

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

;; ---------------------------------------------------------------------------
;; Definition ❱ Dimension
;; ---------------------------------------------------------------------------

(dimension_def name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; Definition ❱ Entity
;; ---------------------------------------------------------------------------

(entity_def name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; Definition ❱ Enum
;; ---------------------------------------------------------------------------

(enum_def name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; Definition ❱ Event
;; ---------------------------------------------------------------------------

(event_def name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; Definition ❱ Metrics
;; ---------------------------------------------------------------------------

(metric_group_def "group" @keyword)
(metric_group_def name: (identifier) @type.definition)
(metric_event_binding "on" @keyword)
(metric_event_binding (identifier_reference) @type)

(metric_ref "ref" @keyword)

;; ---------------------------------------------------------------------------
;; Definition ❱ Rdf
;; ---------------------------------------------------------------------------

(rdf_def "rdf" @keyword name: (identifier) @type.definition)

(rdf_types [ "a" "type" ] @keyword)
(rdf_types type: (identifier_reference) @type)

;; ---------------------------------------------------------------------------
;; Definition ❱ Structure
;; ---------------------------------------------------------------------------

(structure_def name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; Definition ❱ Type Class
;; ---------------------------------------------------------------------------

(type_class_def "class" @keyword name: (identifier) @type.definition)

(type_parameter name: (identifier) @type.definition)
(type_parameter (type_op_combiner) @operator)

(type_parameter_restriction class: (identifier_reference) @type)

(type_restriction_argument (identifier) @type.definition)

(wildcard) @type.builtin

;; ---------------------------------------------------------------------------
;; Definition ❱ Union
;; ---------------------------------------------------------------------------

(union_def name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(member_def
 name: (identifier) @variable.field
 target: (type_reference) @type)

(annotation_member_def
 "@" @property.definition
 (member_def name: (identifier) @property.definition))

(property_ref
 "ref" @keyword
 property: (identifier_reference) @variable.field)

;; ---------------------------------------------------------------------------
;; Members ❱ Specials
;; ---------------------------------------------------------------------------

(entity_identity "identity" @keyword)

(dimension_parent
 "parent" @keyword
 name: (identifier) @variable.field
 parent: (identifier_reference) @type)

;; ---------------------------------------------------------------------------
;; Members ❱ Variants
;; ---------------------------------------------------------------------------

(value_variant name: (identifier) @constant)

(type_variant name: (identifier_reference) @type.definition)
(type_variant rename: (identifier) @type)

;; ---------------------------------------------------------------------------
;; Members ❱ Cardinality
;; ---------------------------------------------------------------------------

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
