/* 1 - Listar a data de nascimento e o endereço dos empregados com nome: John B Smith */
select bdate, address from employee e 
	where fname = 'John'
	and minit = 'B'
	and lname = 'Smith';


/* 26 - Listar os nomes de empregados sem dependentes */
select fname, lname
	from employee e left join dependent d 
	on ssn = d.essn
	where d.essn is null;