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

**Version: 0.1.14**

* Added new rule named `builtin_simple_type` (choice of `string`, `double`, `decimal`, ``integer`, `boolean`, and `iri`):
  * replaced `identifier_reference` with new rule `data_type_base` for `data_type_def`,
  * added to the `type_reference` choice used for the member `target` field.
  
**Version: 0.1.13**

* Added explicit `base` grammar for module rather than using `xml:base` as an attribute.
* Expanded grammar for `Identifier` to allow decimal digits in any position *after* the first.
* Clarified the grammar for `TypeVariant`.

**Version: 0.1.12**

* Fixed highlight issue for annotations with `IdentifierReference` values
* Added field for `TypeVariant` name

**Version: 0.1.11**

* Added a rename to optional value to `TypeVariant`
* Fixed `annotation` and `language_tag` grammar rule conflict

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
