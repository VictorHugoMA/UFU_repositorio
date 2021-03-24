intercala1(X1, [], X1).
intercala1([], Y1, Y1).
intercala1([], [], _).

intercala1([X|XS], [Y|YS], [L,LS|T]):-
    L=X,
    LS=Y,
    intercala1(XS, YS, T).


