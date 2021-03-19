deCarro(auckland,hamilton).
deCarro(hamilton,raglan).
deCarro(valmont,saarbruecken).
deCarro(valmont,metz).

deTrem(metz,frankfurt).
deTrem(saarbruecken,frankfurt).
deTrem(metz,paris).
deTrem(saarbruecken,paris).

deAviao(frankfurt,bangkok).
deAviao(frankfurt,singapore).
deAviao(paris,losAngeles).
deAviao(bangkok,auckland).
deAviao(losAngeles,auckland).

viagem(X, Y, vai(X, de_carro, Y)):-
    deCarro(X, Y).
viagem(X, Y, vai(X, de_trem, Y)):-
    deTrem(X, Y).
viagem(X, Y, vai(X, de_aviao, Y)):-
    deAviao(X, Y).

viagem(X, Y, vai(X, de_carro, Z, W)):-
    deCarro(X, Z),
    viagem(Z, Y, W).
viagem(X, Y, vai(X, de_trem, Z, W)):-
    deTrem(X, Z),
    viagem(Z, Y, W).
viagem(X, Y, vai(X, de_aviao, Z, W)):-
    deAviao(X, Z),
    viagem(Z, Y, W).