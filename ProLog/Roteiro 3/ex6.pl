superconjunto([],[]).
superconjunto([X|XS], [Y|YS]):-
    subset([Y|YS], [X|XS]).