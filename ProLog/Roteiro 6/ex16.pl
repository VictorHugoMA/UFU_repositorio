f(X):-  X =p ,!.
f(X):-  X =q ,!.
f(X):-  X = r.

/*
?- f (p).
true.

[trace]  ?- f(p).
   Call: (10) f(p) ? creep
   Call: (11) p=p ? creep
   Exit: (11) p=p ? creep
   Exit: (10) f(p) ? creep
true.


?- f (q).
true.

[trace]  ?- f(q).
   Call: (10) f(q) ? creep
   Call: (11) q=p ? creep
   Fail: (11) q=p ? creep
   Redo: (10) f(q) ? creep
   Call: (11) q=q ? creep
   Exit: (11) q=q ? creep
   Exit: (10) f(q) ? creep
true.


?- f (r).
true.

[trace]  ?- f(r).
   Call: (10) f(r) ? creep
   Call: (11) r=p ? creep
   Fail: (11) r=p ? creep
   Redo: (10) f(r) ? creep
   Call: (11) r=q ? creep
   Fail: (11) r=q ? creep
   Redo: (10) f(r) ? creep
   Call: (11) r=r ? creep
   Exit: (11) r=r ? creep
   Exit: (10) f(r) ? creep
true.


?- f (X).
X=p.

[trace]  ?- f(X).
   Call: (10) f(_6052) ? creep
   Call: (11) _6052=p ? creep
   Exit: (11) p=p ? creep
   Exit: (10) f(p) ? creep
X = p.

*/