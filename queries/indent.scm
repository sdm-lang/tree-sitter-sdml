[
 "group"
 "is"
 "of"
 ] @indent

[
 "end"
 ] @indent.end

[
 (line_comment)
 ] @ignore

(quantified_body "(" @indent)
(quantified_body ")" @indent.end)

(builder_expression "(" @indent)
(builder_expression ")" @indent.end)

(functional_term "(" @indent)
(functional_term ")" @indent.end)

(atomic_sentence "(" @indent)
(atomic_sentence ")" @indent.end)

(list_of_predicate_values "[" @indent)
(list_of_predicate_values "]" @indent.end)

(list_of_values "[" @indent)
(list_of_values "]" @indent.end)
