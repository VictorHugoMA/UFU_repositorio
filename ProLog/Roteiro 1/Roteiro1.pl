%ex 1,3 e 4
pai(carlos,ana).
pai(carlos,juliana).
pai(joao, carlos).
mulher(ana).
mulher(juliana).
homem(carlos).
homem(joao).
mae(maria,ana).
mae(maria, juliana).
avo(X,Y):- pai(X,Z), pai(Z,Y).
filho(X, Y) :- homem(X), pai(Y, X).
filha(X, Y) :- mulher(X), pai(Y, X).
irmao(X, Y) :- homem(X), pai(Z, X), pai(Z, Y).
irma(X, Y) :- mulher(X), pai(Z, X), pai(Z, Y).
irmaos(X, Y):- irmao(X, Y); irma(X, Y).
tio(X, Y):- homem(X), pai(Z, Y), irmao(Z, X).
primo(X, Y):- homem(X), pai(Z, X), pai(W, Y), irmaos(Z, Y).
prima(X, Y):- mulher(X), pai(Z, X), pai(W, Y), irmaos(Z, Y).
avoM(X, Y):- mae(X,Z), mae(Z,Y).

/*
ex2
?-pai(X, ana).
X=carlos

?-pai(X, Y).
X = carlos,
Y = ana;
X = carlos,
Y = juliana

adicionando mais ligacoes
?- pai(Y,ana),pai(X,Y).
X = joao,
Y = carlos
*/


/*
ex3
?- pai(joao, carlos), pai(carllos, Y).
Y=ana;
Y=juliana

?-pai(X, ana), pai(X, juliana).
X=carlos
*/




%Mundo Harry Potter 
elfo_domestico(dobby).
bruxo(hermione).
bruxo('McGonagall').
bruxo(rita_skeeter).
feiticeiro(harry).
magico(X):- elfo_domestico(X).
magico(X):−feiticeiro(X).
magico(X):- bruxo(X).

/*
Sem a clausula feiticeiro(harry). as consultas nao funcionam.
com ela ela:

ex5
?- magico(elfo_domestico).
false

ex6
feiticeiro(harry).
true

ex7
?- magico(feiticeiro).
false

ex8
?- magico('McGonagall').
true

ex9
?- magico(Hermione).
Hermione = dobby
Hermione = hermione
Hermione = harry
Hermione = 'McGonagall'
Hermione = rita_skeeter
*/

%ex10
palavra(artigo,um).
palavra(artigo,qualquer).
palavra(nome,criminoso).
palavra(nome,'mac lanche feliz').
palavra(verbo,come).
palavra(verbo,adora).
sentenca(Palavra1,Palavra2,Palavra3,Palavra4,Palavra5):-
		palavra(artigo,Palavra1),
		palavra(nome,Palavra2),
		palavra(verbo,Palavra3),
		palavra(artigo,Palavra4),
		palavra(nome,Palavra5).

/*
?-sentenca(A,B,C,D,E).

ex11
A = D, D = um,
B = E, E = criminoso,
C = come

A = D, D = um,
B = criminoso,
C = come,
E = 'mac lanche feliz'

A = um,
B = E, E = criminoso,
C = come,
D = qualquer

A = um,
B = criminoso,
C = come,
D = qualquer,
E = 'mac lanche feliz'

A = D, D = um,
B = E, E = criminoso,
C = adora

A = D, D = um,
B = criminoso,
C = adora,
E = 'mac lanche feliz'

A = um,
B = E, E = criminoso,
C = adora,
D = qualquer

A = um,
B = criminoso,
C = adora,
D = qualquer,
E = 'mac lanche feliz'

A = D, D = um,
B = 'mac lanche feliz',
C = come,
E = criminoso

A = D, D = um,
B = E, E = 'mac lanche feliz',
C = come

A = um,
B = 'mac lanche feliz',
C = come,
D = qualquer,
E = criminoso

A = um,
B = E, E = 'mac lanche feliz',
C = come,
D = qualquer

A = D, D = um,
B = 'mac lanche feliz',
C = adora,
E = criminoso

A = D, D = um,
B = E, E = 'mac lanche feliz',
C = adora

A = um,
B = 'mac lanche feliz',
C = adora,
D = qualquer,
E = criminoso

A = um,
B = E, E = 'mac lanche feliz',
C = adora,
D = qualquer

A = qualquer,
B = E, E = criminoso,
C = come,
D = um

A = qualquer,
B = criminoso,
C = come,
D = um,
E = 'mac lanche feliz'

A = D, D = qualquer,
B = E, E = criminoso,
C = come

A = D, D = qualquer,
B = criminoso,
C = come,
E = 'mac lanche feliz'

A = qualquer,
B = E, E = criminoso,
C = adora,
D = um

A = qualquer,
B = criminoso,
C = adora,
D = um,
E = 'mac lanche feliz'

A = D, D = qualquer,
B = E, E = criminoso,
C = adora

A = D, D = qualquer,
B = criminoso,
C = adora,
E = 'mac lanche feliz'

A = qualquer,
B = 'mac lanche feliz',
C = come,
D = um,
E = criminoso

A = qualquer,
B = E, E = 'mac lanche feliz',
C = come,
D = um

A = D, D = qualquer,
B = 'mac lanche feliz',
C = come,
E = criminoso

A = D, D = qualquer,
B = E, E = 'mac lanche feliz',
C = come

A = qualquer,
B = 'mac lanche feliz',
C = adora,
D = um,
E = criminoso

A = qualquer,
B = E, E = 'mac lanche feliz',
C = adora,
D = um

A = D, D = qualquer,
B = 'mac lanche feliz',
C = adora,
E = criminoso

A = D, D = qualquer,
B = E, E = 'mac lanche feliz',
C = adora
*/

%ex12 e 20
aluno(joao,poo).
aluno(pedro,poo).
aluno(maria,pl).
aluno(rui,pl).
aluno(manuel,pl).
aluno(pedro,pl).
aluno(rui,ed1).
estuda(joao).
estuda(maria).
estuda(manuel).

/*
ex12
utilizando listing, percebe-se que estao presentes

ex13
?-aluno(joao, pl).
false

ex14
?-aluno(rui, poo).
false

ex15
?-aluno(joao, ed1), aluno(maria, ed1).
false

ex16
?-aluno(X, pl).
X = maria
X = rui
X = manuel
X = pedro

ex17
?-aluno(rui, X).
X = pl
X = ed1

ex18
?-aluno(maria, pl), estuda(maria).
true

ex19
?-aluno(X,pl), estuda(X).
X = maria
X = manuel
permite saber que alunos estuda e faz pl

ex20
?-fazpl(maria).
true
?-fazpl(manuel).
true
*/