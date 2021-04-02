%a
disjunto([],_).
disjunto([X|H],K):-
    \+member(X,K),
    disjunto(H,K).


%b
uniao([],[],[]).

uniao([H,H1|T],[K,Y1|T1],[H,H1,K,Y1|M]):-
    uniao(T,T1,M).

uniao([H|T],[K|T1],[H,K|M]):-
    uniao(T,T1,M).


%c
intersecao([],_,[]).

intersecao([X|XS],Y,M):-
    member(X,Y),
    M = [X|M1],
    intersecao(XS,Y,M1).

intersecao([_|XS],Y,M):-
    intersecao(XS,Y,M).


%d
diferenca([],_,[]).

diferenca([X|XS],Y,[M|MS]):-
    \+ member(X,Y),
    M is X,
    diferenca(XS,Y,MS).

diferenca([X|XS],Y,M):-
    member(X,Y),
    diferenca(XS,Y,M).