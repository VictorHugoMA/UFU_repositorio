--A
select p.nomeequ, p.paisequ
    from equipe p 
    where titulosequ > '2';

--B
select p.nomepes, p.tipopes, p.idpes
    from pessoa p
    inner join Equipe e on e.idequ = p.idequ
    where p.nomepes like 'J%'; 

--C
select p.nomepes ,m.especialidademec ,p2.nomepes as nome_sup
    from mecanico m
    join pessoa p on p.idpes =m.idpes
    join mecanico m2 on m.idsup = m2.idpes
    join pessoa p2 on m2.idpes =p2.idpes;

--D
select eq.nomeequ, count(pil.idpes) as QtdPiloto, eq.titulosequ
    from equipe eq 
    inner join pessoa p on p.idequ = eq.idequ 
    inner join piloto pil on p.idpes = pil.idpes
    group by eq.nomeequ, eq.titulosequ
    order by eq.titulosequ desc;

--E
select c.nomecir ,c.localcir ,c2.datacor,c2.categoriacor,c2.voltascor
    from circuito c 
    join corrida c2 on c2.idcir = c.idcir; 

--F
select p2.nomepes ,e.nomeequ
    from piloto p 
    join pessoa p2 on p2.idpes =p.idpes
    join equipe e on p2.idequ =e.idequ
    where p.titulospil =0;

--G
select cor.datacor, cor.categoriacor, cir.nomecir, p.nomepes
    from pessoa p
    inner join piloto pil on p.idpes = pil.idpes
    inner join participacao part on pil.idpes = part.idpes
    inner join corrida cor on cor.idcor = part.idcor
    inner join circuito cir on cor.idcir = cir.idcir
    where cor.datacor between '2018-04-01' and '2019-03-31';


