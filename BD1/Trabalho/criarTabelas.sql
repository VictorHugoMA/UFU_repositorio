CREATE SCHEMA petshop;
SET search_path TO petshop;

CREATE TABLE Compra(
    idCompra Serial NOT NULL PRIMARY KEY,
    Fornecedor_idFornecedor Serial NOT NULL,
    dataCompra date,
    precoCompra numeric(9,2),
    produto varchar(45),
    qtd int
);

CREATE TABLE Fornecedor(
    idFornecedor Serial NOT NULL PRIMARY KEY,
    nome varchar(45),
    cnpj varchar(45),
    tefone varchar(45),
    cep char(20),
    logradouro varchar(255),
    bairro varchar(45),
    numeroEndereco int,
    estado varchar(20)
);

CREATE TABLE Produto_has_Compra(
    Produto_idProduto Serial NOT NULL,
    Compra_idCompra Serial NOT NULL ,
    preco numeric(9,2),
    qtd int,
    CONSTRAINT pk_phc PRIMARY KEY (Produto_idProduto, Compra_idCompra)
);

ALTER TABLE Compra
    add CONSTRAINT fornecedorFK foreign key (Fornecedor_idFornecedor) references Fornecedor(idFornecedor);


ALTER TABLE Produto_has_Compra
    add CONSTRAINT produtoFK foreign key (Produto_idProduto) references Produto(idProduto), /* precisa do produto */
    add CONSTRAINT compraFK foreign key (Compra_idCompra) references Compra(idCompra);