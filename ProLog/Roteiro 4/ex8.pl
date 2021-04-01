%a
disjunto(X, []).
disjunto([], X).

disjunto([H|T], [H1|TS]):-
    disjunto([H|T], TS),
    disjunto(T, [H1|TS]).



%b
uniao([], [], []).

uniao(L, K, M):-
    append(L, K, M).



%d
diferenca([], _, []).

diferenca([H|T], [H|TS], Y):-
    diferenca(T, TS, Y).

diferenca([H|T], [_|TS], [H|Y]):-
    diferenca(T, TS, Y).



