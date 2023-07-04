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
 ;; For constraints
 "and"
 "exists"
 "forall"
 "iff"
 "implies"
 "not"
 "or"
 (reserved_self)
 (reserved_self_type)
 ] @keyword

;; ---------------------------------------------------------------------------
;; Module & Imports
;; ---------------------------------------------------------------------------

(module name: (identifier) @module.definition)

(import_statement
 "[" @punctuation.bracket
 "]" @punctuation.bracket)

(member_import
 name: (qualified_identifier) @type)

(module_import
 name: (identifier) @module)

;; ---------------------------------------------------------------------------
;; Annotations and Constraints
;; ---------------------------------------------------------------------------

(annotation_property
 "@" @property
 name: (identifier_reference) @property
 "="? @operator)

(annotation_property
 value: (value (identifier_reference) @type))

(constraint
 name: (identifier) @property)

(informal_constraint
 "=" @operator
 (quoted_string) @embedded)

(name_path) @variable

(tautology) @constant.builtin

(contradiction) @constant.builtin

(negation "¬" @operator)
(conjunction "∧" @operator)
(disjunction "∨" @operator)
(implication "⇒" @operator)
(biconditional "⇔" @operator)
(universal "∀" @operator)
(existential "∃" @operator)

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

(data_type_def
 name: (identifier) @type.definition
 "<-" @operator
 base: (data_type_base (identifier_reference) @type))

(entity_def
name: (identifier) @type.definition)

(enum_def
 name: (identifier) @type.definition)

(event_def
 name: (identifier) @type.definition
 source: (identifier_reference) @type)

(structure_def
 name: (identifier) @type.definition)

(union_def
 name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(property_member
 role: (identifier) @variable.field)

(identity_member
 name: (identifier) @variable.field)

(identity_member
 "->" @operator
 target: (type_reference) @type)

(member_by_value
 name: (identifier) @variable.field)

(member_by_value
 "->" @operator
 target: (type_reference) @type)

(member_by_reference
 name: (identifier) @variable.field)

(member_by_reference
 "->" @operator
 target: (type_reference) @type)

(enum_variant
 name: (identifier) @constant
 "=" @operator)

(type_variant
 (identifier_reference) @type)

(type_variant
 rename: (identifier) @type)

(cardinality_expression
 "{" @punctuation.bracket
 "}" @punctuation.bracket)

(cardinality_range ".." @operator)

(property_def
 name: (identifier) @variable.field)

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
 "(" @punctuation.bracket
 ")" @punctuation.bracket)

(value
 (identifier_reference) @type)

(list_of_values
 (identifier_reference) @type)

(list_of_values
 "[" @punctuation.bracket
 "]" @punctuation.bracket)

;; ---------------------------------------------------------------------------
;; Errors
;; ---------------------------------------------------------------------------

;; Highlight errors in red. This is not very useful in practice, as text will
;; be highlighted as user types, and the error could be elsewhere in the code.

(
 (ERROR) @error
 (#set! "priority" 110)
)
