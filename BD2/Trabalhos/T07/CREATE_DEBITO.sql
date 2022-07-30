CREATE TABLE Debito (
  numero_debito integer NOT NULL,
  valor_debito double precision not null,
  motivo_debito smallint,
  data_debito date,
  numero_conta integer,
  nome_agencia VARCHAR(50),
  nome_cliente VARCHAR(80),
  CONSTRAINT pk_debito PRIMARY KEY (numero_debito),
  CONSTRAINT fk_debito FOREIGN KEY(numero_conta, nome_agencia, nome_cliente) REFERENCES conta(numero_conta, nome_agencia, nome_cliente)
);