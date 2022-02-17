insert into cliente (idcliente, nome, cpf, telefone, dataNascimento, cep, logradouro, bairro, numeroEndereco, estado) values 
    (default, 'Victor Alves', '163.400.564-31', '9990-2777', '2001-11-20', '38400-100', 'Avenida João Naves', 'Saraiva', 707, 'MG'),
    (default, 'Pedro Silva', '556.983.905-41', '9767-4470', '1999-04-10', '38410-271', 'Rua Islandia', 'Laranjeiras', 350, 'MG'),
    (default, 'Mateus Araujo', '131.891.097-88', '9382-7102', '1990-12-11', '38405-305', 'Avenida Brasil', 'Umuarama', 75, 'MG'),
    (default, 'Igor Barbosa', '360.154.502-07', '9025-2660', '2000-01-20', '38414-150', 'Rua Diamante', 'Jardim Patrícia', 600, 'MG'),
    (default, 'Gabriela Carvalho', '637.722.319-69', '9525-6245', '1997-06-15', '38400-296', 'Rua Laguna', 'Tabajaras', 80, 'MG'),
    (default, 'Giovana Costa', '246.685.446-55', '9061-6376', '1985-09-29', '38415-195', 'Rua Olavo Luiz Vieira', 'Taiaman', 55, 'MG'),
    (default, 'Murilo Rodrigues', '645.461.754-85', '9693-3691', '1970-10-07', '38415-168', 'Rua Paineira', 'Morada do Sol', 150, 'MG'),
    (default, 'Eduardo Ribeiro', '384.387.188-41', '9181-7127', '1973-02-16', '38408-018', 'Rua Edson de Barros', 'Saraiva', 404, 'MG'),
    (default, 'Luiza Correia', '571.783.452-76', '9337-5749', '1960-04-17', '38400-229', 'Rua Benjamim Monteiro', 'General Osório', 701, 'MG'),
    (default, 'Larissa Sousa', '972.486.436-70', '9104-8440', '2000-08-25', '38411-190', 'Rua Evaristo José de Oliveira', 'Jardim Karaíba', 505, 'MG'),
    (default, 'Otávio Lima', '363.371.648-30', '9647-8788', '1990-07-27', '14091-429', 'Praça Theodoro Papa', 'Iguatemi', 602, 'SP');

insert into profissional (idprofissional, nome, funcao, cpf, telefone, dataNascimento, cep, logradouro, bairro, numeroEndereco, estado) values 
    (default, 'Samuel Fernandes', 'Veterinário', '885.411.765-09', '9537-4392', '1973-04-09', '38408-266', 'Rua João Limírio dos Anjos', 'Segismundo Pereira', 205, 'MG'),
    (default, 'Beatriz Souza', 'Veterinário', '772.802.916-94', '9411-3536', '1989-03-15', '38408-670', 'Rua Brigadeiro Luiz Antunes', 'Pampulha', 30, 'MG'),
    (default, 'Manuela Barros', 'Veterinário', '492.216.833-89', '9422-9927', '1975-12-01', '38402-046', 'Rua Jordino Enocêncio Alves', 'Marta Helena', 100, 'MG'),
    (default, 'Pedro Santos', 'Veterinário', '165.276.422-45', '9985-8082', '1969-12-01', '38408-696', 'Rua Marcos Alves Barbosa', 'Santa Luzia', 487, 'MG'),
    (default, 'Enzo Correia', 'Tosador', '680.407.623-08', '9804-3988', '1960-07-10', '38400-496', 'Rua Ângelo Testa', 'Osvaldo Rezende', 252, 'MG'),
    (default, 'Sarah Fernandes', 'Tosador', '270.467.777-80', '9236-9656', '1980-11-29', '38414-690', 'Rua Modena', 'Jardim Europa', 306, 'MG'),
    (default, 'Clara Souza', 'Enfermeiro', '228.600.336-02', '9779-3779', '1999-05-03', '38412-054', 'Rua Maria Dias Diniz', 'Tubalina', 737, 'MG'),
    (default, 'Lucas Santos', 'Enfermeiro', '521.742.182-75', '9365-6465', '1998-10-25', '38401-274', 'Avenida Vinicius de Moraes', 'Santa Rosa', 500, 'MG'),
    (default, 'Rebeca Cavalcanti', 'Atendente', '143.325.125-61', '9085-2717', '2002-05-19', '38408-072', 'Rua Romeu Margonari', 'Santa Mônica', 312, 'MG'),
    (default, 'Rodrigo Fernandes', 'Atendente', '290.067.051-95', '9635-7555', '1981-07-07', '38408-790', 'Rua Delermando de Brito', 'Santa Luzia', 248, 'MG');

insert into Fornecedor (idFornecedor, nome, cnpj, telefone, cep, logradouro, bairro, numeroEndereco, estado) values
    (default, 'Central Ração', '26.040.194/0001-42', '3236-0021', '38402-810', 'Rua César Mugnato', 'Distrito Industrial', 100, 'MG'),
    (default, 'Redemax Distribuidora', '55.805.922/0001-68','2945-0608', '38020-580', 'Rua Donato Cicci', 'São Benedito', 666, 'MG'),
    (default, 'W.P & Cia', '05.439.809/0001-38','2709-4894', '35046-108', 'Rua Placedina Cabral', 'Vale Pastoril II', 462, 'MG'),
    (default, 'Dogminas', '63.609.391/0001-66','3531-7205', '32143-310', 'Rua K', 'Colorado', 243, 'MG'),
    (default, 'Privet', '07.878.872/0001-04','3570-7731', '30250-430', 'Rua Sertaneja', 'Fazendinha', 752, 'MG'),
    (default, 'Centro-Oeste', '58.660.036/0001-81','3595-9693', '36300-366', 'Rua Uriel Pio', 'São Geraldo', 262, 'MG'),
    (default, 'AVANTE SAUDE ANIMAL LTDA', '41.754.941/0001-06','2584-0876', '32185-520', 'Rua da República', 'Jardim Alvorada', 873, 'MG'),
    (default, 'GENOPLAN DIST PRODS AGROP LTDA ME', '97.091.830/0001-03','3627-6810', '31742-380', 'Rua Gustavo Revert', 'Jardim Guanabara', 475, 'MG'),
    (default, 'MOURAGRO COM PROD AGROPEC LTDA', '97.225.600/0001-90','2970-5350', '37904-032', 'Rua Catedral', 'Penha', 732, 'MG'),
    (default, 'GRANPLUS', '32.340.467/0001-77','2946-2606', '39402-640', 'Rua B', 'João Alves', 835, 'MG'),
    (default, 'Amoedo Distribuidora', '65.860.000/0001-07','2606-3657', '35182-460', 'Rua Orquídea', 'Primavera', 589, 'MG');

insert into produto (idproduto, nome, preco, tipo) values
    (default, 'Premier Golden Power - 10kg', 99.9, 'Ração'),
    (default, 'Pet Clean - banho seco - 500ml', 15.99, 'Higiene'),
    (default, 'Pipicat Classic - areia sanitária - 4kg', 13.99, 'Higiene'),
    (default, 'Probiótico Pet Avert - 14g', 32.9, 'Vitamina'),
    (default, 'Antipulgas Bravecto p/ caes de 4,5 a 10 kg', 224.9, 'Higiene'),
    (default, 'Ração úmida Whiskas sabor carne - 85g ', 2.98, 'Ração'),
    (default, 'Poste arranhador p/ gatos', 78.9, 'Brinquedos'),
    (default, 'Casa DuraPets azul', 356.99, 'Casa'),
    (default, 'Ração Sempre Vita p/ calopsitas', 9.99, 'Ração'),
    (default, 'Kit coleira, guia e peitoral', 59.98, 'Coleiras');

insert into vacina (idvacina, nome, patologia) values 
    (default, 'Antirrábica', 'Raiva'),
    (default, 'V8', 'Cinomose, parvovirose, coronavirose'),
    (default, 'V10', 'Mesmas da V8 + leptospira'),
    (default, 'Vacina contra a Giardíase', 'Giardíase'),
    (default, 'Vacina contra a gripe canina', 'gripe canina viral/bacteriana'),
    (default, 'Vacina contra a leishmaniose', 'leishmaniose'),
    (default, 'Vacina Tríplice', 'Doenças respiratórias'),
    (default, 'Vacina Quádrupla', 'Mesmas da Tríplice + clamidiose'),
    (default, 'Vacina Quíntupla', 'Mesmas da Quádrupla + leucemia felina'),
    (default, 'Peritonite Infecciosa Felina', 'Síndrome viral por coronavírus');


/* FKs ir de 1-10 */
insert into pet (idPet, Cliente_idCliente, nome, sexo, especie, dataNascimentoEstimado, raca,peso, historico, cartaoVacina) values 
    (default, 1, 'Minnie', 'F', 'Cachorro', '2018-02-05', 'Chow-Chow', 22.5, 'Nada consta', 'A,B,C'),
    (default, 3, 'Acsa', 'F', 'Gato', '2022-01-10', 'Siamês', 7.00, 'Nada Consta', 'A,C'),
    (default, 10, 'Ted', 'M', 'Ave', '2021-11-05', 'Periquito', 1.00, 'Nada Consta', 'A,D,C'),
    (default, 3, 'Geraldo', 'M', 'Cachorro', '2015-01-13', 'Rottweiler', 30.00, 'Gripe Canina', 'T,B,C'),
    (default, 4, 'Lilica', 'F', 'Cachorro', '2014-12-19', 'Poodle', 12.00, 'Nada Consta', 'G,F,C'),
    (default, 5, 'Patricia','F','Hamster','2019-09-28','Anão Russo', 0.30, 'Nada Consta', 'D,N,C'),
    (default, 6, 'Marcinho','M', 'Peixe', '2020-07-03', 'Carpa', 3.00, 'Nada Consta', 'Q,B,Y'),
    (default, 7, 'Rex', 'M', 'Cachorro', '2011-03-26', 'Pit Bull', 35.00, 'Dirofilariose e Doença de Lyme', 'N,B,F'),
    (default, 8, 'Atreus', 'M', 'Cachorro', '2017-12-08', 'Beagle', 20.00, 'Nada Consta', 'A,R,N'),
    (default, 2, 'Rengar', 'M', 'Gato', '2021-04-15', 'Ragdoll', 5.00, 'Nada Consta', 'A,B,V'),
    (default, 2, 'Tequinha', 'F', 'Cachorro', '2016-07-24', 'Shih-tzu', 11.00, 'Nada Consta', 'Q,B,C'),
    (default, 2, 'Apolo', 'M', 'Cachorro', '2022-01-05', 'Golden Retriever', 5.00, 'Nada Consta', 'A');

insert into estoque (idEstoque, Produto_idProduto, validade, dataCompra, lote, qtdEstoque) values
    (default, 1, '2023-04-05', '2022-02-01', 'AX10E', 5),
    (default, 4, '2023-12-05', '2021-07-27', 'AK10O', 12),
    (default, 5, '2023-10-05', '2021-08-30', 'AD12W', 23),
    (default, 9, '2023-08-05', '2022-01-07', 'EA71O', 18),
    (default, 8, '2023-03-05', '2021-09-15', 'UR32P', 7),
    (default, 6, '2022-09-05', '2021-08-17', 'OP15E', 2),
    (default, 2, '2023-04-05', '2022-01-05', 'ET5AO', 9),
    (default, 3, '2022-11-05', '2021-02-10', 'IT82E', 31),
    (default, 7, '2022-05-05', '2021-12-19', 'AA11Y', 34),
    (default, 10, '2022-12-05', '2021-12-15', 'EX90R', 21);

insert into compra (idCompra, Fornecedor_idFornecedor, dataCompra, precoCompra, produto, qtd) values 
    (default, 1, '2022-01-10', 55.00, 'Arranhador', 1), 
    (default, 2, '2022-02-11', 25.00, 'Pelúcia', 1),
    (default, 3, '2022-03-12', 250.00, 'Cama para gato', 2),
    (default, 4, '2022-04-13', 30.00, 'Bolinha', 1),
    (default, 5, '2022-05-14', 100.00, 'Coleira para cães', 2),
    (default, 6, '2022-06-15', 40.00, 'Pote de ração', 1),
    (default, 7, '2022-07-16', 70.00, 'Ração para gatos', 1),
    (default, 8, '2022-08-17', 80.00, 'Ração para cães', 1),
    (default, 9, '2022-09-18', 110.00, 'Cama para cães', 1),
    (default, 10, '2022-10-19', 7.00, 'Petisco', 1);

--verificar
insert into servico (idservico, Profissional_idProfissional, tipo, preco) values
    (default, 1, 'Consulta', 150.0),
    (default, 2, 'Consulta', 150.0),
    (default, 3, 'Consulta', 150.0),
    (default, 4, 'Consulta', 150.0),
    (default, 5, 'Tosa', 50.0),
    (default, 6, 'Tosa', 50.0),
    (default, 7, 'Auxilia', 120.0),
    (default, 8, 'Auxilia', 120.0),
    (default, 9, 'Vende', 0.0),
    (default, 10, 'Vende', 0.0);

insert into servico (idservico, Profissional_idProfissional, tipo, preco) values
    (default, 1, 'Consulta', 150.0),
    (default, 2, 'Operação', 250.0),
    (default, 3, 'Day Care', 60.0),
    (default, 4, 'Banho', 70.0),
    (default, 5, 'Tosa', 60.0),
    (default, 6, 'Internação', 80.0),
    (default, 7, 'Auxilia', 120.0),
    (default, 8, 'Exame - Sangue', 100.0),
    (default, 9, 'Ultrasom', 80.0),
    (default, 10, 'Vende', 0.0);

insert into ordemServico (idOrdemServico, Cliente_idCliente, valorTotal, dataVenda) values
    (default,1, NULL, '2022-01-11'),
    (default,2, NULL, '2022-01-11'),
    (default,3, NULL, '2022-02-03'),
    (default,4, NULL, '2022-02-13'),
    (default,5, NULL, '2022-02-04'),
    (default,6, NULL, '2022-02-05'),
    (default,7, NULL, '2022-02-07'),
    (default,8, NULL, '2022-02-10'),
    (default,9, NULL, '2022-02-11'),
    (default,10, NULL, '2022-02-11');

insert into OrdemServico_has_Servico(OrdemServico_idOrdemServico,Servico_idServico) values 
(1,3),
(1,4),
(1,5),
(2,4),
(2,5),
(3,2),
(4,1),
(4,8),
(4,9),
(4,6),
(5,4),
(6,1),
(7,10),
(8,1),
(8,10),
(9,1),
(9,8),
(9,6),
(10,4),
(10,5);


