/* Criar 2 comandos novos de inserção nas principais tabelas do modelo; */

--insercao na tabela cliente
insert into cliente (idcliente, nome, cpf, telefone, dataNascimento, cep, logradouro, bairro, numeroEndereco, estado) values 
    (default, 'Tiago Azevedo', '165.854.793-43', '9814-2777', '1980-07-20', '38408-266', 'Rua João Limírio dos Anjos', 'Segismundo Pereira', 1000, 'MG');

--insercao na tabela profissional
insert into profissional (idprofissional, nome, funcao, cpf, telefone, dataNascimento, cep, logradouro, bairro, numeroEndereco, estado) values 
    (default, 'Melissa Ribeiro Sousa', 'Veterinário', '770.036.164-91', '9933-4197', '1985-01-03', '38400-100', 'Avenida João Naves', 'Saraiva', 300, 'MG');

/* Criar 2 comandos de remoção nas principais tabelas, sendo que pelo menos 1 deve exigir remoções em mais de uma tabela; */
delete from estoque where idestoque = 10;

delete from pet_vacina where vacina_idvacina = 10;
    delete from vacina where idvacina = 10;

/* Criar 3 comandos de atualização de dados nas principais tabelas do modelo, sendo que pelo menos 1 delas deve obter o(s) novo(s) valor(es) a serem armazenados a partir de consulta(s) a outra(s) tabela(s).*/
update cliente
    set telefone = '9987-7727'
    where idcliente = 1;

update pet
    set peso = 25
    where idpet = 1;

/* Criar 5 consultas simples nas principais tabelas do modelo usando as cláusulas WHERE, DISTINCT, BETWEEN, LIKE e ORDER BY; */
select * from pet
	where especie = 'Cachorro';

select distinct tipo
    from produto;

select valortotal, datavenda from ordemservico o
	where datavenda  between '2022-02-01' and '2022-02-28';

select nome from cliente
    where upper(nome) like 'L%';

select nome, datanascimento from profissional
    order by datanascimento desc;

/* Criar 3 consultas aninhadas (sub consultas) usando IN e NOT IN; */

/* Criar 5 consultas que envolvem funções de agregação (COUNT, SUM, MIN, MAX, AVG) com agrupamento (GROUP BY) e HAVING; */
select funcao, count(*) from profissional
    group by funcao;

/* Criar 5 consultas avançadas usando INNER JOIN e (INNER, RIGHT, LEFT, FULL) OUTER JOIN; */
select c.nome, p.nome, p.especie, p.raca 
	from cliente c inner join pet p 
	on c.idcliente = p.cliente_idcliente;

select p.idprofissional, p.nome, p.funcao, ohs.ordemservico_idordemservico, ohs.servico_idservico
	from profissional p inner join ordemservico_has_servico ohs
	on p.idprofissional = ohs.profissional_idprofissional;

select a.idagenda, a.pet_idpet, a.datainicio, ahs.hora, ahs.servico_idservico
	from agenda a inner join agenda_has_servico ahs
	on a.idagenda = ahs.agenda_idagenda;