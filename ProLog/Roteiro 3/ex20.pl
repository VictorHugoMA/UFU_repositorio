combinacao(0,_,[]).

combinacao(N,[X|Xs],[X|Ys]):-
    N>0,
    N1 is N-1,
    combinacao(N1,Xs,Ys).

combinacao(N,[_|Xs], Ys):- 
    N>0,
    combinacao(N,Xs,Ys).

/*
a) Eh possivel formar 252 combinacoes, algumas delas sao:
?- combinacao(5, [a1,a2,a3,a4,a5,a6,a7,a8,a9,a10], C).
C = [a1, a2, a3, a4, a5] ;
C = [a1, a2, a3, a4, a6] ;
C = [a1, a2, a3, a4, a7] ;
C = [a1, a2, a3, a4, a8] ;
C = [a1, a2, a3, a4, a9] ;
C = [a1, a2, a3, a4, a10] ;
C = [a1, a2, a3, a5, a6] ;
C = [a1, a2, a3, a5, a7] ;
C = [a1, a2, a3, a5, a8] ;
C = [a1, a2, a3, a5, a9] ;
C = [a1, a2, a3, a5, a10] ;
.
.
.
false.

b)


*/