;; ---------------------------------------------------------------------------
;; Comments
;; ---------------------------------------------------------------------------

(line_comment) @comment


;; ---------------------------------------------------------------------------
;; Module
;; ---------------------------------------------------------------------------

[
 "module"
 "is"
 "import"
 "identity"
 "ref"
 "entity"
 "structure"
 "entity"
 "event"
 "source"
 "structure"
 "enum"
 "datatype"
 "end"
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
 "->"? @operator
 target: (identifier_reference)? @type
 "="? @operator)

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

(entity_def
name: (identifier) @type.definition)

(structure_def
 name: (identifier) @type.definition)

(enum_def
 name: (identifier) @type.definition)

(event_def
 name: (identifier) @type.definition
 source: (identifier_reference) @type)

(data_type_def
 name: (identifier) @type.definition
 "<-" @operator
 base: (identifier_reference) @type)

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(identity_member
 name: (identifier) @variable.field
 "->" @operator
 target: (identifier_reference) @type)

(member_by_value
 name: (identifier) @variable.field
 "->" @operator
 target: (identifier_reference) @type)

(member_by_reference
 name: (identifier) @variable.field
 "->" @operator
 target: (identifier_reference) @type)

(cardinality_expression
 ".." @operator)

;; ---------------------------------------------------------------------------
;; Values
;; ---------------------------------------------------------------------------

(string
 (quoted_string) @string
 (language_tag)? @property)

(iri_reference) @string

[
 (double)
 (decimal)
 (integer)
 (unsigned)
 ] @number

(boolean) @constant.builtin

(value_constructor
 name: (identifier_reference)) @function

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

(ERROR) @error
