ocorre([H|T], 1, H).
ocorre([_|T], N, X):-
    N1 is N-1,
    ocorre(T, N1, X).