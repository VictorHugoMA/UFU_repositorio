:-op(300, xfx, h).

mult_hora(X, H h M, ResH h ResM):- 
    Aux is H * X,
    Aux2 is M * X,
    (Aux2 >= 60 ->  ResH is Aux + 1; ResH is Aux),
    (Aux2 >= 60 -> ResM is Aux2 - 60; ResM is Aux2).