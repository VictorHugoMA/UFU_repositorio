concatena([], L, L).
concatena([H|L1], L2, [H|L3]):-
    concatena(L1, L2, L3).

duplicada(L):-
    concatena(L1, L1, L).