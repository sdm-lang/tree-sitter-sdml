;; ---------------------------------------------------------------------------
;; Constraint Scopes
;; ---------------------------------------------------------------------------

(formal_constraint) @local.scope
(environment_definition name: (identifier) @local.definition)

(environment_definition) @local.scope
(function_parameter name: (identifier) @local.definition)

(quantified_sentence) @local.scope
(quantified_sentence
 binding: (quantifier_binding name: (identifier) @local.definition))

(sequence_builder) @local.scope
(variable_name_set (identifier) @local.reference)
(mapping_variable domain: (identifier) range: (identifier) @local.reference)

(sequence_builder
 binding: (quantifier_binding name: (identifier) @local.definition))

(term (identifier) @local.reference)
