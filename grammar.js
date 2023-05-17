// -------------------------------------------------------------------
//
// Project:    tree-sitter-sdml
// Author:     Simon Johnston <johntonskj@gmail.com>
// Version:    0.1.0
// Repository: https://github.com/johnstonskj/tree-sitter-sdml
// License:    MIT
// Copyright:  Copyright (c) 2023 Simon Johnston
//
// -------------------------------------------------------------------

const IDENTIFIER = /[\p{Lu}\p{Ll}]+/;

const STRING_CHAR = /([^\x00-\x08\x0B-\x1F\x7F"\\\\])|\\\\(["\\\\bfnrtv\/]|u\{[0-9a-fA-F]{2,6}\})/;

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

    supertypes: $ => [
        $._single_import,
        $._type_def
    ],

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
            field('body', $.module_body)
        ),

        module_body: $ => seq(
            keyword('is'),
            repeat($.import),
            repeat($.annotation),
            repeat($._type_def),
            keyword('end')
        ),

        import: $ => seq(
            keyword('import'),
            choice(
                $._single_import,
                seq(
                    '[',
                    repeat1($._single_import),
                    ']'
                )
            )
        ),

        _single_import: $ => choice(
            $.member_import,
            $.module_import
        ),

        member_import: $ => choice(
            field('name', $.qualified_identifier),
        ),

        module_import: $ => seq(
            field('name', $.identifier),
            optional(
                seq(
                    keyword('from'),
                    field('source', $.iri_reference)
                )
            )
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
        // Annotations and Expressions
        // -----------------------------------------------------------------------

        annotation_only_body: $ => seq(
            keyword('is'),
            repeat1($.annotation),
            keyword('end')
        ),

        annotation: $ => seq(
            token('@'),
            field('name', $.identifier_reference),
           operator('='),
            field('value', $.value)
        ),

        _type_expression: $ => seq(
            operator('->'),
            field('target', $.identifier_reference)
        ),

        _type_restriction: $ => seq(
            operator('<-'),
            field('base', $.identifier_reference)
        ),

        _type_expression_to: $ => seq(
            operator('->'),
            optional(
                field('targetCardinality', $.cardinality_expression)
            ),
            field('target', $.identifier_reference)
        ),

        _type_expression_from_to: $ => seq(
            optional(
                field('sourceCardinality', $.cardinality_expression)
            ),
            $._type_expression_to
        ),

        cardinality_expression: $ => seq(
            '{',
            field('min', $.unsigned),
            optional(
                seq(
                    token.immediate('..'),
                    field('max', optional($.unsigned))
                )
            ),
            '}'
        ),

        // -----------------------------------------------------------------------
        // Type Definitions
        // -----------------------------------------------------------------------

        _type_def: $ => choice(
            $.entity_def,
            $.structure_def,
            $.event_def,
            $.enum_def,
            $.data_type_def
        ),

        entity_def: $ => seq(
            keyword('entity'),
            field('name', $.identifier),
            field('body', optional($.entity_body))
        ),

        entity_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            optional(field('identity', $.identity_member)),
            repeat(
                choice(
                    $.member_by_value,
                    $.member_by_reference
                )
            ),
            keyword('end')
        ),

        structure_def: $ => seq(
            keyword('structure'),
            field('name', $.identifier),
            optional(field('body', $.structure_body))
        ),

        structure_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            repeat(
                choice(
                   $.member_by_value
                )
            ),
            keyword('end')
        ),

        event_def: $ => seq(
            keyword('event'),
            field('name', $.identifier),
            keyword('source'),
            field('source', $.identifier_reference),
            optional(field('body', $.structure_body))
        ),

        enum_def: $ => seq(
            keyword('enum'),
            field('name', $.identifier),
            optional(field('body', $.enum_body))
        ),

        enum_body: $ => seq(
            keyword('is'),
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

        data_type_def: $ => seq(
            keyword('datatype'),
            field('name', $.identifier),
            $._type_restriction,
            optional(field('body', $.annotation_only_body))
        ),

        // -----------------------------------------------------------------------
        // Members
        // -----------------------------------------------------------------------

        identity_member: $ => seq(
            keyword('identity'),
            field('name', $.identifier),
            $._type_expression,
            optional(field('body', $.annotation_only_body))
        ),

        member_by_value: $ => seq(
            field('name', $.identifier),
            $._type_expression_to,
            optional(field('body', $.annotation_only_body))
        ),

        member_by_reference: $ => seq(
            keyword('ref'),
            field('name', $.identifier),
            $._type_expression_from_to,
            optional(field('body', $.annotation_only_body))
        ),

        // -----------------------------------------------------------------------
        // (Annotation) Values
        // -----------------------------------------------------------------------

        value: $ => choice(
            $._simple_value,
            $.list_of_values,
            $.value_constructor
        ),

        list_of_values: $ => seq(
            '[',
            choice(
                repeat1($.string),
                repeat1($.double),
                repeat1($.decimal),
                repeat1($.integer),
                repeat1($.iri_reference),
            ),
            ']'
        ),

        value_constructor: $ => seq(
            field('name', $.identifier_reference),
            '(',
            field('value', $._simple_value),
            ')'
        ),

        _simple_value: $ => choice(
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

        language_tag: $ => token(
            seq(
                token.immediate('@'),
                /[a-z]{2,3}(-[A-Z]{3})?(-[A-Z][a-z]{3})?(-([A-Z]{2}|[0-9]{3}))?/
            )
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
