;; ---------------------------------------------------------------------------
;; Comments
;; ---------------------------------------------------------------------------

(line_comment) @comment

;; ---------------------------------------------------------------------------
;; Module
;; ---------------------------------------------------------------------------

[
 "as"
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
 "ref"
 "source"
 "structure"
 "union"
 (unknown_type)
 ] @keyword

(module name: (identifier) @module.definition)

(member_import
 name: (qualified_identifier) @type)

(module_import
 name: (identifier) @module)

;; ---------------------------------------------------------------------------
;; Annotations
;; ---------------------------------------------------------------------------

(annotation
 "@" @property
 name: (identifier_reference) @property
 "="? @operator)

(annotation
 value: (value (identifier_reference) @type))

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

(data_type_def
 name: (identifier) @type.definition
 "<-" @operator
 base: (identifier_reference) @type)

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

(identity_member
 name: (identifier) @variable.field
 "->" @operator
 target: (_) @type)

(member_by_value
 name: (identifier) @variable.field
 "->" @operator
 target: (_) @type)

(member_by_reference
 name: (identifier) @variable.field
 "->" @operator
 target: (_) @type)

(enum_variant
 name: (identifier) @constant
 "=" @operator)

(type_variant
 (identifier_reference) @type)

(type_variant
 rename: (identifier) @type)

(cardinality_range
 ".." @operator)

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
 name: (identifier_reference)) @function.call

(value
 (identifier_reference) @type)

(list_of_values
 (identifier_reference) @type)

;; ---------------------------------------------------------------------------
;; Punctuation
;; ---------------------------------------------------------------------------

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

;; ---------------------------------------------------------------------------
;; Errors
;; ---------------------------------------------------------------------------

;; Highlight errors in red. This is not very useful in practice, as text will
;; be highlighted as user types, and the error could be elsewhere in the code.

(
 (ERROR) @error
 (#set! "priority" 110)
)
