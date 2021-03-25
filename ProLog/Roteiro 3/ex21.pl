fatorial(0,1). 
fatorial(M,N):-
   M>0,
   M1 is M-1,
   fatorial(M1,N1),
   N is M*N1.

ncombinacoes(M, P, N):-
    fatorial(M, X),
    fatorial(P, Y),
    Z is M-P,
    fatorial(Z, W),
    N is X/(Y*W).