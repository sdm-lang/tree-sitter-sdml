[
 "group"
 "is"
 "of"
 ] @indent

[
 "end"
 ] @indent.end

[
 (string)
 (line_comment)
 ] @indent.auto

(constraint_environment_end) @indent.dedent

(function_def body: (_) @indent)

(quantified_sentence body: ("(" @indent ")" @indent.end))

(sequence_builder "{" @indent "}" @indent.end)

(functional_term "(" @indent ")" @indent.end)

(atomic_sentence "(" @indent ")" @indent.end)

(sequence_of_predicate_values "[" @indent "]" @indent.end)

(sequence_of_values "[" @indent "]" @indent.end)
