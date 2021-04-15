:-op(300, xfx, h).

soma_hora(H1 h M1, H2 h M2, ResH h ResM):- 
    Aux is H1 + H2,
    Aux2 is M1 + M2,
    (Aux2 >= 60 ->  ResH is Aux + 1; ResH is Aux),
    (Aux2 >= 60 -> ResM is Aux2 - 60; ResM is Aux2).