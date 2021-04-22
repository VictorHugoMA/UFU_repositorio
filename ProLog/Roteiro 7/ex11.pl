:-dynamic consulta/2.

somatorio(X, Resul):-
    consulta(X, Resul), !.

somatorio(X,Resul):- 
    somatorio(X,0,Resul).

somatorio(0,Resul,Resul).     
somatorio(X,T,Resul):-     
    X>0,         
    T1 is T+X,     
    X1 is X-1,     
    somatorio(X1,T1,Resul),
    assert(consulta(X, Resul)).