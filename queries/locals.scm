;; ---------------------------------------------------------------------------
;; Constraint Scopes
;; ---------------------------------------------------------------------------

(formal_constraint) @local.scope
(environment_definition name: (identifier) @local.definition)

(environment_definition) @local.scope
(function_parameter name: (identifier) @local.definition)

(quantified_sentence) @local.scope
(quantifier_binding name: (identifier) @local.definition)

(sequence_builder) @local.scope

(tuple_variable (identifier) @local.definition)
(sequence_variable (identifier) @local.definition)
(mapping_variable domain: (identifier) range: (identifier) @local.definition)
(local_binding (identifier) @local.definition)
