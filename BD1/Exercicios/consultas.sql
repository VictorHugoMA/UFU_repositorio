/* Listar a data de nascimento e o endereço dos empregados com nome: John B Smith */
select bdate, address from employee e 
	where fname = 'John'
	and minit = 'B'
	and lname = 'Smith';