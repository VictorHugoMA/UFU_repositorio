subconjunto([], []).
subconjunto([X|T1], [Y|T2]):-
    X=Y,
    subconjunto([T1], [T2]).

subconjunto([])