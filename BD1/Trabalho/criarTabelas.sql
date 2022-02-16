drop schema petshop cascade;
CREATE SCHEMA petshop;
SET search_path TO petshop;


CREATE TABLE Compra(
    idCompra Serial NOT NULL PRIMARY KEY,
    Fornecedor_idFornecedor int NOT NULL,
    dataCompra date,
    precoCompra numeric(9, 2),
    produto varchar(45),
    qtd int
);
CREATE TABLE Fornecedor(
    idFornecedor Serial NOT NULL PRIMARY KEY,
    nome varchar(45),
    cnpj varchar(45),
    telefone varchar(45),
    cep char(20),
    logradouro varchar(255),
    bairro varchar(45),
    numeroEndereco int,
    estado varchar(20)
);
CREATE TABLE Produto_has_Compra(
    Produto_idProduto int NOT NULL,
    Compra_idCompra int NOT NULL,
    preco numeric(9, 2),
    qtd int,
    CONSTRAINT pk_phc PRIMARY KEY (Produto_idProduto, Compra_idCompra)
);
CREATE TABLE Produto (
    idProduto Serial not null PRIMARY KEY,
    nome varchar (45),
    preco numeric(9, 2),
    tipo varchar(45)
);
CREATE TABLE Estoque (
    idEstoque Serial NOT NULL PRIMARY KEY,
    Produto_idProduto int NOT NULL,
    validade date,
    dataCompra date,
    lote varchar (45),
    qtdEstoque int
);
CREATE TABLE OrdemServico_has_Produto(
    Produto_idProduto int NOT NULL,
    OrdemServico_idOrdemServico int NOT NULL,
    preco numeric(9, 2),
    qtd int,
    CONSTRAINT pk_oshp PRIMARY KEY (Produto_idProduto, OrdemServico_idOrdemServico)
);
CREATE TABLE Cliente (
    idCliente Serial NOT NULL PRIMARY KEY,
    nome varchar(45),
    cpf varchar(45),
    telefone varchar(45),
    dataNascimento date,
    cep varchar(20),
    logradouro varchar(255),
    bairro varchar(45),
    numeroEndereco int,
    estado varchar(20)
);
CREATE TABLE Agenda_has_Servico(
    Agenda_idAgenda int NOT NULL,
    Servico_idServico int NOT NULL,
    hora time,
    CONSTRAINT pk_ahs PRIMARY KEY (Agenda_idAgenda, Servico_idServico)
);
CREATE TABLE Profissional (
    idProfissional Serial NOT NULL PRIMARY KEY,
    nome VARCHAR(255),
    funcao VARCHAR(45),
    cpf VARCHAR(45),
    telefone VARCHAR(45),
    dataNascimento DATE,
    cep VARCHAR(20),
    logradouro VARCHAR(45),
    bairro VARCHAR(45),
    numeroEndereco INT,
    estado VARCHAR(20)
);
CREATE TABLE Agenda (
    idAgenda Serial NOT NULL PRIMARY KEY,
    Cliente_idCliente int NOT NULL,
    Pet_idPet int NOT NULL,
    Profissional_idProfissional int NOT NULL,
    dataInicio DATE
);
CREATE TABLE Servico (
    idServico Serial NOT NULL PRIMARY KEY,
    Profissional_idProfissional int NOT NULL,
    tipo VARCHAR(45),
    preco numeric (9, 2)
);
CREATE TABLE OrdemServico_has_Servico (
    OrdemServico_idOrdemServico int NOT NULL,
    Servico_idServico int NOT NULL,
    CONSTRAINT pk_OShS PRIMARY KEY (OrdemServico_idOrdemServico, Servico_idServico)
);
CREATE TABLE OrdemServico (
    idOrdemServico Serial NOT NULL PRIMARY KEY,
    Cliente_idCliente int NOT NULL,
    valorTotal numeric (9, 2),
    dataVenda DATE
);
CREATE TABLE Vacina (
    idVacina SERIAL NOT NULL PRIMARY KEY,
    nome VARCHAR(45),
    patologia VARCHAR(45)
);
CREATE TABLE pet (
    idPet SERIAL NOT NULL PRIMARY KEY,
    cliente_idcliente INT NOT NULL,
    nome VARCHAR(45),
    sexo VARCHAR(2),
    especie VARCHAR(45),
    datanascimentoestimado DATE,
    raca VARCHAR(45),
    peso FLOAT,
    historico VARCHAR(255),
    cartaovacina VARCHAR(255)
);
CREATE TABLE pet_vacina (
    vacina_idvacina INT NOT NULL,
    pet_idpet INT NOT NULL,
    dataaplicacao DATE,
    constraint vacinafk foreign key (Vacina_idVacina) references vacina(idvacina),
    constraint petfk foreign key (pet_idpet) references pet(idpet),
    constraint pk_pv PRIMARY KEY (vacina_idvacina, pet_idpet)
);

ALTER TABLE pet
    add CONSTRAINT clienteFK_P foreign key (cliente_idcliente) references cliente (idcliente);

ALTER TABLE OrdemServico_has_Servico
    add CONSTRAINT ordemservicoFK_OShS foreign key (OrdemServico_idOrdemServico) references OrdemServico(idOrdemServico),
    add CONSTRAINT servicofk_OShS foreign key (Servico_idServico) references Servico(idServico);

ALTER TABLE Agenda
    add CONSTRAINT clienteFK_A foreign key (Cliente_idCliente) references Cliente(idCliente),
    add CONSTRAINT pet_FK foreign key (Pet_idPet) references Pet(idPet),
    add CONSTRAINT Profissional_FK foreign key (Profissional_idProfissional) references Profissional(idProfissional);

ALTER TABLE Agenda_has_Servico
    add CONSTRAINT agendaFK foreign key (Agenda_idAgenda) references Agenda(idAgenda),
    add CONSTRAINT servicoFK foreign key (Servico_idServico) references Servico(idServico);

ALTER TABLE Estoque
    add CONSTRAINT ProdutoFK_E foreign key (Produto_idProduto) references Produto(idProduto);

ALTER TABLE OrdemServico_has_Produto
    add CONSTRAINT ProdutoFK_OShP foreign key (Produto_idProduto) references Produto(idProduto),
    add CONSTRAINT OrdemServicoFK_OShP foreign key (OrdemServico_idOrdemServico) references OrdemServico(idOrdemServico);

ALTER TABLE Compra
    add CONSTRAINT fornecedorFK foreign key (Fornecedor_idFornecedor) references Fornecedor(idFornecedor);

ALTER TABLE Produto_has_Compra
    add CONSTRAINT produtoFK_PhC foreign key (Produto_idProduto) references Produto(idProduto),
    add CONSTRAINT compraFK foreign key (Compra_idCompra) references Compra(idCompra);

ALTER TABLE OrdemServico
    add CONSTRAINT clienteFK_OS foreign key (Cliente_idCliente) references Cliente(idCliente);

ALTER TABLE Servico
    add CONSTRAINT profissionalFK_S foreign key (Profissional_idProfissional) references Profissional(idProfissional);