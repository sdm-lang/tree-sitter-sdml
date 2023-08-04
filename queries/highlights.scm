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

(constraint_environment (constraint_environment_end) @keyword)

(constraint_sentence [ "(" ")" ] @punctuation.bracket)

(name_path
 "." @punctuation.delimiter
 path: (identifier) @function.call)

(term (name_path subject: (identifier) @variable))
(equation (term (identifier_reference) @variable))

(functional_term
 function: (_) @function.call
 [ "(" ")" ] @punctuation.bracket)

(functional_term arguments: (term (identifier_reference) @variable))

(atomic_sentence
 predicate: (_) @function.call
 [ "(" ")" ] @punctuation.bracket)

(atomic_sentence arguments: (term (identifier_reference) @variable))

(quantified_body [ "(" ")" ] @punctuation.bracket)

(quantifier_binding (reserved_self) @keyword)
(quantifier_binding name: (identifier) @variable)

(binding_type_reference from_type: (reserved_self_type) @keyword)
(binding_type_reference from_type: (identifier_reference) @type)

(binding_seq_iterator from_collection: (identifier_reference) @variable)
(binding_seq_iterator from_collection: (name_path subject: (identifier) @variable))
(binding_seq_iterator from_collection: (name_path path: (identifier) @function.call))

(fn_parameter name: (identifier) @variable.parameter)

(fn_type (any_type) @type)
(fn_type (type_reference (identifier_reference) @type))

(collection_type
 collection: (builtin_collection_type) @type
 element: (_) @type)

(list_of_predicate_values [ "[" "]" ] @punctuation.bracket)

(sequence_comprehension
 "{" @punctuation.bracket
 "|" @punctuation.separator
 "}" @punctuation.bracket)

(local_binding name: (identifier) @variable.special)

(returned_value (identifier) @variable)
(returned_value [ "[" "]" ] @punctuation.bracket)

(list_of_predicate_values [ "[" "]" ] @punctuation.bracket)

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

(property_role
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
