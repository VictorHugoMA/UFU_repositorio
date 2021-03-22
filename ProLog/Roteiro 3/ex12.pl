somaUm([], []).
somaUm([X|XS], [Y|YS]):-
    Y is X+1,
    somaUm(XS, YS).