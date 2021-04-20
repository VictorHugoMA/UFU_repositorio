pais(australia, oceania, 25, []).

pais(belgica, europa, 11, [franca, holanda, alemanha]).

pais(espanha, europa, 47, [portugal, franca]).

pais(franca, europa, 67, [espanha, suica,   belgica, alemanha,italia]).

pais(holanda, europa, 17, [belgica, alemanha]).

pais(indonesia, oceania, 268, []).

pais(italia, europa, 60, [franca, suica]).

pais(madagascar, africa, 26, []).

pais(portugal, europa, 10, [espanha]).

pais(suica, europa, 8, [franca, alemanha, italia]).

isolados_grande(Lista):-
    setof(Cont, isolados(Cont), Lista).

isolados(Cont):-
    pais(_Pais, Cont, Pop, Front),
    15=<Pop,
    length(Front , X),
    X=<2.