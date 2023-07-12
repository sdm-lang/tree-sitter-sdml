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
        ),

        // -----------------------------------------------------------------------
        // Formal Constraints
        // -----------------------------------------------------------------------

        formal_constraint: $ => seq(
            keyword('is'),
            optional($.constraint_environment),
            field('value', $.constraint_sentence),
            keyword('end'),
        ),

        constraint_environment: $ => seq(
            repeat1(
                $.environment_definition
            ),
            keyword('in'),
        ),

        environment_definition: $ => seq(
            keyword('def'),
            field('name', $.identifier),
            optional(
                field('signature', $.function_signature)
            ),
            choice(
                operator(':='),
                operator('≔'),
            ),
            field('body', $.constraint_sentence)
        ),

        term: $ => choice(
            $.name_path,
            $.identifier_reference,
            $.predicate_value,
            $.functional_term,
            $.sequence_builder,
        ),

        predicate_value: $ => choice(
            $.simple_value,
            $.list_of_predicate_values,
        ),

        list_of_predicate_values: $ => seq(
            '[',
            repeat(
                $.simple_value
            ),
            ']'
        ),

        name_path: $ => seq(
            field(
                'subject',
                choice(
                    $.reserved_self,
                    $.reserved_self_type,
                    $.identifier,
                )
            ),
            repeat1(
                seq(
                    token.immediate('.'), // LaTeX: reverse with \circ
                    field(
                        'path',
                        $.identifier
                    )
                )
            )
        ),

        reserved_self: $ =>  keyword('self'),

        reserved_self_type: $ =>  keyword('Self'),

        functional_term: $ => seq(
            field('function', $.term),
            '(',
            field('arguments', repeat($.term)),
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
            field('arguments', repeat($.term)),
            ')',
        ),

        equation: $ => seq(
            field('lhs', $.term),
            operator('='),
            field('rhs', $.term),
        ),

        boolean_sentence: $ => choice(
            $.negation,
            seq(
                field('lhs', $.constraint_sentence),
                choice(
                    $.conjunction,
                    $.disjunction,
                    $.exclusive_disjunction,
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
                    operator('¬') // LaTeX: \lnot
                ),
                field('rhs', $.constraint_sentence),
            )
        ),

        conjunction: $ => prec(
            5,
            seq(
                choice(
                    keyword('and'),
                    operator('∧') // LaTeX: \land
                ),
                field('rhs', $.constraint_sentence),
            )
        ),

        exclusive_disjunction: $ => prec(
            4,
            seq(
                choice(
                    keyword('xor'),
                    operator('⊻') // LaTeX: \veebar
                ),
                field('rhs', $.constraint_sentence),
            )
        ),

        disjunction: $ => prec(
            3,
            seq(
                choice(
                    keyword('or'),
                    operator('∨') // LaTeX: \lor
                ),
                field('rhs', $.constraint_sentence),
            )
        ),

        implication: $ => prec(
            2,
            seq(
                choice(
                    keyword('implies'),
                    operator('==>'),
                    operator('⇒') // LaTeX: \implies
                ),
                field('rhs', $.constraint_sentence),
            )
        ),

        biconditional: $ => prec(
            1,
            seq(
                choice(
                    keyword('iff'),
                    operator('<==>'),
                    operator('⇔') // LaTeX: \iff
                ),
                field('rhs', $.constraint_sentence),
            )
        ),

        quantified_sentence: $ => choice(
            $.universal,
            $.existential
        ),

        universal: $ => seq(
            choice(
                keyword('forall'),
                operator('∀') // LaTeX: \forall
            ),
            repeat1($.quantifier_binding),
            field('body', $.quantified_body)
        ),

        existential: $ => seq(
            choice(
                keyword('exists'),
                operator('∃') // LaTeX: \exists
            ),
            repeat1($.quantifier_binding),
            field('body', $.quantified_body)
        ),

        quantifier_binding: $ => choice(
            $.reserved_self,
            seq(
                field('name', $.identifier),
                $.binding_target
            )
        ),

        binding_target: $ => choice(
            $.binding_type_reference,
            $.binding_seq_iterator,
            seq(
                '(',
                $.binding_target,
                ')'
            )
        ),

        binding_type_reference: $ => seq(
            operator('->'),
            field(
                'from_type',
                choice(
                    $.reserved_self_type,
                    $.identifier_reference,
                    $.sequence_builder
                )
            )
        ),

        binding_seq_iterator: $ => seq(
            choice(
                keyword('in'),
                operator('∈')
            ),
            field(
                'from_collection',
                choice(
                    $.name_path,
                    $.identifier_reference,
                    $.sequence_builder
                )
            )
        ),

        quantified_body: $ => seq(
            '(',
            $.constraint_sentence,
            ')'
        ),

        function_signature: $ => seq(
            '(',
            repeat1($.fn_parameter),
            ')',
            operator('->'),
            field('target_type', $.fn_type)
        ),

        fn_parameter: $ => seq(
            optional(
                seq(
                    field('name', $.identifier),
                    operator('->'),
                )
            ),
            field('target_type', $.fn_type)
        ),

        fn_type: $ => choice(
            $.collection_type,
            $.type_reference
        ),

        collection_type: $ => seq(
            field(
                'collection',
                $.builtin_collection_type
            ),
            keyword('of'),
            field('element', $.type_reference)
        ),

        builtin_collection_type: $ => choice(
            keyword('Bag'),
            keyword('List'),
            keyword('Maybe'),
            keyword('OrderedSet'),
            keyword('Sequence'),
            keyword('Set'),
        ),

        sequence_builder: $ => seq(
            '{',
            field('return', $.builder_return),
            '|',
            field('expression', $.builder_expression),
            '}',
        ),

        builder_expression: $ => choice(
            prec(
                5,
                $.builder_atomic
            ),
            prec(
                4,
                $.builder_negation
            ),
            prec(
                3,
                $.builder_conjunction
            ),
            prec(
                2,
                $.builder_exclusive_disjunction
            ),
            prec(
                1,
                $.builder_disjunction
            ),
            seq(
                '(',
                $.builder_expression,
                ')'
            )
        ),

        builder_atomic: $ => choice(
            prec(
                2,
                $.builder_binding
            ),
            prec(
                1,
                $.constraint_sentence
            ),
        ),

        builder_negation: $ => seq(
            seq(
                choice(
                    keyword('not'),
                    operator('¬') // LaTeX: \lnot
                ),
                field('rhs', $.builder_expression),
            )
        ),

        builder_conjunction: $ => seq(
            seq(
                choice(
                    keyword('and'),
                    operator('∧') // LaTeX: \land
                ),
                field('rhs', $.builder_expression),
            )
        ),

        builder_exclusive_disjunction: $ => seq(
            seq(
                choice(
                    keyword('xor'),
                    operator('⊻') // LaTeX: \veebar
                ),
                field('rhs', $.builder_expression),
            )
        ),

        builder_disjunction: $ => seq(
            seq(
                choice(
                    keyword('or'),
                    operator('∨') // LaTeX: \lor
                ),
                field('rhs', $.builder_expression),
            )
        ),

        builder_binding: $ => seq(
            field('name', $.identifier),
            choice(
                $.binding_type_reference,
                $.binding_seq_iterator,
            )
        ),

        builder_return: $ => choice(
            $.identifier,
            seq(
                '[',
                repeat1($.identifier),
                ']'
            )
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
            // language: a two-letter language code from ISO 639-1 or a three-letter code from ISO 639-2
            // extended: zero to 3 selected ISO 639 codes
            // Script: ISO 15924 code in title case
            // region: either 2 character ISO 3166-1 code or 3 digit UN M.49 code
            // this type does not support extensions or private-use components.
            prec(1, /@[a-z]{2,8}(-[A-Z]{3}){0,3}(-[A-Z][a-z]{3})?(-([A-Z]{2}|[0-9]{3}))?/)
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
            $._boolean_true,
            $._boolean_false
        ),

        _boolean_true: $ => choice(
             keyword('true'),
             keyword('⊤'),
        ),

        _boolean_false: $ => choice(
             keyword('false'),
             keyword('⊥'),
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
        ),

        // -----------------------------------------------------------------------
        // Operators
        // -----------------------------------------------------------------------

        _op_equal_by_definition: $ => choice(
            operator(':='),
            operator('≔'),
        ),

        _op_equality: $ => operator('='),

        _op_not: $ => choice(
            keyword('not'),
            operator('¬') // LaTeX: \lnot
        ),

        _op_and: $ => choice(
            keyword('and'),
            operator('∧') // LaTeX: \land
        ),

        _op_or: $ => choice(
            keyword('or'),
            operator('∨') // LaTeX: \lor
        ),

        _op_xor: $ => choice(
            keyword('xor'),
            operator('⊻') // LaTeX: \veebar
        ),

        _op_implies: $ => choice(
            keyword('implies'),
            operator('==>'),
            operator('⇒') // LaTeX: \implies
        ),

        _op_iff: $ => choice(
            keyword('iff'),
            operator('<==>'),
            operator('⇔') // LaTeX: \iff
        ),

        _op_forall: $ => choice(
            keyword('forall'),
            operator('∀') // LaTeX: \forall
        ),

        _op_exists: $ => choice(
            keyword('exists'),
            operator('∃') // LaTeX: \exists
        ),

        _op_in_sequence: $ => choice(
            keyword('in'),
            operator('∈')
        ),

        _op_has_type: $ => operator('->'),

        _op_restricts_type: $ => operator('<-'),
 
        _op_range: $ => operator('..')
    }
})
