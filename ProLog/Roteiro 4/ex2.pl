soma_ate(0, 0).

soma_ate(X, N):-
    soma_ate(X-1, N1),
    N is X+N1.

%n