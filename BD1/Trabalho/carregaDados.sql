insert into cliente (idcliente, nome, cpf, telefone, dataNascimento, cep, logradouro, bairro, numeroEndereco, estado) values 
    (default, 'Victor Alves', '111.111.111-11', '9990-2777', '2001-11-20', '38400-100', 'Avenida João Naves', 'Saraiva', 2500, 'MG');

insert into fornecedor (idfornecedor, nome, cnpj, telefone, cep, logradouro, bairro, numeroEndereco, estado) values
    (default, 'Central Ração', '26.040.194/0001-42', '3236-0021', '38402-810', 'Rua César Mugnato', 'Distrito Industrial', 100, 'MG');

insert into produto (idproduto, nome, preco, tipo) values
    (default, 'Premier Golden Power', 99.9, 'Ração');

insert into profissional (idprofissional, nome, funcao, cpf, telefone, dataNascimento, cep, logradouro, bairro, numeroEndereco, estado) values 
    (default, 'Samuel Fernandes', 'Veterinário', '885.411.765-09', '9537-4392', '1973-04-09', '38408-266', 'Rua João Limírio dos Anjos', 'Segismundo Pereira', 205, 'MG');

insert into vacina (idvacina, nome, patologia) values 
    (default, 'Antirrábica', 'Raiva');


/* FKs ir de 1-10 */
insert into pet (idpet, Cliente_idCliente, nome, sexo, especie, dataNascimentoEstimado, raca, peso, historico, cartaovacina) values
    (default, 1, 'Minnie', 'F', 'Cachorro', '2018-02-05', 'Chow-Chow', 22.5, 'Exames de rotina', 'Antirrábica');

insert into estoque (idEstoque, Produto_idProduto, validade, dataCompra, lote, qtdEstoque) values
    (default, 1, '2023-11-05', '2022-02-15', 'AX10E', 5);

/* tem que saber qual profissional faz qual sercico */
insert into servico (idservico, Profissional_idProfissional, tipo, preco) values
    (default, 1, 'Consulta', 70.5);

