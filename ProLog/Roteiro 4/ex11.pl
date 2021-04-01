fatores_primos(N, F):-
    findall(D, fatPS(N, D), F).

fatPS(N, D):-
    fatP(N, 2, D).

fatP(N, D, D):-
    0 is N mod D.
fatP(N, D, R):-
    D < N,
    (0 is N mod D
    -> (N1 is N/D, fatP(N1, D, R));  
    (D1 is D + 1, fatP(N, D1, R))).