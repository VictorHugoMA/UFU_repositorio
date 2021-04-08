s--> sn(sujeito, X), sv(X).

sn(_, X)--> det(X), n(X).
sn(P, _)--> pro(P).

sv(X)--> v(X), sn(objeto, X).
sv(X)--> v(X).

det(sing) --> [o].
det(plur) --> [os].
det(sing) --> [a].

pro(sujeito)--> [ele].
pro(sujeito)--> [ela].
pro(objeto)--> [nele].
pro(objeto)--> [nela].

n(sing) --> [mulher].
n(sing) --> [homem].
n(plur) --> [homens].

v(sing) --> [bate].
v(plur) --> [batem].