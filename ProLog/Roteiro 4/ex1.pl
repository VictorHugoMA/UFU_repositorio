soma_acum([],[]).
soma_acum([H|T], [K, K2|KS]):-
    K is H,
    K2 is K+H,
    soma_acum(T, KS).