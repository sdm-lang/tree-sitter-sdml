# Tree-Sitter grammar for SDML

![SDML Logo Text](https://raw.githubusercontent.com/sdm-lang/.github/main/profile/horizontal-text.svg)

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the Simple Domain Modeling Language (SDML). For more
information on the language, see the [documentation](https://sdml.io/).

## Example

```sdml
module campaign <https://advertising.amazon.com/api-model> is

  import [dc rdfs skos]

  @skos:prefLabel = "Campaign sub-domain"@en
  @skos:version = xsd:decimal(2)

  datatype Name <- string {
    minLength = 5
    maxLength = 25
  }

  datatype Identifier <- opaque string {
    length = 20
  } is
    @dc:description = "An opaque, general, entity identifier."@en
  end

  property CampaignId -> Identifier is
    @skos:prefLabel = [
      "Campaign Identifier"@en
      "Identified de campagne"@fr
    ]
    @dc:description = "The globally unique identifier for a Campaign entity"@en
  end

  structure Tag is
    key -> token
    value -> {0..} rdfs:langString
  end

  entity Campaign is
    identity ref CampaignId

    name -> Name is
      @skos:definition = "the name of the campaign"@en
    end

    tag -> {unordered unique 0..} Tag

    target -> {1..} Target
  end

  entity Target

end
```

## Bindings

The following bindings are built and released along with any version upgrade of
the source version. The tree-sitter tool also generates bindings for C, Go, and
Swift that are not built and released to any repository.

[Node](https://www.npmjs.com/package/tree-sitter-sdml) bindings are published to npmjs and can be installed using the
npm command directly, or by making it a project dependency.

```sh
〉npm install -g tree_sitter_sdml
```

[Python](https://pypi.org/project/tree-sitter-sdml/) bindings are published to PyPI and can be installed using any
standard tool, such as `pip`.

```sh
〉pip3 install tree_sitter_sdml
```

[Rust](https://crates.io/crates/tree-sitter-sdml) bindings are published to crates.io and can be installed via cargo in
the usual manner.

```sh
〉cargo install tree_sitter_sdml
```

## License

This package is released under the Apache License, Version 2.0. See LICENSE file
for details.

## Changes

See [CHANGES.md](CHANGES.md).

## Additional Links

* Node bindings -- [npm.js](https://www.npmjs.com/package/tree-sitter-sdml)
* Rust bindings -- [crates.io](https://crates.io/crates/tree-sitter-sdml)
* Python bindings -- [PyPi.org](https://pypi.org/project/tree-sitter-sdml/)
* Emacs -- [sdml-mode](https://github.com/johnstonskj/emacs-sdml-mode)
* Command-line tool -- [rust-sdml](https://github.com/johnstonskj/rust-sdml)
