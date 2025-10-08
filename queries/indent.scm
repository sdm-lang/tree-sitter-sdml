[
 "is"
 "of"
 ] @indent

[
 "end"
 ] @indent.end

[
 (string)
 (line_comment)
 (function_body)
 ] @indent.auto

(import_statement "[" @indent "]" @indent.end)

(datatype_type_restrictions "{" @indent "}" @indent.end)

(from_definition_with "[" @indent "]" @indent.end)
(from_definition_without "[" @indent "]" @indent.end)

(source_entity "[" @indent "]" @indent.end)

(constraint_environment
 "with" @indent
 ) @indent.end

(function_signature "(" @indent ")" @indent.end)

(constraint_sentence "(" @indent ")" @indent.end)

(sequence_builder "{" @indent "}" @indent.end)

(atomic_sentence "(" @indent ")" @indent.end)
(functional_term "(" @indent ")" @indent.end)

(sequence_of_predicate_values "[" @indent "]" @indent.end)

(sequence_of_values "[" @indent "]" @indent.end)

(sequence_builder (seq_builder_separator) @indent.branch)

(class_function_def
 (annotation_only_body "is" @indent.branch))
