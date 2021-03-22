minAcum([H|T], A, Min):-
    H<A,
    minAcum(T, H, Min).

minAcum([_|T], A, Min):-
    minAcum(T, A, Min).

minAcum([], A, A).

%adicionado um capa

min([H|T], Min):-
    minAcum(T, H, Min).