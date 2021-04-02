romano(N, ['M'|T]):-
    N >= 1000,
    X is N-1000,
    romano(X, T).

romano(N, ['CM'|T]):-
    N >= 900,
    X is N-900,
    romano(X, T).

romano(N, ['D'|T]):-
    N >= 500,
    X is N-500,
    romano(X, T).

romano(N, ['CD'|T]):-
    N >= 400,
    X is N-400,
    romano(X, T).

romano(N, ['C'|T]) :-
    N >= 100,
    X is N-100,
    romano(X, T).

romano(N, ['L'|T]):-
    N >= 50,
    X is N-50,
    romano(X, T).

romano(N, ['XL'|T]):-
    N >= 40,
    X is N-40,
    romano(X, T).

romano(N, ['X'|T]):-
    N > 9,
    X is N-10,
    romano(X, T).

romano(N, ['IX'|_]):-
    N = 9.

romano(N, ['V'|T]):-
    N > 4,
    X is N-5,
    romano(X, T).

romano(N, ['IV'|_]):-
    N = 4.

romano(N, ['I'|T]):-
    N >= 1,
    X is N-1,
    romano(X, T).

romano(N, []):-
    N = 0.