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
*/
% b)

combinacaoP(X):-
    combinacao(3, [m1,m2,m3,m4,m5,m6,m7,m8,m9], M),
    combinacao(4, [c1,c2,c3,c4,c5,c6,c7,c8,c9, c10, c11], C),
    append(M, C, X).

/*
algumas das combinacoes de professores sao:
?- combinacaoP(X).
X = [m1, m2, m3, c1, c2, c3, c4] ;
X = [m1, m2, m3, c1, c2, c3, c5] ;
X = [m1, m2, m3, c1, c2, c3, c6] ;
X = [m1, m2, m3, c1, c2, c3, c7] ;
X = [m1, m2, m3, c1, c2, c3, c8] ;
X = [m1, m2, m3, c1, c2, c3, c9] ;
X = [m1, m2, m3, c1, c2, c3, c10] ;
X = [m1, m2, m3, c1, c2, c3, c11] ;
X = [m1, m2, m3, c1, c2, c4, c5] ;
X = [m1, m2, m3, c1, c2, c4, c6] ;
X = [m1, m2, m3, c1, c2, c4, c7] ;
X = [m1, m2, m3, c1, c2, c4, c8] ;
X = [m1, m2, m3, c1, c2, c4, c9] ;
X = [m1, m2, m3, c1, c2, c4, c10] ;
X = [m1, m2, m3, c1, c2, c4, c11] ;
X = [m1, m2, m3, c1, c2, c5, c6] ;
X = [m1, m2, m3, c1, c2, c5, c7] ;
.
.
.
false.
*/