// -------------------------------------------------------------------
//
// Project:    tree-sitter-sdml
// Author:     Simon Johnston <johntonskj@gmail.com>
// Version:    0.4.10
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

const IDENTIFIER = /[\p{Lu}\p{Ll}][\p{Lu}\p{Ll}\p{Nd}]*(_+[\p{Lu}\p{Ll}\p{Nd}]+)*/;

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
            optional($._module_locations),
            field('body',$.module_body)
        ),

        _module_locations: $ => seq(
            field('base', $.iri),
            optional(
                seq(
                    keyword('version'),
                    optional(
                        field('version_info', $.quoted_string)
                    ),
                    field('version_uri', $.iri)
                )
            )
        ),

        module_body: $ => seq(
            keyword('is'),
            repeat($.import_statement),
            repeat($.annotation),
            repeat($.definition),
            keyword('end')
        ),

        import_statement: $ => seq(
            optional(
                $.from_clause,
            ),
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

        from_clause: $ => seq(
            keyword('from'),
            choice(
                $.module_path_absolute,
                $.module_path_relative,
                $.module_path_root_only
            )
        ),

        module_path_root_only: $ => token('::'),

        module_path_absolute: $ => seq(
            token('::'),
            field('segment', $.identifier),
            repeat(
                seq(
                    token.immediate('::'),
                    field('segment', $.identifier)
                )
            )
        ),

        module_path_relative: $ => seq(
            field('segment', $.identifier),
            repeat(
                seq(
                    token.immediate('::'),
                    field('segment', $.identifier)
                )
            )
        ),

        _import: $ => choice(
            $.member_import,
            $.module_import
        ),

        _rename_import: $ => seq(
            keyword('as'),
            field('rename', $.identifier)
        ),

        member_import: $ => seq(
            field('name', $.qualified_identifier),
            optional($._rename_import)
        ),

        module_import: $ => seq(
            field('name', $.identifier),
            optional(field('version_uri', $.iri)),
            optional($._rename_import)
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
        // Annotations
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

        // -----------------------------------------------------------------------
        // Annotations ❯ Annotation Only Body
        // -----------------------------------------------------------------------

        annotation_only_body: $ => seq(
            keyword('is'),
            repeat1($.annotation),
            keyword('end')
        ),

        // -----------------------------------------------------------------------
        // Annotations ❯ Informal Constraints
        // -----------------------------------------------------------------------

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
        // Annotations ❯ Formal Constraints
        // -----------------------------------------------------------------------

        formal_constraint: $ => seq(
            optional(
                field('environment', $.constraint_environment)
            ),
            keyword('is'),
            field('body', $.constraint_sentence),
            keyword('end'),
        ),

        // -----------------------------------------------------------------------
        // Annotations ❯ Formal Constraints ❯ Sentences
        // -----------------------------------------------------------------------

        constraint_sentence: $ => choice(
            prec(3, $.simple_sentence),
            prec(2, $.boolean_sentence),
            prec(1, $.quantified_sentence),
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
            $._actual_arguments
        ),

        _actual_arguments: $ => seq(
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
                    $.op_inequality,
                    $.op_less_than,
                    $.op_greater_than,
                    $.op_less_than_or_equal,
                    $.op_greater_than_or_equal
                )
            ),
            field('rhs', $.term),
        ),

        boolean_sentence: $ => choice(
            $.unary_boolean_sentence,
            $.binary_boolean_sentence
        ),

        unary_boolean_sentence: $ => prec.right(
            2,
            seq(
                field('operator', $.logical_op_negation),
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


        _logical_connective: $ => choice(
            $.logical_op_conjunction,
            $.logical_op_disjunction,
            $.logical_op_exclusive_disjunction,
            $.logical_op_implication,
            $.logical_op_biconditional
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
                    $.logical_quantifier_universal,
                    $.logical_quantifier_existential
                )
            ),
            field('binding', $.quantified_variable),
        ),


        quantified_variable: $ => prec.right(
            2,
            seq(
                field('variable', $.variable),
                $.set_op_membership,
                field('source', $.term)
            )
        ),

        variable: $ => seq(
            field('name', $.identifier),
            optional(
                seq(
                    $._type_op_has_type,
                    field('range', $.identifier_reference)
                )
            )
        ),

        // -----------------------------------------------------------------------
        // Annotations ❯ Formal Constraints ❯ Terms
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
                $._actual_arguments
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
                        $._function_op_composition,
                        field('name', $.identifier)
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
                field('empty', $._value_empty_sequence),
                seq(
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
            )
        ),

        reserved_self: $ =>  keyword('self'),

        // -----------------------------------------------------------------------
        // Annotations ❯ Formal Constraints ❯ Environments
        // -----------------------------------------------------------------------

        constraint_environment: $ => seq(
            keyword('with'),
            repeat1(
                $.function_def
            ),
        ),

        function_def: $ => seq(
            field('signature', $.function_signature),
            field('body', $.function_body)
        ),

        function_signature: $ => seq(
            keyword('def'),
            field('name', $.identifier),
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
            $._type_op_has_type,
            optional(
                field('cardinality', $.cardinality_reference_expression)
            ),
            field('target', $.function_type_reference)
        ),

        function_type_reference: $ => choice(
            $.identifier_reference,
            $.builtin_simple_type,
            $.mapping_type
        ),

        function_body: $ => seq(
            $._function_op_by_definition,
            field(
                'body',
                choice(
                    prec(10, $.constraint_sentence),
                    prec(1, $.term)
                )
            )
        ),

        // -----------------------------------------------------------------------
        // Annotations ❯ Formal Constraints ❯ Sequence Builder
        // -----------------------------------------------------------------------

        sequence_builder: $ => seq(
            // not the usual use of braces.
            '{',
            repeat1(
                field(
                    'variable',
                    $.variable
                )
            ),
            $.set_op_builder,
            field('body', $.sequence_builder_body),
            '}',
        ),

        sequence_builder_body: $ => choice(
            // WFR: Quantified variable names MUST be in builder variables
            $.quantified_sentence,
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

        // -----------------------------------------------------------------------
        // Values ❯ Simple
        // -----------------------------------------------------------------------

        simple_value: $ => choice(
            $.boolean,
            $.unsigned,
            $.integer,
            $.rational,
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
                repeat(
                    choice(
                        // Standard, printable, characters
                        /[^\x00-\x08\x0B-\x1F\x7F\\\"]/,
                        // Single character escapes
                        /\\[\"\\\/abefnrtv]/,
                        // Unicode escape codes
                        /\\u\{[0-9a-fA-F]{2,6}\}/
                    )
                ),
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

        // hex encoded binary, a sequence of hex bytes.
        binary: $ => seq(
            '#[',
            repeat(
                field(
                    'byte',
                    $.hex_byte
                )
            ),
            ']'
        ),

        hex_byte: $ => token(
            /[0-9A-Fa-f]{2}/
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

        rational: $ => token(
            /[+\-]?(?:0|[1-9][0-9]*)\/(?:[1-9][0-9]*)/
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
        // Values ❯ Constructors
        // -----------------------------------------------------------------------

        value_constructor: $ => seq(
            field('name', $.identifier_reference),
            '(',
            field('value', $.simple_value),
            ')'
        ),

        // -----------------------------------------------------------------------
        // Values ❯ Mappings
        // -----------------------------------------------------------------------

        mapping_value: $ => seq(
            field('domain', $.simple_value),
            prec.right(
                seq(
                    $._type_op_has_type,
                    field('range', $.value)
                )
            ),
        ),

        // -----------------------------------------------------------------------
        // Values ❯ Sequences
        // -----------------------------------------------------------------------

        sequence_of_values: $ => seq(
            optional($._sequence_value_constraints),
            choice(
                field('empty', $._value_empty_sequence),
                seq(
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
            )
        ),

        _sequence_value_constraints: $ => seq(
            '{',
            choice(
                seq(
                    field('ordering', $.sequence_ordering),
                    optional(field('uniqueness', $.sequence_uniqueness)),
                ),
                seq(
                    optional(field('ordering', $.sequence_ordering)),
                    field('uniqueness', $.sequence_uniqueness)
                )
            ),
            '}'
        ),

        // -----------------------------------------------------------------------
        // Datatype Names
        // -----------------------------------------------------------------------

        builtin_simple_type: $ => choice(
            $._owl_builtin_types,
            $._builtin_primitive_datatypes,
            $._derived_date_datetypes,
            $._derived_numeric_datatypes,
            $._derived_string_datatypes,
        ),

        _owl_builtin_types: $ => choice(
            keyword('Thing'),
            keyword('Nothing'),
            keyword('real'),
            keyword('rational'),
        ),

        _builtin_primitive_datatypes: $ => choice(
            keyword('anyURI'), keyword('iri'),
            keyword('base64Binary'),
            keyword('boolean'),
            keyword('date'),
            keyword('dateTime'),
            keyword('decimal'),
            keyword('double'),
            keyword('duration'),
            keyword('float'),
            keyword('gDay'),
            keyword('gMonth'),
            keyword('gMonthDay'),
            keyword('gYearMonth'),
            keyword('gYear'),
            keyword('hexBinary'),
            keyword('binary'),
            keyword('string'),
            keyword('time')
        ),

        _derived_date_datetypes: $ => choice(
            keyword('dateTimeStamp'),
            keyword('dayTimeDuration'),
            keyword('yearMonthDuration')
        ),

        _derived_numeric_datatypes: $ => choice(
            keyword('integer'),
            keyword('long'),
            keyword('int'),
            keyword('short'),
            keyword('byte'),
            keyword('nonNegativeInteger'),
            keyword('positiveInteger'),
            keyword('unsignedLong'),
            keyword('unsignedInt'),
            keyword('unsigned'),
            keyword('unsignedShort'),
            keyword('unsignedByte'),
            keyword('nonPositiveInteger'),
            keyword('negativeInteger')
        ),

        _derived_string_datatypes: $ => choice(
            keyword('normalizedString'),
            keyword('token'),
            keyword('language')
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Definition
        // -----------------------------------------------------------------------

        definition: $ => choice(
            $.data_type_def,
            $.dimension_def,
            $.entity_def,
            $.enum_def,
            $.event_def,
            $.property_def,
            $.structure_def,
            $.union_def,
            // Libraries only:
            $.rdf_def,
            $.type_class_def
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ From Definition
        // -----------------------------------------------------------------------

        from_definition_clause: $ => seq(
            keyword('from'),
            field('from', $.identifier_reference),
            choice(
                $.from_definition_with,
                $.from_definition_without
            )
        ),

        from_definition_with: $ => seq(
            keyword('with'),
            $._wildcard_or_identifier_or_sequence
        ),

        from_definition_without: $ => seq(
            keyword('without'),
            $._identifier_or_sequence
        ),

        _wildcard_or_identifier_or_sequence: $ => choice(
            field('wildcard', $.wildcard),
            field('member', $.identifier),
            seq(
                '[',
                repeat1(field('member', $.identifier)),
                ']'
            )
        ),

        _identifier_or_sequence: $ => choice(
            field('member', $.identifier),
            seq(
                '[',
                repeat1(field('member', $.identifier)),
                ']'
            )
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Datatype
        // -----------------------------------------------------------------------

        data_type_def: $ => seq(
            keyword('datatype'),
            field('name', $.identifier),
            $._type_op_type_restriction,
            optional(
                field('opaque', $.opaque)
            ),
            field('base', $._datatype_base),
            optional(
                field('restriction', $.datatype_def_restriction)
            ),
            optional(
                field('body', $.annotation_only_body)
            )
        ),

        opaque: $ => keyword('opaque'),

        _datatype_base: $ => choice(
            $.identifier_reference,
            $.builtin_simple_type
        ),

        // _datatype_base: $ => choice(
        //     $._datatype_single_base,
        //     $.datatype_set_constructed_base
        // ),

        // _datatype_single_base: $ => choice(
        //     $.identifier_reference,
        //     $.builtin_simple_type
        // ),

        // datatype_set_constructed_base: $ => seq(
        //     choice(
        //         $.set_op_union,
        //         $.set_op_intersection,
        //         $.set_op_complement
        //     ),
        //     '[',
        //     field('first', $._datatype_single_base),
        //     field('rest', repeat1($._datatype_single_base)),
        //     ']'
        // ),

        datatype_def_restriction: $ => seq(
            '{',
            repeat1($._restriction_facet),
            '}'
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Datatype ❯ Facets
        // -----------------------------------------------------------------------

        _restriction_facet: $ => choice(
            $.length_restriction_facet,
            $.digit_restriction_facet,
            $.value_restriction_facet,
            $.tz_restriction_facet,
            $.pattern_restriction_facet
        ),

        length_restriction_facet: $ => seq(
            field(
                'facet',
                choice(
                    keyword('length'),
                    keyword('maxLength'),
                    keyword('minLength'),
                )
            ),
            operator('='),
            optional(field('is_fixed',$.kw_is_fixed)),
            field('value', $.unsigned)
        ),

        digit_restriction_facet: $ => seq(
            field(
                'facet',
                choice(
                    keyword('fractionDigits'),
                    keyword('totalDigits'),
                )
            ),
            operator('='),
            optional(field('is_fixed',$.kw_is_fixed)),
            field('value', $.unsigned)
        ),

        value_restriction_facet: $ => seq(
            field(
                'facet',
                choice(
                    keyword('maxExclusive'),
                    keyword('maxInclusive'),
                    keyword('minExclusive'),
                    keyword('minInclusive')
                )
            ),
            operator('='),
            optional(field('is_fixed',$.kw_is_fixed)),
            field('value', $.restriction_value)
        ),

        restriction_value: $ => choice (
            $.simple_value,
            $.value_constructor
        ),

        tz_restriction_facet: $ => seq(
            keyword('explicitTimezone'),
            operator('='),
            optional(field('is_fixed',$.kw_is_fixed)),
            field(
                'value',
                $.tz_restriction_value
            )
        ),

        tz_restriction_value: $ => choice(
            keyword('required'),
            keyword('prohibited'),
            keyword('optional'),
        ),

        pattern_restriction_facet: $ => seq(
            keyword('pattern'),
            operator('='),
            field(
                'value',
                choice(
                    $.quoted_string,
                    seq(
                        '[',
                        repeat1($.quoted_string),
                        ']'
                    ),
                )
            )
        ),

        kw_is_fixed: $ => keyword('fixed'),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Dimension
        // -----------------------------------------------------------------------

        dimension_def: $ => seq(
            keyword('dimension'),
            field('name', $.identifier),
            optional(field('from', $.from_definition_clause)),
            optional(field('body', $.dimension_body))
        ),

        dimension_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            field(
                'identity',
                choice(
                    $.source_entity,
                    $.entity_identity
                )
            ),
            repeat($.dimension_parent),
            repeat($.member),
            keyword('end')
        ),

        source_entity: $ => seq(
            keyword('source'),
            field('entity', $.identifier_reference),
            optional(
                seq(
                    keyword('with'),
                    $._identifier_or_sequence
                )
            )
        ),

        dimension_parent: $ => seq(
            keyword('parent'),
            field('name', $.identifier),
            $._type_op_has_type,
            field('parent', $.identifier_reference),
            optional(field('body', $.annotation_only_body))
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Entity
        // -----------------------------------------------------------------------

        entity_def: $ => seq(
            keyword('entity'),
            field('name', $.identifier),
            optional(field('from', $.from_definition_clause)),
            optional(field('body', $.entity_body))
        ),

        entity_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            field('identity', $.entity_identity),
            repeat($.member),
            keyword('end')
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Enum
        // -----------------------------------------------------------------------

        enum_def: $ => seq(
            keyword('enum'),
            field('name', $.identifier),
            optional(field('from', $.from_definition_clause)),
            optional(field('body', $.enum_body))
        ),

        enum_body: $ => seq(
            keyword('of'),
            repeat($.annotation),
            repeat($.value_variant),
            keyword('end')
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Event
        // -----------------------------------------------------------------------

        event_def: $ => seq(
            keyword('event'),
            field('name', $.identifier),
            optional(field('from', $.from_definition_clause)),
            optional(field('body', $.event_body))
        ),

        event_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            field('identity', $.source_entity),
            repeat($.member),
            keyword('end')
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Property
        // -----------------------------------------------------------------------

        property_def: $ => seq(
            keyword('property'),
            field('member', $.member_def)
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ RDF
        // -----------------------------------------------------------------------

        rdf_def: $ => seq(
            keyword('rdf'),
            field('name', $.identifier),
            optional(field('types', $.rdf_types)),
            optional(field('body', $.annotation_only_body))
        ),

        rdf_types: $ => seq(
            choice(
                keyword('a'),
                keyword('type')
            ),
            choice(
                field('type', $.identifier_reference),
                seq(
                    '[',
                    repeat(field('type', $.identifier_reference)),
                    ']'
                )
            )
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Structure
        // -----------------------------------------------------------------------

        structure_def: $ => seq(
            keyword('structure'),
            field('name', $.identifier),
            optional(field('from', $.from_definition_clause)),
            optional(field('body', $.structure_body))
        ),

        structure_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            repeat($.member),
            keyword('end')
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ TypeClass
        // -----------------------------------------------------------------------

        type_class_def: $ => seq(
            keyword('class'),
            field('name', $.identifier),
            optional(
                seq(
                    '(',
                    repeat1(field('parameter', $.type_parameter)),
                    ')',
                )
            ),
            optional(field('from', $.from_definition_clause)),
            optional(field('body', $.type_class_body))
        ),

        type_parameter: $ => seq(
            field('name', $.identifier),
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
            optional(
                field('cardinality', $.cardinality_reference_expression)
            ),
            field('class', $.identifier_reference),
            // Actual arguments to match the parameters for the class 'class'.
            optional(
                seq(
                    "(",
                    repeat1(
                        field('argument',$.type_restriction_argument)
                    ),
                    ")"
                )
            )
        ),

        type_restriction_argument: $ => choice(
            $.identifier,
            $.wildcard
        ),

        wildcard: $ => operator('_'),

        type_class_body: $ => seq(
            keyword('is'),
            repeat($.annotation),
            repeat(field('method', $.method_def)),
            keyword('end')
        ),

        method_def: $ => seq(
            field('signature', $.function_signature),
            optional(field('body', $.function_body)),
            optional($.annotation_only_body)
        ),

        // -----------------------------------------------------------------------
        // Top-Level Definitions ❯ Union
        // -----------------------------------------------------------------------

        union_def: $ => seq(
            keyword('union'),
            field('name', $.identifier),
            optional(field('from', $.from_definition_clause)),
            optional(field('body', $.union_body))
        ),

        union_body: $ => seq(
            keyword('of'),
            repeat($.annotation),
            repeat($.type_variant),
            keyword('end')
        ),

        // -----------------------------------------------------------------------
        // Members
        // -----------------------------------------------------------------------

        entity_identity: $ => seq(
            keyword('identity'),
            field('identity', $.member)
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

        // -----------------------------------------------------------------------
        // Members ❯ Type Expressions
        // -----------------------------------------------------------------------

        _type_expression_to: $ => seq(
            $._type_op_has_type,
            optional(
                field('cardinality', $.cardinality_expression)
            ),
            field('target', $.type_reference)
        ),

        type_reference: $ => choice(
            $.unknown_type,
            $.identifier_reference,
            $.builtin_simple_type,
            $.mapping_type
        ),

        unknown_type: $ => keyword('unknown'),

        mapping_type: $ => seq(
            "(",
            field('domain', $.type_reference),
            prec.right(
                seq(
                    $._type_op_has_type,
                    field('range', $.type_reference)
                )
            ),
            ")"
        ),

        // -----------------------------------------------------------------------
        // Members ❯ Cardinality
        // -----------------------------------------------------------------------

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

        cardinality_reference_expression: $ => seq(
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

        // -----------------------------------------------------------------------
        // Variants
        // -----------------------------------------------------------------------

        value_variant: $ => seq(
            field('name', $.identifier),
            optional(
                field('body', $.annotation_only_body)
            )
        ),

        type_variant: $ => seq(
            field('name', $.identifier_reference),
            optional(
                seq(
                    keyword('as'),
                    field('rename', $.identifier)
                )
            ),
            optional(
                field('body', $.annotation_only_body)
            )
        ),

        // -----------------------------------------------------------------------
        // Common Operators
        // -----------------------------------------------------------------------

        _op_equality: $ => operator('='),

        op_inequality: $ => choice(
            operator('/='),
            operator('≠')
        ),

        op_less_than: $ => operator('<'),

        op_greater_than: $ => operator('>'),

        op_less_than_or_equal: $ => choice(
            operator('<='),
            operator('≤')
        ),

        op_greater_than_or_equal: $ => choice(
            operator('>='),
            operator('≥')
        ),

        logical_op_negation: $ => choice(
            keyword('not'),
            operator('¬') // LaTeX: \lnot
        ),

        logical_op_conjunction: $ => choice(
            keyword('and'),
            operator('∧') // LaTeX: \land
        ),

        logical_op_disjunction: $ => choice(
            keyword('or'),
            operator('∨') // LaTeX: \lor
        ),

        logical_op_exclusive_disjunction: $ => choice(
            keyword('xor'),
            operator('⊻') // LaTeX: \veebar
            // maybe: operator('⊕')
            // maybe: operator('⩛')
            // maybe: operator('↮')
        ),

        logical_op_implication: $ => choice(
            keyword('implies'),
            operator('==>'),
            operator('⇒') // LaTeX: \implies
        ),

        logical_op_biconditional: $ => choice(
            keyword('iff'),
            operator('<==>'),
            operator('⇔') // LaTeX: \iff
        ),

        logical_quantifier_universal: $ => choice(
            keyword('forall'),
            operator('∀')
        ),

        logical_quantifier_existential: $ => seq(
            choice(
                keyword('exists'),
                operator('∃')
            ),
        ),

        set_op_union: $ => choice(
            keyword('union'),
            keyword('∪'),
        ),

        set_op_intersection: $ => choice(
            keyword('intersection'),
            keyword('∩'),
        ),

        set_op_subset: $ => choice(
            keyword('subset'),
            keyword('⊂'),
        ),

        set_op_subset_or_equal: $ => choice(
            keyword('subseteq'),
            keyword('⊆'),
        ),

        set_op_complement: $ => choice(
            keyword('complement'),
            keyword('∖'),
        ),

        set_op_membership: $ => choice(
            keyword('in'),
            operator('∈')
        ),

        set_op_builder: $ => operator('|'),

        // -----------------------------------------------------------------------
        // Common Function/Method-Related
        // -----------------------------------------------------------------------

        _function_op_composition: $ => choice(
            token.immediate('·'),
            token.immediate('.')
        ),

        _function_op_by_definition: $ => choice(
            operator(':='),
            operator('≔'),
        ),

        // -----------------------------------------------------------------------
        // Common Type-Related
        // -----------------------------------------------------------------------

        _type_op_has_type: $ => choice(
            operator('→'),
            operator('->'),
        ),

        _type_op_type_restriction: $ => choice(
            operator('←'),
            operator('<-'),
        ),

        type_op_combiner: $ => choice(
            operator('+'),
            operator('⊕')
        ),

        // -----------------------------------------------------------------------
        // Common Value-Related
        // -----------------------------------------------------------------------

        _value_empty_sequence: $ => keyword('∅'),

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
