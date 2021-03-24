intercala2(X1, [], X1).
intercala2([], Y1, Y1).
intercala2([], [], _).

intercala2([X|XS], [Y|YS], [[L,LS]|T]):-
    L=X,
    LS=Y,
    intercala2(XS, YS, T).