prodEsc([], [], _).

prodEsc([X|XS], [Y|YS], Resul):-
    Resul is X*Y,
    prodEsc(XS, YS, Resul).

%n