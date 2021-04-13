f(X):- ! , X = p.
f(X):- X =q ,!.
f(X):- X = r.

/*
?- f(p).
true.

[trace]  ?- f(p).
   Call: (10) f(p) ? creep
   Call: (11) p=p ? creep
   Exit: (11) p=p ? creep
   Exit: (10) f(p) ? creep
true.


?- f(q).
false.

[trace]  ?- f(q).
   Call: (10) f(q) ? creep
   Call: (11) q=p ? creep
   Fail: (11) q=p ? creep
   Fail: (10) f(q) ? creep
false.


?- f(r).
false.

[trace]  ?- f(r).
   Call: (10) f(r) ? creep
   Call: (11) r=p ? creep
   Fail: (11) r=p ? creep
   Fail: (10) f(r) ? creep
false.


?- f(X).
X=p.

[trace]  ?- f(X).
   Call: (10) f(_17620) ? creep
   Call: (11) _17620=p ? creep
   Exit: (11) p=p ? creep
   Exit: (10) f(p) ? creep
X = p.
*/
