equiv(X, Y):-
    X=Y.

impl(X, Y):-
    X=falso, Y=falso;
    X=falso, Y=verdade;
    X=verdade, Y=verdade.

ou(X, Y):-
    X=verdade; Y=verdade.

e(X, Y):-
    X=verdade, Y=verdade.

nao(X):-
    X=falso.

prova(X):-X.

    
