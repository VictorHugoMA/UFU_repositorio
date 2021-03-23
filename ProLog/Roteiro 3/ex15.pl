prodEsc([], [], _).

prodEsc([X|XS], [Y|YS], Resul):-
    Resul is Resul+X*Y,
    prodEsc(XS, YS, Resul).

%n