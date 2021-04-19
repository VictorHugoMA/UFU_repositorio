%a
nu(X, Y):-
    \+ X = Y.

%b
nu2(X, Y):-
    X\=Y.

%c
nu3(X, Y):-
    X=Y, !, fail.
nu3(_, _).