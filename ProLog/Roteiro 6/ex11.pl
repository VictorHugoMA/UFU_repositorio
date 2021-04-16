:- op(300,xfx,h).
:- op(510,yfx,++).
:- op(410,yfx,**).
:- op(710,xfy,<-).

 X h Y :- 
    number(X),
    number(Y).

soma_hora(H1 h M1, H2 h M2, ResH h ResM):- 
    Aux is H1 + H2,
    Aux2 is M1 + M2,
    (Aux2 >= 60 ->  ResH is Aux + (Aux2//60); ResH is Aux),
    (Aux2 >= 60 -> ResM is Aux2 mod 60; ResM is Aux2).


mult_hora(X, H h M, ResH h ResM):- 
    Aux is H * X,
    Aux2 is M * X,
    (Aux2 >= 60 ->  ResH is Aux + (Aux2//60); ResH is Aux),
    (Aux2 >= 60 -> ResM is Aux2 mod 60; ResM is Aux2).


H <- X ++ Y :- soma_hora(X,Y,H).
H <- X ** Y :- mult_hora(X,Y,H).
H <- X1 ** X2 ++ Y1 ** Y2 :- 
    mult_hora(X1,X2,H1),
    mult_hora(Y1,Y2,H2),
    soma_hora(H1,H2,H).

H <- X1 ** X2 ++  Y2 :- 
    mult_hora(X1,X2,H1),
    soma_hora(H1,Y2,H).
H <- X1  ++ Y1 ** Y2 :- 
    mult_hora(Y1,Y2,H2),
    soma_hora(X1,H2,H).