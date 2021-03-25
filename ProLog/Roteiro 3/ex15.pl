prodEsc([], [], 0).

prodEsc([X|XS], [Y|YS], Resul):-
    prodEsc(XS, YS, Z),
    Resul is X*Y+Z.
