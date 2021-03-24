remove(X, [X|XS], XS).
remove(X, [Y|YS], [Y|T]):-
    remove(X, YS, T).


insere(X, Y, Z):-
    remove(X, Z, Y).