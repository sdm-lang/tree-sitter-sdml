# Changes for tree-sitter-sdml

## Version 0.4.15

* Feature:
  * Add set operators `difference` and `disunion` to the grammar
    rule `set_operator`.
  * The grammar rule `metric_event_binding` now allows a list of event
    identifier references.
  * Added step in the make file to create a `grammar.rs` file in the
    Rust binding generated from the tree-sitter `node-types.json` file.
* Refactor:
  * Raising the grammar rule `rename_as_clause` from `module_import` and
    `member_import` into the new rule `single_import`. Actually renamed
    the existing silent rule `_import`.
  * Renamed the silent grammar rule `_rdf_types` to `rdf_types` to allow
    it to be used in highlight/tag queries.
  * Rename the grammar rule `_type_expression_to` to `_type_expression`.
  * Renamed the grammar rule `from_clause` to `import_from_clause` to avoid
    ambiguity.
  * Removed the grammar rule `_module_path_actual` so that the rule
    `module_path_absolute` now uses `module_path_relative` directly.
* Clean-up:
  * Removed unused consts; mostly `ALT2`, etc.
  * Re-organized the order of value rules for readability.
  * Removed comment cruft from `build.rs`.

### New Import grammar

```text
ImportStatement
    ::= ImportFromClause? 'import' ( SingleImport | '[' SingleImport+ ']' )

SingleImport
    ::= ( MemberImport | ModuleImport ) RenameAsClause?

ModuleImport
    ::= Identifer Iri?

MemberImport
    ::= QualifiedIdentifier
```

### New Metric Group grammar

```text
MetricEventBinding
    ::= 'on' ( IdentifierReference | '[' IdentifierReference+ ']' )
```

## Version 0.4.14

* Feature: Added new **`metric`** and **`metric group`** definitions to modules allowing for
  the capture of metrics that leverage the existing event types. These will be
  described in the SDML reference as soon as feasible.
  * Added test cases `metric_empty`, `metric_group_empty`, `metric_group_with_metrics`,
    `metric_used`, `metric_with_annotations`, `metric_with_annotations_and_body`,
    `metric_with_body`, and `metric_with_parameters`.
* Refactor: Reduced the number of function-like definitions by separating the
  main definition from the introductory keyword (**`def`** and **`metric`** today). Also
  made all functions have an optional sentence body and optional annotation-only
  body.
* Refactor: Re-wrote `FromDefinitionClause` and `SourceEntity` to use common
  components and allow the latter to use the `without` option. This *mix-in*
  grammar is described in detail below.
* Feature: Added syntactic sugar for defining new annotation properties. This
  makes the task much easier and without the need for any additional RDF
  knowledge.
  * Added test case `property_def_annotation`.
* Refactor: datatype grammar renaming continues,
  * Rule `_datatype_base` now `datatype_base_type_reference` to match other type
    reference names.
  * Rule `datatype_def_restriction` now `datatype_type_restrictions` for simplicity.
  * Updated test cases.

### New metric grammar

The addition to the grammar for metrics and metric groups is shown below. Note
that this does not include the change to the rule `Definition` to include the new
`MetricDef` and `MetricGroupDef` rules. One nice feature of this grammar is that the
syntax means that a stand-alone metric definition is the same syntax as an
inline metric definition within a group.

```text
MetricDef
    ::= 'metric' FunctionDef

MetricGroupDef
    ::= 'metric' 'group' Identifier MetricEventBinding FromDefinition?
        MetricGroupBody?

MetricEventBinding
    ::= 'on' IdentifierReference

MetricGroupBody
    ::= 'is' Annotation* ( MetricDef | MetricRef )*

MetricRef
    ::= 'ref' IdentifierReference FunctionBody?
```

This does also introduce a new rule `ReservedEvent` which is simply the keyword
`event` much as `ReservedSelf` is the keyword `self`. In this case it uses the keyword
within the scope of the metric body as an immutable value bound to the event
triggering the metric.

### Old/New constraint grammar

The following is the grammar for constraints and environments where an
environment is an optional component of a `FormalConstraint`.

```text
FormalConstraint
    ::= ConstraintEnvironment? 'is' ConstraintSentence 'end'

ConstraintSentence
    ::= ( SimpleSentence 
        | BooleanSentence 
        | ExpressionSentence 
        | QuantifiedSentence 
        | '(' ConstraintSentence ')' )

ConstraintEnvironment
    ::= 'with' FunctionDef+

FunctionDef
    ::= FunctionSignature FunctionBody

FunctionSignature
    ::= 'def' Identifier ParameterList? FunctionType
```

In the new constraint grammar we see that `FormalConstraint` no longer has an
explicit environment, instead a new choice is added to the `ConstraintSentence`
rule to denote a sentence with an environment. This new rule
`SentenceWithEnvironment` places the environment between the keywords `with` and `for`
and then recursively uses the `ConstraintSentence` to denote the actual sentence.
With this, any sentence, at any level, may now include it's own environment.

```text
FormalConstraint
    ::= 'is' ConstraintSentence 'end'

ConstraintSentence
    ::= ( SimpleSentence 
        | BooleanSentence 
        | ExpressionSentence 
        | QuantifiedSentence 
        | '(' ConstraintSentence ')' 
        | SentenceWithEnvironment )

SentenceWithEnvironment
    ::= 'with' KeywordFunctionDef+ 'for' ConstraintSentence 'end'

KeywordFunctionDef
    ::= 'def' FunctionDef

FunctionDef
    ::= FunctionSignature FunctionBody? AnnotationonlyBody?

FunctionSignature
    ::= Identifier ParameterList? FunctionType
```

This has also allowed the removal of the rule `ClassFunctionDef` which was a
mostly-redundant copy of the older `FunctionDef`. The definition of `TypeClassBody`
is therefore considierably simplified.

```text
TypeClassBody
    ::= 'is' Annotation* KeywordFunctionDef* 'end'
```

### New mix-in grammar

The new *mix-in* grammar is intended to replace the following two rules,
`FromDefinitionClause` and `SourceEntity` which are similar but not identical.

``` sdmltext
FromDefinitionClause
    ::= 'from' IdentifierReference 
        ( FromDefinitionWith | FromDefinitionWithout )

FromDefinitionWith
    ::= 'with' ( '_' | ( Identifier | '[' Identifier+ ']' )

FromDefinitionWithout
    ::= 'without' Identifier | '[' Identifier+ ']'

SourceEntity
    ::= 'source' IdentifierReference
        ( 'with' ( Identifier | '[' Identifier+ ']' ) )?
```

The new grammar shown below and based in the notion that in both cases we are
bringing members from another definition into scope within the current one.
There are obviously some additional semantics associated with `source`, but these
aren't important at the grammar level. We define a `MixinClause` as the reference
of the type to copy from and then either the with/without rule to copy members
as listed. Note also that this version also allows renames using the same form
already employed in imports and unions.

```text
MixinClause
    ::= IdentifierReference MixinWithMembers

MixinOptionalClause
    ::= IdentifierReference MixinWithMembers?

MixinMemberChoice
    ::= MixinWithMembers | MixinWithoutMembers
    
MixinWithMembers
    ::= 'with' ( '_' | MixinMemberSequence )

MixinWithoutMembers
    ::= 'without' MixinMemberSequence

MixinMemberSequence
    ::= ( MixinMember | '[' MixinMember+ ']' )

MixinMember
    ::= Identifier RenameAsClause?

RenameAsClause
    ::= 'as' Identifier
```

This allows the redefinition of our original two rules as follows. By requiring
the enclosing rule to determine the preceding keyword we may be able to
accommodate additional examples in the future.

```text
FromDefinitionClause
    ::= 'from' MixinClause

SourceEntity
    ::= 'source' MixinOptionalClause
```

The addition of the `RenameClause` rule is also important as it allows for a
common rename syntax across other cases.

```text
MemberImport
    ::= QualifiedIdentifier RenameAsClause?

ModuleImport
    ::= Identifier Iri? RenameAsClause?

TypeVariant
    ::= IdentifierReference RenameAsClause? AnnotationOnlyBody?
```

## Version 0.4.13

* Feature: Added new `logical_quantifier_neg_existential` rule to the super-type
  `logical_quantifier` which allows for *not exists* quantification.
* Feature: Replaced `set_op_membership` with `set_membership` which is in turn a
  super-type of a renamed `set_op_is_member` and a new `set_op_is_not_member` to
  easily account for *not a member* quantification bindings.
* Refactor: Renamed operator keywords to reflect operator names so `KW_AND` is
  now `KW_LOGICAL_AND`.

### New logical operation/quantifier grammar

```text
LogicalQuantifierNegExistential
    ::= (LogicalOpNegation LogicalQuantifierExistential) | '∄'

SetMembership
    ::= SetOpIsMember | SetOpIsNotMember

SetOpIsMember
    ::= 'in' | '∈'

SetOpIsNotMember
    ::= (LogicalOpNegation SetOpIsMember) | '∉'
```

## Version 0.4.12

This is significant change in the structure of the grammar to clean-up and make
maintenance easier. It pulls out all strings into constants and introduces a set
of functions with more meaningful names for higher-level parser constructs.
Additionally, this grammar uses the `reserved`, `inline`, and `super-types` fields to
do some more of the heavy lifting and while it does introduce a *little*
redundancy in having a keyword constant, a reserved word constant and an entry
in the `reserved` field, it does allow us to manage nested or scoped keywords
correctly in the grammar now.

* Features
  * Grammar rule `line_comment` is now a *super-type* rule and has three
    sub-rules: `comment_aligned` (starts with ';'), `comment_local` (starts
    with ';;'), and `comment_page` (starts with ';;;' or more) that follow
    the ELisp conventions allowing grammar based highlighting and indentation.
  * The set of globally reserved words is now fixed at 14 with additional
    keywords added to scopes as needed.
  * The anonymous grammar rule within `module` after `KW_VERSION` has been
    extracted into the new rule `module_version`.
  * Added new `logical_quantifier`, `logical_quantifier_existential_one` with
    operators `exists!` and `∃!`.
  * Build: bumped minimum Emacs ABI from 13 to 14.
* Potentially Breaking
  * Grammar rule `definition` is now a super-type and so doesn't appear in
    the parse tree, but it is there for queries.
  * All operator grammar rules are now super-types and so don't appear in the
    parse tree, but are is there for queries: `definition`,`inequality_relation`,
    `logical_connective`, `logical_quantifier`, `math_operator`, `restriction_facet`,
    and `set_operator`.
  * The grammar rule `builtin_simple_type` has been renamed simple `builtin_types`.
  * The grammar field `byte` on the rule `binary` has been renamed `element` inline
    with other sequence types.
  * The grammar rules `logical_op_conjunction`, `logical_op_disjunction`,
    `logical_op_exclusive_disjunction`, `logical_op_implication`, and
    `logical_op_biconditional` have been renamed to remove `_op` as these are
    connectives and not operators.
  * The rule `op_equality` is no longer in the parse tree for the rule `equation`
    as there can be no other value.
  * The rule `rdf_types` is no longer in the parse tree for the rule `rdf_def`,
    however each type is a field on the parent so is easily queried as
    `(rdf_type type: (identifier_reference))`.
  * The grammar rule `method_def` has been renamed `class_function_def` for
    consistency.
  * The grammar rule `data_type_def` has been renamed `datatype_def` for
    consistency.
* Fixes
  * Fixed highlight/constraint test as the assertion `tagged_with_foo_builder`
    was missing the operator `forall` in a sequence builder. Additionally, the
    keyword `in` for membership is now an operator.
  * Fixed highlight/dimensions test as it had a stray character breaking the
    JavaScript parser.
* Refactors
  * Moved most regular expressions into the top of the file as constants. This
    includes constructing the numeric expressions from each other explicitly.
  * Moved all keyword strings into constants with `KW_` prefix.
  * Moved all facet name strings into constants with `KWF_` prefix.
  * Moved all built-in type name strings into constants with `KWT_` prefix.
  * Moved all punctuation strings into constants with `P_` prefix.
  * Moved all operator strings into constants with `OP_` prefix.
  * Moved all value name strings into constants with `VALUE_` prefix.
  * Moved all grammar field name strings into constants with `F_` prefix.
  * Created constant arrays for reserved word groupings with `RW_` prefix.
  * Created helper functions for higher-level parser constructs.
    * Generic: `join`, `kw_rule`, `kw_optional_rule`.
    * Lists: `sep1_immediate`, `sep1_immediate_absolute`.
    * Fields: `optional_field`, `kw_field`, `kw_optional_field`.
    * Bracketed: `parameters`, `expression`, `sequence_of`, `sequence_of_many`,
      `sequence_of_many1`.
    * Definitions: `definition_with`, `is_block`, `of_block`,
      `is_body_with_annotations`, `of_body_with_annotations`.
  
## Version 0.4.11

* Update: Minor grammar change, pull out the type parameter restriction argument
  into it's own rule which makes parsing much simpler.

## Version 0.4.10

* Fix: Grammar rule for `type_class_def` changed signifiantly for type parameters.
  * The term *type variable* is replaced by *type parameter* and a type class may
    have zero or more type parameters.
  * A type parameter is a name, introducing a new class within the scope of the
    outer class definition, with an optional restriction expression.
  * A parameter restriction expression may restrict the cardinality of a
    sequence type, and may restrict the class of the parameter to implement one
    or more other classes.

### New type-class grammar

```text
TypeClassDef
    ::= 'class' Identifier TypeParameterList?
        FromDefinitionClause? TYpeClassBody?

TypeParameterList
    ::= '(' TypeParameter+ ')'

TypeParameter
    ::= Identifier ( ('<-' | '←') TypeParameterRestrictionList )?

TypeParameterRestrictionList
    ::= TypeParameterRestriction ( '+' TypeParameterRestriction )*
    
TypeParameterRestriction
    ::= CardinalityReferenceExpression?
        IdentifierReference TypeParameterArgumentList?

TypeParameterArgumentList
    ::= '(' Identifier+ ')'
```

This allows the expression of a number of specific forms required by the SDML
standard library, such as:

| Pattern         | Example                                  | Comments                                                                                     |
|-----------------+------------------------------------------+----------------------------------------------------------------------------------------------|
| Parameterless   | `class Any`                                | No parameters are required for the `Any` class as it makes no reference to any other class.    |
| Mixin Reference | `class Number <- Eq + Ord + Add + Sub + Mul + Div`   | Mixins allow for simple behavior to be described and implemented across differernt classes. |
| Sequence Types  | `class Unique {unique} Eq` | Denotes a class restricted to a sequence of any value that implements `Eq`, allowing the sequence to have the constraint `unique`. |
| Ordered Types  | `class Ordered {ordered} Ord` | Denotes a class restricted to a sequence of any value that implements `Ord`, allowing the sequence to have the constraint `ordered`. |

## Version 0.4.9 (Rust only)

* Build: update `tree-sitter` dependency from 0.24 to 0.25.3.

## Version 0.4.8

* Feature: Add grammar rule to compound definitions to allow copying content
  from another model element allowing a simple *copy-over* extension mechanism.

Changes for new datatype syntax in BNF form:

``` ebnf
FromDefinition
    ::= "from" IdentifierReference 
        "with" ( "_" | Identifier | "[" Identifier+ "]" )

EnumBody
    ::= "is"
        Annotation* FromDefinition? ValueVariant+
        "end"

StructureBody
    ::= "is"
        Annotation* FromDefinition? Member+
        "end"
```

The grammar above includes the definition of some body rules as examples, the
rest (dimension, entity, event, type class, and union) follow the same pattern.

The example below demonstrates the use of this clause to extend the enumeration
`Country` with additional values. Note that in this case the extension copies all
values from the source definition by specifying the wildcard `"_"`.

``` sdml
module example is

  enum Country of
    US
    CA
    MX
  end

  enum ExtendedCountry of

    from Country with _

    UK
    FR
    DE
  end
  
end
```

## Version 0.4.7

* Fix: Grammar for rules `sequence_of_values` and `sequence_of_predicate_values` to
  allow constraints on the empty symbol.
* Fix: Grammar for rules `sequence_of_values` and `sequence_of_predicate_values` to
  allow optional ordering and uniqueness constraints.
* Test: Add tests for above.
* Feat: Add highlighting rules for sequence constraints.

Original Grammar:

``` ebnf
SequenceOfValues
    ::= "∅" | Constraints? "[" Element* "]"

Constraints
    ::= "{" ( Ordering | Uniqueness | Ordering Uniqueness ) "}"
```

New Grammar:

``` ebnf
SequenceOfValues
    ::= Constraints? ( "∅" | ( "[" Element* "]" ) )

Constraints
    ::= "{" ( ( Ordering Uniqueness? ) | ( Ordering? Uniqueness ) ) "}"
```

### Version 0.4.6

* Fix: Rename grammar rule `function_op_by_definition` to
  `_function_op_by_definition`.
* Fix: Rename grammar rule `_type_variable_restriction` to
  `type_variable_restriction`.
  
## Version 0.4.5

* Fix: Make all values in datatype restrictions fields named 'value'.
  * Added two new test cases for fixed/timezone restriction and pattern/sequence
    restriction.

This grammar fix allows grammar processors to use the tree-sitter query
`(datatype_def_restriction (value (_)) )` to select all values from all
restrictions regardless of type.

## Version 0.4.4

The primary aim of this release is the ability to prefix an `import` statement
with a `from` clause indicating a relative or absolute module path to import from.
This is a departure from the current fully flat notion of modules in SDML today,
the from clause assumes that modules exist in some hierarchical structure with
some number of root modules.

Today the SDML library has used underscores to create a namespace-like
structure, this change will allow the library to take advantage of a true
hierarchy. A mapping from known/proposed  library modules to hierarchical forms
is shown in the following table.

| Old Name         | `::` Top | `::` 2nd | `::` 3rd   | `::` 4th |
|------------------|----------|----------|------------|----------|
| `sdml`           | `sdml`   |          |            |          |
| `iso_639_1`      | `std`    | `iso`    | `iso639`   | `part1`  |
| `iso_3166`       |          |          | `iso3166`  |          |
| `iso_4217`       |          |          | `iso4217`  |          |
| `iso_8601`       |          |          | `iso8601`  |          |
| `iso_9362`       |          |          | `iso9362`  |          |
| `iso_17442`      |          |          | `iso17442` |          |
| `rdf`            |          | `w3c`    | `rdf`      |          |
| `rdfs`           |          |          | `rdfs`     |          |
| `owl`            |          |          | `owl`      |          |
| `skos`           |          |          | `skos`     |          |
| `void`           |          |          | `void`     |          |
| `xsd`            |          |          | `xsd`      | `facets` |
| `dc_elements`    |          | `dc`     | `elements` |          |
| `dc`, `dc_terms` |          |          | `terms`    |          |
| `gs1_gln`        |          | `gs1`    | `gln`      |          |
| `gs1_gtin`       |          |          | `gtin`     |          |
|                  |          | `ietf`   | `rfc6838`  |          |
| `un_locode`      |          | `un`     | `locode`   |          |

Example:

``` sdml
module example is

  from ::std::iso import [ iso3166 iso4217 iso8601 ]
  from ::std::gs1 import gtin

end
```

### Detailed Changes

* Feature: add an optional clause with a `from` keyword followed by a *module path*
  at the start of any `import_statement`.
  * A module path is an ordered list of module names separated by the token `::`.
  * An absolute module path starts with a `::` token.
  * The root module path is the `::` token with no following module name.
  * A relative module path starts with a module name.
* This **will** require documentation changes regarding the manner in which the
  module loader and specifically the resolver works.
* This **may** require documentation changes regarding the manner in which a
  module's placement in a folder structure impacts mapping to a module URI.

Changes for new datatype syntax in BNF form:

``` ebnf
ImportStatement
    ::= FromClause? "import" ( Import | "[" Import+ "]" )

FromClause
    ::= "from"
        ( ModulePathAbsolute | ModulePathRelative | ModulePathRootOnly )

ModulePathAbsolute
    ::= ModulePathPart+

ModulePathRelative
    ::= Identifier ModulePathPart*

ModulePathRootOnly
    ::= "::"

ModulePathPart
    ::= "::" Identifier
```

## Version 0.4.3

The primary aim of this release is to clean up the syntax of the formal
constraint language to remove some redundancy and simplify for the upcoming
formatter. For example, as constraints are written as invariants over all
instances of a class the construct `∀ self` to create a quantified sentence over
the set of all instances is extra work and as `self` is an allowed term on it's
own the quantifier can be dropped and simpler sentence constructs used instead.

### Detailed Changes

* Feature: removed the choice of 'self' from the rule `quantified_variable`.
* Feature: a new, simpler, rule named `variable` replaces `named_variable_set` and
  `mapping_variable`.
  * Additionally, both quantified sentences and sequence builders now use
    `variable` as their rule for variable definitions.
* Feature: the vertical bar used in the sequence builder is now a named rule
  `set_op_builder`.
* Removed: an existing ability to have multiple sentences as the body of a
  sequence builder, this did not make sense as-is.

## Version 0.4.2

The primary aim of this release is to introduce a more streamlined syntax for
datatype restrictions than the current use of annotation properties. Also, note
that the `pattern` restriction allows a list of pattern values, allowing complex
patterns to be broken into alternatives.

``` sdml
module example is

  datatype range <- unsignedShort {
    minValue = 1
    maxValue = 10
  }
  
  datatype uuid <- string {
    pattern = [
      "^(?:[[:xdigit:]]{32})$"
      "^(?:[[:xdigit:]]{8}-[[:xdigit:]]{4}-[[:xdigit:]]{4}-[[:xdigit:]]{4}-[[:xdigit:]]{12})$"
      "^(?:\\{[[:xdigit:]]{8}-[[:xdigit:]]{4}-[[:xdigit:]]{4}-[[:xdigit:]]{4}-[[:xdigit:]]{12}\\})$"
      "^(?:\\([[:xdigit:]]{8}-[[:xdigit:]]{4}-[[:xdigit:]]{4}-[[:xdigit:]]{4}-[[:xdigit:]]{12}\\))$"
      "^(?:\\{0x[[:xdigit:]]{8},(?:0x[[:xdigit:]]{4},){2}\\{(?:0x[[:xdigit:]]{2},){7}0x[[:xdigit:]]{2}\\}\\})$"
    ]
  } is
    @skos:prefLabel = "UUID"@en
    @dc:description = "The string form of a UUID, conforming to one of 5 standard patterns."@en
  end
  
end
```

| Facet              | Class    | Datatype                              | Maybe Fixed? |
|--------------------|----------|---------------------------------------|--------------|
| `fractionDigits`   | digits   | `unsigned`                            | Yes          |
| `totalDigits`      | digits   | `unsigned`                            | Yes          |
| `length`           | length   | `unsigned`                            | Yes          |
| `maxLength`        | length   | `unsigned`                            | Yes          |
| `minLength`        | length   | `unsigned`                            | Yes          |
| `pattern`          | pattern  | `string`                              | **No**       |
| `explicitTimezone` | timezone | `required  or prohibited or optional` | Yes          |
| `maxExclusive`     | value    | `simpleValue or valueConstructor`     | Yes          |
| `maxInclusive`     | value    | `simpleValue or valueConstructor`     | Yes          |
| `minExclusive`     | value    | `simpleValue or valueConstructor`     | Yes          |
| `minInclusive`     | value    | `simpleValue or valueConstructor`     | Yes          |

### Detailed changes

* Feature: added new restriction syntax for datatype definitions.
* Feature: added all *valid* datatype names from XML Schema and OWL to the
  `builtin_simple_type` grammar rule. These may now be used without having to
  import the `xsd` module.
* Feature: brought together the notion of function and method into a single rule
  set and simplified.
  * A constant in an environment definition is simply a null-ary function and
    may be defined with a term, replacing the explicit constant rule that
    allowed a predicate value.
* Feature: simplified the syntax for formal constraint environments using
  `with..is` instead of the less obvious `is..in` keywords.
* Feature: added new `rational` builtin datatype from OWL, allowing rational
  constant values.
* Feature: allow the grammar rule `rdf_types` to use the keyword `a`, commonly used
  in Turtle, instead of `type`.
* Feature: (internal) grammar now uses defined rules for as many operators as
  possible to reduce strings in the grammar.

Changes for new datatype syntax in BNF form:

``` ebnf
DatatypeDef
    ::= "datatype" Identifier "<-" "opaque"? IdentifierReference
        DatatypeDefRestriction? AnnotationOnlyBody?

DatatypeDefRestriction
    ::= "{" RestrictionFacet+ "}"

RestrictionFacet
    ::= DigitRestrictionFacet | LengthRestrictionFacet
    | PatternRestrictionFacet | TzRestrictionFacet
    | ValueRestrictionFacet
            
DigitRestrictionFacet
    ::= ("fractionDigits" | "totalDigits")
        "=" "fixed"? unsigned

LengthRestrictionFacet
    ::= ("length" | "maxLength" | "minLength")
         "=" "fixed"? unsigned

PatternRestrictionFacet
    ::= "pattern" "=" ( QuotedString | "[" QuotedString+ "]" )

TzRestrictionFacet
    ::= "explicitTimezone" "=" "fixed"? 
        ("required" | "prohibited" | "optional")

ValueRestrictionFacet
    ::= ("maxExclusive" | "maxInclusive"
        | "minExclusive" | "minInclusive")
        "=" "fixed"? ( SimpleValue | ValueConstructor )

```

Changes for new constraint environment syntax in BNF form:

``` ebnf
FormalConstraint
    ::= ConstraintEnvironment? "is" ConstraintSentence "end"

ConstraintEnvironment
    ::= "with" FunctionDef+
```

Changes for new function definition syntax in BNF form:

``` ebnf
FunctionDef
    ::= FunctionSignature FunctionBody
    
FunctionSignature
    ::= "def" Identifier ( "(" FunctionParameter+ ")" )?
        FunctionTypeReference
        
FunctionBody
    ::= (":=" | "≔") (Term | ConstraintSentence)
```

Update to method definition syntax to reuse function forms in BNF form:

``` ebnf
MethodDef
    ::= FunctionSignature FunctionBody AnnotationOnlyBody?
```

Changes to add all OWL types, and all relevant XSD datatypes, in BNF form:

``` ebnf
BuiltinSimpleType
    ::= OwlBuiltinTypes
    | BuiltinPrimitiveDatatypes
    | DerivedDateDatatypes
    | DerivedNumericDataTypes
    | DerivedStringDatatypes

OwlBuiltinTypes
    ::= "Thing" | "Nothing" | "real" | "rational"

BuiltinPrimitiveDatatypes
    ::= "anyURI" | "iri" | "base64Binary" | "boolean" | "unsigned"
    | "date" | "dateTime"  | "decimal" | "double" | "duration"
    | "float" | "gDay" | "gMonth" | "gMonthDay" | "gYearMonth"
    | "gYear" | "hexBinary" "string" | "time"

DerivedDateDatatypes
    ::= "dateTimeStamp" | "dayTimeDuration"  | "yearMonthDuration"

DerivedNumericDataTypes
    ::= "integer" | "long" | "int" | "shport" | " byte"
    | "nonNegativeInteger" | "positiveInteger" | "unsignedLong"
    | "unsignedInt" | "unsigned" | "unsignedShort" | "unsignedByte"
    | "nonPositiveInteger" | "negativeInteger"

DerivedStringDatatypes
    ::= "normalizedString" | "token" | "language"

```

Changes to add new OWL rational value form in BNF form:

``` ebnf
SimpleValue
    ::= "boolean" | "unsigned" | "integer" | "rational"
    | "decimal" | "double" | "string" | "iri" | "binary"

rational
    ::= ( [+-]? ( "0" | [1-9][0-9]* ) "/" [1-9][0-9]* )
```

## Version 0.4.1

Internal fix release, Rust only.

## Version 0.4.0

The primary aim of this release is to introduce a new definition type, a
*dimension*. This may be seen as a violation of SDML's goal of being technology or
implementation independent however it is a pragmatic decision based on usage
experience. Modeling the data managed by a business in terms of entities solves
many operational purposes but ignores a major purpose of this data -- reporting.

```sdml
module example is

  import [ sales stores xsd ]

  dimension Region is
    ;; define an identifier for this dimension
    identity region -> long

    ;; add members
    name -> string
  end
  
  dimension Location is
    ;; tightly bind this dimension to the Sale entity
    source sales:Sale

    ;; define a hierarchy by noting one or more parent dimensions
    parent region -> Region

    ;; reuse members from the source entity
    store from sales:Sale
    city from sales:Sale

    ;; add additional members not on the source entity
    state -> stores:State
    country -> stores:Country
  end

end
```

### Detailed changes

* Add `dimension_def` to the choice group in `definition`.
* Add new `dimension_def` with name and optional `dimension_body`.
* New `dimension_body` allows for *either* a source clause, or an identity clause.
* New `dimension_body` allows a set of `parent_dimension` clauses before a set of
  `dimension_member` clauses.
* A `parent_dimension` is a simplified name to identifier reference member with
  the keyword `parent`.
* A `dimension_member` is either an existing `member_def`, `property_ref` or the new
  `member_from` clause that allows reuse of members from source entities.

**Breaking Change**: the grammar moves the `source` keyword and identifier reference
from the `event_def` rule to a new `event_body` rule. Old code, note that the source
clause was required even for empty events.

``` sdml
module example is

  entity Thing

  event NewThing source Thing

end
```

New code, now an empty event looks more like other empty definitions, and adding
a source clause requires `is` and `end`.

``` sdml
module example is

  entity Thing
  
  event Empty

  event NewThing is
    source Thing
  end

end

Additionally, this version of the grammar allows module's to rename imports,
both modules and members. This allows then client module to avoid always using
qualified names, and to use short, or more meaningful, names as appropriate.

``` sdml
module example is

  import rentals_billing as billing
  import billing:Invoice as Invoice

end
```

## Version 0.3.4

* Fix missing `byte` nodes in grammar for binary literals.

## Version 0.3.3

* Build: update version of dependent packages `cc` and `tree-sitter`.

## Version 0.3.2

* Feature: change `module`'s *well-formedness rules* to disallow the definitions
  `rdf_def` and `type_class_def` be added to a non-library module.
* Feature: remove the rule `feature_reference` entirely, and it's reference in
  rule `type_reference`.

``` js
type_reference: $ => choice(
    $.unknown_type,
    $.identifier_reference,
    $.builtin_simple_type,
    $.mapping_type
),

```

## Version 0.3.1

* Fix: regular expression for characters inside a string.
  * Added `examples/escaped_strings.sdm` file for basic testing.
  * Added `test/corpus/escaped_strings.sdm` file for more complete testing.

## Version 0.3.0

* Feature: simplified property definitions.
  * Removed notion of role, a `property_def` is singular.
  * Removed "in" keyword, `property_ref` uses "ref".
  * Removed inverse names.

```js
property_def: $ => seq(
    keyword('property'),
    $.member_def
),
```

* Feature: unified single definition of `member`.
  * Changed member, is now *either* `property_ref` or `member_def`.
  * Changed `property_def` to simply be `member_def`.
  * Changed `entity_identity` to be `member`.
  * Expect to add warning for unbounded cardinality for entity identities.

```js
entity_identity: $ => seq(
    keyword('identity'),
    $.member
),

member: $ => choice(
    $.member_def,
    $.property_ref,             
),

member_def: $ => seq(
    field('name', $.identifier),
    $._type_expression_to,
    optional(field('body', $.annotation_only_body))               
),

property_ref: $ => seq(
    keyword('ref'),
    field('property', $.identifier_reference),
),
```

## Version 0.2.14-16

* Feature: simplified form of `rdf_def`.

## Version 0.2.13

* Feature: add `rdf_super_types` optional rule to `rdf_def`.

## Version 0.2.12

* Refactor: simplify the `rdf_thing_def` rule into `rdf_def`.

## Version 0.2.11

* Fix: rename field `uri` to `version_uri` on rule `module_import`.
* Refactor: clean-up test case names to match those in sdml-parse Rust crate.

## Version 0.2.10

* Feature: add version support to modules.
  * Remove `base` keyword.
  * Add optional `version` keyword and string/IRI version information.
  * Add optional IRI after identifier for module imports.

## Version 0.2.8/0.2.9

* Feature: better support for RDF generation.
  * Add direct support for RDF structures and properties rather than using SDML
    structures.
    * see file `examples/rdf_schema.sdm`
  * Remove keyword `"base"`, add new version clause on module definitions.
    * see file `test/corpus/module_empty_with_version.sdm`

## Version 0.2.7

* Remove member group from grammar, can't find a use that isn't better done by
  moving members to a structure of their own.

## Version 0.2.6

* Fix: test case typos.

## Version 0.2.5

* Feature: Inline type variables in type classes.

## Version 0.2.4

* Fix: tidy grammar for type classes.

## Version 0.2.3

* Feature: expand rule `sequence_of_predicate_values` to match `sequence_of_values`
  with value constructor, mapping value, and identifier reference choices.
* Feature: simplify rule `value_variant` to remove the assignment to an unsigned
  value.
* Feature: change rule `feature_reference` to contain the identifier reference,
  update the rule `_type_expression_to` to have a choice of `feature_reference` *or*
  `type_reference`.
* Fix: add field `byte` to rule `binary` to aid in parser and highlighting.

Along with minor changes in highlighting and examples.

## Version 0.2.2

* Feature: add rule `optional` for the operator "?" to allow for optional values.
  Also added to type reference rules.
* Fix: minor updates to type classes:
  * Add: name `parameters` to the rule reference `type_class_parameters` in rule
    `type_class_def`.
  * Rename: rule `type_variable_subtype` to `type_variable_restriction`.
  * Remove: wildcard from top of rule `type_variable_restriction`.
  * Add: ability to have multiple types in a restriction separated by "+".

## Version 0.2.1

This release is primarily to implement *type classes* that allow a better
description of the standard library for constraints. Adding this support
identified some simplifications in functional terms and sequence builders.

``` sdml
module example is

  class Typed(T) is
    def has_type(v -> T) → Type is
      @skos:definition = "Returns the SDML type of the passed value."@en
      @skos:example = "~type_of(rentals:Customer) = sdml:Entity~"
    end
  end

end

```

* Feature: add type classes for managing the constraint language library.
  * Add: rule `type_class_def` and list it as an alternative in `definition`.
  * Add: rule `method_def` and include as member of `type_class_def`.
  * Remove: choice `wildcard` from rule `function_type_reference`, wildcards are
    only allowed on type class parameters.
* Feature: simplify the rule `quantified_sentence` to only have a single
  quantified variable binding.
  * Alter: field `binding` in `quantified_sentence` to remove the repeat.
  * Alter: field `body` from `_quantified_body` to `constraint_sentence`.
  * Rename: rule `quantifier_bound_names` to `quantified_variable` to denote
    singular.
  * Alter: field `source` in `quantified_variable` to use existing `term`.
  * Remove: rules `type_iterator` and `sequence_iterator`.
* Feature: simplify the structure of sequence builder to use `quantified_sentence`
  as body.
  * Alter: field `body` in rule `sequence_builder` from `_variable_binding` to
    `sequence_builder_body`.
  * Remove: rule `_variable_binding`.
  * Add: rule `sequence_builder_body` which is simply a reference to rule
    `quantified_sentence`.
* Feature: add rule `actual_aruments` for use in rules `atomic_sentence` and
  `functional_term`.
* Refactor: rename boolean constants.
  * Rename: `_boolean_true` to `boolean_truth`.
  * Rename: `_boolean_false` to `boolean_falsity`.

## Version 0.2.0

This is a significant refactor intended to simplify the grammar, and reduce the
number of constructs used where the differentiation is not as significant as it
looked previously.

* Refactor: simplify model overall, especially members and features.
  * Refactor: combine by*value and by*reference member types.
    * Remove: rules `member_by_value` and `role_by_value`.
    * Rename: rule `member_by_reference` to `member` and `role_by_reference` to
      `member_role`.
    * Remove: keyword the `ref` from rules `member` and `member_role`.
    * Rename: rule `identity_member` to `entity_identity`.
  * Refactor: combine structured type groups.
    * Rename: rule `structure_body` to `structured_body`.
    * Rename: rule `structure_group` to `member_group`.
    * Move: common parts of structure and entity bodies into common
      `_structured_body_inner` rule.
  * Refactor: move feature from a definition to a member modifier.
    * Remove: rule `feature_set_def`, and update `definition` accordingly.
    * Add: optional keyword `features` into the rule `_type_expression_to`.
* Feature: add new keyword `opaque` to datatype definition.
* Style: Use `:=` throughout for assignment /by definition/.
  * Add: silent rule `_by_definition`.
  * Alter: rules `value_variant`, `function_def`, and `constant_def` to use
    `_by_definition`.
* Style: rename rule `_property_member` to `_property_reference`.

## Version 0.1.42

* Feature: simplified `features` definition to be or/xor only.
  * Replace: separate bodies with `UnionBody`.
  * Add: cardinality now used to determine or/xor.

``` ebnf
FeatureSetDef
    ::= "features" Identifier Cardinality? UnionBody?
```

## Version 0.1.41

* Feature: add support for features from Product Line Engineering.
  * Add new definition rule `feature_set_def` to rule `definition`.
  * Add *and*, *or*, *xor* bodies to  `feature_set_def`.
  * Add basic documentation to book.
* Feature: updates to builtin simple types.
  * Add the new type `unsigned`.
  * Add the new type `binary`.
  * Rename type `iri_reference` to `iri`.

## Version 0.1.40

* Feature: add the Unicode character `↦` to the rule `_has_type` which works better
  for some typesetting.
* Feature: add rule for `inequation` alongside `equation`.
  * Add new rule `inequation` and make it a choice within `simple_sentence`.
  * Add new rules for inequality relations; `not_equal`, `less_than`,
    `less_than_or_equal`, `greater_than`, and `greater_than_or_equal`.
* Refactor: restructure rule `boolean_sentence` into a choice of
  `unary_boolean_sentence` and `binary_boolean_sentence`.
  * Add rule `unary_boolean_sentence` for negation only.
  * Add rule `binary_boolean_sentence` for logical connectives.
  * Add rules for each logical connective keyword/operator symbols.
* Refactor: rename field `variable_binding` to ``binding` in rule `quantieid_sentence`.
* Refactor: use the same rule for empty set in value sequences.
* Refactor: rename rule `_function_type_expression_to` to `_function_type`.
* Refactor: add rules `_has_type` and `_type_restriction` and allow both ASCII and
  Unicode arrows.
  * Add rule `_has_type` for values `*>` and `→`.
  * Add rule `_type_restriction` for values `<*` and `←`.
* Fix: rules for new shared bindings had confusing names.
  * Add rule `quantified_variable_binding`.
  * Rename rule `quantifier_binding` to `quantifier_bound_names`.
* Docs: add appendix with details of Unicode usage.

## Version 0.1.39

* Feature: allow multiple bindings at the head of quantified sentences.
* Feature: made progress on local scopes in highlighting.
  * Rename rule `_constant_def` to `constant_def`.
  * To*do: currently references are not picking up their definition formatting.
* Refactor: rename rule `name_path` to `function_composition`.
* Refactor: combine components of the two rules `quantified_sentence` and
  `sequence_builder`.
  * Add new shared rule `quantifier_binding` (along with `_bound_name_set`) now used
    in both sentence and builder.
  * Add the ability to have more than one name in a binding.
  * Add the ability for sequence builders to have more than one quantified
    binding.
  * Change the field `expression` into a field named `body` of type
    `constraint_sentence`.
  * Remove rules `expression` and `conjunctive_expression`.
* Style: change the order of choices in rule `predicate_value` to match `value` and
  corresponding sequences.

## Version 0.1.38

* Feature: Update naming for iterators to make them consistent.
  * Rename rule `iterator_target` to `iterator_source`.
  * Rename field `from` in `type_iterator` to `source`.
  * Rename field `from` in `sequence_iterator` to `source`.

## Version 0.1.37

* Feature: update rule `function_cardinality_expression` to allow sequence
  constraints.
  * Rename rule `any_type` to `wildcard`.
  * Remove rule `any_cardinality` and replace with `wildcard`.
* Feature: rename lists to sequences.
  * Rename rule `list_of_predicate_values` to `sequence_of_predicate_values`.
  * Rename rule `list_of_values` to `sequence_of_values`.
* Feature: make rule `property_role` private as `_property_role`.
* Feature: allow sequence constraints on sequence values.
  * Add rule `_sequence_value_constraints`.
  * Add optional `_sequence_value_constraints` to rule
    `sequence_of_predicate_values`.
  * Add optional `_sequence_value_constraints` to rule `sequence_of_values`.

## Version 0.1.36

* Feature: alter the rule `sequence_comprehension` to be more flexible.
  * Rename rule `sequence_comprehension` to  `sequence_builder`.
  * Rename rule `returned_value` to `variables` and re-write as a choice of:
  * Add rule `tuple_variable` to return distinct variables.
  * Add rule `sequence_variable` to return distinct variables as a sequence.
  * Add rule `mapping_variable` to return two variables as a mapping.

## Version 0.1.35

* Feature: alter the rule `_property_member` to allow property names to be
  `identifier_reference`.
  * New interpretation, field `name` in a member will be the name of a role.
  * Renamed keyword `in`, not `as`.
  * Renamed field `role` to `property` and made it's type `identifier_reference`.

## Version 0.1.34

* Feature: update property definitions to look more like members.
  * Update rule `property_role` to be a choice of three new rules.
  * Add rule `identity_role` which is a subset of `identity_member`.
  * Add rule `role_by_value` which is a subset of `member_by_value`.
  * Add rule `role_by_reference` which is a subset of `member_by_reference`.

## Version 0.1.33

* Feature: renamed quantifier binding targets to be more consistent.
  * Rename rule `binding_target` to `iterator_target`.
  * Rename rule `binding_type_reference` to `type_iterator` and field name `from_type`
    to `from`.
  * Rename rule `binding_seq_iterator` to `sequence_iterator` and field name
    `from_sequence` to `from`.
* Feature: simplified the rule `environment_definition` and made naming more
  consistent.
  * Remove optional `signature` field
  * Remove assignment operators
  * Rename field name `rhs` to `body` and change to a choice of `function_def` or
    `_value_def`.
  * Add rule `function_def` to hold the signature and operators removed from the
    environment definition.
  * Rename rule `fn_parameter` to `function_parameter`.
  * Rename rule `_fn_type` to `_function_type_expression_to`.
  * Add rules `function_cardinality_expression` and `any_cardinality` to capture
    cardinality or wildcard.
  * Add rule `function_type_reference` to allow wildcards.
* Feature: update queries `highlights`, `locals`, and `tags` for all changes above.
* Docs: update BNF syntax and diagrams for all changes above.
  
## Version 0.1.32

* Feature: update environment definition sequence types to use the same syntax
  as member type and cardinality.

## Version 0.1.31

* Feature: update highlighting queries for constraints with support for locals.
* Feature: add a `locals.scm` file with scopes for formal constraints.
* Feature: add `∅` (empty set) as a synonym for `[]` in constraints.
* Fix: update the mapping value test case to use domain/range field names.

## Version 0.1.30

* Feature (minor): added field names for the domain and range of mapping types
  and values.

## Version 0.1.29

* Fix: an apparent regression, the value for a constructor changed from
  `simple_value` to `value`. This changes it back.

## Version 0.1.28

* Feature: add a mapping type and corresponding value syntax.

## Version 0.1.27

* Feature: add *ordering* and *uniqueness* constraints into the cardinality
  expression. Used to constrain the sequence type of a member.

## Version 0.1.26

* Feature: applied same change as 0.1.25 but for property roles as well.

## Version 0.1.25

* Feature: changed grammar for reference members:
  * The production `source_cardinality` has been removed.
  * The production `member_inverse_name` has been added.

## Version 0.1.24

* Feature: constraint grammar changes
  * Add a *language-tag* to informal constraints.
  * Add a *wildcard type* for the constraint language.

## Version 0.1.23

* Feature: add highlighting test for constraints, had to tweak a few things.

## Version 0.1.22

* Feature: clarify rules and associated meaning.
  * Rename the grammar rule `type_definition` to `definition` to address the fact
    that property definitions aren't types.
  * Rename the grammar rule `enum_variant` to `value_variant` to align with
    `type_variant` on unions.

## Version 0.1.21

* Feature: add support for sequence builder support(set builder) syntax.
* Fix: highlighting/indent/fold updated for constraints.
* Style: a number of cosmetic changes to formal constraints.

## Version 0.1.19/0.1.20

* Fix: minor change to add a field name to the `..` range operator.

## Version 0.1.18

* Feature: added a constraint assertion construct. This allows for specific
  constraints to be documented for any model element.
  * The grammar rule `annotation` has been renamed `annotation_property`
  * The grammar rule `constraint` has been added.
  * A new grammar rule named `annotation` is defined as a choice of
    `annotation_property` or `constraint`.
  * This allows the use of the old rule to be subsumed by the new definition.
* Feature: constraints may now be written in informal unstructured fashion or an
  embedded formalism.
  * The informal representation is simply a string.
  * The formal representation is a syntax that maps to a subset of [ISO/IEC
    24707:2018](https://www.iso.org/standard/66249.html) Common Logic.
* Docs: more documentation added on the RDF mapping and the domain modeling
  process.

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

## Version 0.1.17

* Fixed: highlighting for properties.

## Version 0.1.16

* Feature: Adjusted property grammar.
* Docs: Started on property documentation.

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

## Version 0.1.15

* Feature: Added new structure to the grammar to allow data-dictionary style
  reusable property definitions.

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

## Version 0.1.14

* Added new rule named `builtin_simple_type` (choice of `string`, `double`, `decimal`,
  `integer`, `boolean`, and `iri`):
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

Where the keywords `string` and `integer` will be expanded into the qualified
identifiers `sdml:string` and `sdml:integer` respectively.

## Version 0.1.13

* Added explicit `base` grammar for module rather than using `xml:base` as an
  attribute.
* Expanded grammar for `Identifier` to allow decimal digits in any position *after*
  the first.
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

## Version 0.1.12

* Fixed highlight issue for annotations with `IdentifierReference` values
* Added field for `TypeVariant` name

## Version 0.1.11

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

This allows the use of the same type as a variant more than once if the new
identifier is unique within the same `union`.

## Version 0.1.10

* Cleaned up queries.

## Version 0.1.9

* Simplified the disjoint `UnionDef` type.

## Version 0.1.8

* Added a disjoint `UnionDef` type.

## Version 0.1.7

* Made field name `sourceCardinality` into `source_cardinality`.
* Made field name `targetCardinality` into `target_cardinality`.
* Added versioning annotations

## Version 0.1.6

* Made `_simple_value` into `simple_value` named rule.
* Made `_type_reference` into `type_reference` named rule.
