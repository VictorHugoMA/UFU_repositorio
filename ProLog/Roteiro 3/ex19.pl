npermutacoes(0,1). 
npermutacoes(M,N):-
   M>0,
   M1 is M-1,
   npermutacoes(M1,N1),
   N is M*N1.

/*
No exercicio A foram gerados 24 permutacoes
E no exercicio B foram gerados 120 permutacoes
*/