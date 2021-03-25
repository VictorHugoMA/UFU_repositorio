fatorial(0,1). 
fatorial(M,N):-
   M>0,
   M1 is M-1,
   fatorial(M1,N1),
   N is M*N1.

narranjos(M, P, N):-
    fatorial(M, X),
    Y is M-P,
    fatorial(Y, Z),
    N is X/Z. 