soma_acum([], []).
soma_acum([X|T], [X|ST]) :-
    soma_acum(T, X, ST).

soma_acum([], _, []).            
soma_acum([X|T], S, [S1|ST]) :- 
    S1 is X + S,           
    soma_acum(T, S1, ST).