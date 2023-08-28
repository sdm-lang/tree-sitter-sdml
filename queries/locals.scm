;; ---------------------------------------------------------------------------
;; Constraint Scopes
;; ---------------------------------------------------------------------------

(formal_constraint) @local.scope
(environment_definition name: (identifier) @local.definition)

(environment_definition) @local.scope
(function_parameter name: (identifier) @local.definition)

(quantified_sentence) @local.scope
(quantifier_bound_names name: (identifier) @local.definition)

(sequence_builder) @local.scope
(named_variable_set (identifier) @local.reference)
(mapping_variable domain: (identifier) range: (identifier) @local.reference)

(term (identifier) @local.reference)
