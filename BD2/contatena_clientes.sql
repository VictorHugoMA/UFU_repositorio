CREATE OR REPLACE FUNCTION contatena_cliente(p_nome varchar)
  RETURNS varchar AS
  $BODY$
DECLARE
    l_nome_agencia varchar;
    l_numero_conta varchar;
    l_concatenado varchar :='';
	cursor_relatorio CURSOR FOR SELECT e.numero_conta, e.nome_agencia 
                                    from emprestimo e,
                                        deposito d
                                    where e.numero_conta = d.numero_conta
                                    and e.nome_cliente = p_nome;
BEGIN
   OPEN cursor_relatorio;
	LOOP
		FETCH cursor_relatorio INTO l_nome_agencia, l_numero_conta;
		IF FOUND THEN
			l_concatenado := l_concatenado || l_nome_agencia || l_numero_conta;
		END IF;
		IF NOT FOUND THEN EXIT; END IF;
	END LOOP;
   CLOSE cursor_relatorio;
   RETURN l_concatenado;
END
$BODY$
  LANGUAGE plpgsql VOLATILE COST 100;
