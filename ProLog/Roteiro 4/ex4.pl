sem_repeticao([],[]).

sem_repeticao([H|T], L):-    
    member(H, T),
    sem_repeticao(T, L).

sem_repeticao([H|T], [H|T1]):-
    \+member(H, T),
    sem_repeticao(T, T1).