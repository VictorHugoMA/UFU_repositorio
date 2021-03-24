subconjunto([], []).

subconjunto([X|XS], [Y|YS]):-
    X=:=Y;
    subconjunto(XS, YS).


%n