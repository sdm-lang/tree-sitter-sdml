// -------------------------------------------------------------------
//
// Project:    tree-sitter-sdml
// Author:     Simon Johnston <johntonskj@gmail.com>
// Version:    0.1.20
// Repository: https://github.com/johnstonskj/tree-sitter-sdml
// License:    Apache 2.0 (see LICENSE file)
// Copyright:  Copyright (c) 2023 Simon Johnston
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

module.exports = grammar({
    name: 'sdml',

    word: $ => $.identifier,

    // -----------------------------------------------------------------------
    // Whitespace
    // -----------------------------------------------------------------------

    extras: $ => [
        // One or more spaces or tabs
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
                        $.iri_reference,
                    )
                )
            ),
            field('body', $.module_body)
        ),

        module_body: $ => seq(
            keyword('is'),
            repeat($.import_statement),
            repeat($.annotation),
            repeat($.type_def),
            keyword('end')
        ),

        import_statement: $ => seq(
            keyword('import'),
            choice(
                $.import,
                seq(
                    '[',
                    repeat1($.import),
                    ']'
                )
            )
        ),

        import: $ => choice(
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
            optional(field('name', $.identifier)),
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
        ),

        // -----------------------------------------------------------------------
        // Formal Constraints
        // -----------------------------------------------------------------------

        formal_constraint: $ => seq(
            keyword('is'),
            field('value', $.constraint_sentence),
            keyword('end'),
        ),

        term: $ => choice(
            $.name_path,
            $.predicate_value,
            $.functional_term,
        ),

        predicate_value: $ => choice(
            $.simple_value,
            $.tautology,
            $.contradiction,
            $.list_of_predicate_values,
        ),

        tautology: $ => '⊤',

        contradiction: $ => '⊥',

        list_of_predicate_values: $ => seq(
            '[',
            repeat(
                choice(
                    $.simple_value,
                    $.tautology,
                    $.contradiction
                )
            ),
            ']'
        ),

        name_path: $ => seq(
            $.name,
            repeat(
                seq(
                    token.immediate('.'),
                    $.identifier
                )
            )
        ),

        name: $ => choice(
            $.reserved_self,
            $.reserved_self_type,
            $.identifier,
        ),

        reserved_self: $ =>  keyword('self'),

        reserved_self_type: $ =>  keyword('Self'),

        functional_term: $ => seq(
            field('function', $.term),
            '(',
            repeat($.term),
            ')',
        ),

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
        ),

        atomic_sentence: $ => seq(
            field('predicate', $.term),
            '(',
            repeat($.term),
            ')',
        ),

        equation: $ => seq(
            $.term,
            operator('='),
            $.term,
        ),

        boolean_sentence: $ => choice(
            $.negation,
            seq(
                $.constraint_sentence,
                choice(
                    $.conjunction,
                    $.disjunction,
                    $.implication,
                    $.biconditional,
                )
            )
        ),

        negation: $ => prec(
            5,
            seq(
                choice(
                    keyword('not'),
                    operator('¬')
                ),
                $.constraint_sentence,
            )
        ),

        conjunction: $ => prec(
            4,
            seq(
                choice(
                    keyword('and'),
                    operator('∧')
                ),
                $.constraint_sentence,
            )
        ),

        disjunction: $ => prec(
            3,
            seq(
                choice(
                    keyword('or'),
                    operator('∨')
                ),
                $.constraint_sentence,
            )
        ),

        implication: $ => prec(
            2,
            seq(
                choice(
                    keyword('implies'),
                    operator('⇒')
                ),
                $.constraint_sentence,
            )
        ),

        biconditional: $ => prec(
            1,
            seq(
                choice(
                    keyword('iff'),
                    operator('⇔')
                ),
                $.constraint_sentence,
            )
        ),

        quantified_sentence: $ => choice(
            $.universal,
            $.existential
        ),

        universal: $ => seq(
            choice(
                keyword('forall'),
                operator('∀')
            ),
            repeat1($.quantifier_binding),
            $.quantified_body
        ),

        existential: $ => seq(
            choice(
                keyword('exists'),
                operator('∃')
            ),
            repeat1($.quantifier_binding),
            $.quantified_body
        ),

        quantifier_binding: $ => choice(
            $.reserved_self,
            seq(
                field('name', $.identifier),
                optional(
                    $.binding_type_reference
                )
            )
        ),

        binding_type_reference: $ => seq(
            operator('->'),
            field(
                'target',
                choice(
                    $.reserved_self_type,
                    $.identifier_reference
                )
            )
        ),

        quantified_body: $ => seq(
            '(',
            $.constraint_sentence,
            ')'
        ),

        // -----------------------------------------------------------------------
        // Values
        // -----------------------------------------------------------------------

        value: $ => choice(
            $.simple_value,
            $.value_constructor,
            $.identifier_reference,
            $.list_of_values,
        ),

        list_of_values: $ => seq(
            '[',
            repeat1(
                choice(
                    $.simple_value,
                    $.value_constructor,
                    $.identifier_reference,
                )
            ),
            ']'
        ),

        value_constructor: $ => seq(
            field('name', $.identifier_reference),
            '(',
            field('value', $.simple_value),
            ')'
        ),

        builtin_simple_type: $ => choice(
            keyword('string'),
            keyword('double'),
            keyword('decimal'),
            keyword('integer'),
            keyword('boolean'),
            keyword('iri'),
        ),

        simple_value: $ => choice(
            $.string,
            $.double,
            $.decimal,
            $.integer,
            $.boolean,
            $.iri_reference,
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
            prec(1, /@[a-z]{2,3}(-[A-Z]{3})?(-[A-Z][a-z]{3})?(-([A-Z]{2}|[0-9]{3}))?/)
        ),

        // From <https://github.com/BonaBeavis/tree-sitter-turtle/blob/main/grammar.js>
        iri_reference: $ => seq(
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
            keyword('true'),
            keyword('false')
        ),

        // -----------------------------------------------------------------------
        // Type Definitions
        // -----------------------------------------------------------------------

        type_def: $ => choice(
            $.data_type_def,
            $.entity_def,
            $.enum_def,
            $.event_def,
            $.structure_def,
            $.union_def,
            $.property_def,
        ),

        data_type_def: $ => seq(
            keyword('datatype'),
            field('name', $.identifier),
            operator('<-'),
            field('base', $.data_type_base),
            optional(field('body', $.annotation_only_body))
        ),

        data_type_base: $ => choice(
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

        entity_group: $ => seq(
            keyword('group'),
            repeat($.annotation),
            repeat1(
                choice(
                    $.member_by_value,
                    $.member_by_reference
                )
            ),
            keyword('end')
        ),

        entity_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            field('identity', $.identity_member),
            repeat(
                choice(
                    $.entity_group,
                    $.member_by_value,
                    $.member_by_reference
                )
            ),
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
            repeat1($.enum_variant),
            keyword('end')
        ),

        enum_variant: $ => seq(
            field('name', $.identifier),
            operator('='),
            field('value', $.unsigned),
            optional(field('body', $.annotation_only_body))
        ),

        event_def: $ => seq(
            keyword('event'),
            field('name', $.identifier),
            keyword('source'),
            field('source', $.identifier_reference),
            optional(field('body', $.structure_body))
        ),

        structure_def: $ => seq(
            keyword('structure'),
            field('name', $.identifier),
            optional(field('body', $.structure_body))
        ),

        structure_group: $ => seq(
            keyword('group'),
            repeat($.annotation),
            repeat1($.member_by_value),
            keyword('end')
        ),

        structure_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            repeat(
                choice(
                    $.structure_group,
                    $.member_by_value
                )
            ),
            keyword('end')
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

        property_def: $ => seq(
            keyword('property'),
            field('name', $.identifier),
            optional(field('body', $.property_body))
        ),

        property_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            repeat1($.property_role),
            keyword('end')
        ),

        property_role: $ => seq(
            field('name', $.identifier),
            optional(
                seq(
                    keyword('ref'),
                    field('source_cardinality', $.cardinality_expression)
                )
            ),
            $._type_expression_to,
            optional(field('body', $.annotation_only_body))
        ),

        // -----------------------------------------------------------------------
        // Members
        // -----------------------------------------------------------------------

        property_member: $ => seq(
            keyword('as'),
            field('role', $.identifier),
        ),

        // Default cardinality: !{1..1} -> !{1..1}
        identity_member: $ => seq(
            keyword('identity'),
            field('name', $.identifier),
            choice(
                $.property_member,
                seq(
                    $._type_expression,
                    optional(field('body', $.annotation_only_body))
                )
            )
        ),

        // Default cardinality: !{1..1} -> {1..}
        member_by_value: $ => seq(
            field('name', $.identifier),
            choice(
                $.property_member,
                seq(
                    $._type_expression_to,
                    optional(field('body', $.annotation_only_body))
                )
            )
        ),

        // Default cardinality: {0..} -> {0..}
        member_by_reference: $ => seq(
            keyword('ref'),
            field('name', $.identifier),
            choice(
                $.property_member,
                seq(
                    $._type_expression_from_to,
                    optional(field('body', $.annotation_only_body))
                )
            )
        ),

        _type_expression: $ => seq(
            operator('->'),
            field('target', $.type_reference)
        ),

        _type_expression_to: $ => seq(
            operator('->'),
            optional(
                field('target_cardinality', $.cardinality_expression)
            ),
            field('target', $.type_reference)
        ),

        _type_expression_from_to: $ => seq(
            optional(
                field('source_cardinality', $.cardinality_expression)
            ),
            $._type_expression_to
        ),

        type_reference: $ => choice(
            $.unknown_type,
            $.identifier_reference,
            $.builtin_simple_type
        ),

        unknown_type: $ => keyword('unknown'),

        cardinality_expression: $ => seq(
            '{',
            field('min', $.unsigned),
            optional(
                field('range', $.cardinality_range)
            ),
            '}'
        ),

        cardinality_range: $ => seq(
            operator('..'),
            field('max', optional($.unsigned))
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
