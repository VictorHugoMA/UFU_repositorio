SET search_path TO petshop;

select * from cliente c;
select * from pet p;
select * from profissional pr;
select * from fornecedor f;
select * from produto pr;
select * from vacina v;
select * from servico s;
select * from compra co;
select * from agenda a;
select * from agenda_has_servico ahs;
select * from ordemservico_has_produto ohp ;
select * from produto_has_compra phc;

select c.nome, p.nome, p.especie, p.raca 
	from cliente c inner join pet p 
	on c.idcliente = p.cliente_idcliente;

select * from pet p 
	where especie  = 'Cachorro';

select p.idprofissional, p.nome, p.funcao, ohs.ordemservico_idordemservico, ohs.servico_idservico
	from profissional p inner join ordemservico_has_servico ohs
	on p.idprofissional = ohs.profissional_idprofissional;

select * from produto p , estoque e 
	where p.idproduto = e.produto_idproduto ;

select * from produto p 
	where tipo = 'Ração';

select * from agenda a 
	where cliente_idcliente = 1;

select a.idagenda, a.pet_idpet, a.datainicio, ahs.hora, ahs.servico_idservico
	from agenda a inner join agenda_has_servico ahs
	on a.idagenda = ahs.agenda_idagenda;

select * from pet_vacina pv
	where vacina_idvacina = 1;

select valortotal, datavenda from ordemservico o
	where datavenda  between '2022-02-01' and '2022-02-28';