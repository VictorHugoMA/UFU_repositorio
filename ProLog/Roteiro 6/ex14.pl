/*
divide([], [], []).
divide([X|T], [X|L1], L2):-
    X >= 0,
    divide(T, L1, L2).

divide([X|T], L1, [X|L2]):-
    X < 0,
    divide(T, L1, L2).
*/

divide([], [], []).
divide([X|T], [X|L1], L2):-
    X >= 0,
    divide(T, L1, L2), !.

divide([X|T], L1, [X|L2]):-
    X < 0,
    divide(T, L1, L2).