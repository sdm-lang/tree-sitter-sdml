;; ---------------------------------------------------------------------------
;; Modules and Imports
;; ---------------------------------------------------------------------------

(module
 name: (identifier) @name) @definition.module

(import
 (module_import
  name: (identifier) @name)) @reference.module

(import
 (member_import
  name: (qualified_identifier
         module: (identifier) @name))) @reference.module

(import
 (member_import
  name: (qualified_identifier) @name)) @reference.class

;; ---------------------------------------------------------------------------
;; Types and Members
;; ---------------------------------------------------------------------------

(entity_def
 name: (identifier) @name) @definition.class

(structure_def
 name: (identifier) @name) @definition.class

(enum_def
 name: (identifier) @name) @definition.class

(event_def
 name: (identifier) @name) @definition.class

(event_def
 source: (identifier_reference) @name) @reference.class

(data_type_def
 name: (identifier) @name) @definition.class

(data_type_def
 base: (identifier_reference) @name) @reference.class

(identity_member
 target: (identifier_reference) @name) @reference.class

(member_by_value
 target: (identifier_reference) @name) @reference.class

(member_by_reference
 target: (identifier_reference) @name) @reference.class

;; ---------------------------------------------------------------------------
;; Annotations
;; ---------------------------------------------------------------------------

(annotation
 name: (identifier_reference) @name
 target: (identifier_reference)? @name) @reference.class

(value_constructor
 name: (identifier_reference) @name) @reference.class

;; ---------------------------------------------------------------------------
;; Field Names
;; ---------------------------------------------------------------------------

(enum_variant
 name: (identifier) @name) @definition.variant

(identity_member
 name: (identifier) @name) @definition.field

(member_by_value
 name: (identifier) @name) @definition.field

(member_by_reference
 name: (identifier) @name) @definition.field
