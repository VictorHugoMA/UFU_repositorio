intersecao([],_,[]).

intersecao([X|XS],Y,M):-
    member(X,Y),
    M = [X|M1],
    intersecao(XS,Y,M1).

intersecao([_|XS],Y,M):-
    intersecao(XS,Y,M).

segmento(X, Y):-
    intersecao(X, Y, [_,_,_|_]).