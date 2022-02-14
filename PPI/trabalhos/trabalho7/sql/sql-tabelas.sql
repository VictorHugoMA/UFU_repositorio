CREATE TABLE endereco_trab7
(
   id int PRIMARY KEY auto_increment,
   cep char(10),
   rua varchar(100),
   bairro varchar(50),
   cidade varchar(50)
) ENGINE=InnoDB;


INSERT INTO endereco_trab7(cep, rua, bairro, cidade) VALUES ('38400-100', 'Av Floriano Peixoto', 'Centro', 'Uberlândia');
INSERT INTO endereco_trab7(cep, rua, bairro, cidade) VALUES ('38400-000', 'Av Daniel Furtado', 'Centro', 'Uberlândia');
INSERT INTO endereco_trab7(cep, rua, bairro, cidade) VALUES ('38408-100', 'Av João Naves', 'Saraiva', 'Uberlândia');

CREATE TABLE medico
(
   id int PRIMARY KEY auto_increment,
   nome_medico varchar(50),
   telefone_medico varchar(50), 
   especialidade_medico varchar(50)
) ENGINE=InnoDB;


INSERT INTO medico(nome_medico, telefone_medico, especialidade_medico) VALUES ('Fulano da Silva', '9876-9999', 'cardiologia');
INSERT INTO medico(nome_medico, telefone_medico, especialidade_medico) VALUES ('Luís Sousa', '9788-9779', 'cardiologia');
INSERT INTO medico(nome_medico, telefone_medico, especialidade_medico) VALUES ('Yasmin Lima', '9626-8772', 'cardiologia');

INSERT INTO medico(nome_medico, telefone_medico, especialidade_medico) VALUES ('Mariana Goncalves', '9990-8725', 'dermatologia');
INSERT INTO medico(nome_medico, telefone_medico, especialidade_medico) VALUES ('Caio Cunha', '9113-1187', 'dermatologia');
INSERT INTO medico(nome_medico, telefone_medico, especialidade_medico) VALUES ('Bianca Dias', '9899-0733', 'dermatologia');

INSERT INTO medico(nome_medico, telefone_medico, especialidade_medico) VALUES ('Guilherme Carvalho', '9133-8568', 'oftalmologia');
INSERT INTO medico(nome_medico, telefone_medico, especialidade_medico) VALUES ('Sarah Barros', '9701-6655', 'oftalmologia');
INSERT INTO medico(nome_medico, telefone_medico, especialidade_medico) VALUES ('João Almeida', '9144-8777', 'oftalmologia');
