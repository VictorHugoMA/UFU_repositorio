arranjo(_, [], []).

arranjo(N, [L|LS], [A|AS]).


permutacao([],[]).
permutacao(Xs,[Y|Zs]):-
    remove(Y,Xs,Ys),
    permutacao(Ys,Zs).

%n