ocorrencias(_, [], 0).

ocorrencias(X, [X|T], N):-
    ocorrencias(X, T, N1),
    N is 1+N1.

ocorrencias(X, [_|T], N):-
    ocorrencias(X, T, N).
