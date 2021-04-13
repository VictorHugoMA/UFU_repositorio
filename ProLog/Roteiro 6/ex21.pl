f(p).
f(q):- !.
f(r).

/*
?- f(p).
true.

[trace]  ?- f(p).
   Call: (10) f(p) ? creep
   Exit: (10) f(p) ? creep
true.


?- f(q).
true.

[trace]  ?- f(q).
   Call: (10) f(q) ? creep
   Exit: (10) f(q) ? creep
true.


?- f(r).
true.

[trace]  ?- f(r).
   Call: (10) f(r) ? creep
   Exit: (10) f(r) ? creep
true.


?- f(X).
X=p;
X=q.

[trace]  ?- f(X).
   Call: (10) f(_41174) ? creep
   Exit: (10) f(p) ? creep
X = p ;
   Redo: (10) f(_41174) ? creep
   Exit: (10) f(q) ? creep
X = q.
*/
