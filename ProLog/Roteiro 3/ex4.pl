intercala3(X1, [], X1).
intercala3([], Y1, Y1).
intercala3([], [], _).

intercala3([X|XS], [Y|YS], [junta(L,LS)|T]):-
    L=X,
    LS=Y,
    intercala3(XS, YS, T).