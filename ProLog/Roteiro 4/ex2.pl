soma_ate(0, 0).
soma_ate(X, S):-
    X>0,
    X1 is X-1,
    soma_ate(X1, Ac),
    S is Ac+X.          