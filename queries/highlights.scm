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
 "ref"
 "source"
 "structure"
 "union"
 "xor"
 (unknown_type)
 (builtin_simple_type)
 (reserved_self)
 (reserved_self_type)
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
;; Module & Imports
;; ---------------------------------------------------------------------------

(module name: (identifier) @module.definition)

(import_statement [ "[" "]" ] @punctuation.bracket)

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

(environment_definition name: (identifier) @function.definition)

(function_signature target: (_) @type)
(function_parameter name: (identifier) @variable.parameter)
(function_parameter target: (_) @type)

(constraint_environment (constraint_environment_end) @keyword)

(constraint_sentence [ "(" ")" ] @punctuation.bracket)

(name_path subject: (reserved_self) @keyword)
((name_path subject: (identifier) @function.call) (#is-not? local))
(name_path path: (identifier) @function.call)
(name_path "." @punctuation.delimiter)

(term (qualified_identifier) @type)

((functional_term function: (term (identifier) @function.call)) (#is-not? local))

((functional_term arguments: (term (identifier) @variable)) (#is-not? local))

(functional_term [ "(" ")" ] @punctuation.bracket)

((atomic_sentence predicate: (term (identifier) @function.call)) (#is-not? local))

((atomic_sentence arguments: (term (identifier) @variable)) (#is-not? local))

(atomic_sentence [ "(" ")" ] @punctuation.bracket)

((equation lhs: (term (identifier) @variable)) (#is-not? local))

((equation rhs: (term (identifier) @variable)) (#is-not? local))

(quantified_body [ "(" ")" ] @punctuation.bracket)

(quantifier_binding (reserved_self) @keyword)
(quantifier_binding name: (identifier) @variable)

(type_iterator from: (reserved_self_type) @keyword)
(type_iterator from: (identifier_reference) @type)

((sequence_iterator from: (identifier) @variable) (#is-not? local))

(list_of_predicate_values [ "[" "]" ] @punctuation.bracket)

(sequence_comprehension
 "{" @punctuation.bracket
 "|" @punctuation.separator
 "}" @punctuation.bracket)

(local_binding name: (identifier) @variable.special)

(returned_value (identifier) @variable)
(returned_value [ "[" "]" ] @punctuation.bracket)

(list_of_predicate_values [ "[" "]" ] @punctuation.bracket)
(list_of_predicate_values (identifier_reference) @type)

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

(data_type_def
 name: (identifier) @type.definition
 base: (data_type_base (identifier_reference) @type))

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

(identity_member name: (identifier) @variable.field)
(identity_member role: (identifier) @variable.special)
(identity_member target: (type_reference) @type)

(member_by_value name: (identifier) @variable.field)
(member_by_value role: (identifier) @variable.special)
(member_by_value target: (type_reference) @type)

(member_by_reference name: (identifier) @variable.field)
(member_by_reference role: (identifier) @variable.special)
(member_by_reference target: (type_reference) @type)

(member_inverse_name
 "(" @punctuation.bracket
 (identifier) @variable.field
 ")" @punctuation.bracket)

(value_variant name: (identifier) @constant)

(type_variant (identifier_reference) @type)

(type_variant rename: (identifier) @type)

(cardinality_expression [ "{" "}" ] @punctuation.bracket)

(mapping_type [ "(" ")" ] @punctuation.bracket)

(property_def name: (identifier) @variable.field)

(identity_role
 name: (identifier) @variable.field
 target: (type_reference) @type)

(role_by_value
 name: (identifier) @variable.field
 target: (type_reference) @type)

(role_by_reference
 name: (identifier) @variable.field
 target: (type_reference) @type)

;; ---------------------------------------------------------------------------
;; Values
;; ---------------------------------------------------------------------------

(string
 (quoted_string) @string)

(string
 language: (language_tag) @property)

(iri_reference) @string.special

[
 (decimal)
 (double)
 (integer)
 (unsigned)
 ] @number

(boolean) @constant.builtin

(value_constructor
 name: (identifier_reference) @function.call
 [ "(" ")" ] @punctuation.bracket)

(value (identifier_reference) @type)

(list_of_values (identifier_reference) @type)

(list_of_values [ "[" "]" ] @punctuation.bracket)

;; ---------------------------------------------------------------------------
;; Errors
;; ---------------------------------------------------------------------------

;; Highlight errors in red. This is not very useful in practice, as text will
;; be highlighted as user types, and the error could be elsewhere in the code.

(
 (ERROR) @error
 (#set! "priority" 110)
)
