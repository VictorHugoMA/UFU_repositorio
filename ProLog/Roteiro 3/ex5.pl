subconjunto([],[]).
subconjunto([X|XS], [Y|YS]):-
    subset([X|XS], [Y|YS]).
