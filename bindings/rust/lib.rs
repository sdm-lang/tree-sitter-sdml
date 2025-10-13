//! This crate provides sdml language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = "";
//! let mut parser = tree_sitter::Parser::new();
//! parser.set_language(&tree_sitter_sdml::LANGUAGE.into()).expect("Error loading sdml grammar");
//! let tree = parser.parse(code, None).unwrap();
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_sdml() -> *const ();
}

/// The tree-sitter [`LanguageFn`][LanguageFn] for this grammar.
///
/// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_sdml) };

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

pub const GRAMMAR_VERSION: &str = env!("CARGO_PKG_VERSION");

/// The syntax highlighting query for this language.
pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");

/// The injections query for this language.
pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");

/// The locals query for this language.
pub const LOCALS_QUERY: &str = include_str!("../../queries/locals.scm");

/// The symbol tagging query for this language.
pub const TAGS_QUERY: &str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    use std::fs;

    pub fn sdml_parser() -> Result<tree_sitter::Parser, tree_sitter::LanguageError> {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&super::LANGUAGE.into())?;
        Ok(parser)
    }

    #[test]
    fn test_can_load_grammar() {
        assert!(sdml_parser().is_ok());
    }

    const MANIFEST_PATH: &str = env!("CARGO_MANIFEST_DIR");
    const TEST_PATH: &str = "/test/corpus/";

    #[test]
    fn test_parse_test_corpus() {
        let mut parser = sdml_parser().expect("could not load grammar");

        for entry in fs::read_dir(format!("{MANIFEST_PATH}{TEST_PATH}")).expect("not a directory?")
        {
            let entry = entry.expect("not a directory entry?");
            let path = entry.path();
            if path.is_file()
                && path
                    .extension()
                    .map(|s| s.to_str())
                    .unwrap_or(Some(""))
                    .unwrap()
                    == "sdm"
            {
                println!("Parsing test file {path:?}...");
                let source = fs::read_to_string(path).expect("couldn't read source file");
                parser
                    .parse(source, None)
                    .expect("Could not parse test file");
            }
        }
    }
}
