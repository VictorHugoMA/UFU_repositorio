conj_potencia(X, Lista):-
    findall(Y, subconjunto(Y, X), Lista).



subconjunto([],_).

subconjunto([X|H],K):-
    member(X,K),
    subconjunto(H,K), !.

