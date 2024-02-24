;; ---------------------------------------------------------------------------
;; Modules and Imports
;; ---------------------------------------------------------------------------

(module
 name: (identifier) @definition.module)

(module_import
 name: (identifier) @reference.module)

(member_import
 name: (qualified_identifier
        module: (identifier) @reference.module))

(member_import
 name: (qualified_identifier) @reference.class)

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

(data_type_def
 name: (identifier) @definition.class)

(data_type_def
 base: (identifier_reference) @reference.class)

(entity_def
 name: (identifier) @definition.class)

(enum_def
 name: (identifier) @definition.class)

(event_def
 name: (identifier) @definition.class)

(event_def
 source: (identifier_reference) @reference.class)

(structure_def
 name: (identifier) @name) @definition.class

(type_class_def
 name: (identifier) @name) @definition.class

(union_def
 name: (identifier) @name) @definition.class

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(member_def
 name: (identifier) @definition.field
 target: (type_reference (identifier_reference) @reference.class))

(type_variant (identifier_reference) @reference.class)
(type_variant rename: (identifier) @reference.class)

(value_variant
 name: (identifier) @definition.constant)

(method_def name: (identifier) @definition.method)

;; ---------------------------------------------------------------------------
;; Annotations, Constraints, and Values
;; ---------------------------------------------------------------------------

(annotation_property
 value: (value (identifier_reference) @reference.class))

(value_constructor
 name: (identifier_reference) @reference.class)

(constraint name: (identifier) @name)

(function_composition (identifier) @name)

(functional_term function: (term (identifier_reference) @reference.function))

(environment_def name: (identifier) @definition.function)

(named_variable_set (identifier) @definition.variable)

(mapping_variable domain: (identifier) range: (identifier) @definition.variable)
