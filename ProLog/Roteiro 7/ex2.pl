/*
%com ! e fail
aprecia(vicente,X):- bigKahunaBurger(X), !, fail.
aprecia(vicente,X):- hamburguer(X).

hamburguer(X):- bigMac(X).
hamburguer(X):- bigKahunaBurger(X).
hamburguer(X):- whopper(X).

bigMac(a).
bigKahunaBurger(b).
whopper(c).
*/


%certo
aprecia(vicente,X):-
    hamburguer(X),
    \+ bigKahunaBurger(X).

hamburguer(X):- bigMac(X).
hamburguer(X):- bigKahunaBurger(X).
hamburguer(X):- whopper(X).

bigMac(a).
bigKahunaBurger(b).
whopper(c).

/*
%errado
aprecia(vicente,X):-
    \+ bigKahunaBurger(X).
    hamburguer(X),

hamburguer(X):- bigMac(X).
hamburguer(X):- bigKahunaBurger(X).
hamburguer(X):- whopper(X).

bigMac(a).
bigKahunaBurger(b).
whopper(c).
*/