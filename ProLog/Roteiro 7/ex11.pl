:-dynamic res_somatorio/2.

somatorio(X, Resul):-
    res_somatorio(X, Resul), !.

somatorio(X,Resul):- 
    somatorio(X,0,Resul).

somatorio(0,Resul,Resul).     
somatorio(X,T,Resul):-     
    X>0,         
    T1 is T+X,     
    X1 is X-1,     
    somatorio(X1,T1,Resul),
    assert(res_somatorio(X, Resul)).