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

## License(s)

The contents of this repository are made available under the following
licenses:

### Apache-2.0

> ```text
> Copyright 2025 Simon Johnston <johnstonskj@gmail.com>
> 
> Licensed under the Apache License, Version 2.0 (the "License");
> you may not use this file except in compliance with the License.
> You may obtain a copy of the License at
> 
>     http://www.apache.org/licenses/LICENSE-2.0
> 
> Unless required by applicable law or agreed to in writing, software
> distributed under the License is distributed on an "AS IS" BASIS,
> WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
> See the License for the specific language governing permissions and
> limitations under the License.
> ```

See the enclosed file [LICENSE-Apache](https://github.com/johnstonskj/rust-flat-error/blob/main/LICENSE-Apache).

### MIT

> ```text
> Copyright 2025 Simon Johnston <johnstonskj@gmail.com>
> 
> Permission is hereby granted, free of charge, to any person obtaining a copy
> of this software and associated documentation files (the “Software”), to deal
> in the Software without restriction, including without limitation the rights to
> use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
> the Software, and to permit persons to whom the Software is furnished to do so,
> subject to the following conditions:
> 
> The above copyright notice and this permission notice shall be included in all
> copies or substantial portions of the Software.
> 
> THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
> INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
> PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
> HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
> OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
> SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
> ```

See the enclosed file [LICENSE-MIT](https://github.com/johnstonskj/rust-flat-error/blob/main/LICENSE-MIT).

### Contributions

Unless you explicitly state otherwise, any contribution intentionally submitted
for inclusion in the work by you, as defined in the Apache-2.0 license, shall
be dual licensed as above, without any additional terms or conditions.

## Changes

See [CHANGES.md](CHANGES.md).

## Additional Links

* Node bindings -- [npm.js](https://www.npmjs.com/package/tree-sitter-sdml)
* Rust bindings -- [crates.io](https://crates.io/crates/tree-sitter-sdml)
* Python bindings -- [PyPi.org](https://pypi.org/project/tree-sitter-sdml/)
* Emacs -- [sdml-mode](https://github.com/johnstonskj/emacs-sdml-mode)
* Command-line tool -- [rust-sdml](https://github.com/johnstonskj/rust-sdml)
