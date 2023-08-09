# tree-sitter-sdml

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the Simple Domain Modeling Language (SDML).
For more information on the language, see the [documentation](https://sdml.io/).

# Example

``` sdml
module Campaign is

  import [xsd skos xml:base dc]

  @xml:base = <https://advertising.amazon.com/api-model>

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
    identity campaignId -> CampaignId

    name -> Name is
      @skos:definition = ""
    end

    tag -> {0..} Tag

    ref target {0..1} -> {0..} Target
  end

  entity Target

end
```

# Changes

**Version: 0.1.30**

* Minor: Added field names for the domain and range of mapping types and values.

**Version: 0.1.29**

* Fixed an apparent regression, the value for a constructor changed from `simple_value` to `value`. This changes it back.

**Version: 0.1.28**

* Added a mapping type and corresponding value syntax.

**Version: 0.1.27**

* Added ordering and uniqueness constraints into the cardinality expression. Used to constrain the sequence type of a
  member.

**Version: 0.1.26**

* Applied same change as 0.1.25 but for property roles as well.

**Version: 0.1.25**

* Changed grammar for reference members:
  * The production `source_cardinality` has been removed.
  * The production `member_inverse_name` has been added.

**Version: 0.1.24**

* Added a language-tag to informal constraints.
* Implemented a wildcard type for the constraint language.

**Version: 0.1.23**

* Added highlighting test for constraints, had to tweak a few things.

**Version: 0.1.22**

* Renamed the grammar rule `type_definition` to `definition` to address the fact that property definitions aren't types.
* Renamed the grammar rule `enum_variant` to `value_variant` to align with `type_variant` on unions.

**Version: 0.1.21**

* Fixed highlighting/indent/fold for constraints.
* Added sequence builder support.
* A number of cosmetic changes to formal constraints.

**Version: 0.1.19/0.1.20**

* Minor change to add a field name to the '..' range operator.

**Version: 0.1.18**

* Added a constraint assertion construct. This allows for specific constraints to be documented for any model element.
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
