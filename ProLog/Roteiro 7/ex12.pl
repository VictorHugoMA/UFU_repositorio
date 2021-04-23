triplas(X, Y, Z|H):-
    X>=0,
    X=<9,
    X/Z=:=(10*X+Y)/(10*Y+Z),
    triplas(H).

