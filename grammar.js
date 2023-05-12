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
            $.identifier,
            $.module_body
        ),

        module_body: $ => seq(
            keyword('is'),
            repeat($.import),
            repeat($.annotation),
            repeat($.type_def),
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

        member_import: $ => seq(
            $.qualified_identifier,
            optional(
                $.import_rename
            )
        ),

        module_import: $ => seq(
            $.identifier,
            optional(
                $.import_from
            )
        ),

        import_rename: $ => seq(
            keyword('as'),
            $.identifier
        ),

        import_from: $ => seq(
            keyword('from'),
            $.url
        ),

        // -----------------------------------------------------------------------
        // Identifiers
        // -----------------------------------------------------------------------

        identifier: $ => /[\p{Lu}\p{Ll}]+/,

        qualified_identifier: $ => seq(
            $.identifier,
            token.immediate(':'),
            $.identifier
        ),

        identifier_reference: $ => choice(
            $.qualified_identifier,
            $.identifier
        ),

        // -----------------------------------------------------------------------
        // Annotations and Expressions
        // -----------------------------------------------------------------------

        property_annotations: $ => seq(
            keyword('is'),
            repeat1($.annotation),
            keyword('end')
        ),

        annotation: $ => seq(
            token.immediate('@'),
            $.identifier_reference,
            optional($.type_expression),
            $.assignment_expression
        ),

        type_expression: $ => seq(
            operator('->'),
            $.identifier_reference
        ),

        type_expression_to: $ => seq(
            operator('->'),
            optional($.cardinality_expression),
            $.identifier_reference
        ),

        type_expression_from_to: $ => seq(
            optional($.cardinality_expression),
            $.type_expression_to
        ),

        assignment_expression: $ => seq(
            operator('='),
            $.value
        ),

        cardinality_expression: $ => seq(
            '{',
            $.unsigned,
            optional(
                seq(
                    token.immediate('..'),
                    optional($.unsigned)
                )
            ),
            '}'
        ),

        // -----------------------------------------------------------------------
        // Type Definitions
        // -----------------------------------------------------------------------

        type_def: $ => choice(
            $.entity_def,
            $.structure_def,
            $.enum_def,
            $.property_def,
            $.data_type_def
        ),

        entity_def: $ => seq(
            keyword('entity'),
            $.identifier,
            optional($.entity_body)
        ),

        entity_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            optional($.identity_member),
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
            $.identifier,
            optional($.structure_body)
        ),

        structure_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            repeat(
                choice(
                    $.identity_member,
                    $.member_by_value
                )
            ),
            keyword('end')
        ),

        enum_def: $ => seq(
            keyword('enum'),
            $.identifier,
            optional($._enum_body)
        ),

        _enum_body: $ => seq(
            keyword('is'),
            repeat1($.enum_variant),
            keyword('end')
        ),

        enum_variant: $ => seq(
            $.identifier,
            operator('='),
            $.unsigned,
            optional($.property_annotations)
        ),

        property_def: $ => seq(
            keyword('property'),
            $.identifier,
            $.type_expression,
            optional($.property_annotations)
        ),

        data_type_def: $ => seq(
            keyword('datatype'),
            $.identifier,
            $.type_restriction,
            optional($.property_annotations)
        ),

        type_restriction: $ => seq(
            operator('<-'),
            $.identifier_reference
        ),

        // -----------------------------------------------------------------------
        // Members
        // -----------------------------------------------------------------------

        identity_member: $ => seq(
            keyword('identity'),
            $.identifier,
            $.type_expression,
            optional($.property_annotations)
        ),

        member_by_value: $ => seq(
            $.identifier,
            $.type_expression_to,
            optional($.property_annotations)
        ),

        member_by_reference: $ => seq(
            keyword('ref'),
            $.identifier,
            $.type_expression_from_to,
            optional($.property_annotations)
        ),

        // -----------------------------------------------------------------------
        // Values
        // -----------------------------------------------------------------------

        value: $ => choice(
            $._simple_value,
            $.list_of_values,
            $.value_constructor
        ),

        list_of_values: $ => seq(
            '[',
            choice(
                repeat1($.language_string),
                repeat1($.string),
                repeat1($.double),
                repeat1($.decimal),
                repeat1($.integer),
            ),
            ']'
        ),

        value_constructor: $ => seq(
            $.identifier_reference,
            '(',
            $._simple_value,
            ')'
        ),

        _simple_value: $ => choice(
            $.language_string,
            $.string,
            $.double,
            $.decimal,
            $.integer,
            $.boolean,
        ),

        language_string: $ => seq(
            $._quoted_string,
            $.language_tag
        ),

        string: $ => seq(
            $._quoted_string,
        ),

        _quoted_string: $ => seq(
            '"',
            repeat($._quoted_char),
            '"'
        ),

        _quoted_char: $ => /([^\x00-\x08\x0B-\x1F\x7F"\\\\])|\\\\(["\\\\bfnrtv\/]|u\{[0-9a-fA-F]{2,6}\})/,

        language_tag: $ => /@[a-z]{2,3}(-[A-Z]{3})?(-[A-Z][a-z]{3})?(-([A-Z]{2}|[0-9]{3}))?/,

        // This is overly permissive
        url: $ => /<[^\\x00-\\x1F\\x7F <>#]+>/,

        double: $ => seq(
            $.decimal,
            $.exponent,
        ),

        exponent: $ => seq(
            /[eE]/,
            optional($.numeric_sign),
            /[0-9]+/
        ),

        decimal: $ => seq(
            $.integer,
            /\.[0-9]+/
        ),

        integer: $ => seq(
            optional($.numeric_sign),
            $.unsigned
        ),

        numeric_sign: $ => /[+\\-]/,

        unsigned: $ => /0|[1-9][0-9]*/,

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
