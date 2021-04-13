f(X):- X = p.
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
true ;
   Redo: (10) f(p) ? creep
   Call: (11) p=q ? creep
   Fail: (11) p=q ? creep
   Redo: (10) f(p) ? creep
   Call: (11) p=r ? creep
   Fail: (11) p=r ? creep
   Fail: (10) f(p) ? creep
false.


?- f(q).
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


?- f(r).
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


?- f(X).
X=p;
X=q.

[trace]  ?- f(X).
   Call: (10) f(_29442) ? creep
   Call: (11) _29442=p ? creep
   Exit: (11) p=p ? creep
   Exit: (10) f(p) ? creep
X = p ;
   Redo: (10) f(_29442) ? creep
   Call: (11) _29442=q ? creep
   Exit: (11) q=q ? creep
   Exit: (10) f(q) ? creep
X = q.
*/
