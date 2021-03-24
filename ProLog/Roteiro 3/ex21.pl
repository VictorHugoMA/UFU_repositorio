ncombinacoes(0,_,[]).

ncombinacoes(N,[X|T],[X|ncombinacoes]):-
    N>0,
    N1 is N-1,
    ncombinacoes(N1,T,ncombinacoes).

ncombinacoes(N,[_|T],ncombinacoes):-
    N>0,
    ncombinacoes(N,T,ncombinacoes).

%n