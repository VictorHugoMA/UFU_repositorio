multiEsc(_, [], []).

multiEsc(X, [H|T], [RH|RT]):-
    RH is X+H,
    multiEsc (X, T, RT).