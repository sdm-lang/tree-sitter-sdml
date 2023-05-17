# tree-sitter-sdml

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the [Simple Domain Modeling Language](docs/sdml.org) (SDML).

Example:

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

Published Bindings:

* [npm.js](https://www.npmjs.com/package/tree-sitter-sdml)
* [crates.io](https://crates.io/crates/tree-sitter-sdml)

Editor Support:

* Emacs [sdml-mode](https://github.com/johnstonskj/emacs-sdml-mode)
