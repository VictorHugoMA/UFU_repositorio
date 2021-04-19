max1(X,Y,Y):- X =< Y.
max1(X,Y,X):- X>Y.

/*
[trace]  ?- max1(1,2,X).
   Call: (10) max1(1, 2, _13478) ? creep
   Call: (11) 1=<2 ? creep
   Exit: (11) 1=<2 ? creep
   Exit: (10) max1(1, 2, 2) ? creep
X = 2 ;
   Redo: (10) max1(1, 2, _13478) ? creep
   Call: (11) 1>2 ? creep
   Fail: (11) 1>2 ? creep
   Fail: (10) max1(1, 2, _13478) ? creep
false.
*/

max2(X,Y,Y):- X =< Y, !.
max2(X,Y,X):- X>Y.

/*
[trace]  ?- max2(1,2,X).
   Call: (10) max2(1, 2, _15690) ? creep
   Call: (11) 1=<2 ? creep
   Exit: (11) 1=<2 ? creep
   Exit: (10) max2(1, 2, 2) ? creep
X = 2.
*/

max3(X,Y,Z):- X =< Y, !, Y=Z.
max3(X,Y,X).

/*
[trace]  ?- max3(1,2,X).
   Call: (10) max3(1, 2, _18526) ? creep
   Call: (11) 1=<2 ? creep
   Exit: (11) 1=<2 ? creep
   Call: (11) 2=_18526 ? creep
   Exit: (11) 2=2 ? creep
   Exit: (10) max3(1, 2, 2) ? creep
X = 2.
*/

