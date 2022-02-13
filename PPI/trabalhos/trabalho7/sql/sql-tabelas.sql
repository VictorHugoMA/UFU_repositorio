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