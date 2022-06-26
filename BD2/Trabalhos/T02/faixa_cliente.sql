SELECT faixa_cliente('Clayton Pereira Bonfim');
select distinct faixa_cliente(nome_cliente) from cliente;

drop function faixa_cliente(p_nome_cliente varchar(100));

CREATE OR REPLACE FUNCTION faixa_cliente(p_nome_cliente varchar(100))
  RETURNS varchar(1000) AS
  $BODY$
DECLARE
    l_soma_deposito float;
    l_faixa char;
    l_nome_cliente varchar(100);
    l_info varchar(1000);
	cursor_relatorio CURSOR FOR SELECT nome_cliente, SUM(D.SALDO_DEPOSITO) AS TOTAL_DEP 
		FROM DEPOSITO AS D
	WHERE D.NOME_CLIENTE=p_nome_cliente
	GROUP BY D.NOME_CLIENTE;
BEGIN
   OPEN cursor_relatorio;
		FETCH cursor_relatorio INTO l_nome_cliente, l_soma_deposito;
		IF FOUND THEN
            IF l_soma_deposito IS NULL then l_soma_deposito=0; END IF;
            IF l_soma_deposito > 6000.0 THEN l_faixa :='A';
            ELSIF l_soma_deposito > 4000.0 THEN l_faixa :='B';
            ELSE l_faixa :='C';
            END IF;
            l_info = l_nome_cliente || ' - ' || l_faixa;
		END IF;
   CLOSE cursor_relatorio;
   RETURN l_info;
END
$BODY$
  LANGUAGE plpgsql VOLATILE COST 100;
