s(C):- sn(A), sv(B), append(A,B,C).
sn(C):- det(A), n(B), append(A,B,C).
sv(C):- v(A), sn(B), append(A,B,C).
sv(C):- v(C).
det([o]). det([a]).
n([homem]). n([mulher]). n([bola]).
v([chuta]).

/*
[trace]  ?- s([a, mulher, chuta, o, homem]).
   Call: (10) s([a, mulher, chuta, o, homem]) ? creep
   Call: (11) sn(_610) ? creep
   Call: (12) det(_654) ? creep
   Exit: (12) det([o]) ? creep
   Call: (12) n(_748) ? creep
   Exit: (12) n([homem]) ? creep
   Call: (12) lists:append([o], [homem], _846) ? creep
   Exit: (12) lists:append([o], [homem], [o, homem]) ? creep
   Exit: (11) sn([o, homem]) ? creep
   Call: (11) sv(_980) ? creep
   Call: (12) v(_1024) ? creep
   Exit: (12) v([chuta]) ? creep
   Call: (12) sn(_1118) ? creep
   Call: (13) det(_1162) ? creep
   Exit: (13) det([o]) ? creep
   Call: (13) n(_1256) ? creep
   Exit: (13) n([homem]) ? creep
   Call: (13) lists:append([o], [homem], _1354) ? creep
   Exit: (13) lists:append([o], [homem], [o, homem]) ? creep
   Exit: (12) sn([o, homem]) ? creep
   Call: (12) lists:append([chuta], [o, homem], _1492) ? creep
   Exit: (12) lists:append([chuta], [o, homem], [chuta, o, homem]) ? creep
   Exit: (11) sv([chuta, o, homem]) ? creep
   Call: (11) lists:append([o, homem], [chuta, o, homem], [a, mulher, chuta, o, homem]) ? 
    .
    .
    .
    true.
*/