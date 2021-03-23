--Aluno: Victor Hugo Martins Alves
--Trabalho: Funcoes de Ordem Superior


--Definindo tipos
type Nome = String
type Preco = Int
type CodBar = Int
type BaseDeDados = [(CodBar,Nome,Preco)]
type ListaDeCodigos = [CodBar]
type Recibo = [(Nome,Preco)]


--lista de produtos com cod de barras, nome e preco
listaDeProdutos :: BaseDeDados
listaDeProdutos = [(1234, "Oleo DoBom, 1l" , 195),
 (4756, "Chocolate Cazzeiro, 250g" , 180),
 (3216, "Arroz DoBom, 5Kg", 213), 
 (5823, "Balas Pedregulho, 1Kg" , 379), 
 (4719, "Queijo Mineirim, 1Kg" , 449),
 (6832, "Iogurte Maravilha, 1Kg" , 499), 
 (1112, "Rapadura QuebraDente, 1Kg", 80), 
 (1111, "Sal Donorte, 1Kg", 221),
 (1113, "Cafe  DoBom, 1Kg", 285),
 (1115, "Biscoito Bibi, 1Kg", 80),
 (3814, "Sorvete QGelo, 11", 695)] 

--tamanho da linha (35 porque alguns produtos eram quase do mesmo tamanho da linha de 30)
tamLinha :: Int
tamLinha = 35

--funcao que recebe um int com os centavos e tranforma em uma string com o preco transformado para real, e usa guardas para verificar se o rem e maior que 10 e assim adicionar um 0
formataCentavos :: Preco -> String
formataCentavos x 
 |rem x 100 <10 = show (div x 100) ++ ".0" ++ show (rem x 100)
 |otherwise = show (div x 100) ++ "." ++ show (rem x 100)

--funcao que replica uma variavel um certo numero de vezes
replicar :: Int -> a -> [a]
replicar 0 y = []
replicar x y = y : replicar (x-1) y

--funcao que formata uma linha 
formataLinha :: (Nome,Preco) -> String
formataLinha (x,y) = x ++ (replicar (tamLinha - (length x + length (formataCentavos y))) '.') ++ (formataCentavos y) ++ "\n"

--funcao que formata varias listas usando Funcoes de ordem superior e a funcao formataLinhas
formataLinhas :: [(Nome,Preco)] -> String
formataLinhas x = foldl (++) "" (map formataLinha x)

--funcao que soma o preco dos itens dentro das tuplas utilizando snd como argumento de map e depois somando os elementos dessa nova lista
geraTotal :: Recibo -> Preco
geraTotal x = sum (map snd x)

--funcao que formata o preco, colocando no tamanho de linha certo, com as subtracoes dos espacos que foram usados 
formataTotal :: Preco -> String
formataTotal x = "Total" ++ (replicar (tamLinha - (6 + length (formataCentavos x ))) '.')  ++ "$" ++ (formataCentavos x) ++ "\n"

--funcao que formata o recibo com nome do supermercado, itens, seus precos e o total
formataRecibo :: Recibo -> String
formataRecibo x = "\nSupermercado QLegal"  ++ "\n" ++ (formataLinhas x) ++ (formataTotal (geraTotal x))

--funcao que dado a listaDeProdutos e um codigo de barras devolve qual produto o codigo equivale
acha :: BaseDeDados -> CodBar -> (Nome,Preco)
acha [] _ = ("Item desconhecido", 0)
acha ((cod,nome,preco):sobra) cod2 
 | cod == cod2 = (nome,preco)
 | otherwise = acha sobra cod2
 
--funcao que utilizando a funcao acha simplifica a maneira de achar o item 
achaItem :: CodBar -> (Nome, Preco)
achaItem x = acha listaDeProdutos x 

--funcao que dado uma lista de codigos de barras devolve os itens e precos correspondentes utilizando map para passar a funcao achaItem a todos os elementos da lista fazRecibo
fazRecibo :: ListaDeCodigos -> Recibo
fazRecibo x = map achaItem x 

--funcao que dado o codigo de barras utiliza outras funcoes para gerar o recibo formatado 
geraRecibo :: ListaDeCodigos -> String
geraRecibo x = formataRecibo( fazRecibo x)

--funcao para ler os codigos de barra e visualizar o recibo 
main = do
 x <- getLine
 putStrLn ((geraRecibo (read x :: ListaDeCodigos)))
 y <- getLine --tive que adicionar essas duas ultimas linhas pois o executavel estava fechando sem mostrar os resultados 
 putStrLn ("End")