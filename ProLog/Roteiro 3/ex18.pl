remove(X, [X|XS], XS).
remove(X, [Y|YS], [Y|T]):-
    remove(X, YS, T).


permutacao([],[]).
permutacao(Xs,[Y|Zs]):-
    remove(Y,Xs,Ys),
    permutacao(Ys,Zs).

/*
a)
?-permutacao([a,m,o,r], L).
L = [a, m, o, r] ;
L = [a, m, r, o] ;
L = [a, o, m, r] ;
L = [a, o, r, m] ;
L = [a, r, m, o] ;
L = [a, r, o, m] ;
L = [m, a, o, r] ;
L = [m, a, r, o] ;
L = [m, o, a, r] ;
L = [m, o, r, a] ;
L = [m, r, a, o] ;
L = [m, r, o, a] ;
L = [o, a, m, r] ;
L = [o, a, r, m] ;
L = [o, m, a, r] ;
L = [o, m, r, a] ;
L = [o, r, a, m] ;
L = [o, r, m, a] ;
L = [r, a, m, o] ;
L = [r, a, o, m] ;
L = [r, m, a, o] ;
L = [r, m, o, a] ;
L = [r, o, a, m] ;
L = [r, o, m, a] ;
false.

b)
eles podem estar em 120(5!) posicoes diferentes, algumas delas sao:

?-permutacao([carlos, rose, sergio, adriano, fabiola], L).
L = [carlos, rose, sergio, adriano, fabiola] ;
L = [carlos, rose, sergio, fabiola, adriano] ;
L = [carlos, rose, adriano, sergio, fabiola] ;
L = [carlos, rose, adriano, fabiola, sergio] ;
L = [carlos, rose, fabiola, sergio, adriano] ;
L = [carlos, rose, fabiola, adriano, sergio] ;
L = [carlos, sergio, rose, adriano, fabiola] ;
L = [carlos, sergio, rose, fabiola, adriano] ;
L = [carlos, sergio, adriano, rose, fabiola] ;
L = [carlos, sergio, adriano, fabiola, rose] ;
L = [carlos, sergio, fabiola, rose, adriano] ;
L = [carlos, sergio, fabiola, adriano, rose] ;
L = [carlos, adriano, rose, sergio, fabiola] ;
.
.
.
false.
*/