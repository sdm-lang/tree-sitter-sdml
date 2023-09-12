# tree-sitter-sdml

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the Simple Domain Modeling Language (SDML).
For more information on the language, see the [documentation](https://sdml.io/).

# Example

```sdml
module Campaign base <https://advertising.amazon.com/api-model> is

  import [dc skos xsd]

  @skos:prefLabel = "Campaign sub-domain"@en
  @skos:version = xsd:decimal(2)

  datatype Name <- xsd:string is
    @xsd:minLength = 5
    @xsd:maxLength = 25
  end

  datatype CampaignId <- xsd:string is
    @skos:prefLabel = [
      "Campaign Identifier"@en
      "Identified de campagne"@fr
    ]
  end

  structure Tag is
    key -> xsd:NMTOKEN
    value -> {0..} rdfs:langStrings
  end

  entity campaign is
    identity id -> CampaignId

    name -> Name is
      @skos:definition = "the name of the campaign"@en
    end

    tag -> {0..} Tag

    target -> {1..} Target
  end

  entity Target

end
```

# Changes

**Version: 0.2.0**

This is a significant refactor intended to simplify the grammar, and reduce the number of constructs used where the
differentiation is not as significant as it looked previously.

* Refactor: simplify model overall, especially members and features.
  * Refactor: combine by-value and by-reference member types.
    * Remove: rules `member_by_value` and `role_by_value`.
    * Rename: rule `member_by_reference` to `member` and `role_by_reference` to `member_role`.
    * Remove: keyword the `ref` from rules `member` and `member_role`.
    * Rename: rule `identity_member` to `entity_identity`.
  * Refactor: combine structured type groups.
    * Rename: rule `structure_body` to `structured_body`.
    * Rename: rule `structure_group` to `member_group`.
    * Move: common parts of structure and entity bodies into common `_structured_body_inner` rule.
  * Refactor: move feature from a definition to a member modifier.
    * Remove: rule `feature_set_def`, and update `definition` accordingly.
    * Add: optional keyword `features` into the rule `_type_expression_to`.

**Version: 0.1.42**

* Feature: simplified `features` definition to be or/xor only.
  * Replace: separate bodies with `UnionBody`.
  * Add: cardinality now used to determine or/xor.

``` ebnf
FeatureSetDef
    ::= "features" Identifier Cardinality? UnionBody?
```

**Version: 0.1.41**

* Feature: add support for features from Product Line Engineering.
  * Add new definition rule `feature_set_def` to rule `definition`.
  * Add *and*, *or*, *xor* bodies to  `feature_set_def`.
  * Add basic documentation to book.
* Feature: updates to builtin simple types.
  * Add the new type `unsigned`.
  * Add the new type `binary`.
  * Rename type `iri_reference` to `iri`.

**Version: 0.1.40**

* Feature: add the Unicode character `↦` to the rule `_has_type` which works better for some typesetting.
* Feature: add rule for `inequation` alongside `equation`.
  * Add new rule `inequation` and make it a choice within `simple_sentence`.
  * Add new rules for inequality relations; `not_equal`, `less_than`, `less_than_or_equal`, `greater_than`, and `greater_than_or_equal`.
* Refactor: restructure rule `boolean_sentence` into a choice of `unary_boolean_sentence` and `binary_boolean_sentence`.
  * Add rule `unary_boolean_sentence` for negation only.
  * Add rule `binary_boolean_sentence` for logical connectives.
  * Add rules for each logical connective keyword/operator symbols.
* Refactor: rename field `variable_binding` to ``binding` in rule `quantieid_sentence`.
* Refactor: use the same rule for empty set in value sequences.
* Refactor: rename rule `_function_type_expression_to` to `_function_type`.
* Refactor: add rules `_has_type` and `_type_restriction` and allow both ascii and Unicode arrows.
  * Add rule `_has_type` for values `->` and `→`.
  * Add rule `_type_restriction` for values `<-` and `←`.
* Fix: rules for new shared bindings had confusing names.
  * Add rule `quantified_variable_binding`.
  * Rename rule `quantifier_binding` to `quantifier_bound_names`.
* Docs: add appendix with details of Unicode usage.

**Version: 0.1.39**

* Feature: allow multiple bindings at the head of quantified sentences.
* Feature: made progress on local scopes in highlighting.
  * Rename rule `_constant_def` to `constant_def`.
  * To-do: currently references are not picking up their definition formatting.
* Refactor: rename rule `name_path` to `function_composition`.
* Refactor: combine components of the two rules `quantified_sentence` and `sequence_builder`.
  * Add new shared rule `quantifier_binding` (along with `_bound_name_set`) now used in both sentence and builder.
  * Add the ability to have more than one name in a binding.
  * Add the ability for sequence builders to have more than one quantified binding.
  * Change the field `expression` into a field named `body` of type `constraint_sentence`.
  * Remove rules `expression` and `conjunctive_expression`.
* Style: change the order of choices in rule `predicate_value` to match `value` and corresponding sequences.

**Version: 0.1.38**

* Feature: Update naming for iterators to make them consistent.
  * Rename rule `iterator_target` to `iterator_source`.
  * Rename field `from` in `type_iterator` to `source`.
  * Rename field `from` in `sequence_iterator` to `source`.

**Version: 0.1.37**

* Feature: update rule `function_cardinality_expression` to allow sequence constraints.
  * Rename rule `any_type` to `wildcard`.
  * Remove rule `any_cardinality` and replace with `wildcard`.
* Feature: rename lists to sequences.
  * Rename rule `list_of_predicate_values` to `sequence_of_predicate_values`.
  * Rename rule `list_of_values` to `sequence_of_values`.
* Feature: make rule `property_role` private as `_property_role`.
* Feature: allow sequence constraints on sequence values.
  * Add rule `_sequence_value_constraints`.
  * Add optional `_sequence_value_constraints` to rule `sequence_of_predicate_values`.
  * Add optional `_sequence_value_constraints` to rule `sequence_of_values`.

**Version: 0.1.36**

* Feature: alter the rule `sequence_comprehension` to be more flexible.
  * Rename rule `sequence_comprehension` to  `sequence_builder`.
  * Rename rule `returned_value` to `variables` and re-write as a choice of:
  * Add rule `tuple_variable` to return distinct variables.
  * Add rule `sequence_variable` to return distinct variables as a sequence.
  * Add rule `mapping_variable` to return two variables as a mapping.

**Version: 0.1.35**

* Feature: alter the rule `_property_member` to allow property names to be `identifier_reference`.
  * New interpretation, field `name` in a member will be the name of a role.
  * Renamed keyword `in`, not `as`.
  * Renamed field `role` to `property` and made it's type `identifier_reference`.

**Version: 0.1.34**

* Feature: update property definitions to look more like members.
  * Update rule `property_role` to be a choice of three new rules.
  * Add rule `identity_role` which is a subset of `identity_member`.
  * Add rule `role_by_value` which is a subset of `member_by_value`.
  * Add rule `role_by_reference` which is a subset of `member_by_reference`.

**Version: 0.1.33**

* Feature: renamed quantifier binding targets to be more consistent.
  * Rename rule `binding_target` to `iterator_target`.
  * Rename rule `binding_type_reference` to `type_iterator` and field name `from_type` to `from`.
  * Rename rule `binding_seq_iterator` to `sequence_iterator` and field name `from_sequence` to `from`.
* Feature: simplified the rule `environment_definition` and made naming more consistent.
  * Remove optional `signature` field
  * Remove assignment operators
  * Rename field name `rhs` to `body` and change to a choice of `function_def` or `_value_def`.
  * Add rule `function_def` to hold the signature and operators removed from the environment definition.
  * Rename rule `fn_parameter` to `function_parameter`.
  * Rename rule `_fn_type` to `_function_type_expression_to`.
  * Add rules `function_cardinality_expression` and `any_cardinality` to capture cardinality or wildcard.
  * Add rule `function_type_reference` to allow wildcards.
* Feature: update queries `highlights`, `locals`, and `tags` for all changes above.
* Docs: update BNF syntax and diagrams for all changes above.
  
**Version: 0.1.32**

* Feature: update environment definition sequence types to use the same syntax as member type and cardinality.

**Version: 0.1.31**

* Feature: update highlighting queries for constraints with support for locals.
* Feature: add a `locals.scm` file with scopes for formal constraints.
* Feature: add `∅` (empty set) as a synonym for `[]` in constraints.
* Fix: update the mapping value test case to use domain/range field names.

**Version: 0.1.30**

* Feature (minor): added field names for the domain and range of mapping types and values.

**Version: 0.1.29**

* Fix: an apparent regression, the value for a constructor changed from `simple_value` to `value`. This changes it back.

**Version: 0.1.28**

* Feature: add a mapping type and corresponding value syntax.

**Version: 0.1.27**

* Feature: add *ordering* and *uniqueness* constraints into the cardinality expression. Used to constrain the sequence
  type of a member.

**Version: 0.1.26**

* Feature: applied same change as 0.1.25 but for property roles as well.

**Version: 0.1.25**

* Feature: changed grammar for reference members:
  * The production `source_cardinality` has been removed.
  * The production `member_inverse_name` has been added.

**Version: 0.1.24**

* Feature: constraint changes
  * Add a *language-tag* to informal constraints.
  * Add a *wildcard type* for the constraint language.

**Version: 0.1.23**

* Feature: add highlighting test for constraints, had to tweak a few things.

**Version: 0.1.22**

* Feature: clarify rules and associated meaning.
  * Rename the grammar rule `type_definition` to `definition` to address the fact that property definitions aren't types.
  * Rename the grammar rule `enum_variant` to `value_variant` to align with `type_variant` on unions.

**Version: 0.1.21**

* Feature: add support for sequence builder support(set builder) syntax.
* Fix: highlighting/indent/fold updated for constraints.
* Style: a number of cosmetic changes to formal constraints.

**Version: 0.1.19/0.1.20**

* Fix: minor change to add a field name to the '..' range operator.

**Version: 0.1.18**

* Feature: add a constraint assertion construct. This allows for specific constraints to be documented for any model element.
  * The grammar rule `annotation` has been renamed `annotation_property`
  * The grammar rule `constraint` has been added.
  * A new grammar rule named `annotation` is defined as a choice of `annotation_property` or `constraint`.
  * This allows the use of the old rule to be subsumed by the new definition.
* Constraints can be written in informal unstructured fashion or an embedded formalism.
  * The informal representation is simply a string.
  * The formal representation is a syntax that maps to a subset of [ISO/IEC 24707:2018](https://www.iso.org/standard/66249.html) Common Logic.
* More documentation added on the RDF mapping and the domain modeling process.

``` sdml
module example is

    import tag

    structure Thing is
    
      inner -> {0..} InnerThing is
        ;; informal
        assert same_tags = "All inner tags contain a tag value \"This\"."
        ;; formal
        assert same_tags_formal is
          forall self ( not_empty(self) and contains(self.tags "This") )
        end
      end
      
    end
    
    structure InnerThing is
      tags -> {0..} tag:Tag
    end
    
end
```

**Version: 0.1.17**

* Fixed highlighting for properties.

**Version: 0.1.16**

* Adjusted property grammar.
* Started on property documentation.

``` sdml
module ddict is
  import account
  
  property accountId is
    @skos:prefLabel = "accountId"@en
    @skos:altLabel = "account_id"@en
    
    identifier -> {1} account:AccountId is
      @skos:definition = "Used as an identifier for account-scoped things"@en
    end
    
    reference ref {1} -> {1} account:AccountId
  end
  
  structure Account is
    accountId as identifier
    name -> string
  end

end
```

**Version: 0.1.15**

* Added new structure to the grammar to allow data-dictionary style reusable property definitions.

``` sdml
module ddict is
  import account
  
  property accountId -> account:AccountId is
    @skos:prefLabel = "accountId"@en
    @skos:altLabel = "account_id"@en
    
    identifier is
      @skos:definition = "Used as ..."@en
    end
    
    default = {1..1}
  end
  
  structure Account is
    accountId as default
    name -> string
  end

end

```

**Version: 0.1.14**

* Added new rule named `builtin_simple_type` (choice of `string`, `double`, `decimal`, `integer`, `boolean`, and `iri`):
  * replaced `identifier_reference` with new rule `data_type_base` for `data_type_def`,
  * added to the `type_reference` choice used for the member `target` field.
  
Allows both:

``` sdml
module example is

  datatype mystring <- string
  
  structure Person is
    name -> string
    age -> integer
  end
end
```

Where the keywords `string` and `integer` will be expanded into the qualified identifiers `sdml:string` and
`sdml:integer` respectively.

**Version: 0.1.13**

* Added explicit `base` grammar for module rather than using `xml:base` as an attribute.
* Expanded grammar for `Identifier` to allow decimal digits in any position *after* the first.
* Clarified the grammar for `TypeVariant`.

Introduces:

```sdml
module example base <https://example.org/v/example> is
end
```

Which replaces the annotation form:

```sdml
module example is
  import xml
  
  @xml:base = <https://example.org/v/example>
end
```

**Version: 0.1.12**

* Fixed highlight issue for annotations with `IdentifierReference` values
* Added field for `TypeVariant` name

**Version: 0.1.11**

* Added a rename to optional value to `TypeVariant`
* Fixed `annotation` and `language_tag` grammar rule conflict

Introduces:

```sdml
module example is

  union Example is
    Variant1
    Variant1 as Alternative
  end
end
```

This allows the use of the same type as a variant more than once if the new identifier is unique within the same `union`.

**Version: 0.1.10**

* Cleaned up queries.

**Version: 0.1.9**

* Simplified the disjoint `UnionDef` type.

**Version: 0.1.8**

* Added a disjoint `UnionDef` type.

**Version: 0.1.7**

* Made field name `sourceCardinality` into `source_cardinality`.
* Made field name `targetCardinality` into `target_cardinality`.
* Added versioning annotations

**Version: 0.1.6**

* Made `_simple_value` into `simple_value` named rule.
* Made `_type_reference` into `type_reference` named rule.
  
# Additional Links

* Node bindings -- [npm.js](https://www.npmjs.com/package/tree-sitter-sdml)
* Rust bindings -- [crates.io](https://crates.io/crates/tree-sitter-sdml)
* Emacs -- [sdml-mode](https://github.com/johnstonskj/emacs-sdml-mode)
* Command-line tool -- [rust-sdml](https://github.com/johnstonskj/rust-sdml)
