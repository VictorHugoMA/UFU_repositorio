dec_para_bin(N,S):-
    dec_para_bin(N,[],S).

dec_para_bin(0,S,[0|S]).
dec_para_bin(1,S,[1|S]).
dec_para_bin(N,S,R):- 
    N > 1,
    X is N mod 2,
    Y is N // 2,  
    dec_para_bin(Y,[X|S],R).