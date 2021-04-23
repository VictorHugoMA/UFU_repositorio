unificavel([],_,[]).

unificavel([X|HS],Y,G):-
    \+ X=Y, !,
    unificavel(HS,Y,G).

unificavel([X|HS],Y,[X|G]):-
    unificavel(HS,Y,G). 