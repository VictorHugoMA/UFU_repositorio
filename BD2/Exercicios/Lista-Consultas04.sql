--01-Nome e cidade de clientes que possuem algum emprestimo, ordenado pelo nome do cliente

SELECT DISTINCT cliente.nome_cliente, cidade_cliente
FROM emprestimo, cliente
WHERE cliente.nome_cliente=emprestimo.nome_cliente
ORDER BY cliente.nome_cliente;

--02-Nome e cidade de clientes que possuem emprestimo na PUC, ordenado pelo nome do cliente

SELECT DISTINCT cliente.nome_cliente, cidade_cliente
FROM cliente, emprestimo
WHERE cliente.nome_cliente=emprestimo.nome_cliente
and   emprestimo.nome_agencia='PUC'
ORDER BY cliente.nome_cliente;

--03-Nomes de Clientes com saldo entre 100 e 900

SELECT c.nome_cliente
FROM cliente c, deposito d
WHERE c.nome_cliente=d.nome_cliente
AND d.saldo_deposito between 100 and 900;

--04-Nomes de clientes, valores de depósitos e empréstimos na agencia PUC - CORRIGIR
SELECT D.nome_cliente, D.saldo_deposito, E.valor_emprestimo, E.nome_agencia
	FROM deposito D, emprestimo AS E
WHERE D.nome_agencia='PUC' 
	AND 'PUC'=E.nome_agencia;

--05-Selecione os nomes dos clientes da cidade de Contagem com depósitos maiores do que R$ 3.000,00

select cliente.nome_cliente, cliente.cidade_cliente
from cliente, deposito
where  cliente.cidade_cliente = 'Contagem'
and deposito.saldo_deposito > 3000
GROUP BY cliente.nome_cliente;

--06-Um gerente pretende criar uma lista de clientes que correm o risco
--de se individar de maneira irreversível. Para tanto ele formulou
--a seguinte pesquisa:
--Selecione os clientes da cidade de Santa Luzia com depósitos
--menores do que R$ 1.000,00 e emprestimos maiores que R$ 1.000,00

select 	cliente.nome_cliente, 
	cliente.cidade_cliente, 
       	sum(deposito.saldo_deposito) as "deposito",
	sum(emprestimo.valor_emprestimo) as "emprestimo"
from cliente, emprestimo, deposito
	where 	cliente.nome_cliente = deposito.nome_cliente
		and cliente.nome_cliente = emprestimo.nome_cliente
		and cliente.cidade_cliente = 'Santa Luzia'
		and deposito.saldo_deposito < 1000
		and emprestimo.valor_emprestimo > 1000
group by cliente.nome_cliente;


--07-Um gerente pretende criar uma lista de clientes que correm o risco
--de se individar de maneira irreversível. Para tanto ele formulou
--a seguinte pesquisa:
--Selecione os clientes da cidade de Santa Luzia com uma média de 
--depósitos menor do que a média de empréstimos

select 	cliente.nome_cliente, 
	cliente.cidade_cliente, 
     	avg(deposito.saldo_deposito) as "Media deposito",
	avg(emprestimo.valor_emprestimo) as "Media emprestimo"
from cliente, emprestimo, deposito
	where 	cliente.nome_cliente = deposito.nome_cliente
		and cliente.nome_cliente = emprestimo.nome_cliente
		and cliente.cidade_cliente = 'Santa Luzia'
group by cliente.nome_cliente
	having avg(deposito.saldo_deposito) < avg(emprestimo.valor_emprestimo);

--08-É preciso atualizar a informação do saldo do cliente na tabela cliente.
--para este propósito devemos levar em conta o saldo dos depósitos menos os
--saldos de empréstimos. o cálculo final deve ser armazenado na tabela conta.

UPDATE CONTA SET SALDO_CONTA = 0;

SELECT NOME_CLIENTE, SALDO_CONTA FROM CONTA ORDER BY SALDO_CONTA DESC;

SELECT NUMERO_CONTA, NOME_AGENCIA, NOME_CLIENTE, SUM(SALDO_DEPOSITO)
FROM DEPOSITO 
GROUP BY NUMERO_CONTA, NOME_AGENCIA, NOME_CLIENTE

--Primeiro os clientes que possuem deposito e emprestimos (ambos)

SELECT	E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA,
        SUM(D.SALDO_DEPOSITO), SUM(E.VALOR_EMPRESTIMO), 
	SUM(D.SALDO_DEPOSITO)-SUM(E.VALOR_EMPRESTIMO) AS TOTAL
FROM EMPRESTIMO AS E, DEPOSITO AS D
WHERE E.NOME_CLIENTE = D.NOME_CLIENTE
GROUP BY E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA

--Atualiza contas que possuem deposito e emprestimos (ambos)

UPDATE CONTA SET SALDO_CONTA = RELATORIO.TOTAL
FROM(
	SELECT	E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA,
		SUM(D.SALDO_DEPOSITO), SUM(E.VALOR_EMPRESTIMO), 
		SUM(D.SALDO_DEPOSITO)-SUM(E.VALOR_EMPRESTIMO) AS TOTAL
	FROM EMPRESTIMO AS E, DEPOSITO D
	GROUP BY E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA
) AS RELATORIO
WHERE CONTA.NOME_CLIENTE = RELATORIO.NOME_CLIENTE
AND   CONTA.NOME_AGENCIA = RELATORIO.NOME_AGENCIA
AND   CONTA.NUMERO_CONTA = RELATORIO.NUMERO_CONTA
