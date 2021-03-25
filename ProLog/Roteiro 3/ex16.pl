remove(X, [X|XS], XS).

remove(X, [Y|YS], [Y|T]):-
    remove(X, YS, T).
