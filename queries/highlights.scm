;; ---------------------------------------------------------------------------
;; Comments
;; ---------------------------------------------------------------------------

(line_comment) @comment

;; ---------------------------------------------------------------------------
;; Keywords
;; ---------------------------------------------------------------------------

[
 "and"
 "as"
 "assert"
 "base"
 "datatype"
 "def"
 "end"
 "entity"
 "enum"
 "event"
 "exists"
 "features"
 "forall"
 "group"
 "identity"
 "iff"
 "implies"
 "import"
 "in"
 "is"
 "module"
 "not"
 "of"
 "or"
 "property"
 "source"
 "structure"
 "union"
 "xor"
 (sequence_ordering)
 (sequence_uniqueness)
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

(environment_definition (identifier) @function.definition . (function_def))
(environment_definition (identifier) @constant . (constant_def))

(function_signature target: (_) @type)
(function_parameter name: (identifier) @variable.parameter)
(function_parameter target: (_) @type)

(constraint_environment (constraint_environment_end) @keyword)

(function_composition name: (identifier) @function.call)
(function_composition "." @punctuation.delimiter)

(functional_term function: (term (identifier) @function.call))

(term (qualified_identifier) @type)

(atomic_sentence predicate: (term (identifier) @function.call))

((equation lhs: (term (identifier) @variable)) (#is-not? local))

((equation rhs: (term (identifier) @variable)) (#is-not? local))

(quantifier_bound_names name: (identifier) @variable.parameter)
(quantifier_bound_names "," @punctuation.separator)

(type_iterator source: (identifier_reference) @type)

(sequence_builder [ "|" "," ] @punctuation.separator)

(sequence_of_predicate_values (identifier_reference) @type)

[
 (reserved_self)
 (reserved_self_type)
 ] @variable.builtin

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

(entity_def name: (identifier) @type.definition)

(enum_def name: (identifier) @type.definition)

(event_def
 name: (identifier) @type.definition
 source: (identifier_reference) @type)

(structure_def name: (identifier) @type.definition)

(union_def name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(entity_identity name: (identifier) @variable.field)
(entity_identity property: (identifier_reference) @variable.field)
(entity_identity target: (type_reference) @type)

(member name: (identifier) @variable.field)
(member property: (identifier_reference) @variable.field)
(member target: (type_reference) @type)

(member_inverse_name
 "(" @punctuation.bracket
 name: (identifier) @variable.field
 ")" @punctuation.bracket)

(value_variant name: (identifier) @constant)

(type_variant (identifier_reference) @type)

(type_variant rename: (identifier) @type)

(property_def name: (identifier) @variable.field)

(identity_role
 name: (identifier) @variable.field
 target: (type_reference) @type)

(member_role
 name: (identifier) @variable.field
 target: (type_reference) @type)

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
