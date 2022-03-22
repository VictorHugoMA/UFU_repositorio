drop schema cmm cascade;
CREATE SCHEMA cmm;
SET search_path TO cmm;

create table Equipe(
    idequ INTEGER primary key,
    nomeequ varchar(50), 
    paisequ varchar(50), 
    titulosequ varchar(50)
);

create table Pessoa(
    idpes INTEGER primary key,
    nomepes varchar(50),
    tipopes char,
    idequ INTEGER,
    constraint equfk_par foreign key (idequ) references Equipe(idequ)
);

create table Piloto(
    idpes INTEGER primary key,
    titulospil INTEGER,
    pontuacaopil INTEGER,
    constraint pesfk_pil foreign key (idpes) references Pessoa(idpes)
);

create table Mecanico(
    idpes INTEGER primary key,
    especialidademec varchar(50),
    idsup INTEGER,
    constraint pesfk_mec foreign key (idpes) references Pessoa(idpes)
);

alter table Mecanico
    add constraint supfk_mec foreign key (idsup) references Mecanico(idsup);

create table Circuito(
    idcir INTEGER primary key,
    nomecir varchar(50),
    localcir varchar(50)
);

create table Corrida(
    idcor INTEGER primary key,
    datacor date,
    categoriacor varchar(50),
    voltascor INTEGER,
    idcir INTEGER,
    constraint idcirfk_cor foreign key (idcir) references Circuito(idcir)
);

create table Participacao(
    idpes INTEGER,
    idcor INTEGER,
    voltaspar INTEGER,
    tempopar time(6),
    constraint pesfk_par foreign key (idpes) references Piloto(idpes),
    constraint corfk_par foreign key (idcor) references Corrida(idcor),
    constraint pk_par PRIMARY KEY (idpes, idcor)
);

