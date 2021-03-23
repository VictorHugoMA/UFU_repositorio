--Trabalho Programacao Funcional 1
--Aluno: Victor Hugo Martins Alves (12011BSI217)

-- Definindo tipos 
type Dia = Int
type Mes = Int
type Ano = Int
type Data = (Dia,Mes,Ano)

-- Funcao que devolve True para um ano bissexto ou False caso nao seja 
bissexto :: Ano -> Bool
bissexto ano 
 | (mod ano 4 == 0) && (mod ano 100 /=0 || mod ano 400 == 0) = True
 | otherwise = False
 
  
-- Funcao que devolve quantos dias os messes tem, em um dado um ano 
numDeDiasEmCadaMesDeUmAno :: Ano -> [Int]
numDeDiasEmCadaMesDeUmAno ano = 
 [31,feb,31,30,31,30,31,31,30,31,30,31]
 where feb
        | bissexto ano = 29
        | otherwise = 28 


-- Funcao que dada uma data fornece o numero de dias desde 31/12/2000		
numDeDias :: Data -> Int
numDeDias (dia, mes, ano) = 
   dia -- dias do mes
   + sum (take (mes-1) (numDeDiasEmCadaMesDeUmAno ano)) -- dias dos meses desse ano sem contar os dias desse mes
   + (ano-2001)*365 + (ano-2001)`div`4 -- dias dos anos sem contar esse ano


-- Funcao que dado um numero devolve o dia da semana 
nomeDoDia :: Int -> String
nomeDoDia n
 | n==0 = "Domingo"
 | n==1 = "Segunda"
 | n==2 = "Terca"
 | n==3 = "Quarta"
 | n==4 = "Quinta"
 | n==5 = "Sexta"
 | n==6 = "Sabado"
 
   

-- Funcao que dada uma data devolve o dia da semana  
diaDaSemana :: Data -> String
diaDaSemana y 
 | mod (numDeDias y) 7 == 0 = nomeDoDia 0
 | mod (numDeDias y) 7 == 1 = nomeDoDia 1
 | mod (numDeDias y) 7 == 2 = nomeDoDia 2
 | mod (numDeDias y) 7 == 3 = nomeDoDia 3
 | mod (numDeDias y) 7 == 4 = nomeDoDia 4
 | mod (numDeDias y) 7 == 5 = nomeDoDia 5
 | mod (numDeDias y) 7 == 6 = nomeDoDia 6
 
 
   