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

(mixin_with_members "[" @indent "]" @indent.end)
(mixin_without_members "[" @indent "]" @indent.end)

(sentence_with_environment [ "with" "for" ] @indent) @indent.end

(function_signature "(" @indent ")" @indent.end)

(constraint_sentence "(" @indent ")" @indent.end)

(sequence_builder "{" @indent "}" @indent.end)

(atomic_sentence "(" @indent ")" @indent.end)
(functional_term "(" @indent ")" @indent.end)

(sequence_of_predicate_values "[" @indent "]" @indent.end)

(sequence_of_values "[" @indent "]" @indent.end)

(sequence_builder (seq_builder_separator) @indent.branch)
