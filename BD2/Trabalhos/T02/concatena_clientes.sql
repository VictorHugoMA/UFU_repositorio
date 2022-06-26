select concatena_cliente('Clayton Pereira Bonfim');


CREATE OR REPLACE FUNCTION concatena_cliente(p_nome varchar(100))
  RETURNS varchar(100) AS
  $BODY$
DECLARE
    l_nome_agencia varchar(100);
    l_numero_conta integer;
    l_concatenado varchar(5000) :='';
	cursor_relatorio CURSOR FOR SELECT DISTINCT e.nome_agencia, e.numero_conta
                                    from emprestimo e,
                                        deposito d
                                    where e.numero_conta = d.numero_conta
                                    and e.nome_cliente = p_nome;
BEGIN
   OPEN cursor_relatorio;
	LOOP
		FETCH cursor_relatorio INTO l_nome_agencia, l_numero_conta;
		IF FOUND THEN
			l_concatenado := l_concatenado || l_nome_agencia || ' - ' || l_numero_conta || ' ';
		END IF;
		IF NOT FOUND THEN EXIT; END IF;
	END LOOP;
   CLOSE cursor_relatorio;
   RETURN l_concatenado;
END
$BODY$
  LANGUAGE plpgsql VOLATILE COST 100;
