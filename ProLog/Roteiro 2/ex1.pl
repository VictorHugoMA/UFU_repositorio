%a
sobre(a, mesa).
sobre(b, a).

%b
/*
P= um objeto est ́a sobre outro
Q=  este objeto est ́a acima do outro
P -> Q
*/
acima_de(X, Y):-
    sobre(X,Z),
    sobre(Z, Y).

/* 
c
?- acima_de(b, mesa).
true.

*/
