soma_acum([], []).
soma_acum([H|T], [H|ST]) :-
    soma_acum(T, H, ST).

soma_acum([], _, []).            
soma_acum([H|T], S, [S1|ST]) :- 
    S1 is H + S,           
    soma_acum(T, S1, ST).