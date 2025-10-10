// =================================================================================================
//
// Project:    tree-sitter-sdml
// Author:     Simon Johnston <johntonskj@gmail.com>
// Version:    0.4.14
// Repository: https://github.com/johnstonskj/tree-sitter-sdml
// License:    Apache 2.0 (see LICENSE file)
// Copyright:  Copyright (c) 2023 Simon Johnston
//
// =================================================================================================
//
//         ___          _____          ___
//        /  /\        /  /::\        /__/\
//       /  /:/_      /  /:/\:\      |  |::\
//      /  /:/ /\    /  /:/  \:\     |  |:|:\    ___     ___
//     /  /:/ /::\  /__/:/ \__\:|  __|__|:|\:\  /__/\   /  /\
//    /__/:/ /:/\:\ \  \:\ /  /:/ /__/::::| \:\ \  \:\ /  /:/
//    \  \:\/:/~/:/  \  \:\  /:/  \  \:\~~\__\/  \  \:\  /:/
//     \  \::/ /:/    \  \:\/:/    \  \:\         \  \:\/:/
//      \__\/ /:/      \  \::/      \  \:\         \  \::/
//        /__/:/        \__\/        \  \:\         \__\/
//        \__\/          Domain       \__\/          Language
//         Simple                      Modeling
//
// =================================================================================================

// Well-Formedness Rules
//
// WFR:absolute_uri query
//   => `query` *must* be an absolute IRI.
//
// WFR:string_not_empty query
//   => `query` *must* not be an empty or spaces-only string.
//
// WFR:unique_sequence query
//   => The sequence `query` *should* be `{unique}`.
//
// WFR:type_mismatch query expected
//   => The definition identified by `query` *must* be of kind `expected`.
//
// =================================================================================================
// Rule helper functions
// =================================================================================================

function join(left_rule, separator, right_rule) {
    return seq(
        left_rule,
        token.immediate(separator),
        right_rule
    );
}

function sep1_immediate(separator, rule) {
    return seq(
        rule,
        repeat(
            seq(
                token.immediate(separator),
                rule
            )
        )
    );
}

function sep1_immediate_absolute(separator, rule) {
    return seq(
        separator,
        sep1_immediate(separator, rule)
    );
}

function optional_field(name, rule) {
    return optional(field(name, rule));
}

function kw_field(keyword, name, rule) {
    return kw_rule(keyword, field(name, rule));
}

function kw_optional_field(keyword, name, rule) {
    return kw_rule(keyword, optional_field(name, rule));
}

function kw_rule(keyword, rule) {
    return seq(keyword, rule);
}

function kw_optional_rule(keyword, rule) {
    return kw_rule(keyword, optional(rule));
}

function _bracketed(start, rule, end) {
    return seq(start, rule, end);
}

function parameters(rule) {
    return _bracketed(P_PARAMS_START, rule, P_PARAMS_END);
}

function expression(rule) {
    return _bracketed(P_PARAMS_START, rule, P_PARAMS_END);
}

function sequence_of(rule) {
    return _bracketed(P_SEQ_START, rule, P_SEQ_END);
}

function sequence_of_many(rule) {
    return sequence_of(repeat(rule));
}

function sequence_of_many1(rule) {
    return sequence_of(repeat1(rule));
}

function restriction(rule) {
    return _bracketed(P_RESTRICT_START, rule, P_RESTRICT_END);
}

function definition_with($, keyword, header, body) {
    return kw_rule(
        keyword,
        seq(
            field(F_NAME, $.identifier),
            header,
            optional_field(F_BODY, body)
        )
    );
}

function _block(start, rule) {
    return seq(start, rule, KW_END);
}

function is_block(rule) {
    return _block(KW_IS, rule);
}

function of_block(rule) {
    return _block(KW_OF, rule);
}

function is_body_with_annotations($, content) {
    return is_block(
        seq(
            repeat($.annotation),
            content
        )
    );
}

function of_body_with_annotations($, content) {
    return of_block(
        seq(
            repeat($.annotation),
            content
        )
    );
}

// =================================================================================================
// Lexer Regular Expressions
// =================================================================================================

// Should we include the ability to define primes?
// Add to end ['′]* so that they *must* only occur in that position, and we may choose to denote an
// equivalence vs. equality relationship between identifiers?
//   foo = foo′ ⇒ false
//   foo ≡ foo′ ⇒ true
const IDENTIFIER              = /[\p{Lu}\p{Ll}][\p{Lu}\p{Ll}\p{Nd}]*(_+[\p{Lu}\p{Ll}\p{Nd}]+)*/;

// language: a two-letter language code from ISO 639-1 or a three-letter code from ISO 639-2
//     4-char: reserved
//     5-8 char: registered language subtag
// extended: zero to 3 selected 3-char ISO 639 codes
// Script: ISO 15924 code in title case
// region: either 2 character ISO 3166-1 code or 3 digit UN M.49 code
// this type does not support extensions or private-use components.
const STRING_LANG_TAG         = /@[a-z]{2,8}(-[A-Z]{3}){0,3}(-[A-Z][a-z]{3})?(-([A-Z]{2}|[0-9]{3}))?/;

const CONTROLLED_LANG_TAG     = /@[a-z]{2,3}(-[A-Z][A-Za-z]{1,9})?/;

// Standard, printable, characters
const CHAR_PRINTABLE          = /[^\x00-\x08\x0B-\x1F\x7F\\\"]/;

// Single character escapes
const CHAR_SINGLE_ESC         = /\\[\"\\\/abefnrtv]/;

// Unicode escape codes
const CHAR_UNICODE_ESC        = /\\u\{[0-9a-fA-F]{2,6}\}/;

const NUM_SIGN_STR            = '[+\\-]?';
const NUM_UNSIGNED_NOZERO_STR = '[1-9][0-9]*';
const NUM_UNSIGNED_STR        = '(0|' + NUM_UNSIGNED_NOZERO_STR + ')';
const NUM_INTEGER_STR         = NUM_SIGN_STR + NUM_UNSIGNED_STR;
const NUM_RATIONAL_STR        = NUM_INTEGER_STR + '[\\/⁄](' + NUM_UNSIGNED_NOZERO_STR + ')';
const NUM_DECIMAL_STR         = NUM_INTEGER_STR + '(\\.[0-9]+)';
const NUM_DOUBLE_STR          = NUM_DECIMAL_STR + '[eE]' + NUM_INTEGER_STR;

const NUM_UNSIGNED            = RegExp(NUM_UNSIGNED_STR);
const NUM_INTEGER             = RegExp(NUM_INTEGER_STR);
const NUM_RATIONAL            = RegExp(NUM_RATIONAL_STR);
const NUM_DECIMAL             = RegExp(NUM_DECIMAL_STR);
const NUM_DOUBLE              = RegExp(NUM_DOUBLE_STR);

const NUM_BYTE_HEX            = /[0-9A-Fa-f]{2}/;

// =================================================================================================
// Lexer Constant Strings
// =================================================================================================

const KW_ARITH_MODULO         = 'mod';
const KW_AS                   = 'as';
const KW_ASSERT               = 'assert';
const KW_BICONDITIONAL        = 'iff';
const KW_CLASS                = 'class';
const KW_DATATYPE             = 'datatype';
const KW_DEF                  = 'def';
const KW_DIMENSION            = 'dimension';
const KW_END                  = 'end';
const KW_ENTITY               = 'entity';
const KW_ENUM                 = 'enum';
const KW_EVENT                = 'event';
const KW_EXISTENTIAL          = 'exists';
const KW_EXISTENTIAL_1        = 'exists!';
const KW_FROM                 = 'from';
const KW_GROUP                = 'group';
const KW_IDENTITY             = 'identity';
const KW_IMPLICATION          = 'implies';
const KW_IMPORT               = 'import';
const KW_FOR                  = 'for';
const KW_IS                   = 'is';
const KW_LOGICAL_AND          = 'and';
const KW_LOGICAL_OR           = 'or';
const KW_LOGICAL_XOR          = 'xor';
const KW_MODULE               = 'module';
const KW_METRIC               = 'metric';
const KW_NEGATION             = 'not';
const KW_NONUNIQUE            = 'nonunique';
const KW_OF                   = 'of';
const KW_ON                   = 'on';
const KW_OPAQUE               = 'opaque';
const KW_ORDERED              = 'ordered';
const KW_PARENT               = 'parent';
const KW_PROPERTY             = 'property';
const KW_RDF                  = 'rdf';
const KW_RDF_A                = 'a';
const KW_RDF_TYPE             = 'type';
const KW_REF                  = 'ref';
const KW_SELF                 = 'self';
const KW_SET_COMPLEMENT       = 'complement';
const KW_SET_INTERSECTION     = 'intersects';
const KW_SET_MEMBERSHIP       = 'in';
const KW_SET_PRODUCT          = 'product';
const KW_SET_SUBSET           = 'subset';
const KW_SET_SUBSETEQ         = 'subseteq';
const KW_SET_SUPSET           = 'supset';
const KW_SET_SUPSETEQ         = 'supseteq';
const KW_SET_UNION            = 'union';
const KW_SOURCE               = 'source';
const KW_STRUCTURE            = 'structure';
const KW_UNION                = 'union';
const KW_UNIQUE               = 'unique';
const KW_UNIVERSAL            = 'forall';
const KW_UNKNOWN              = 'unknown';
const KW_UNORDERED            = 'unordered';
const KW_VERSION              = 'version';
const KW_WITH                 = 'with';
const KW_WITHOUT              = 'without';

// Pseudo-Keywords for XSD datatype facets
const KWF_EXPLICIT_TIMEZONE   = 'explicitTimezone';
const KWF_FIXED               = 'fixed';
const KWF_FRACTION_DIGITS     = 'fractionDigits';
const KWF_LENGTH              = 'length';
const KWF_MAX_EXCLUSIVE       = 'maxExclusive';
const KWF_MAX_INCLUSIVE       = 'maxInclusive';
const KWF_MAX_LENGTH          = 'maxLength';
const KWF_MIN_EXCLUSIVE       = 'minExclusive';
const KWF_MIN_INCLUSIVE       = 'minInclusive';
const KWF_MIN_LENGTH          = 'minLength';
const KWF_PATTERN             = 'pattern';
const KWF_TOTAL_DIGITS        = 'totalDigits';
const KWF_TZ_OPTIONAL         = 'optional';
const KWF_TZ_PROHIBITED       = 'prohibited';
const KWF_TZ_REQUIRED         = 'required';

// Pseudo-Keywords for builtin type names
const KWT_ANY_URI             = 'anyURI';
const KWT_BASE64_BINARY       = 'base64Binary';
const KWT_BINARY              = 'binary';
const KWT_BOOLEAN             = 'boolean';
const KWT_BYTE                = 'byte';
const KWT_DATE                = 'date';
const KWT_DATE_TIME           = 'dateTime';
const KWT_DATE_TIME_STAMP     = 'dateTimeStamp';
const KWT_DAY_TIME_DURATION   = 'dayTimeDuration';
const KWT_DECIMAL             = 'decimal';
const KWT_DOUBLE              = 'double';
const KWT_DURATION            = 'duration';
const KWT_FLOAT               = 'float';
const KWT_G_DAY               = 'gDay';
const KWT_G_MONTH             = 'gMonth';
const KWT_G_MONTH_DAY         = 'gMonthDay';
const KWT_G_YEAR              = 'gYear';
const KWT_G_YEAR_MONTH        = 'gYearMonth';
const KWT_HEX_BINARY          = 'hexBinary';
const KWT_INT                 = 'int';
const KWT_INTEGER             = 'integer';
const KWT_IRI                 = 'iri';
const KWT_LANGUAGE            = 'language';
const KWT_LONG                = 'long';
const KWT_NEGATIVE_INTEGER    = 'negativeInteger';
const KWT_NON_NEGATIVE_INTEGER = 'nonNegativeInteger';
const KWT_NON_POSITIVE_INTEGER = 'nonPositiveInteger';
const KWT_NORMALIZED_STRING   = 'normalizedString';
const KWT_NOTHING             = 'Nothing';
const KWT_POSITIVE_INTEGER    = 'positiveInteger';
const KWT_RATIONAL            = 'rational';
const KWT_REAL                = 'real';
const KWT_SHORT               = 'short';
const KWT_STRING              = 'string';
const KWT_THING               = 'Thing';
const KWT_TIME                = 'time';
const KWT_TOKEN               = 'token';
const KWT_UNSIGNED            = 'unsigned';
const KWT_UNSIGNED_BYTE       = 'unsignedByte';
const KWT_UNSIGNED_INT        = 'unsignedInt';
const KWT_UNSIGNED_LONG       = 'unsignedLong';
const KWT_UNSIGNED_SHORT      = 'unsignedShort';
const KWT_YEAR_MONTH_DURATION = 'yearMonthDuration';

const P_ANNOTATE_PRE          = '@';
const P_LANGTAG_PRE           = '@';
const P_PARAMS_END            = ')';
const P_PARAMS_START          = '(';
const P_EXPR_END              = ')';
const P_EXPR_START            = '(';
const P_PATH_SEP              = '::';
const P_QID_SEP               = ':';
const P_QSENTENCE_SEP         = ',';
const P_RESTRICT_END          = '}';
const P_RESTRICT_START        = '{';
const P_SEQ_END               = ']';
const P_SEQ_START             = '[';
const P_SEQ_BUILD_END         = '}';
const P_SEQ_BUILD_START       = '{';
const P_DOUBLE_QUOTE          = '"';
const P_IRI_END               = '>';
const P_IRI_START             = '<';
const P_BINARY_END            = ']';
const P_BINARY_START          = '#[';
const P_SEQ_BUILD_SEP         = '|'; // ‘Such that’ marker in set-builder notation

const OP_ARITH_ADD            = '+';
const OP_ARITH_DIVIDE         = '/';
const OP_ARITH_DIVIDE_ALT     = '÷';
const OP_ARITH_MODULO         = '%';
const OP_ARITH_MULTIPLY       = '*';
const OP_ARITH_MULTIPLY_ALT   = '×';
const OP_ARITH_MULTIPLY_ALT2  = '⋅';
const OP_ARITH_MULTIPLY_ALT3  = '✕';
const OP_ARITH_MULTIPLY_ALT4  = '⁢';
const OP_ARITH_SUBTRACT       = '-';
const OP_ASSIGNMENT           = "=";
const OP_BICONDITIONAL        = '<==>';
const OP_BICONDITIONAL_ALT    = '⇔';
const OP_EQUATION             = OP_ASSIGNMENT;
const OP_EXISTENTIAL_ALT      = '∃';
const OP_EXISTENTIAL_1_ALT    = '∃!';
const OP_NEG_EXISTENTIAL_ALT  = '∄';
const OP_FN_COMPOSITION       = '.';
const OP_FN_COMPOSITION_ALT   = '∘';
const OP_FN_DEFINITION        = ':=';
const OP_FN_DEFINITION_ALT    = '≔';
const OP_IMPLICATION          = '==>';
const OP_IMPLICATION_ALT      = '⇒';
const OP_INEQUAL_GT           = '>';
const OP_INEQUAL_GTEQ         = '>=';
const OP_INEQUAL_GTEQ_ALT     = '≥';
const OP_INEQUAL_LT           = '<';
const OP_INEQUAL_LTEQ         = '<=';
const OP_INEQUAL_LTEQ_ALT     = '≤';
const OP_INEQUAL_NE           = '/=';
const OP_INEQUAL_NE_ALT       = '≠';
const OP_LOGICAL_AND_ALT      = '∧';
const OP_LOGICAL_OR_ALT       = '∨';
const OP_LOGICAL_XOR_ALT      = '⊻';
const OP_LOGICAL_XOR_ALT2     = '⊕';
const OP_NEGATION_ALT         = '¬';
const OP_RANGE                = '..';
const OP_RANGE_ALT            = '⋯';
const OP_SET_COMPLEMENT_ALT   = '∖';
const OP_SET_INTERSECTION_ALT = '∩';
const OP_SET_MEMBERSHIP_ALT   = '∈';
const OP_SET_NOT_MEMBERSHIP_ALT = '∉';
const OP_SET_PRODUCT_ALT      = '⨉';
const OP_SET_PRODUCT_ALT2     = '∏';
const OP_SET_SUBSETEQ_ALT     = '⊆';
const OP_SET_SUBSET_ALT       = '⊂';
const OP_SET_SUPSETEQ_ALT     = '⊇';
const OP_SET_SUPSET_ALT       = '⊃';
const OP_SET_UNION_ALT        = '∪';
const OP_TY_COMBINES          = '+';
const OP_TY_HAS_TYPE          = '->';
const OP_TY_HAS_TYPE_ALT      = '→';
const OP_TY_RESTRICT          = '<-';
const OP_TY_RESTRICT_ALT      = '←';
const OP_UNIVERSAL_ALT         = '∀';

const WILDCARD                = '_';

const VALUE_FALSE             = 'false';
const VALUE_FALSE_ALT         = '⊥';
const VALUE_TRUE              = 'true';
const VALUE_TRUE_ALT          = '⊤';

const VALUE_EMPTY             = '∅';

// =================================================================================================
// Grammar field names, internal
// =================================================================================================

const F_ARGUMENT              = 'argument';
const F_BASE                  = 'base';
const F_BINDING               = 'binding';
const F_BODY                  = 'body';
const F_CARDINALITY           = 'cardinality';
const F_CLASS                 = 'class';
const F_DOMAIN                = 'domain';
const F_ELEMENT               = 'element';
const F_EMPTY                 = 'empty';
const F_ENTITY                = 'entity';
const F_ENVIRONMENT           = 'environment';
const F_EVENT                 = 'event';
const F_FACET                 = 'facet';
const F_FROM                  = 'from';
const F_FUNCTION              = 'function';
const F_IDENTITY              = 'identity';
const F_IS_FIXED              = 'is_fixed';
const F_LANGUAGE              = 'language';
const F_LHS                   = 'lhs';
const F_MAX                   = 'max';
const F_MEMBER                = 'member';
const F_MIN                   = 'min';
const F_MIXIN                 = 'mixin';
const F_MODULE                = 'module';
const F_NAME                  = 'name';
const F_OPAQUE                = 'opaque';
const F_OPERATOR              = 'operator';
const F_ORDERING              = 'ordering';
const F_PARAMETER             = 'parameter';
const F_PARENT                = 'parent';
const F_PREDICATE             = 'predicate';
const F_PROPERTY              = 'property';
const F_QUANTIFIER            = 'quantifier';
const F_RANGE                 = 'range';
const F_REFERENT              = 'referent';
const F_RELATION              = 'relation';
const F_RENAME                = 'rename';
const F_RESTRICTION           = 'restriction';
const F_RHS                   = 'rhs';
const F_SEGMENT               = 'segment';
const F_SIGNATURE             = 'signature';
const F_SOURCE                = 'source';
const F_SUBJECT               = 'subject';
const F_TARGET                = 'target';
const F_TYPE                  = 'type';
const F_UNIQUENESS            = 'uniqueness';
const F_VALUE                 = 'value';
const F_VARIABLE              = 'variable';
const F_VERSION_INFO          = 'version_info';
const F_VERSION_URI           = 'version_uri';
const F_WILDCARD              = 'wildcard';

// =================================================================================================
// Reserved Word Groupings
// =================================================================================================

const RW_GLOBAL = [
    KW_AS,
    KW_ASSERT,
    KW_DATATYPE,
    KW_DIMENSION,
    KW_END,
    KW_FROM,
    KW_IMPORT,
    KW_IS,
    KW_METRIC,
    KW_MODULE,
    KW_OF,
    KW_PROPERTY,
    KW_RDF,
    KW_STRUCTURE,
    KW_CLASS,
    KW_UNION,
    KW_UNKNOWN
];

const RW_MIXIN_CLAUSE = [
    KW_WITH,
    KW_WITHOUT
];

const RW_DEFN_FROM = [
    ...RW_MIXIN_CLAUSE,
    KW_FROM
];

const RW_SOURCE_ENTITY = [
    ...RW_MIXIN_CLAUSE,
    KW_SOURCE
];

const RW_BUILTIN_TYPES = [
    // Classes from OWL
    KWT_THING,
    KWT_NOTHING,
    // Datatypes from OWL
    KWT_REAL,
    KWT_RATIONAL,
    // XML Schema 1.1 part 2, datatypes:
    //   Primitive datatypes
    KWT_ANY_URI,
    KWT_BASE64_BINARY,
    KWT_BOOLEAN,
    KWT_DATE,
    KWT_DATE_TIME,
    KWT_DECIMAL,
    KWT_DOUBLE,
    KWT_DURATION,
    KWT_FLOAT,
    KWT_G_DAY,
    KWT_G_MONTH,
    KWT_G_MONTH_DAY,
    KWT_G_YEAR_MONTH,
    KWT_G_YEAR,
    KWT_HEX_BINARY,
    KWT_STRING,
    KWT_TIME,
    //   Derived date and time datatypes
    KWT_DATE_TIME_STAMP,
    KWT_DAY_TIME_DURATION,
    KWT_YEAR_MONTH_DURATION,
    //   Derived numeric datatypes
    KWT_INTEGER,
    KWT_LONG,
    KWT_INT,
    KWT_SHORT,
    KWT_BYTE,
    KWT_NON_NEGATIVE_INTEGER,
    KWT_POSITIVE_INTEGER,
    KWT_UNSIGNED_LONG,
    KWT_UNSIGNED_INT,
    KWT_UNSIGNED,
    KWT_UNSIGNED_SHORT,
    KWT_UNSIGNED_BYTE,
    KWT_NON_POSITIVE_INTEGER,
    KWT_NEGATIVE_INTEGER,
    //   Derived string datatypes
    KWT_NORMALIZED_STRING,
    KWT_TOKEN,
    KWT_LANGUAGE,
    // SDML legacy datatypes
    KWT_BINARY, // synonym for hexBinary
    KWT_IRI     // synonym for anyURI
];

const RW_OPERATORS_AND_QUANTIFIERS = [
    KW_ARITH_MODULO,
    KW_BICONDITIONAL,
    KW_EXISTENTIAL,
    KW_IMPLICATION,
    KW_LOGICAL_AND,
    KW_LOGICAL_OR,
    KW_LOGICAL_XOR,
    KW_NEGATION,
    KW_SET_COMPLEMENT,
    KW_SET_INTERSECTION,
    KW_SET_MEMBERSHIP,
    KW_SET_PRODUCT,
    KW_SET_SUBSET,
    KW_SET_SUBSETEQ,
    KW_SET_SUPSET,
    KW_SET_SUPSETEQ,
    KW_UNIVERSAL,
];

// =================================================================================================
// Actual Grammar
// =================================================================================================

module.exports = grammar({
    name: 'sdml',

    // ---------------------------------------------------------------------------------------------
    // Whitespace
    // ---------------------------------------------------------------------------------------------

    extras: $ => [
        /\s/,
        $.line_comment,
    ],

    // ---------------------------------------------------------------------------------------------
    // Reserved Word Rules
    // ---------------------------------------------------------------------------------------------

    reserved: {
        module: $ => RW_GLOBAL,
        module_version: $ => [
            ...RW_GLOBAL,
            KW_VERSION
        ],
        import_statement: $ => [
            ...RW_GLOBAL,
            KW_FROM,
            KW_IMPORT,
            KW_AS
        ],
        datatype_def: $ => [
            ...RW_GLOBAL,
            KW_OPAQUE
        ],
        dimension_def: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM,
        ],
        dimension_body: $ =>  [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM,
            ...RW_SOURCE_ENTITY,
            KW_IDENTITY,
            KW_PARENT,
            KW_REF
        ],
        entity_def: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM
        ],
        entity_body: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM,
            KW_IDENTITY,
            KW_REF
        ],
        enum_def: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM
        ],
        event_def: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM
        ],
        event_body: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM,
            ...RW_SOURCE_ENTITY,
            KW_REF
        ],
        metric_group_def: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM,
            KW_ON
        ],
        rdf_def: $ => [
            ...RW_GLOBAL,
            KW_RDF_A,
            KW_RDF_TYPE
        ],
        structure_def: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM
        ],
        structure_body: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM,
            KW_REF
        ],
        type_class_def: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM
        ],
        type_class_body: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM,
            KW_DEF
        ],
        union_def: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM
        ],
        union_body: $ => [
            ...RW_GLOBAL,
            ...RW_DEFN_FROM,
            KW_AS
        ],
        builtin_types: $ => RW_BUILTIN_TYPES,
        length_restriction_facet: $ => [
            KWF_LENGTH,
            KWF_MAX_LENGTH,
            KWF_MIN_LENGTH,
            KWF_FIXED
        ],
        digit_restriction_facet: $ => [
            KWF_FRACTION_DIGITS,
            KWF_TOTAL_DIGITS,
            KWF_FIXED
        ],
        value_restriction_facet: $ => [
            KWF_MAX_EXCLUSIVE,
            KWF_MIN_EXCLUSIVE,
            KWF_MAX_INCLUSIVE,
            KWF_MIN_INCLUSIVE,
            KWF_FIXED
        ],
        tz_restriction_facet: $ => [
            KWF_EXPLICIT_TIMEZONE,
            KWF_TZ_REQUIRED,
            KWF_TZ_PROHIBITED,
            KWF_TZ_OPTIONAL,
            KWF_FIXED
        ],
        pattern_restriction_facet: $ => [
            KWF_PATTERN
        ],
        formal_constraint: $ => [
            ...RW_OPERATORS_AND_QUANTIFIERS,
            // environment
            KW_DEF,
            KW_WITH,
            KW_FOR,
            KW_END,
            // builtin values
            KW_SELF
        ],
        function_body: $ => [
            ...RW_OPERATORS_AND_QUANTIFIERS,
            // annotation-only body
            KW_IS,
            KW_END,
            // builtin values
            KW_SELF,
            KW_EVENT
        ]
    },

    // ---------------------------------------------------------------------------------------------
    // Inline rules don't appear in the tree or queries
    // ---------------------------------------------------------------------------------------------

    inline: $ => [
        $._actual_arguments,
        $._cardinality_inner,
        $._class_type_parameters,
        $._function_op_by_definition,
        $._function_op_composition,
        $._function_type,
        $._import,
        $._mixin_member_or_sequence,
        $._predicate_sequence_member,
        $._rdf_types,
        $._rename_import,
        $._sequence_value_constraints,
        $._type_expression_to,
        $._type_op_has_type,
        $._type_op_type_restriction
    ],

    // ---------------------------------------------------------------------------------------------
    // Super-types don't appear in tree but are queryable
    // ---------------------------------------------------------------------------------------------

    supertypes: $ => [
        // not yet $.annotation,
        $.definition,
        $.inequality_relation,
        $.logical_connective,
        $.logical_quantifier,
        $.math_operator,
        $.restriction_facet,
        $.set_membership,
        $.set_operator
    ],

    rules: {
        // =========================================================================================
        // Modules
        // =========================================================================================

        module: $ => kw_rule(
            KW_MODULE,
            seq(
                field(F_NAME, $.identifier),
                //
                // WFR:absolute_uri: `base: (iri)`
                //
                optional_field(F_BASE, $.iri),
                optional(
                    reserved('module_version', $.module_version)
                ),
                field(F_BODY, $.module_body)
            )
        ),

        module_version: $ => kw_rule(
            KW_VERSION,
            seq(
                //
                // TODO: rename `version_info` to `label`
                //
                // WFR:string_not_empty `version_info: (quoted_string)`
                //
                optional_field(F_VERSION_INFO, $.quoted_string),
                //
                // TODO: rename `version_info` to `base`
                //
                // WFR:absolute_uri `base: (version_iri)`
                //
                field(F_VERSION_URI, $.iri)
            )
        ),

        module_body: $ => is_block(
            seq(
                repeat($.import_statement),
                repeat($.annotation),
                repeat($.definition)
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Modules ❱ Imports
        // -----------------------------------------------------------------------------------------

        import_statement: $ => seq(
            optional(
                $.from_clause,
            ),
            KW_IMPORT,
            choice(
                $._import,
                //
                // WFR:unique_sequence .
                //
                sequence_of(repeat1($._import))
            )
        ),

        from_clause: $ => kw_rule(
            KW_FROM,
            choice(
                $.module_path_absolute,
                $.module_path_relative,
            )
        ),

        module_path_absolute: $ => seq(
            P_PATH_SEP,
            optional($._module_path_actual)
        ),

        module_path_relative: $ => $._module_path_actual,

        _module_path_actual: $ => seq(
            field(F_SEGMENT, $.identifier),
            repeat(
                seq(
                    P_PATH_SEP,
                    field(F_SEGMENT, $.identifier)
                )
            )
        ),

        _import: $ => choice(
            $.member_import,
            $.module_import
        ),

        _rename_import: $ => kw_rule(
            KW_AS,
            field(F_RENAME, $.identifier)
        ),

        member_import: $ => seq(
            //
            // WFR: `member: (identifier)` must be the name of a definition within the module
            //      identified by `module: (identifier)`.
            //
            field(F_NAME, $.qualified_identifier),
            optional($._rename_import)
        ),

        module_import: $ => seq(
            field(F_NAME, $.identifier),
            optional_field(F_VERSION_URI, $.iri),
            optional($._rename_import)
        ),

        // =========================================================================================
        // Identifiers
        // =========================================================================================

        identifier: $ => token(IDENTIFIER),

        qualified_identifier: $ => seq(
            field(F_MODULE, $.identifier),
            token.immediate(P_QID_SEP),
            field(F_MEMBER, $.identifier)
        ),

        identifier_reference: $ => choice(
            $.qualified_identifier,
            $.identifier
        ),

        // =========================================================================================
        // Annotations
        // =========================================================================================

        annotation: $ => choice(
            $.annotation_property,
            $.constraint,
        ),

        annotation_property: $ => seq(
            token(P_ANNOTATE_PRE),
            field(F_NAME, $.identifier_reference),
            OP_ASSIGNMENT,
            field(F_VALUE, $.value)
        ),

        constraint: $ => kw_rule (
            KW_ASSERT,
            seq(
                field(F_NAME, $.identifier),
                field(
                    F_BODY,
                    choice(
                        $.informal_constraint,
                        reserved('formal_constraint', $.formal_constraint),
                    )
                )
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Annotations ❱ Annotation Only Body
        // -----------------------------------------------------------------------------------------

        annotation_only_body: $ => is_block(
            repeat1($.annotation)
        ),

        // -----------------------------------------------------------------------------------------
        // Annotations ❱ Informal Constraints
        // -----------------------------------------------------------------------------------------

        informal_constraint: $ => kw_rule(
            OP_ASSIGNMENT,
            seq(
                field(F_VALUE, $.quoted_string),
                optional_field(F_LANGUAGE, $.controlled_language_tag)
            )
        ),

        controlled_language_tag: $ => token.immediate(
            prec(1, CONTROLLED_LANG_TAG)
        ),

        // -----------------------------------------------------------------------------------------
        // Annotations ❱ Formal Constraints
        // -----------------------------------------------------------------------------------------

        formal_constraint: $ => is_block(field(F_BODY, $.constraint_sentence)),

        // -----------------------------------------------------------------------------------------
        // Annotations ❱ Formal Constraints ❱ Sentences
        // -----------------------------------------------------------------------------------------

        constraint_sentence: $ => choice(
            prec(6, $.simple_sentence),
            prec(5, $.boolean_sentence),
            prec(4, $.expression_sentence),
            prec(3, $.quantified_sentence),
            prec(2, expression($.constraint_sentence)),
            prec(1, $.sentence_with_environment),
        ),

        simple_sentence: $ => choice(
            $.atomic_sentence,
            $.equation,
            $.inequation,
        ),

        atomic_sentence: $ => seq(
            field(F_PREDICATE, $.term),
            $._actual_arguments
        ),

       _actual_arguments: $ => parameters(
           repeat(field(F_ARGUMENT, $.term))

        ),

        equation: $ => seq(
            field(F_LHS, $.term),
            $.op_equality,
            field(F_RHS, $.term),
        ),

        inequation: $ => seq(
            field(F_LHS, $.term),
            field(F_RELATION, $.inequality_relation),
            field(F_RHS, $.term),
        ),

        boolean_sentence: $ => choice(
            $.unary_boolean_sentence,
            $.binary_boolean_sentence
        ),

        unary_boolean_sentence: $ => prec.right(
            2,
            seq(
                field(F_OPERATOR, $.logical_op_negation),
                field(F_RHS, $.constraint_sentence),
            )
        ),

        binary_boolean_sentence: $ => prec.left(
            1,
            seq(
                field(F_LHS, $.constraint_sentence), // antecedent
                field(F_OPERATOR, $.logical_connective),
                field(F_RHS, $.constraint_sentence)  // consequent
            )
        ),

        expression_sentence: $ => choice(
            $.set_expression_sentence,
            $.arithmetic_expression_sentence
        ),

        set_expression_sentence: $ => seq(
            field(F_LHS, $.term),
            field(F_OPERATOR, $.set_operator),
            field(F_RHS, $.term),
        ),

        arithmetic_expression_sentence: $ => seq(
            field(F_LHS, $.term),
            field(F_OPERATOR, $.math_operator),
            field(F_RHS, $.term)
        ),

        quantified_sentence: $ => seq(
            field(F_BINDING, $.quantified_variable_binding),
            P_QSENTENCE_SEP,
            field(F_BODY, $.constraint_sentence)
        ),

        quantified_variable_binding: $ => seq(
            field(F_QUANTIFIER, $.logical_quantifier),
            field(F_BINDING, $.quantified_variable),
        ),

        quantified_variable: $ => prec.right(
            2,
            seq(
                field(F_VARIABLE, $.variable),
                $.set_membership,
                field(F_SOURCE, $.term)
            )
        ),

        variable: $ => seq(
            field(F_NAME, $.identifier),
            optional(
                seq(
                    $._type_op_has_type,
                    field(F_RANGE, $.identifier_reference)
                )
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Annotations ❱ Formal Constraints ❱ Terms
        // -----------------------------------------------------------------------------------------

        term: $ => choice(
            $.sequence_builder,
            $.functional_term,
            $.function_composition,
            $.identifier_reference,
            $.reserved_self,
            $.reserved_event,
            $.predicate_value
        ),

        functional_term: $ => prec.right(
            3,
            seq(
                field(F_FUNCTION, $.term),
                $._actual_arguments
            )
        ),

        function_composition: $ => prec.right(
            2,
            seq(
                field(
                    F_SUBJECT,
                    choice(
                        $.reserved_self,
                        $.reserved_event,
                        $.identifier,
                    )
                ),
                repeat1(
                    seq(
                        $._function_op_composition,
                        field(F_NAME, $.identifier)
                    )
                )
            )
        ),

        predicate_value: $ => choice(
            $.simple_value,
            $.sequence_of_predicate_values,
        ),

        sequence_of_predicate_values: $ => seq(
            optional($._sequence_value_constraints),
            choice(
                field(F_EMPTY, $.value_empty_sequence),
                sequence_of_many(
                    field(
                        F_ELEMENT,
                        $._predicate_sequence_member
                    )
                )
            )
        ),

        _predicate_sequence_member: $ => choice(
            $.predicate_value,
            $.value_constructor,
            $.mapping_value,
            $.identifier_reference
        ),

        reserved_self: $ =>  KW_SELF,

        reserved_event: $ =>  KW_EVENT,

        // -----------------------------------------------------------------------------------------
        // Annotations ❱ Formal Constraints ❱ Environments
        // -----------------------------------------------------------------------------------------

        sentence_with_environment: $ => seq(
            KW_WITH,
            repeat1($.keyword_function_def),
            KW_FOR,
            field(F_BODY, $.constraint_sentence),
            KW_END
        ),

        keyword_function_def: $ => kw_rule(
            KW_DEF,
            $.function_def
        ),

        function_def: $ => seq(
            field(F_SIGNATURE, $.function_signature),
            optional_field(F_BODY, $.function_body),
            optional($.annotation_only_body)
        ),

        function_signature: $ => seq(
            field(F_NAME, $.identifier),
            optional(
                parameters(
                    repeat1(field(F_PARAMETER, $.function_parameter))
                )
            ),
            $._function_type
        ),

        function_parameter: $ => seq(
            field(F_NAME, $.identifier),
            $._function_type
        ),

        _function_type: $ => seq(
            $._type_op_has_type,
            optional_field(F_CARDINALITY, $.cardinality_reference_expression),
            field(F_TARGET, $.function_type_reference)
        ),

        function_type_reference: $ => choice(
            $.identifier_reference,
            reserved('builtin_types', $.builtin_types),
            $.mapping_type
        ),

        function_body: $ => seq(
            $._function_op_by_definition,
            field(
                F_BODY,
                choice(
                    prec(10, reserved('function_body', $.constraint_sentence)),
                    prec(1, $.term)
                )
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Annotations ❱ Formal Constraints ❱ Sequence Builder
        // -----------------------------------------------------------------------------------------

        sequence_builder: $ => seq(
            // not the usual use of braces.
            P_SEQ_BUILD_START,
            repeat1(
                field(
                    F_VARIABLE,
                    $.variable
                )
            ),
            $.seq_builder_separator,
            field(F_BODY, $.quantified_sentence),
            P_SEQ_BUILD_END,
        ),

        // =========================================================================================
        // Values
        // =========================================================================================

        value: $ => choice(
            $.simple_value,
            $.value_constructor,
            $.mapping_value,
            $.identifier_reference,
            $.sequence_of_values
        ),

        // -----------------------------------------------------------------------------------------
        // Values ❱ Simple
        // -----------------------------------------------------------------------------------------

        simple_value: $ => choice(
            $.boolean,
            $.unsigned,
            $.rational, // rational :> integer
            $.double,   // double   :> decimal
            $.decimal,  // decimal  :> integer
            $.integer,  // integer  :> unsigned
            $.string,
            $.iri,
            $.binary
        ),

        string: $ => seq(
            $.quoted_string,
            optional_field(F_LANGUAGE, $.language_tag)
        ),

        quoted_string: $ => token(
            seq(
                token.immediate(P_DOUBLE_QUOTE),
                repeat(
                    choice(
                        CHAR_PRINTABLE,
                        CHAR_SINGLE_ESC,
                        CHAR_UNICODE_ESC
                    )
                ),
                token.immediate(P_DOUBLE_QUOTE),
            )
        ),

        language_tag: $ => token.immediate(
            prec(1, STRING_LANG_TAG)
        ),

        // From <https://github.com/BonaBeavis/tree-sitter-turtle/blob/main/grammar.js>
        iri: $ => seq(
            P_IRI_START,
            token.immediate(
                repeat(
                    choice(
                        /([^<>"{}|^`\\\x00-\x20])/,
                        /(\\u[0-9A-Fa-f]{4}|\\U[0-9A-Fa-f]{8})/
                    )
                )
            ),
            token.immediate(
                P_IRI_END
            )
        ),

        // hex encoded binary, a sequence of hex bytes.
        binary: $ => seq(
            P_BINARY_START,
            repeat(
                field(F_ELEMENT, $.hex_byte)
            ),
            P_BINARY_END
        ),

        hex_byte: $ => token(
            NUM_BYTE_HEX
        ),

        double: $ => token(
            NUM_DOUBLE
        ),

        decimal: $ => token(
            NUM_DECIMAL
        ),

        integer: $ => token(
           NUM_INTEGER
        ),

        rational: $ => token(
            NUM_RATIONAL
        ),

        unsigned: $ => token(
            NUM_UNSIGNED
        ),

        boolean: $ => choice(
            $.boolean_truth,
            $.boolean_falsity
        ),

        boolean_truth: $ => choice(
             VALUE_TRUE,
             VALUE_TRUE_ALT,
        ),

        boolean_falsity: $ => choice(
             VALUE_FALSE,
             VALUE_FALSE_ALT,
        ),

        // -----------------------------------------------------------------------------------------
        // Values ❱ Constructors
        // -----------------------------------------------------------------------------------------

        value_constructor: $ => seq(
            field(F_NAME, $.identifier_reference),
            parameters(
                field(F_VALUE, $.simple_value)
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Values ❱ Mappings
        // -----------------------------------------------------------------------------------------

        mapping_value: $ => seq(
            field(F_DOMAIN, $.simple_value),
            prec.right(
                seq(
                    $._type_op_has_type,
                    field(F_RANGE, $.value)
                )
            ),
        ),

        // -----------------------------------------------------------------------------------------
        // Values ❱ Sequences
        // -----------------------------------------------------------------------------------------

        sequence_of_values: $ => seq(
            optional($._sequence_value_constraints),
            choice(
                field(F_EMPTY, $.value_empty_sequence),
                sequence_of_many(
                    field(
                        F_ELEMENT,
                        choice(
                            $.simple_value,
                            $.value_constructor,
                            $.mapping_value,
                            $.identifier_reference
                        )
                    )
                )
            )
        ),

        _sequence_value_constraints: $ => restriction(
            choice(
                seq(
                    field(F_ORDERING, $.sequence_ordering),
                    optional_field(F_UNIQUENESS, $.sequence_uniqueness)
                ),
                seq(
                    optional_field(F_ORDERING, $.sequence_ordering),
                    field(F_UNIQUENESS, $.sequence_uniqueness)
                )
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Values ❱ Sequences ❱ Empty
        // -----------------------------------------------------------------------------------------

        value_empty_sequence: $ => VALUE_EMPTY,

        // =========================================================================================
        // Datatype Names
        // =========================================================================================

        builtin_types: $ => choice(
            KWT_THING,
            KWT_NOTHING,
            KWT_REAL,
            KWT_RATIONAL,
            KWT_ANY_URI,
            KWT_BASE64_BINARY,
            KWT_BOOLEAN,
            KWT_DATE,
            KWT_DATE_TIME,
            KWT_DECIMAL,
            KWT_DOUBLE,
            KWT_DURATION,
            KWT_FLOAT,
            KWT_G_DAY,
            KWT_G_MONTH,
            KWT_G_MONTH_DAY,
            KWT_G_YEAR_MONTH,
            KWT_G_YEAR,
            KWT_HEX_BINARY,
            KWT_STRING,
            KWT_TIME,
            KWT_DATE_TIME_STAMP,
            KWT_DAY_TIME_DURATION,
            KWT_YEAR_MONTH_DURATION,
            KWT_INTEGER,
            KWT_LONG,
            KWT_INT,
            KWT_SHORT,
            KWT_BYTE,
            KWT_NON_NEGATIVE_INTEGER,
            KWT_POSITIVE_INTEGER,
            KWT_UNSIGNED_LONG,
            KWT_UNSIGNED_INT,
            KWT_UNSIGNED,
            KWT_UNSIGNED_SHORT,
            KWT_UNSIGNED_BYTE,
            KWT_NON_POSITIVE_INTEGER,
            KWT_NEGATIVE_INTEGER,
            KWT_NORMALIZED_STRING,
            KWT_TOKEN,
            KWT_LANGUAGE,
            KWT_BINARY, // synonym for hexBinary
            KWT_IRI     // synonym for anyURI
        ),

        // =========================================================================================
        // Definitions
        // =========================================================================================

        definition: $ => choice(
            reserved('datatype_def', $.datatype_def),
            reserved('dimension_def', $.dimension_def),
            reserved('entity_def', $.entity_def),
            reserved('enum_def', $.enum_def),
            reserved('event_def', $.event_def),
            $.metric_def,
            reserved('metric_group_def', $.metric_group_def),
            $.property_def,
            reserved('rdf_def', $.rdf_def),
            reserved('structure_def', $.structure_def),
            reserved('type_class_def', $.type_class_def),
            reserved('union_def', $.union_def)
        ),

        // -----------------------------------------------------------------------------------------
        // Definitions ❱ From Definition & Mixins
        // -----------------------------------------------------------------------------------------

        from_definition_clause: $ => kw_rule(
            //
            // WFR: The type of the definition identified by field `from` *must* by the same kind as
            //      the kind of the parent definition.
            //
            KW_FROM,
            field(F_MIXIN, $.mixin_clause)
        ),

        mixin_clause: $ => seq(
            field(F_FROM, $.identifier_reference),
            choice(
                $.mixin_with_members,
                $.mixin_without_members
            )
        ),

        mixin_with_members: $ => kw_rule(
            KW_WITH,
            choice(
                field(F_WILDCARD, $.wildcard),
                $._mixin_member_or_sequence
            )
        ),

        mixin_without_members: $ => kw_rule(
            KW_WITHOUT,
            $._mixin_member_or_sequence
        ),

        _mixin_member_or_sequence: $ => choice(
            //
            // WFR:unique_sequence `member: (_)
            // WFR: all identifiers *must* name members of the selected definition.
            //
            field(F_MEMBER, $.mixin_member),
            sequence_of_many1(field(F_MEMBER, $.mixin_member))
        ),

        mixin_member: $ => seq(
            field(F_MEMBER, $.identifier),
            optional(
                seq(
                    KW_AS,
                    field(F_RENAME, $.identifier)
                )
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Definitions ❱ Datatype
        // -----------------------------------------------------------------------------------------

        datatype_def: $ => definition_with($,
            KW_DATATYPE,
            seq(
                $._type_op_type_restriction,
                optional_field(F_OPAQUE, $.opaque),
                field(F_BASE, $.datatype_base_type_reference),
                //
                // WFR: restrictions should match the root base type of this datatype.
                //
                optional_field(F_RESTRICTION, $.datatype_type_restrictions)
            ),
            $.annotation_only_body
        ),

        opaque: $ => KW_OPAQUE,

        datatype_base_type_reference: $ => choice(
            //
            // WFR: Any type identified by either rule *must* itself be a datatype.
            //
            $.identifier_reference,
            reserved('builtin_types', $.builtin_types)
        ),

        datatype_type_restrictions: $ => restriction(
            repeat1($.restriction_facet),
        ),

        // -----------------------------------------------------------------------------------------
        // Definitions ❱ Datatype ❱ Facets
        // -----------------------------------------------------------------------------------------

        //
        // WFR: cannot set a facet if it's parent has set `fixed` as true.
        //
        restriction_facet: $ => choice(
            reserved('length_restriction_facet', $.length_restriction_facet),
            reserved('digit_restriction_facet', $.digit_restriction_facet),
            reserved('value_restriction_facet', $.value_restriction_facet),
            reserved('tz_restriction_facet', $.tz_restriction_facet),
            reserved('pattern_restriction_facet', $.pattern_restriction_facet)
        ),

        length_restriction_facet: $ => seq(
            field(
                F_FACET,
                choice(
                    KWF_LENGTH,
                    KWF_MAX_LENGTH,
                    KWF_MIN_LENGTH
                )
            ),
            OP_ASSIGNMENT,
            optional_field(F_IS_FIXED,$.kw_is_fixed),
            field(F_VALUE, $.unsigned)
        ),

        digit_restriction_facet: $ => seq(
            field(
                F_FACET,
                choice(
                    KWF_FRACTION_DIGITS,
                    KWF_TOTAL_DIGITS
                )
            ),
            OP_ASSIGNMENT,
            optional_field(F_IS_FIXED,$.kw_is_fixed),
            field(F_VALUE, $.unsigned)
        ),

        value_restriction_facet: $ => seq(
            field(
                F_FACET,
                choice(
                    KWF_MAX_EXCLUSIVE,
                    KWF_MIN_EXCLUSIVE,
                    KWF_MAX_INCLUSIVE,
                    KWF_MIN_INCLUSIVE
                )
            ),
            OP_ASSIGNMENT,
            optional_field(F_IS_FIXED,$.kw_is_fixed),
            field(F_VALUE, $.restriction_value)
        ),

        restriction_value: $ => choice (
            //
            // WFR: ensure value matches datatype
            //
            $.simple_value,
            $.value_constructor
        ),

        tz_restriction_facet: $ => seq(
            KWF_EXPLICIT_TIMEZONE,
            OP_ASSIGNMENT,
            optional_field(F_IS_FIXED,$.kw_is_fixed),
            field(F_VALUE, $.tz_restriction_value)
        ),

        tz_restriction_value: $ => choice(
            KWF_TZ_REQUIRED,
            KWF_TZ_PROHIBITED,
            KWF_TZ_OPTIONAL
        ),

        pattern_restriction_facet: $ => seq(
            KWF_PATTERN,
            OP_ASSIGNMENT,
            field(
                F_VALUE,
                choice(
                    //
                    // WFR:unique_sequence
                    // WFR: each string *must* contain a valid regular expression.
                    //
                    $.quoted_string,
                    sequence_of(repeat1($.quoted_string)),
                )
            )
        ),

        kw_is_fixed: $ => KWF_FIXED,

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Dimension
        // -----------------------------------------------------------------------------------------

        dimension_def: $ => definition_with(
            $,
            KW_DIMENSION,
            optional_field(F_FROM, $.from_definition_clause),
            reserved('dimension_body', $.dimension_body)
        ),

        dimension_body: $ => is_body_with_annotations($,
            seq(
                field(
                    F_IDENTITY,
                    choice(
                        $.source_entity,
                        $.entity_identity
                    )
                ),
                repeat($.dimension_parent),
                repeat($.member)
            )
        ),

        dimension_parent: $ => kw_rule(
            KW_PARENT,
            seq(
                field(F_NAME, $.identifier),
                $._type_op_has_type,
                //
                // WFR:type_mismatch `parent: (_)` `dimension`
                //
                field(F_PARENT, $.identifier_reference),
                optional_field(F_BODY, $.annotation_only_body)
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Dimension ❱ Source Entity
        // -----------------------------------------------------------------------------------------

        source_entity: $ => kw_rule(
            KW_SOURCE,
            seq(
                //
                // WFR:type_mismatch `entity: (_)` `entity`
                //
                field(F_ENTITY, $.identifier_reference),
                optional(
                    choice(
                        $.mixin_with_members,
                        $.mixin_without_members
                    )
                )
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Entity
        // -----------------------------------------------------------------------------------------

        entity_def: $ => definition_with(
            $,
            KW_ENTITY,
            optional_field(F_FROM, $.from_definition_clause),
            reserved('entity_body', $.entity_body)
        ),

        entity_body: $ => is_body_with_annotations($,
            seq(
                field(F_IDENTITY, $.entity_identity),
                repeat($.member)
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Enum
        // -----------------------------------------------------------------------------------------

        enum_def: $ => definition_with(
            $,
            KW_ENUM,
            optional_field(F_FROM, $.from_definition_clause),
            $.enum_body
        ),

        enum_body: $ => of_body_with_annotations($,
            repeat($.value_variant)
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Event
        // -----------------------------------------------------------------------------------------

        event_def: $ => definition_with(
            $,
            KW_EVENT,
            optional_field(F_FROM, $.from_definition_clause),
            reserved('event_body', $.event_body)
        ),

        event_body: $ => is_body_with_annotations($,
            seq(
                field(F_IDENTITY, $.source_entity),
                repeat($.member)
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Metric
        // -----------------------------------------------------------------------------------------

        metric_def: $ => kw_rule(
            KW_METRIC,
            $.function_def
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Metric Group
        // -----------------------------------------------------------------------------------------

        metric_group_def: $ => definition_with(
            $,
            seq(KW_METRIC, KW_GROUP),
            seq(
                $.metric_event_binding,
                optional_field(F_FROM,  $.from_definition_clause)
            ),
            optional($.metric_group_body)
        ),

        metric_event_binding: $ => seq(
            KW_ON,
            //
            // WFR:type_mismatch `.` `event`
            //
            $.identifier_reference
        ),

        metric_group_body: $ => is_body_with_annotations(
            $,
            repeat(
                choice(
                    $.metric_def,
                    $.metric_ref
                )
            )
        ),

        metric_ref: $ => seq(
            //
            // WFR:type_mismatch `referent: (_)` `metric`
            //
            kw_field(KW_REF, F_REFERENT, $.identifier_reference),
            optional_field(F_BODY, $.function_body),
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Property
        // -----------------------------------------------------------------------------------------

        property_def: $ => seq(
            KW_PROPERTY,
            field(
                F_MEMBER,
                choice(
                    $.annotation_member_def,
                    $.member_def
                )
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ RDF
        // -----------------------------------------------------------------------------------------

        rdf_def: $ => definition_with(
            $,
            KW_RDF,
            optional($._rdf_types),
            $.annotation_only_body
        ),

        _rdf_types: $ => seq(
            choice(
                KW_RDF_A,
                KW_RDF_TYPE
            ),
            choice(
                field(F_TYPE, $.identifier_reference),
                sequence_of_many1(
                    field(F_TYPE, $.identifier_reference)
                )
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Structure
        // -----------------------------------------------------------------------------------------

        structure_def: $ => definition_with(
            $,
            KW_STRUCTURE,
            optional_field(F_FROM, $.from_definition_clause),
            reserved('structure_body', $.structure_body)
        ),

        structure_body: $ => is_body_with_annotations($,
            repeat($.member)
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Type Class
        // -----------------------------------------------------------------------------------------

        type_class_def: $ => definition_with(
            $,
            KW_CLASS,
            seq(
                optional($._class_type_parameters),
                optional_field(F_FROM, $.from_definition_clause)
            ),
            reserved('type_class_body', $.type_class_body)
        ),

        type_class_body: $ => is_body_with_annotations($,
            repeat(field(F_FUNCTION, $.keyword_function_def))
        ),

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Type Class ❱ Type Parameters
        // -----------------------------------------------------------------------------------------

        _class_type_parameters: $ => parameters(
            repeat1(field(F_PARAMETER, $.type_parameter))
        ),

        type_parameter: $ => seq(
            field(F_NAME, $.identifier),
            optional(
                seq(
                    $._type_op_type_restriction,
                    $.type_parameter_restriction,
                    repeat(
                        seq(
                            $.type_op_combiner,
                            $.type_parameter_restriction,
                        )
                    )
                )
            )
        ),

        type_parameter_restriction: $ => seq(
            optional_field(F_CARDINALITY, $.cardinality_reference_expression),
            field(F_CLASS, $.identifier_reference),
            // Actual arguments to match the parameters for the class 'class'.
            optional(
                parameters(
                    repeat1(
                        field(F_ARGUMENT,$.type_restriction_argument)
                    )
                )
            )
        ),

        type_restriction_argument: $ => choice(
            $.identifier,
            $.wildcard
        ),

        wildcard: $ => WILDCARD,

        // -----------------------------------------------------------------------------------------
        // Top-Level Definitions ❱ Union
        // -----------------------------------------------------------------------------------------

        union_def: $ => definition_with(
            $,
            KW_UNION,
            optional_field(F_FROM, $.from_definition_clause),
            reserved('union_body', $.union_body)
        ),

        union_body: $ => of_body_with_annotations(
            $, repeat($.type_variant)
        ),

        // =========================================================================================
        // Members
        // =========================================================================================

        // -----------------------------------------------------------------------------------------
        // Members ❱ Fields ❱ Type Expressions
        // -----------------------------------------------------------------------------------------

        entity_identity: $ => kw_field(KW_IDENTITY, F_IDENTITY, $.member),

        member: $ => choice(
            $.member_def,
            $.property_ref,
        ),

        member_def: $ => seq(
            field(F_NAME, $.identifier),
            $._type_expression_to,
            optional_field(F_BODY, $.annotation_only_body)
        ),

        annotation_member_def: $ => seq(
            token(P_ANNOTATE_PRE),
            $.member_def
        ),

        //
        // WFR: definition identified by this reference *must* be a property definition.
        //
        property_ref: $ => kw_field(KW_REF, F_PROPERTY, $.identifier_reference),

        // -----------------------------------------------------------------------------------------
        // Members ❱ Fields ❱ Type Expressions
        // -----------------------------------------------------------------------------------------

        _type_expression_to: $ => seq(
            $._type_op_has_type,
            optional_field(F_CARDINALITY, $.cardinality_expression),
            field(F_TARGET, $.type_reference)
        ),

        type_reference: $ => choice(
            $.unknown_type,
            $.identifier_reference,
            reserved('builtin_types', $.builtin_types),
            $.mapping_type
        ),

        unknown_type: $ => KW_UNKNOWN,

        mapping_type: $ => parameters(
            seq(
                field(F_DOMAIN, $.type_reference),
                prec.right(
                    seq(
                        $._type_op_has_type,
                        field(F_RANGE, $.type_reference)
                    )
                )
            )
        ),

        // -----------------------------------------------------------------------------------------
        // Members ❱ Fields ❱ Cardinality
        // -----------------------------------------------------------------------------------------

        cardinality_expression: $ => restriction(
            seq(
                optional_field(F_ORDERING, $.sequence_ordering),
                optional_field(F_UNIQUENESS, $.sequence_uniqueness),
                $._cardinality_inner
            )
        ),

        cardinality_reference_expression: $ => restriction(
            seq(
                optional_field(F_ORDERING, $.sequence_ordering),
                optional_field(F_UNIQUENESS, $.sequence_uniqueness),
                optional($._cardinality_inner)
            )
        ),

        _cardinality_inner: $ => seq(
            field(F_MIN, $.unsigned),
            optional_field(F_RANGE, $.cardinality_range)
        ),

        sequence_ordering: $ => choice(
            KW_ORDERED,
            KW_UNORDERED
        ),

        sequence_uniqueness: $ => choice(
            KW_UNIQUE,
            KW_NONUNIQUE
        ),

        cardinality_range: $ => seq(
            OP_RANGE,
            field(F_MAX, optional($.unsigned))
        ),

        // -----------------------------------------------------------------------------------------
        // Members ❱ Variants
        // -----------------------------------------------------------------------------------------

        value_variant: $ => seq(
            field(F_NAME, $.identifier),
            optional_field(F_BODY, $.annotation_only_body)
        ),

         type_variant: $ => seq(
            field(F_NAME, $.identifier_reference),
            optional(
                kw_field(KW_AS, F_RENAME, $.identifier)
            ),
            optional_field(F_BODY, $.annotation_only_body)
        ),

        // =========================================================================================
        // Operators
        // =========================================================================================

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Equality/Equation
        // -----------------------------------------------------------------------------------------

        op_equality: $ => OP_EQUATION,

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Inequality
        // -----------------------------------------------------------------------------------------

        inequality_relation: $ => choice(
            $.op_inequality,
            $.op_less_than,
            $.op_greater_than,
            $.op_less_than_or_equal,
            $.op_greater_than_or_equal
        ),

        op_inequality: $ => choice(
            OP_INEQUAL_NE,
            OP_INEQUAL_NE_ALT
        ),

        op_less_than: $ => OP_INEQUAL_LT,

        op_greater_than: $ => OP_INEQUAL_GT,

        op_less_than_or_equal: $ => choice(
            OP_INEQUAL_LTEQ,
            OP_INEQUAL_LTEQ_ALT
        ),

        op_greater_than_or_equal: $ => choice(
            OP_INEQUAL_GTEQ,
            OP_INEQUAL_GTEQ_ALT
        ),

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Logical ❱ Negation
        // -----------------------------------------------------------------------------------------

        logical_op_negation: $ => choice(
            KW_NEGATION,
            OP_NEGATION_ALT
        ),

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Logical ❱ Connectives
        // -----------------------------------------------------------------------------------------

        logical_connective: $ => choice(
            $.logical_conjunction,
            $.logical_disjunction,
            $.logical_exclusive_disjunction,
            $.logical_implication,
            $.logical_biconditional
        ),

        logical_conjunction: $ => choice(
            KW_LOGICAL_AND,
            OP_LOGICAL_AND_ALT
        ),

        logical_disjunction: $ => choice(
            KW_LOGICAL_OR,
            OP_LOGICAL_OR_ALT
        ),

        logical_exclusive_disjunction: $ => choice(
            KW_LOGICAL_XOR,
            OP_LOGICAL_XOR_ALT
        ),

        logical_implication: $ => choice(
            KW_IMPLICATION,
            OP_IMPLICATION,
            OP_IMPLICATION_ALT
        ),

        logical_biconditional: $ => choice(
            KW_BICONDITIONAL,
            OP_BICONDITIONAL,
            OP_BICONDITIONAL_ALT
        ),

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Logical ❱ Quantifiers
        // -----------------------------------------------------------------------------------------

        logical_quantifier: $ => choice(
            $.logical_quantifier_universal,
            $.logical_quantifier_existential,
            $.logical_quantifier_existential_one
        ),

        logical_quantifier_universal: $ => choice(
            KW_UNIVERSAL,
            OP_UNIVERSAL_ALT
        ),

        logical_quantifier_existential: $ => choice(
            KW_EXISTENTIAL,
            OP_EXISTENTIAL_ALT
        ),

        logical_quantifier_neg_existential: $ => choice(
            seq(
                $.logical_op_negation,
                $.logical_quantifier_existential
            ),
            OP_NEG_EXISTENTIAL_ALT
        ),

        logical_quantifier_existential_one: $ => choice(
            KW_EXISTENTIAL_1,
            OP_EXISTENTIAL_1_ALT
        ),

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Set
        // -----------------------------------------------------------------------------------------

        set_operator: $ => choice(
            $.set_op_union,
            $.set_op_intersection,
            $.set_op_subset,
            $.set_op_subset_or_equal,
            $.set_op_supset,
            $.set_op_supset_or_equal,
            $.set_op_complement,
            $.set_op_product,
            $.set_membership
        ),

        set_op_union: $ => choice(
            KW_SET_UNION,
            OP_SET_UNION_ALT
        ),

        set_op_intersection: $ => choice(
            KW_SET_INTERSECTION,
            OP_SET_INTERSECTION_ALT
        ),

        set_op_subset: $ => choice(
            KW_SET_SUBSET,
            OP_SET_SUBSET_ALT
        ),

        set_op_subset_or_equal: $ => choice(
            KW_SET_SUBSETEQ,
            OP_SET_SUBSETEQ_ALT
        ),

        set_op_supset: $ => choice(
            KW_SET_SUPSET,
            OP_SET_SUPSET_ALT
        ),

        set_op_supset_or_equal: $ => choice(
            KW_SET_SUPSETEQ,
            OP_SET_SUPSETEQ_ALT
        ),

        set_op_complement: $ => choice(
            KW_SET_COMPLEMENT,
            OP_SET_COMPLEMENT_ALT
        ),

        set_op_product: $ => choice(
            KW_SET_PRODUCT,
            OP_SET_PRODUCT_ALT
        ),

        set_membership: $ => choice(
            $.set_op_is_member,
            $.set_op_is_not_member
        ),

        set_op_is_member: $ => choice(
            KW_SET_MEMBERSHIP,
            OP_SET_MEMBERSHIP_ALT
        ),

        set_op_is_not_member: $ => choice(
            seq(
                $.logical_op_negation,
                $.set_op_is_member
            ),
            OP_SET_NOT_MEMBERSHIP_ALT
        ),

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Set ❱ Builder
        // -----------------------------------------------------------------------------------------

        seq_builder_separator: $ => P_SEQ_BUILD_SEP,

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Arithmetic
        // -----------------------------------------------------------------------------------------

        math_operator: $ => choice(
            $.math_op_multiply,
            $.math_op_divide,
            $.math_op_modulo,
            $.math_op_add,
            $.math_op_subtract
        ),

        math_op_multiply: $ => choice(
            OP_ARITH_MULTIPLY,
            OP_ARITH_MULTIPLY_ALT
        ),

        math_op_divide: $ => choice(
            OP_ARITH_DIVIDE,
            OP_ARITH_DIVIDE_ALT
        ),

        math_op_modulo: $ => choice(
            KW_ARITH_MODULO,
            OP_ARITH_MODULO
        ),

        math_op_add: $ => OP_ARITH_ADD,

        math_op_subtract: $ => OP_ARITH_SUBTRACT,

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Function
        // -----------------------------------------------------------------------------------------

        _function_op_composition: $ => choice(
            token.immediate(OP_FN_COMPOSITION),
            token.immediate(OP_FN_COMPOSITION_ALT)
        ),

        _function_op_by_definition: $ => choice(
            OP_FN_DEFINITION,
            OP_FN_DEFINITION_ALT
        ),

        // -----------------------------------------------------------------------------------------
        // Operators ❱ Type
        // -----------------------------------------------------------------------------------------

        _type_op_has_type: $ => choice(
            OP_TY_HAS_TYPE,
            OP_TY_HAS_TYPE_ALT
        ),

        _type_op_type_restriction: $ => choice(
            OP_TY_RESTRICT,
            OP_TY_RESTRICT_ALT
        ),

        type_op_combiner: $ => OP_TY_COMBINES,

        // =========================================================================================
        // Comments -- Elisp conventions
        // =========================================================================================

        line_comment: $ => choice(
            $.comment_aligned,
            $.comment_local,
            $.comment_page
        ),

        // These will be indented with their surrounding content.
        comment_aligned: $ => token(
            prec(
                0,
                /;[^;].*/
            )
        ),

        // No indentation will be applied to these.
        comment_local: $ => token(
            prec(
                0,
                /;;[^;].*/
            )
        ),

        // These will be force-placed on column-0.
        comment_page: $ => token(
            prec(
                0,
                /;;;.*/
            )
        )
    }
})
