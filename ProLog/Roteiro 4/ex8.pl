%a
disjunto(X, []).
disjunto([], X).

disjunto([H|T], [H1|TS]):-
    disjunto([H|T], TS),
    disjunto(T, [H1|TS]).



%b
uniao([],[],[]).

uniao([H,H1|T],[Y,Y1|T1],[H,H1,Y,Y1|V]):-
    uniao(T,T1,V).

uniao([H|T],[Y|T1],[H,Y|V]):-
    uniao(T,T1,V).



%d
diferenca([], _, []).

diferenca([H|T], [H|TS], Y):-
    diferenca(T, TS, Y).

diferenca([H|T], [_|TS], [H|Y]):-
    diferenca(T, TS, Y).



