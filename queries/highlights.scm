;; ---------------------------------------------------------------------------
;; Comments
;; ---------------------------------------------------------------------------

(line_comment) @comment

;; ---------------------------------------------------------------------------
;; Keywords
;; ---------------------------------------------------------------------------

[
 "as"
 "assert"
 "base"
 "datatype"
 "end"
 "entity"
 "enum"
 "event"
 "group"
 "identity"
 "import"
 "is"
 "module"
 "of"
 "property"
 "ref"
 "source"
 "structure"
 "union"
 (unknown_type)
 (builtin_simple_type)
 ] @keyword

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
 name: (identifier_reference) @property
 "=" @operator)

(annotation_property value: (value (identifier_reference) @type))

(constraint name: (identifier) @property)

(informal_constraint
 "=" @operator
 (quoted_string) @embedded)

(informal_constraint language: (controlled_language_tag) @property)

(environment_definition
 "def" @keyword
 name: (identifier) @function.definition
 [ ":=" "≔" ] @operator)

(constraint_environment (constraint_environment_end) @keyword)

(constraint_sentence [ "(" ")" ] @punctuation.bracket)

(name_path
 subject: [ (reserved_self) (reserved_self_type) ] @keyword
 "." @punctuation.delimiter
 path: (identifier) @function.call)

(term (name_path subject: (identifier) @variable))
(equation (term (identifier_reference) @variable))
(equation "=" @operator)

(functional_term
 function: (_) @function.call
 [ "(" ")" ] @punctuation.bracket)

(functional_term arguments: (term (identifier_reference) @variable))

(atomic_sentence
 predicate: (_) @function.call
 [ "(" ")" ] @punctuation.bracket)

(atomic_sentence arguments: (term (identifier_reference) @variable))

(negation "not" @keyword)
(negation "¬" @operator)

(conjunction "and" @keyword)
(conjunction "∧" @operator)

(disjunction "or" @keyword)
(disjunction "∨" @operator)

(exclusive_disjunction "xor" @keyword)
(exclusive_disjunction "⊻" @operator)

(implication "implies" @keyword)
(implication [ "==>" "⇒" ] @operator)

(biconditional "iff" @keyword)
(biconditional [ "<==>" "⇔" ] @operator)

(universal "forall" @keyword)
(universal "∀" @operator)

(existential "exists" @keyword)
(existential "∃" @operator)

(quantified_body [ "(" ")" ] @punctuation.bracket)

(quantifier_binding (reserved_self) @keyword)
(quantifier_binding name: (identifier) @variable)

(binding_type_reference "->" @operator)
(binding_type_reference from_type: (reserved_self_type) @keyword)
(binding_type_reference from_type: (identifier_reference) @type)

(binding_seq_iterator "in" @keyword)
(binding_seq_iterator "∈" @operator)
(binding_seq_iterator from_collection: (identifier_reference) @variable)
(binding_seq_iterator from_collection: (name_path subject: (identifier) @variable))
(binding_seq_iterator from_collection: (name_path path: (identifier) @function.call))

(function_signature "->" @operator)

(fn_parameter
 name: (identifier) @variable.parameter
 "->" @operator)

(fn_type (any_type) @type)
(fn_type (type_reference (identifier_reference) @type))

(collection_type
 collection: (builtin_collection_type) @type
 "of" @keyword
 element: (_) @type)

(list_of_predicate_values [ "[" "]" ] @punctuation.bracket)

(sequence_comprehension
 "{" @punctuation.bracket
 "|" @punctuation.separator
 "}" @punctuation.bracket)

(binding_expression name: (identifier) @variable.special)

(expression [ "(" ")" ] @punctuation.bracket)

(expression_negation "not" @keyword)
(expression_negation "¬" @operator)

(expression_conjunction "and" @keyword)
(expression_conjunction "∧" @operator)

(expression_disjunction "or" @keyword)
(expression_disjunction "∨" @operator)

(expression_exclusive_disjunction "xor" @keyword)
(expression_exclusive_disjunction "⊻" @operator)

(return_values (identifier) @variable)

(return_values [ "[" "]" ] @punctuation.bracket)

(list_of_predicate_values [ "[" "]" ] @punctuation.bracket)

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

(data_type_def
 name: (identifier) @type.definition
 "<-" @operator
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
(identity_member
 "->" @operator
 target: (type_reference) @type)

(member_by_value name: (identifier) @variable.field)
(member_by_value role: (identifier) @variable.special)
(member_by_value
 "->" @operator
 target: (type_reference) @type)

(member_by_reference name: (identifier) @variable.field)
(member_by_reference role: (identifier) @variable.special)
(member_by_reference
 "->" @operator
 target: (type_reference) @type)

(value_variant
 name: (identifier) @constant
 "=" @operator)

(type_variant (identifier_reference) @type)

(type_variant rename: (identifier) @type)

(cardinality_expression [ "{" "}" ] @punctuation.bracket)

(cardinality_range ".." @operator)

(property_def name: (identifier) @variable.field)

(property_role
 name: (identifier) @variable.field
 "->" @operator
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
