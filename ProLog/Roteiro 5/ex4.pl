s --> sn, sv.

sn --> det, n.

sv --> v, sn.
sv --> v.

det --> [o].
det --> [a].

n --> [homem]. n --> [mulher]. n --> [bola].
v --> [chuta].

/*
[trace]  ?- s([o, homem, chuta, o, homem], []).
   Call: (10) s([o, homem, chuta, o, homem], []) ? creep
   Call: (11) sn([o, homem, chuta, o, homem], _9646) ? creep
   Call: (12) det([o, homem, chuta, o, homem], _9690) ? creep
   Exit: (12) det([o, homem, chuta, o, homem], [homem, chuta, o, homem]) ? creep
   Call: (12) n([homem, chuta, o, homem], _9778) ? creep
   Exit: (12) n([homem, chuta, o, homem], [chuta, o, homem]) ? creep
   Exit: (11) sn([o, homem, chuta, o, homem], [chuta, o, homem]) ? creep
   Call: (11) sv([chuta, o, homem], []) ? creep
   Call: (12) v([chuta, o, homem], _9954) ? creep
   Exit: (12) v([chuta, o, homem], [o, homem]) ? creep
   Call: (12) sn([o, homem], []) ? creep
   Call: (13) det([o, homem], _10086) ? creep
   Exit: (13) det([o, homem], [homem]) ? creep
   Call: (13) n([homem], []) ? creep
   Exit: (13) n([homem], []) ? creep
   Exit: (12) sn([o, homem], []) ? creep
   Exit: (11) sv([chuta, o, homem], []) ? creep
   Exit: (10) s([o, homem, chuta, o, homem], []) ? creep
true .

[trace]  ?- s([o, homem, chuta, a, bola], []).
   Call: (10) s([o, homem, chuta, a, bola], []) ? creep
   Call: (11) sn([o, homem, chuta, a, bola], _12106) ? creep
   Call: (12) det([o, homem, chuta, a, bola], _12150) ? creep
   Exit: (12) det([o, homem, chuta, a, bola], [homem, chuta, a, bola]) ? creep
   Call: (12) n([homem, chuta, a, bola], _12238) ? creep
   Exit: (12) n([homem, chuta, a, bola], [chuta, a, bola]) ? creep
   Exit: (11) sn([o, homem, chuta, a, bola], [chuta, a, bola]) ? creep
   Call: (11) sv([chuta, a, bola], []) ? creep
   Call: (12) v([chuta, a, bola], _12414) ? creep
   Exit: (12) v([chuta, a, bola], [a, bola]) ? creep
   Call: (12) sn([a, bola], []) ? creep
   Call: (13) det([a, bola], _12546) ? creep
   Exit: (13) det([a, bola], [bola]) ? creep
   Call: (13) n([bola], []) ? creep
   Exit: (13) n([bola], []) ? creep
   Exit: (12) sn([a, bola], []) ? creep
   Exit: (11) sv([chuta, a, bola], []) ? creep
   Exit: (10) s([o, homem, chuta, a, bola], []) ? creep
true .
*/