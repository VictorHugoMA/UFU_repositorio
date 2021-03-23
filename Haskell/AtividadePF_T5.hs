--Aluno: Victor Hugo Martins Alves
import Data.Char
 
--lista 08_09

--Ex 8
--funcao que dado um Int retorna a quantidade de digitos que o nuemro tem 
conta_digitos :: Int -> Int
conta_digitos n
 | n == 0 = 0
 | otherwise = 1 + conta_digitos (div n 10)
 

--Ex 10
--funcao utilizando a recursividade para calcular a potencia
potencia :: (Int, Int) -> Int
potencia (b,e)
 | e == 0 = 1
 | otherwise = b * potencia (b, e-1)
 

--Ex 11
--funcao de Ackermann, que nao e recursiva primitiva 
ack :: (Int, Int) -> Int
ack (m,n)
 | m == 0 = n+1
 | m>0 && n == 0 = ack(m-1,1)
 | m>0 && n>0 = ack(m-1,ack(m,n-1))
 
 
--lista 15_09

--Ex 2(h) 
--dado uma lista devolve seu ultimo elemento
ultimo :: [Int] -> Int
ultimo [x] = x
ultimo (x:xs) = ultimo xs

--Ex 2(i) 
--funcao que duplica os elementos de uma lista
duplicar :: [Int] -> [Int]
duplicar [] = []
duplicar (x:xs) = x:x: duplicar xs

--Ex 2(k)
--funcao que substitui um elemento por outro na lista 
substituir_todos :: Int -> Int -> [Int] -> [Int]
substituir_todos a b [] = []
substituir_todos a b (x:xs)
 | a == x = b : substituir_todos a b xs
 | otherwise = x : substituir_todos a b xs 

--Ex 2(n)
--funcao que devolve o maior elemento de uma lista
maior :: [Int] -> Int
maior [x] = x
maior (x:xs) = max x (maior xs)


--Ex 3(b)
--funcao que une duas listas 
uniao :: [Int] -> [Int] -> [Int]
uniao [] a = a
uniao a [] = a
uniao (x:xs) (y:ys)
 | x < y = x : uniao xs (y:ys)
 | x == y = x : uniao xs ys
 | x > y = y : uniao (x:xs) ys

--Ex 3(c)
--funcao que dado duas listas devolve uma lista com os elementos que pertemcem as duas listas ao mesmo tempo
inter :: [Int] -> [Int] -> [Int]
inter [] _ = []
inter _ [] = []
inter (x:xs) (y:ys)
 | x < y = inter xs (y:ys)
 | x == y = x : inter xs ys
 | x > y = inter (x:xs) ys 


--Ex 4(c)
--Funcao que transforma uma Stirng minusculo em maiusculo
maius :: String -> String
maius [] = []
maius (x:xs) = toUpper x : maius xs

--funcao que dado uma String devolve uma tupla-2 com a String original e a maiuscula utilizando a funcao maius definida anteriormente  
maius2 :: String -> (String, String)
maius2 x = (x, maius x) 



--Ex 7
--funcao que converte um numero binario em decimal 
converte :: [Int] -> Int
converte [] = 0
converte x = head x * 2 ^ (length x - 1) + converte (tail x)


--Ex 8
--funcao que dado um int devolve uma lista com eles separados 
digitos :: Int -> [Int]
digitos 0 = []
digitos x = (digitos (div x 10)) ++ [mod x 10]
