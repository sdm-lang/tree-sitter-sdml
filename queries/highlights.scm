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
 "class"
 "datatype"
 "dimension"
 "entity"
 "enum"
 "event"
 "property"
 "rdf"
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
 "->"
 "→"
 "<-"
 "←"
 ".."
 ] @operator

;; ---------------------------------------------------------------------------
;; Module & Imports
;; ---------------------------------------------------------------------------

(module name: (identifier) @module.definition)
(module "version" @keyword)

(import_statement [ "[" "]" ] @punctuation.bracket)

(member_import name: (qualified_identifier) @type)
(member_import "as" @keyword)
(member_import rename: (identifier) @type)

(module_import name: (identifier) @module)
(module_import "as" @keyword)
(module_import rename: (identifier) @module)

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

(constraint_environment "with" @keyword)

(function_def
 (function_signature name: (identifier) @function.definition))

(function_signature "def" @keyword)
(function_signature target: (_) @type)
(function_signature [ "(" ")" ] @punctuation.bracket)

(function_parameter name: (identifier) @variable.parameter)
(function_parameter target: (_) @type)

(function_cardinality_expression (sequence_ordering) @keyword)
(function_cardinality_expression (sequence_uniqueness) @keyword)
(function_cardinality_expression [ "{" "}" ] @punctuation.bracket)

(function_composition subject: (reserved_self) @variable.builtin)
(function_composition name: (identifier) @function.call)
(function_composition [ "·" "." ] @operator)

(constraint_sentence [ "(" ")" ] @punctuation.bracket)

(atomic_sentence
 predicate: (term (identifier_reference) @function.call))

(actual_arguments [ "(" ")" ] @punctuation.bracket)
(actual_arguments
 argument: (term (identifier_reference (identifier) @variable)))

(term (reserved_self) @variable.builtin)

((equation lhs: (term (identifier_reference) @variable)) (#is-not? local))

((equation rhs: (term (identifier_reference) @variable)) (#is-not? local))

(quantified_sentence "," @punctuation.separator)

(quantified_variable source: (reserved_self) @variable.builtin)
(quantified_variable name: (identifier) @variable.parameter)

(functional_term
 function: (term (identifier_reference) @function.call))

(sequence_builder [ "{" "}" ] @punctuation.bracket
                  "|" @punctuation.separator)

(named_variable_set (identifier) @variable)

(mapping_variable
 domain: (identifier) @variable range: (identifier) @variable)

(sequence_builder_body [ "(" ")" ] @punctuation.bracket)

(sequence_of_predicate_values (identifier_reference) @type)
(sequence_of_predicate_values [ "[" "]" ] @punctuation.bracket)

(logical_op_negation "¬" @operator)
(logical_op_negation "not" @keyword)

(logical_op_conjunction "∧" @operator)
(logical_op_conjunction "and" @keyword)

(logical_op_disjunction "∨" @operator)
(logical_op_disjunction "or" @keyword)

(logical_op_exclusive_disjunction "⊻" @operator)
(logical_op_exclusive_disjunction "xor" @keyword)

(logical_op_implication [ "==>" "⇒" ] @operator)
(logical_op_implication "implies" @keyword)

(logical_op_biconditional [ "<==>" "⇔" ] @operator)
(logical_op_biconditional "iff" @keyword)

(logical_quantifier_universal "∀" @operator)
(logical_quantifier_universal "forall" @keyword)

(logical_quantifier_existential "∃" @operator)
(logical_quantifier_existential "exists" @keyword)

;; (set_op_union "∪" @operator)
;; (set_op_union "union" @keyword)

;; (set_op_intersection "∩" @operator)
;; (set_op_intersection "intersection" @keyword)

;; (set_op_complement "∖" @operator)
;; (set_op_complement "complement" @keyword)

(set_op_membership "∈" @operator)
(set_op_membership "in" @keyword)

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

[
 (builtin_simple_type)
 (unknown_type)
 ] @type.builtin

(data_type_def name: (identifier) @type.definition)
(data_type_def base: (identifier_reference) @type)
(data_type_def opaque: (opaque) @keyword)

;; (datatype_set_constructed_base [ "[" "]" ] @punctuation.bracket)
;; (datatype_set_constructed_base
;;  first: (identifier_reference) @type
;;  rest: (identifier_reference) @type)

(datatype_def_restriction [ "{" "}" ] @punctuation.bracket)
(length_restriction_facet
 [ "length"
   "maxLength"
   "minLength" ] @property
   "=" @operator)
(digit_restriction_facet
 [ "fractionDigits"
   "totalDigits" ] @property
   "=" @operator)
(value_restriction_facet
 [ "maxExclusive"
   "maxInclusive"
   "minExclusive"
   "minInclusive" ] @property
   "=" @operator)
(tz_restriction_facet
 "explicitTimezone" @property
 "=" @operator)
(pattern_restriction_facet [ "[" "]" ] @punctuation.bracket)
(pattern_restriction_facet
 "pattern" @property
 "=" @operator
 (quoted_string) @string)

(kw_is_fixed) @keyword

(tz_restriction_value) @keyword

(dimension_def name: (identifier) @type.definition)

(entity_def name: (identifier) @type.definition)

(enum_def name: (identifier) @type.definition)

(event_def name: (identifier) @type.definition)

(structure_def name: (identifier) @type.definition)

(union_def name: (identifier) @type.definition)

(source_entity "source" @keyword entity: (identifier_reference) @type)
(source_entity "with" @keyword)
(source_entity [ "[" "]" ] @punctuation.bracket)
(source_entity member: (identifier) @variable.field)

;; ---------------------------------------------------------------------------
;; RDF Definitions
;; ---------------------------------------------------------------------------

(rdf_def name: (identifier) @type.definition)
(rdf_types "type" @keyword type: (identifier_reference) @type)
(rdf_types [ "[" "]" ] @punctuation.bracket)

;; ---------------------------------------------------------------------------
;; Type Classes
;; ---------------------------------------------------------------------------

(type_class_def name: (identifier) @type.definition)
(type_class_def [ "(" ")" ] @punctuation.bracket)

(type_variable name: (identifier) @type)
(type_variable "+" @operator)

(type_class_reference name: (identifier_reference) @type)

(type_class_arguments [ "(" ")" ] @punctuation.bracket)

(method_def
 (function_signature name: (identifier) @method.definition))

(wildcard) @type.builtin

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(entity_identity "identity" @keyword)

(member_def
 name: (identifier) @variable.field
 target: (type_reference) @type)

;; (owl_datatype_restriction [ "{" "}" ] @punctuation.bracket)
;; (owl_value_restriction_facet
;;  [ "allValuesFrom"
;;    "someValuesFrom"
;;    "hasValue" ] @property
;;    "=" @operator)

(property_ref
 "ref" @keyword
 property: (identifier_reference) @variable.field)

(dimension_parent
 "parent" @keyword
 name: (identifier) @variable.field
 entity: (identifier_reference) @type)

(value_variant name: (identifier) @constant)

(type_variant (identifier_reference) @type)
(type_variant rename: (identifier) @type)
(type_variant "as" @keyword)

(cardinality_expression (sequence_ordering) @keyword)
(cardinality_expression (sequence_uniqueness) @keyword)
(cardinality_expression [ "{" "}" ] @punctuation.bracket)

;; ---------------------------------------------------------------------------
;; Values
;; ---------------------------------------------------------------------------

(string (quoted_string) @string)
(string language: (language_tag) @property)

(iri) @string.special

(binary) @string.special

[
 (rational)
 (decimal)
 (double)
 (integer)
 (unsigned)
 ] @number

(boolean) @boolean

(value_constructor name: (identifier_reference) @function.call)
(value_constructor [ "(" ")" ] @punctuation.bracket)

(value (identifier_reference) @type)

(sequence_of_values (identifier_reference) @type)
(sequence_of_values  [ "[" "]" ] @punctuation.bracket)

;; ---------------------------------------------------------------------------
;; Errors
;; ---------------------------------------------------------------------------

;; Highlight errors in red. This is not very useful in practice, as text will
;; be highlighted as user types, and the error could be elsewhere in the code.

(
 (ERROR) @error
 (#set! "priority" 110)
)
