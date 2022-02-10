CREATE SCHEMA petshop;

CREATE TABLE Compra(
    idCompra Serial,
    dataCompra date,
    precoCompra float,
    produto varchar(45),
    qtd int
);

CREATE TABLE Fornecedor(
    idFornecedor Serial,
    nome varchar(45),
    cnpj varchar(45),
    tefone varchar(45),
    cep char(20),
    logradouro varchar(255),
    bairro varchar(45),
    numeroEndereco int,
    estado varchar(20)
);