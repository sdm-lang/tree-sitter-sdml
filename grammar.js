// -------------------------------------------------------------------
//
// Project:    tree-sitter-sdml
// Author:     Simon Johnston <johntonskj@gmail.com>
// Version:    0.2.6
// Repository: https://github.com/johnstonskj/tree-sitter-sdml
// License:    Apache 2.0 (see LICENSE file)
// Copyright:  Copyright (c) 2023 Simon Johnston
//
// -------------------------------------------------------------------
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
// -------------------------------------------------------------------

const IDENTIFIER = /[\p{Lu}\p{Ll}][\p{Lu}\p{Ll}\p{Nd}]*(_[\p{Lu}\p{Ll}\p{Nd}]+)*/;

const STRING_CHAR = /([^\x00-\x08\x0B-\x1F\x7F"\\\\])|\\\\(["\\\\abefnrtv\/]|u\{[0-9a-fA-F]{2,6}\})/;

function keyword(str) {
    return token(
        prec(2, str)
    );
}

function operator(str) {
    return token(
        prec(1, str)
    );
}

function operator_choice(str1, str2) {
    return token(
        prec(1,
             choice(
                 str1,
                 str2
             )
        )
    );
}

module.exports = grammar({
    name: 'sdml',

    word: $ => $.identifier,

    // -----------------------------------------------------------------------
    // Whitespace
    // -----------------------------------------------------------------------

    extras: $ => [
        /\s/,
        $.line_comment
    ],

    rules: {
        // -----------------------------------------------------------------------
        // Module and Imports
        // -----------------------------------------------------------------------

        module: $ => seq(
            keyword('module'),
            field('name', $.identifier),
            optional(
                seq(
                    keyword('base'),
                    field(
                        'base',
                        $.iri,
                    )
                )
            ),
            field('body', $.module_body)
        ),

        module_body: $ => seq(
            keyword('is'),
            repeat($.import_statement),
            repeat($.annotation),
            repeat($.definition),
            keyword('end')
        ),

        import_statement: $ => seq(
            keyword('import'),
            choice(
                $._import,
                seq(
                    '[',
                    repeat1($._import),
                    ']'
                )
            )
        ),

        _import: $ => choice(
            $.member_import,
            $.module_import
        ),

        member_import: $ => choice(
            field('name', $.qualified_identifier),
        ),

        module_import: $ => seq(
            field('name', $.identifier),
        ),

        // -----------------------------------------------------------------------
        // Identifiers
        // -----------------------------------------------------------------------

        identifier: $ => token(IDENTIFIER),

        qualified_identifier: $ => seq(
            field('module', $.identifier),
            token.immediate(':'),
            field('member', $.identifier)
        ),

        identifier_reference: $ => choice(
            $.qualified_identifier,
            $.identifier
        ),

        // -----------------------------------------------------------------------
        // Annotations and Constraints
        // -----------------------------------------------------------------------

        annotation: $ => choice(
            $.annotation_property,
            $.constraint,
        ),

        annotation_property: $ => seq(
            token('@'),
            field('name', $.identifier_reference),
            operator('='),
            field('value', $.value)
        ),

        constraint: $ => seq (
            keyword('assert'),
            field('name', $.identifier),
            field(
                'body',
                choice(
                    $.informal_constraint,
                    $.formal_constraint,
                )
            )
        ),

        informal_constraint: $ => seq(
            operator('='),
            field('value', $.quoted_string),
            optional(
                field('language', $.controlled_language_tag),
            )
        ),


        controlled_language_tag: $ => token.immediate(
            prec(1, /@[a-z]{2,3}(-[A-Z][A-Za-z]{1,9})?/)
        ),

        // -----------------------------------------------------------------------
        // Formal Constraints
        // -----------------------------------------------------------------------

        formal_constraint: $ => seq(
            keyword('is'),
            optional(
                field('environment', $.constraint_environment)
            ),
            field('body', $.constraint_sentence),
            keyword('end'),
        ),

        // -----------------------------------------------------------------------

        constraint_sentence: $ => choice(
            prec(
                3,
                $.simple_sentence
            ),
            prec(
                2,
                $.boolean_sentence,
            ),
            prec(
                1,
                $.quantified_sentence,
            ),
            seq(
                '(',
                $.constraint_sentence,
                ')',
            ),
        ),

        simple_sentence: $ => choice(
            $.atomic_sentence,
            $.equation,
            $.inequation,
        ),

        atomic_sentence: $ => seq(
            field('predicate', $.term),
            $.actual_arguments
        ),

        actual_arguments: $ => seq(
           '(',
            repeat(field('argument', $.term)),
            ')'
        ),

        equation: $ => seq(
            field('lhs', $.term),
            operator('='),
            field('rhs', $.term),
        ),

        inequation: $ => seq(
            field('lhs', $.term),
            field(
                'relation',
                choice(
                    $.not_equal,
                    $.less_than,
                    $.greater_than,
                    $.less_than_or_equal,
                    $.greater_than_or_equal
                )
            ),
            field('rhs', $.term),
        ),

        not_equal: $ => choice(
            operator('/='),
            operator('≠')
        ),

        less_than: $ => operator('<'),

        greater_than: $ => operator('>'),

        less_than_or_equal: $ => choice(
            operator('<='),
            operator('≤')
        ),

        greater_than_or_equal: $ => choice(
            operator('>='),
            operator('≥')
        ),

        boolean_sentence: $ => choice(
            $.unary_boolean_sentence,
            $.binary_boolean_sentence
        ),

        unary_boolean_sentence: $ => prec.right(
            2,
            seq(
                field('operator', $.negation),
                field('rhs', $.constraint_sentence),
            )
        ),

        binary_boolean_sentence: $ => prec.left(
            1,
            seq(
                field('lhs', $.constraint_sentence), // antecedent
                field('operator', $._logical_connective),
                field('rhs', $.constraint_sentence)  // consequent
            )
        ),

        negation: $ => choice(
            keyword('not'),
            operator('¬') // LaTeX: \lnot
        ),

        _logical_connective: $ => choice(
            $.conjunction,
            $.disjunction,
            $.exclusive_disjunction,
            $.implication,
            $.biconditional
        ),

        conjunction: $ => choice(
            keyword('and'),
            operator('∧') // LaTeX: \land
        ),

        disjunction: $ => choice(
            keyword('or'),
            operator('∨') // LaTeX: \lor
        ),

        exclusive_disjunction: $ => choice(
            keyword('xor'),
            operator('⊻') // LaTeX: \veebar
            // maybe: operator('⊕')
            // maybe: operator('⩛')
            // maybe: operator('↮')
        ),

        implication: $ => choice(
            keyword('implies'),
            operator('==>'),
            operator('⇒') // LaTeX: \implies
        ),

        biconditional: $ => choice(
            keyword('iff'),
            operator('<==>'),
            operator('⇔') // LaTeX: \iff
        ),

        quantified_sentence: $ => seq(
            field('binding', $.quantified_variable_binding),
            ',',
            field('body', $.constraint_sentence)
        ),

        quantified_variable_binding: $ => seq(
            field(
                'quantifier',
                choice(
                    $.universal,
                    $.existential
                )
            ),
            field('binding', $.quantified_variable),
        ),

        universal: $ => choice(
            keyword('forall'),
            operator('∀') // LaTeX: \forall
        ),

        existential: $ => seq(
            choice(
                keyword('exists'),
                operator('∃') // LaTeX: \exists
            ),
        ),

        quantified_variable: $ => prec.right(
            2,
            choice(
                field('source', $.reserved_self),
                seq(
                    field('name', $.identifier),
                    choice(
                        keyword('in'),
                        operator('∈')
                    ),
                    field('source', $.term)
                )
            )
        ),

        // -----------------------------------------------------------------------

        term: $ => choice(
            $.sequence_builder,
            $.functional_term,
            $.function_composition,
            $.identifier_reference,
            $.reserved_self,
            $.predicate_value
        ),

        functional_term: $ => prec.right(
            2,
            seq(
                field('function', $.term),
                $.actual_arguments
            )
        ),

        function_composition: $ => prec.right(
            2,
            seq(
                field(
                    'subject',
                    choice(
                        $.reserved_self,
                        $.identifier,
                    )
                ),
                repeat1(
                    seq(
                        token.immediate('.'), // LaTeX: reverse with \circ
                        field(
                            'name',
                            $.identifier
                        )
                    )
                )
            )
        ),

        predicate_value: $ => choice(
            $.simple_value,
            $.sequence_of_predicate_values,
        ),

        sequence_of_predicate_values: $ => choice(
            field('empty', keyword('∅')),
            seq(
                optional($._sequence_value_constraints),
                '[',
                repeat(
                    field(
                        'element',
                        choice(
                            $.predicate_value,
                            $.value_constructor,
                            $.mapping_value,
                            $.identifier_reference
                        )
                    )
                ),
                ']'
            )
        ),

        reserved_self: $ =>  keyword('self'),

        // -----------------------------------------------------------------------

        constraint_environment: $ => seq(
            repeat1(
                $.environment_def
            ),
            $.constraint_environment_end,
        ),

        environment_def: $ => seq(
            keyword('def'),
            field('name', $.identifier),
            field(
                'body',
                choice(
                    $.function_def,
                    $.constant_def
                )
            )
        ),

        constraint_environment_end: $ => keyword('in'),

        function_def: $ => seq(
            field('signature', $.function_signature),
            field('body', $.function_body)
        ),

        function_body: $ => seq(
            $._by_definition,
            $.constraint_sentence
        ),

        _by_definition: $ => choice(
            operator(':='),
            operator('≔'),
        ),

        function_signature: $ => seq(
            optional(
                seq(
                    '(',
                    repeat1(field('parameter', $.function_parameter)),
                    ')'
                )
            ),
            $._function_type
        ),

        function_parameter: $ => seq(
            field('name', $.identifier),
            $._function_type
        ),

        _function_type: $ => seq(
            $._has_type,
            optional(
                field('cardinality', $.function_cardinality_expression)
            ),
            field('target', $.function_type_reference)
        ),

        function_cardinality_expression: $ => seq(
            '{',
            optional(
                field('ordering', $.sequence_ordering)
            ),
            optional(
                field('uniqueness', $.sequence_uniqueness)
            ),
            optional(
                 $._cardinality_inner
            ),
            '}'
        ),

        function_type_reference: $ => seq(
            optional(field('optional', $.optional)),
            choice(
                $.identifier_reference,
                $.builtin_simple_type,
                $.mapping_type
            )
        ),

        optional: $ => operator('?'),

        constant_def: $ => seq(
            $._by_definition,
            field(
                'body',
                choice(
                    $.predicate_value,
                    $.constraint_sentence
                )
            )
        ),

        // -----------------------------------------------------------------------

        sequence_builder: $ => seq(
            '{',
            field(
                'variable',
                choice(
                    $.named_variable_set,
                    $.mapping_variable
                )
            ),
            '|',
            field('body', $.sequence_builder_body),
            '}',
        ),

        named_variable_set: $ => repeat1(
            // WFR: all names MUST be unique.
            $.identifier
        ),

        mapping_variable: $ => seq(
            '(',
            field('domain', $.identifier),
            $._has_type,
            field('range', $.identifier),
            ')'
        ),

        sequence_builder_body: $ => choice(
            // WFR: Quantified variable names MUST be in builder variables
            $.quantified_sentence,
            seq(
                '(',
                $.quantified_sentence,
                ')'
            )
        ),

        // -----------------------------------------------------------------------
        // Values
        // -----------------------------------------------------------------------

        value: $ => choice(
            $.simple_value,
            $.value_constructor,
            $.mapping_value,
            $.identifier_reference,
            $.sequence_of_values
        ),

        sequence_of_values: $ => choice(
            field('empty', keyword('∅')),
            seq(
                optional($._sequence_value_constraints),
                '[',
                repeat(
                    field(
                        'element',
                        choice(
                            $.simple_value,
                            $.value_constructor,
                            $.mapping_value,
                            $.identifier_reference
                        )
                    )
                ),
                ']'
            )
        ),

        _sequence_value_constraints: $ => seq(
            '{',
            choice(
                field('ordering', $.sequence_ordering),
                field('uniqueness', $.sequence_uniqueness),
                seq(
                    field('ordering', $.sequence_ordering),
                    field('uniqueness', $.sequence_uniqueness)
                )
            ),
            '}'
        ),

        value_constructor: $ => seq(
            field('name', $.identifier_reference),
           '(',
            field('value', $.simple_value),
            ')'
        ),

        mapping_value: $ => seq(
            field('domain', $.simple_value),
            prec.right(
                seq(
                    $._has_type,
                    field('range', $.value)
                )
            ),
        ),

        builtin_simple_type: $ => choice(
            keyword('boolean'),
            keyword('unsigned'),
            keyword('integer'),
            keyword('decimal'),
            keyword('double'),
            keyword('string'),
            keyword('iri'),
            keyword('binary'),
        ),

        simple_value: $ => choice(
            $.boolean,
            $.unsigned,
            $.integer,
            $.decimal,
            $.double,
            $.string,
            $.iri,
            $.binary
        ),

        string: $ => seq(
            $.quoted_string,
            optional(
                field('language', $.language_tag)
            )
        ),

        quoted_string: $ => token(
            seq(
                token.immediate('"'),
                repeat(STRING_CHAR),
                token.immediate('"'),
            )
        ),

        language_tag: $ => token.immediate(
            // language: a two-letter language code from ISO 639-1 or a three-letter code from ISO 639-2
            //     4-char: reserved
            //     5-8 char: registered language subtag
            // extended: zero to 3 selected 3-char ISO 639 codes
            // Script: ISO 15924 code in title case
            // region: either 2 character ISO 3166-1 code or 3 digit UN M.49 code
            // this type does not support extensions or private-use components.
            prec(1, /@[a-z]{2,8}(-[A-Z]{3}){0,3}(-[A-Z][a-z]{3})?(-([A-Z]{2}|[0-9]{3}))?/)
        ),

        // From <https://github.com/BonaBeavis/tree-sitter-turtle/blob/main/grammar.js>
        iri: $ => seq(
            '<',
            token.immediate(
                repeat(
                    choice(
                        /([^<>"{}|^`\\\x00-\x20])/,
                        /(\\u[0-9A-Fa-f]{4}|\\U[0-9A-Fa-f]{8})/
                    )
                )
            ),
            token.immediate(
                '>'
            )
        ),

        // base-64 encoded data, a string of hex bytes.
        binary: $ => seq(
            '#[',
            repeat(
                field(
                    'byte',
                    /[0-9A-Fa-f]{2}/
                )
            ),
            ']'
        ),

        double: $ => token(
            /[+\\-]?(0|[1-9][0-9]*)(\.[0-9]+)[eE][+\\-]?(0|[1-9][0-9]*)/
        ),

        decimal: $ => token(
            /[+\\-]?(0|[1-9][0-9]*)(\.[0-9]+)/
        ),

        integer: $ => token(
            /[+\\-]?(0|[1-9][0-9]*)/
        ),

        unsigned: $ => token(
            /0|[1-9][0-9]*/
        ),

        boolean: $ => choice(
            $.boolean_truth,
            $.boolean_falsity
        ),

        boolean_truth: $ => choice(
             keyword('true'),
             keyword('⊤'),
        ),

        boolean_falsity: $ => choice(
             keyword('false'),
             keyword('⊥'),
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions
        // -----------------------------------------------------------------------

        definition: $ => choice(
            $.data_type_def,
            $.entity_def,
            $.enum_def,
            $.event_def,
            $.property_def,
            $.structure_def,
            $.type_class_def,
            $.union_def
        ),

        data_type_def: $ => seq(
            keyword('datatype'),
            field('name', $.identifier),
            $._type_restriction,
            optional(field('opaque', $.opaque)),
            field(
                'base',
                $._data_type_base
            ),
            optional(field('body', $.annotation_only_body))
        ),

        opaque: $ => keyword('opaque'),

        _data_type_base: $ => choice(
            $.identifier_reference,
            $.builtin_simple_type
        ),

        annotation_only_body: $ => seq(
            keyword('is'),
            repeat1($.annotation),
            keyword('end')
        ),

        entity_def: $ => seq(
            keyword('entity'),
            field('name', $.identifier),
            optional(field('body', $.entity_body))
        ),

        entity_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            field('identity', $.entity_identity),
            $._structured_body_inner,
            keyword('end')
        ),

        enum_def: $ => seq(
            keyword('enum'),
            field('name', $.identifier),
            optional(field('body', $.enum_body))
        ),

        enum_body: $ => seq(
            keyword('of'),
            repeat($.annotation),
            repeat1($.value_variant),
            keyword('end')
        ),

        event_def: $ => seq(
            keyword('event'),
            field('name', $.identifier),
            keyword('source'),
            field('source', $.identifier_reference),
            optional(field('body', $.structured_body))
        ),

        property_def: $ => seq(
            keyword('property'),
            field('name', $.identifier),
            optional(field('body', $.property_body))
        ),

        property_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            repeat1(
                choice(
                    $.identity_role,
                    $.member_role
                )
            ),
            keyword('end')
        ),

        structure_def: $ => seq(
            keyword('structure'),
            field('name', $.identifier),
            optional(field('body', $.structured_body))
        ),

        structured_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            $._structured_body_inner,
            keyword('end')
        ),

        _structured_body_inner: $ => repeat1(
            choice(
                $.member_group,
                $.member
            )
        ),

        union_def: $ => seq(
            keyword('union'),
            field('name', $.identifier),
            optional(field('body', $.union_body))
        ),

        union_body: $ => seq(
            keyword('of'),
            repeat($.annotation),
            repeat1($.type_variant),
            keyword('end')
        ),

        // -----------------------------------------------------------------------
        // Type Classes
        // -----------------------------------------------------------------------

        type_class_def: $ => seq(
            keyword('class'),
            field('name', $.identifier),
            seq(
                '(',
                repeat1(field('variable', $.type_variable)),
                ')',
            ),
            optional(field('body', $.type_class_body))
        ),

        type_variable: $ => seq(
            optional(
                field('cardinality', $.function_cardinality_expression)
            ),
            field('name', $.identifier),
            optional($._type_variable_restriction)
        ),

       _type_variable_restriction: $ => seq(
            $._has_type,
            $.type_class_reference,
            repeat(
                seq(
                    '+',
                    $.type_class_reference
                )
            )
        ),

        type_class_reference: $ => seq(
            field('name', $.identifier_reference),
            optional(field('arguments', $.type_class_arguments)),
        ),

        type_class_arguments: $ => seq(
            '(',
            choice(
                field('wildcard', $.wildcard),
                repeat1(field('variable', $.type_class_reference)),
                ),
            ')',
        ),

        wildcard: $ => operator('_'),

        type_class_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            repeat1(field('method', $.method_def)),
            keyword('end')
        ),

        method_def: $ => seq(
            keyword('def'),
            field('name', $.identifier),
            field(
                'signature',
                $.function_signature
            ),
            optional(
                field(
                    'body',
                    $.function_body
                )
            ),
            optional($.annotation_only_body)
        ),

        // -----------------------------------------------------------------------
        // Members
        // -----------------------------------------------------------------------

        member_group: $ => seq(
            keyword('group'),
            repeat($.annotation),
            repeat1($.member),
            keyword('end')
        ),

        _property_reference: $ => seq(
            keyword('in'),
            field('property', $.identifier_reference),
        ),

        entity_identity: $ => seq(
            keyword('identity'),
            field('name', $.identifier),
            choice(
                $._property_reference,
                seq(
                    $._type_expression,
                    optional(field('body', $.annotation_only_body))
                )
            )
        ),

        member: $ => seq(
            field('name', $.identifier),
            choice(
                $._property_reference,
                seq(
                    optional(
                        field('inverse_name', $.member_inverse_name)
                    ),
                    $._type_expression_to,
                    optional(field('body', $.annotation_only_body))
                )
            )
        ),

        member_inverse_name: $ => seq(
            "(",
            field('name', $.identifier),
            ")"
        ),

        _type_expression: $ => seq(
            $._has_type,
           field('target', $.type_reference)
        ),

        _type_expression_to: $ => seq(
            $._has_type,
            optional(
                field('cardinality', $.cardinality_expression)
            ),
            choice(
                field('feature', $.feature_reference),
                field('target', $.type_reference)
            )
        ),

        feature_reference: $ => seq(
            // WFR: keyword('features') == kindof(target) == UnionDef
            keyword('features'),
            field('target', $.identifier_reference),
        ),

        type_reference: $ => choice(
            $.unknown_type,
            $.identifier_reference,
            $.builtin_simple_type,
            $.mapping_type
        ),

        mapping_type: $ => seq(
            "(",
            field('domain', $.type_reference),
            prec.right(
                seq(
                    $._has_type,
                    field('range', $.type_reference)
                )
            ),
            ")"
        ),

        unknown_type: $ => keyword('unknown'),

        cardinality_expression: $ => seq(
            '{',
            optional(
                field('ordering', $.sequence_ordering)
            ),
            optional(
                field('uniqueness', $.sequence_uniqueness)
            ),
            $._cardinality_inner,
            '}'
        ),

        _cardinality_inner: $ => seq(
            field('min', $.unsigned),
            optional(
                field('range', $.cardinality_range)
            ),
        ),

        sequence_ordering: $ => choice(
            keyword('ordered'),
            keyword('unordered')
        ),

        sequence_uniqueness: $ => choice(
            keyword('unique'),
            keyword('nonunique')
        ),

        cardinality_range: $ => seq(
            operator('..'),
            field('max', optional($.unsigned))
        ),

        _has_type: $ => choice(
            operator('→'),
            operator('->'),
        ),

        _type_restriction: $ => choice(
            operator('←'),
            operator('<-'),
        ),

        // -----------------------------------------------------------------------
        // Variants
        // -----------------------------------------------------------------------

        value_variant: $ => seq(
            field('name', $.identifier),
            optional(field('body', $.annotation_only_body))
        ),

        type_variant: $ => seq(
            field('name', $.identifier_reference),
            optional(
                seq(
                    keyword('as'),
                    field(
                        'rename',
                        $.identifier,
                    )
                )
            ),
            optional(
                field(
                    'body',
                    $.annotation_only_body
                )
            )
        ),

        // -----------------------------------------------------------------------
        // Roles
        // -----------------------------------------------------------------------

        identity_role: $ => seq(
            keyword('identity'),
            field('name', $.identifier),
            $._type_expression,
            optional(field('body', $.annotation_only_body))
        ),

        member_role: $ => seq(
            field('name', $.identifier),
            optional(
                field('inverse_name', $.member_inverse_name)
            ),
            $._type_expression_to,
            optional(field('body', $.annotation_only_body))
        ),

        // -----------------------------------------------------------------------
        // Comments
        // -----------------------------------------------------------------------

        line_comment: $ => token(
            prec(
                0,
                seq(
                    ';',
                    /.*/
                )
            )
        )
    }
})
