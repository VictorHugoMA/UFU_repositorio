--
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
 
--
listaDeCodigos :: [CodBar]
listaDeCodigos = [4756, 3216, 5823, 4719,6832, 1112, 1111, 1113, 1115,3814]

--
recibo :: [(Nome,Preco)]
recibo = [("Oleo DoBom, 1l" , 195),
 ("Chocolate Cazzeiro, 250g" , 180),
 ("Arroz DoBom, 5Kg", 213), 
 ("Balas Pedregulho, 1Kg" , 379), 
 ("Queijo Mineirim, 1Kg" , 449),
 ("Iogurte Maravilha, 1Kg" , 499), 
 ("Rapadura QuebraDente, 1Kg", 80), 
 ("Sal Donorte, 1Kg", 221),
 ("Cafe  DoBom, 1Kg", 285),
 ("Biscoito Bibi, 1Kg", 80),
 ("Sorvete QGelo, 11", 695)]
 
 
 
--funcao que tranforma o codigo de barras em nome e preco do produto 
fazRecibo :: ListaDeCodigos -> Recibo
fazRecibo x
 | x == [1234] = [("Oleo DoBom, 1l" , 195)]
 | x == [4756] = [("Chocolate Cazzeiro, 250g" , 180)]
 | x == [3216] = [("Arroz DoBom, 5Kg", 213)]
 | x == [5823] = [("Balas Pedregulho, 1Kg" , 379)]
 | x == [4719] = [("Queijo Mineirim, 1Kg" , 449)]
 | x == [6832] = [("Iogurte Maravilha, 1Kg", 499)]
 | x == [1112] = [("Rapadura QuebraDente, 1Kg", 80)]
 | x == [1111] = [("Sal Donorte, 1Kg", 221)]
 | x == [1113] = [("Cafe  DoBom, 1Kg", 285)]
 | x == [1115] = [("Biscoito Bibi, 1Kg", 80)]
 | x == [3814] = [("Sorvete QGelo, 11", 695)]
 

--funcao que trasforma o nome do produto e o preco em uma string 
formataRecibo :: Recibo -> String
formataRecibo x 
 | x == [("Oleo DoBom, 1l" , 195)] = ("Oleo DoBom, 1l , 195")
 | x == [("Chocolate Cazzeiro, 250g" , 180)] = ("Chocolate Cazzeiro, 250g, 180")
 | x == [("Arroz DoBom, 5Kg", 213)] = ("Arroz DoBom, 5Kg, 213")
 | x == [("Balas Pedregulho, 1Kg" , 379)] = ("Balas Pedregulho, 1Kg, 379")
 | x == [("Queijo Mineirim, 1Kg" , 449)] = ("Queijo Mineirim, 1Kg, 449")
 | x == [("Iogurte Maravilha, 1Kg", 499)] = ("Iogurte Maravilha, 1Kg, 499")
 | x == [("Rapadura QuebraDente, 1Kg", 80)] = ("Rapadura QuebraDente, 1Kg, 80")
 | x == [("Sal Donorte, 1Kg", 221)] = ("Sal Donorte, 1Kg, 221")
 | x == [("Cafe  DoBom, 1Kg", 285)] = ("Cafe  DoBom, 1Kg, 285")
 | x == [("Biscoito Bibi, 1Kg", 80)] = ("Biscoito Bibi, 1Kg, 80")
 | x == [("Sorvete QGelo, 11", 695)] = ("Sorvete QGelo, 11, 695")
 

--funcao que dado o codigo de barras utiliza outras funcoes para gerar o recibo formatado 
geraRecibo :: ListaDeCodigos -> String
geraRecibo lc = formataRecibo( fazRecibo lc)


--funcao que recebe um int com os centavos e tranforma em uma string com o preco transformado para real
formataCentavos :: Preco -> String
formataCentavos x = show (div x 100) ++ "." ++
                    | rem x 100 > 10 = show (rem x 100)
                    | otherwise = "0" ++ show (rem x 100)
					
				
main :: IO ()
main = putStr "Digite um número: " >>
       getLine >>= \s1 ->
       putStr "Digite outro número: " >>
       getLine >>= \s2 ->
       putStr "Soma: " >>
       putStrLn (geraReciboF (s2))
	   
	   
	   
--funcao para ler os codigos de barra e visualizar o recibo 
main = do
    putStrLn ((geraReciboF ([4756, 3216, 5823, 4719,6832, 1112, 1111, 1113, 1115,3814])))
  