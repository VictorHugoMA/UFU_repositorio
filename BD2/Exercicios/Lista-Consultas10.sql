--IMPLEMENTE UM GATILHO (TRIGGER) QUE ATUALIZE A TABELA CONTA, PARA O CAMPO SALDO_CONTA, 
--SEMPRE QUE UMA NOVA LINHA FOR INSERIDA NA TABELA DE DEPÓSITO OU EMPRÉSTIMO.

CREATE TRIGGER TRIGGER_ATUALIZA_VALOR_EMPRESTIMO
  AFTER INSERT OR UPDATE ON EMPRESTIMO
  FOR EACH STATEMENT EXECUTE PROCEDURE Atualizar_Saldo(); --funcao teste
    
  
CREATE TRIGGER TRIGGER_ATUALIZA_VALOR_DEPOSITO
  AFTER INSERT OR UPDATE ON DEPOSITO
  FOR EACH STATEMENT EXECUTE PROCEDURE Atualizar_Saldo(); --funcao teste

--funcao a ser utilizada no gatilho
CREATE OR REPLACE FUNCTION Atualizar_Saldo()
  RETURNS trigger AS
$BODY$
DECLARE
	saldo_liquido float;
    soma_emprestimo float;
   	soma_deposito float;
    l_numero_conta integer;	
	cursor_relatorio CURSOR FOR SELECT SUM(D.SALDO_DEPOSITO) AS TOTAL_DEP, 
		SUM(E.VALOR_EMPRESTIMO) AS TOTAL_EMP, C.numero_conta
		FROM CONTA AS C NATURAL LEFT JOIN 
		(EMPRESTIMO AS E NATURAL full JOIN DEPOSITO AS D)
	GROUP BY C.NOME_CLIENTE, C.NOME_AGENCIA, C.NUMERO_CONTA;
BEGIN
   OPEN cursor_relatorio;
   saldo_liquido = 0;
	LOOP
		FETCH cursor_relatorio INTO soma_deposito, soma_emprestimo, l_numero_conta;
		IF FOUND THEN
			IF soma_emprestimo IS NULL then soma_emprestimo=0; END IF;
	        IF soma_deposito IS NULL then soma_deposito=0; END IF;
            saldo_liquido = soma_deposito - soma_emprestimo ;
			update CONTA SET  saldo_conta = saldo_liquido where numero_conta = l_numero_conta;
		END IF;
		IF NOT FOUND THEN EXIT; END IF;
	END LOOP;
   CLOSE cursor_relatorio;
   RETURN NULL;
END
$BODY$
  LANGUAGE plpgsql VOLATILE COST 100;
 ALTER FUNCTION atualizar_saldo() OWNER TO aluno;
    

