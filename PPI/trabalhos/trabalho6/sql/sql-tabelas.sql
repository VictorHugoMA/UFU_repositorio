CREATE TABLE cliente
(
   id int PRIMARY KEY auto_increment,
   nome varchar(50),
   cpf char(14) UNIQUE,
   email varchar(50) UNIQUE,
   hash_senha varchar(255),
   data_nascimento date,
   estado_civil varchar(30),
   altura int
) ENGINE=InnoDB;

CREATE TABLE endereco_entrega
(
   id int PRIMARY KEY auto_increment,
   cep char(10),
   endereco varchar(100),
   bairro varchar(50),
   cidade varchar(50),
   id_cliente int not null,
   FOREIGN KEY (id_cliente) REFERENCES cliente(id) ON DELETE CASCADE
) ENGINE=InnoDB;

CREATE TABLE pessoa
(
   id int PRIMARY KEY auto_increment,
   nome varchar(50),
   sexo varchar(10),
   email varchar(50) UNIQUE,
   tefone varchar(50),
   cep char(10),
   logradouro varchar(100),
   cidade varchar(50),
   estado varchar(10)
) ENGINE=InnoDB;


CREATE TABLE paciente
(
   id int PRIMARY KEY auto_increment,
   peso float,
   altura int,
   tipoSanguineo varchar(10),
   id_pessoa int not null,
   FOREIGN KEY (id_pessoa) REFERENCES pessoa(id) ON DELETE CASCADE
) ENGINE=InnoDB;