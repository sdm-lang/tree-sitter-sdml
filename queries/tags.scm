;; ---------------------------------------------------------------------------
;; Modules and Imports
;; ---------------------------------------------------------------------------

(module
 name: (identifier) @name) @definition.module

(module_import
 name: (identifier) @name) @reference.module

(member_import
 name: (qualified_identifier
        module: (identifier) @name)) @reference.module

(member_import
 name: (qualified_identifier) @name) @reference.class

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

(data_type_def
 name: (identifier) @name) @definition.class

(data_type_def
 base: (data_type_base (identifier_reference) @name)) @reference.class

(entity_def
 name: (identifier) @name) @definition.class

(enum_def
 name: (identifier) @name) @definition.class

(event_def
 name: (identifier) @name) @definition.class

(event_def
 source: (identifier_reference) @name) @reference.class

(structure_def
 name: (identifier) @name) @definition.class

(union_def
 name: (identifier) @name) @definition.class

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(identity_member
 target: (type_reference (identifier_reference) @name)) @reference.class

(member_by_value
 target: (type_reference (identifier_reference) @name)) @reference.class

(member_by_reference
 target: (type_reference (identifier_reference) @name)) @reference.class

(enum_variant
 name: (identifier) @definition.constant)

(type_variant (identifier_reference) @name) @reference.class

(type_variant rename: (identifier) @name) @reference.class

(property_role
 target: (type_reference) @name) @reference.class

;; ---------------------------------------------------------------------------
;; Annotations, Constraints, and Values
;; ---------------------------------------------------------------------------

(annotation_property
 value: (value (identifier_reference) @name)) @reference.class

(value_constructor
 name: (identifier_reference) @name) @reference.class

;; ---------------------------------------------------------------------------
;; Field Names
;; ---------------------------------------------------------------------------

(identity_member
 name: (identifier) @name) @definition.field

(member_by_value
 name: (identifier) @name) @definition.field

(member_by_reference
 name: (identifier) @name) @definition.field

(property_def
 name: (identifier) @name) @definition.field
