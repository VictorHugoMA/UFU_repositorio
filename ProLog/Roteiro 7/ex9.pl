/*
A
?- assert(q(a, b)), assertz(q(1, 2)), asserta(q(foo, blug )).

Vai ser inlcuido esta base de dados ao programa em tempo de execucao 

:- dynamic q/2.

q(foo, blug).
q(a, b).
q(a, b).
q(1, 2).

B
 ?- retract(q(1, 2)), assertz((p(X):- h(X))).

 sera retirado o q(1,2) e adicionado o p(X)

 :- dynamic q/2.

q(foo, blug).
q(a, b).
q(a, b).

C
?- retract(q(_,_)), fail.

os q(X,Y) foram dados como fail, portando foram retirados todos os dados que davam true na base de dados 

:- dynamic q/2.


*/