tipotermo(X,R):-
    atom(X),
    R = atomo.

tipotermo(X,R):-
    number(X),
    R = numero.

tipotermo(X,R):-
    var(X),
    R = variavel.

tipotermo(X,R):-
    atomic(X),
    R = constante.

tipotermo(X, R):-
    nonvar(X),
    functor(X, _, A),
    A>0,
    R = termo_complexo.

tipotermo(X,R):-
    atomic(X),
    R = termo_simples;
    var(X),
    R = termo_simples.

tipotermo(_, R):-
    R = termo.
