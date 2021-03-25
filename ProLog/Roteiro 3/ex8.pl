concatena([], L, L).
concatena([H|L1], L2, [H|L3]):-
    concatena(L1, L2, L3).


palindromo([_]).
palindromo([H|L]):-
    concatena(Pre, [H], L),
    palindromo(Pre).

/*
1)
?- palindromo([s,o,c,o,r,r,a,m,m,e,s,u,b,i,n,o,o,n,i,b,u,s,e,m,m,a,r,r,o,c,o,s]).
true.

2)
?- palindromo([a,n,o,t,a,r,a,m,a,d,a,t,a,d,a,m,a,r,a,t,o,n,a]).
true.

3)
?- palindromo([a,d,r,o,g,a,d,a,g,o,r,d,a]).
true.

4)
?- palindromo([a,m,a,l,a,n,a,d,a,n,a,l,a,m,a]).
true.

5)
?- palindromo([a,t,o,r,r,e,d,a,d,e,r,r,o,t,a]).
true.
*/