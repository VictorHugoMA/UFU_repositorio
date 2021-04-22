subconjunto([],_).

subconjunto([X|H],K):-
    member(X,K),
    subconjunto(H,K).
