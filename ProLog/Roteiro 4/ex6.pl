bissexto(Ano):-
    X is Ano mod 100,
    X =\= 0,
    0 is Ano mod 4;
    0 is Ano mod 400.