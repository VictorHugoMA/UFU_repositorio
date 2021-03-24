remove(_, [], _).


remove(L, [X|XS], [Y|YS]):-
    L=\=X,
    Y=X,
    remove(L, XS, YS).