intercala1(X1, [], X1):- !.
intercala1([], Y1, Y1).

intercala1([X|X1], [Y|Y1], [X | Z1]):-
    X<Y, !,
    intercala1[X1, [Y|Y1], Z1).

intercala1([X|X1], [Y|Y1], [X, Y|Z1]):-
    X=Y, !,
    intercala1(X1, Y1, Z1).

intercala1([X|X1], [Y|Y1], [Y|Z1]):-
    intercala1([X|X1], Y1, Z1).

%n

