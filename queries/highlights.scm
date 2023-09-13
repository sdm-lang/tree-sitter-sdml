;; ---------------------------------------------------------------------------
;; Comments
;; ---------------------------------------------------------------------------

(line_comment) @comment

;; ---------------------------------------------------------------------------
;; Reserved Keywords
;; ---------------------------------------------------------------------------

[
 "module"
 "import"
 "assert"
 "datatype"
 "entity"
 "enum"
 "event"
 "property"
 "structure"
 "union"
 "is"
 "of"
 "end"
 ] @keyword

;; ---------------------------------------------------------------------------
;; Operators
;; ---------------------------------------------------------------------------

[
 "="
 ":="
 "≔"
 "¬"
 "∧"
 "∨"
 "⊻"
 "==>"
 "⇒"
 "<==>"
 "⇔"
 "∀"
 "∃"
 "∈"
 "->"
 "<-"
 ".."
 ] @operator

;; ---------------------------------------------------------------------------
;; Brackets
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
(module "base" @keyword)

(member_import name: (qualified_identifier) @type)

(module_import name: (identifier) @module)

;; ---------------------------------------------------------------------------
;; Annotations and Constraints
;; ---------------------------------------------------------------------------

(annotation_property
 "@" @property
 name: (identifier_reference) @property)

(annotation_property value: (value (identifier_reference) @type))

(constraint name: (identifier) @property)

(informal_constraint (quoted_string) @embedded)

(informal_constraint language: (controlled_language_tag) @property)

(environment_definition "def" @keyword)
(environment_definition (identifier) @function.definition . (function_def))
(environment_definition (identifier) @constant . (constant_def))

(function_signature target: (_) @type)
(function_parameter name: (identifier) @variable.parameter)
(function_parameter target: (_) @type)

(constraint_environment (constraint_environment_end) @keyword)

(function_composition subject: (reserved_self) @variable.builtin)
(function_composition name: (identifier) @function.call)
(function_composition "." @punctuation.delimiter)

(functional_term function: (term (identifier) @function.call))

(term (qualified_identifier) @type)

(atomic_sentence predicate: (term (identifier) @function.call))

((equation lhs: (term (identifier) @variable)) (#is-not? local))

((equation rhs: (term (identifier) @variable)) (#is-not? local))

(quantifier_bound_names source: (reserved_self) @variable.builtin)
(quantifier_bound_names name: (identifier) @variable.parameter)
(quantifier_bound_names "," @punctuation.separator)

(type_iterator source: (reserved_self_type) @variable.builtin)
(type_iterator source: (identifier_reference) @type)

(sequence_builder [ "|" "," ] @punctuation.separator)

(sequence_of_predicate_values (identifier_reference) @type)

(negation "not" @keyword)
(conjunction "and" @keyword)
(disjunction "or" @keyword)
(exclusive_disjunction "xor" @keyword)
(implication "implies" @keyword)
(biconditional "iff" @keyword)

(universal "forall" @keyword)
(existential "exists" @keyword)

(sequence_iterator "in" @keyword)

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

[
 (builtin_simple_type)
 (unknown_type)
 ] @type.builtin

(data_type_def
 name: (identifier) @type.definition
 base: (identifier_reference) @type)
(data_type_def opaque: (opaque) @keyword)

(entity_def name: (identifier) @type.definition)

(enum_def name: (identifier) @type.definition)

(event_def "source" @keyword)
(event_def
 name: (identifier) @type.definition
 source: (identifier_reference) @type)

(structure_def name: (identifier) @type.definition)
(member_group "group" @keyword)

(union_def name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(entity_identity "identity" @keyword)
(entity_identity name: (identifier) @variable.field)
(entity_identity property: (identifier_reference) @variable.field)
(entity_identity target: (type_reference) @type)
(entity_identity "in" @keyword)

(member name: (identifier) @variable.field)
(member property: (identifier_reference) @variable.field)
(member target: (type_reference) @type)
(member feature: (feature_reference) @keyword)
(member "in" @keyword)

(member_inverse_name
 "(" @punctuation.bracket
 name: (identifier) @variable.field
 ")" @punctuation.bracket)

(value_variant name: (identifier) @constant)

(type_variant (identifier_reference) @type)
(type_variant rename: (identifier) @type)
(type_variant "as" @keyword)

(property_def name: (identifier) @variable.field)

(identity_role "identity" @keyword)
(identity_role
 name: (identifier) @variable.field
 target: (type_reference) @type)

(member_role
 name: (identifier) @variable.field
 target: (type_reference) @type)
(member_role feature: (feature_reference) @keyword)

(cardinality_expression (sequence_ordering) @keyword)
(cardinality_expression (sequence_uniqueness) @keyword)

;; ---------------------------------------------------------------------------
;; Values
;; ---------------------------------------------------------------------------

(string (quoted_string) @string)
(string language: (language_tag) @property)

(iri) @string.special

(binary) @string.special

[
 (decimal)
 (double)
 (integer)
 (unsigned)
 ] @number

(boolean) @boolean

(value_constructor name: (identifier_reference) @function.call)

(value (identifier_reference) @type)

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
