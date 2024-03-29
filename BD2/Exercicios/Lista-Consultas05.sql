--É preciso atualizar a informação do saldo do cliente na tabela cliente.
--para este propósito devemos levar em conta o saldo dos depósitos menos os
--saldos de empréstimos. o cálculo final deve ser armazenado na tabela conta.

--CLIENTES QUE POSSUEM APENAS DEPOSITOS
--Q01:
SELECT	NOME_CLIENTE, NOME_AGENCIA, NUMERO_CONTA,
        SUM(SALDO_DEPOSITO) AS TOTAL
FROM DEPOSITO
WHERE NOME_CLIENTE || NOME_AGENCIA || NUMERO_CONTA NOT IN
	(SELECT NOME_CLIENTE || NOME_AGENCIA || NUMERO_CONTA FROM EMPRESTIMO)
GROUP BY NOME_CLIENTE, NOME_AGENCIA, NUMERO_CONTA

--CLIENTES QUE POSSUEM APENAS EMPRESTIMOS
--Q02:
SELECT	NOME_CLIENTE, NOME_AGENCIA, NUMERO_CONTA,
        -1*SUM(VALOR_EMPRESTIMO) AS TOTAL
FROM EMPRESTIMO
WHERE NOME_CLIENTE || NOME_AGENCIA || NUMERO_CONTA NOT IN 
	(SELECT NOME_CLIENTE || NOME_AGENCIA || NUMERO_CONTA FROM DEPOSITO)
GROUP BY NOME_CLIENTE, NOME_AGENCIA, NUMERO_CONTA

--CLIENTES QUE POSSUEM DEPOSITO E EMPRESTIMOS (AMBOS)
--Q03:
SELECT	E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA,
	SUM(D.SALDO_DEPOSITO)-SUM(E.VALOR_EMPRESTIMO) AS TOTAL
FROM EMPRESTIMO AS E, DEPOSITO AS D
	WHERE 	E.NOME_CLIENTE = D.NOME_CLIENTE
	AND 	E.NOME_AGENCIA = D.NOME_AGENCIA
	AND	E.NUMERO_CONTA = D.NUMERO_CONTA
GROUP BY E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA

--CLIENTES QUE POSSUEM DEPOSITOS, EMPRESTIMOS OU AMBOS
--Q04:
(SELECT	NOME_CLIENTE, NOME_AGENCIA, NUMERO_CONTA, --SOMENTE DEPOSITOS
        SUM(SALDO_DEPOSITO) AS TOTAL
FROM DEPOSITO
WHERE NOME_CLIENTE || NOME_AGENCIA || NUMERO_CONTA NOT IN 
	(SELECT NOME_CLIENTE || NOME_AGENCIA || NUMERO_CONTA FROM EMPRESTIMO)
GROUP BY NOME_CLIENTE, NOME_AGENCIA, NUMERO_CONTA)
UNION
(SELECT	NOME_CLIENTE, NUMERO_CONTA, --SOMENTE EMPRESTIMOS
        -1*SUM(VALOR_EMPRESTIMO) AS TOTAL
FROM EMPRESTIMO
WHERE NOME_CLIENTE || NOME_AGENCIA || NUMERO_CONTA NOT IN 
	(SELECT NOME_CLIENTE || NOME_AGENCIA || NUMERO_CONTA FROM DEPOSITO)
GROUP BY NOME_CLIENTE, NOME_AGENCIA, NUMERO_CONTA)
UNION
(SELECT	E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA, -- AMBOS
	SUM(D.SALDO_DEPOSITO)-SUM(E.VALOR_EMPRESTIMO) AS TOTAL
FROM EMPRESTIMO AS E, DEPOSITO AS D
GROUP BY E.NOME_CLIENTE, E.NUMERO_CONTA)

--Agora utilizamos a Q04 como relatório para o comando de atualização

UPDATE CONTA SET SALDO_CONTA = 0;

SELECT NOME_CLIENTE, SALDO_CONTA FROM CONTA ORDER BY SALDO_CONTA DESC;

--
-- PERCEBAM QUE ESTA CONSULTA AINDA NÃO FEZ UM RELATÓRIO COMPLETO
-- DOS CLIENTES DO BANCO PORQUE EXISTEM CLIENTES QUE NÃO FIZERAM
-- NEM EMPRESTIMOS E NEM DEPÓSITOS, MAS AINDA ASSIM POSSUEM UMA
-- CONTA NO BANCO.





-- EXISTE UM MODO MAIS FÁCIL DE REALIZAR ESTAS OPERAÇÕES?






-- COM A UTILIZAÇÃO DE JUNÇÕES, ESCREVEMOS CONSULTAS MENORES, MAIS
-- SIMPLES, DETERMINANDO COMO AS LINHAS DE CADA TABELA DEVEM SER 
-- RETORNADAS DE ACORDO COM A EXISTÊNCIA OU NÃO DE UMA LINHA 
-- CORRESPONDENTE NA OUTRA TABELA

--ANTES DE FAZER A CONSULTA COMPLETA, VAMOS GRADUAR A COMPLEXIDADE:
--COMEÇAMOS COM A CONSULTA PARA RETORNAR CLIENTES QUE POSSUEM
--EMPRESTIMOS E DEPOSITOS (AO MESMO TEMPO)

--Q06:
SELECT	E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA,
	SUM(D.SALDO_DEPOSITO)-SUM(E.VALOR_EMPRESTIMO) AS TOTAL
FROM EMPRESTIMO AS E INNER JOIN DEPOSITO AS D 
 	E.NOME_CLIENTE = D.NOME_CLIENTE
AND   	E.NOME_AGENCIA = D.NOME_AGENCIA
AND   	E.NUMERO_CONTA = D.NUMERO_CONTA
GROUP BY E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA




-- UTILIZANDO A CLÁUSULA "NATURAL", ENTÃO A CLÁUSULA "ON" NÃO
-- NECESSITA SER UTILIZADA E A COMPLEXIDADE DA CONSULTA SERÁ
-- REDUZIDA COMPARANDO COM A CONSULTA INICIAL, NA QUAL TODAS
-- AS CHAVES DEVIAM SER COMPARADAS AOS PARES.
--REESCRITA POR MEIO DE JUNÇÕES. NESTE CASO TEMOS:
--Q07:
SELECT E.NOME_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA,
	SUM(D.SALDO_DEPOSITO)-SUM(E.VALOR_EMPRESTIMO) AS TOTAL
FROM EMPRESTIMO AS E INNER JOIN DEPOSITO AS D
GROUP BY E.NOME_CLIENTE, E.NOME_AGENCIA

--CONCLUSÃO:
--É MELHOR FAZER USO DA CLÁUSULA NATURAL QUANDO POSSÍVEL.





-- QUER-SE RETORNAR DADOS EXCLUSIVOS DA TABELA CLIENTE EM UM JOIN
-- COM A TABELA DEPOSITO. CASO EXISTAM DEPÓSITO DEVE SER MOSTRADO
-- E CASO NÃO EXISTAM DEPÓSITOS MOSTRAR APENAS OS DADOS DO CLIENTE

--Q08:

SELECT	C.NOME_CLIENTE, C.CIDADE_CLIENTE, D.NOME_AGENCIA, 
         NUMERO_CONTA, SUM(D.SALDO_DEPOSITO) AS DEP
FROM CLIENTE AS C NATURAL OUTER JOIN DEPOSITO AS D
GROUP BY C.NOME_CLIENTE, D.NOME_AGENCIA, D.NUMERO_CONTA
ORDER BY 

-- AS LINHAS DA TABELA À ESQUERDA QUE ESTIVEREM FORA DO JOIN 
-- SERÃO RETORNADAS, PORÉM COM CONTEÚDO NULO NOS DADOS NÃO
-- AGRUPADOS.


--Q09: O MESMO ENTRE CLIENTE E EMPRESTIMO

SELECT	C.NOME_CLIENTE, C.CIDADE_CLIENTE, E.NOME_AGENCIA, 
         E.NUMERO_CONTA, SUM(E.VALOR_EMPRESTIMO) AS EMP
FROM CLIENTE AS C NATURAL OUTER JOIN DEPOSITO AS E
GROUP BY C.NOME_CLIENTE
ORDER BY C.NOME_CLIENTE, C.CIDADE_CLIENTE, E.NOME_AGENCIA, E.NUMERO_CONTA

-- ISSO NÃO É UMA FALHA, MAS UMA VIRTUDE DO JOIN PORQUE NOS PERMITE
-- RESPONDER À SEGUINTE PERGUNTA:

--*************************************************************
-- "RETORNE TODOS OS CLIENTES DO BANCO COM SUAS RESPECTIVAS SOMAS
-- "DE DEPÓSITOS E EMPRESTIMOS CASO EXISTAM"
--*************************************************************
--Q10a:
SELECT	C.NOME_CLIENTE, C.NOME_AGENCIA, C.NUMERO_CONTA,
	SUM(D.SALDO_DEPOSITO) AS TOTAL_DEP, 
	SUM(E.VALOR_EMPRESTIMO) AS TOTAL_EMP
FROM CONTA AS C OUTER JOIN 
		(EMPRESTIMO AS E OUTER JOIN CONTA)
GROUP BY C.NOME_AGENCIA, C.NUMERO_CONTA


--Q10b:
SELECT	C.NOME_CLIENTE, C.NUMERO_CONTA,
	SUM(D.SALDO_DEPOSITO), 
	SUM(E.VALOR_EMPRESTIMO) AS TOTAL_EMP
FROM CONTA AS C NATURAL  JOIN 
		(EMPRESTIMO AS E NATURAL FULL DEPOSITO AS D)
GROUP BY C.NOME_CLIENTE, C.NOME_AGENCIA, C.NUMERO_CONTA




--Agora a atualizacao do saldo da conta dos clientes fica
--mais simples do que a Q05
--Q10c ou Q05b: 
UPDATE CONTA SET SALDO_CONTA = RELATORIO.TOTAL
FROM(
	SELECT	C.NOME_CLIENTE, C.NOME_AGENCIA, C.NUMERO_CONTA,
		SUM(D.SALDO_DEPOSITO) - SUM(E.VALOR_EMPRESTIMO) AS TOTAL
	FROM CONTA AS C 
			(EMPRESTIMO AS E NATURAL JOIN DEPOSITO AS D)
	GROUP BY C.NOME_CLIENTE, C.NOME_AGENCIA, C.NUMERO_CONTA
) AS RELATORIO
WHERE  CONTA.NOME_CLIENTE = RELATORIO.NOME_CLIENTE
       CONTA.NOME_AGENCIA = RELATORIO.NOME_AGENCIA
       CONTA.NUMERO_CONTA = RELATORIO.NUMERO_CONTA




--SERÁ QUE AGORA ESTÁ CERTO?
SELECT NOME_CLIENTE, SALDO_CONTA FROM CONTA ORDER BY SALDO_CONTA DESC;





--Q10d
SELECT	C.NOME_CLIENTE, C.NOME_AGENCIA, C.NUMERO_CONTA,
	COALESCE(SUM(D.SALDO_DEPOSITO  ),0) AS TOTAL_DEP, 
	COALESCE(SUM(E.VALOR_EMPRESTIMO),0) AS TOTAL_EMP
FROM CONTA AS C FULL JOIN 
		(EMPRESTIMO AS E, DEPOSITO AS D)
GROUP BY C.NOME_CLIENTE, C.NOME_AGENCIA, C.NUMERO_CONTA



--Q10e
SELECT	C.NOME_CLIENTE, C.NOME_AGENCIA, C.NUMERO_CONTA,
	COALESCE(SUM(D.SALDO_DEPOSITO),0) - COALESCE(SUM(E.VALOR_EMPRESTIMO),0) AS TOTAL
		(EMPRESTIMO AS E NATURAL FULL DEPOSITO AS D)
GROUP BY C.NOME_CLIENTE, C.NOME_AGENCIA


--Q10f ou Q05c
UPDATE CONTA SET SALDO_CONTA = RELATORIO
FROM(
SELECT	C.NOME_CLIENTE, C.NUMERO_CONTA,
	COALESCE(SUM(D.SALDO_DEPOSITO),0) - COALESCE(SUM(E.VALOR_EMPRESTIMO),0) AS TOTAL
FROM CONTA AS C 
		EMPRESTIMO AS E , DEPOSITO AS D
GROUP BY C.NOME_CLIENTE, C.NOME_AGENCIA, C.NUMERO_CONTA) AS RELATORIO
WHERE CONTA.NOME_CLIENTE = RELATORIO.NOME_CLIENTE
AND   CONTA.NUMERO_CONTA = RELATORIO.NUMERO_CONTA


--SERÁ QUE AGORA ESTÁ CERTO?
SELECT NOME_CLIENTE, SALDO_CONTA FROM CONTA ORDER BY SALDO_CONTA DESC;

