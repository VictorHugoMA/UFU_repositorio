--Aluno: Victor Hugo Martins Alves 
--Exerciio 30/09

import Data.Char

--Ex 1(a)
-- funcoes que dado uma lista de tupla-2 devolve os primeiros elementos da tupla(com recurssao e map) 
primeirosR :: [(a,b)] -> [a]
primeirosR [] = []
primeirosR (x:xs) = fst x : primeirosR xs 

primeiros :: [(a,b)] -> [a]
primeiros x = map fst x


--Ex 1(b)
--Funcao que transforma uma Stirng minusculo em maiusculo (recurssao e map)
maiusculaR ::  String -> String 
maiusculaR [] = []
maiusculaR (x:xs) = toUpper x : maiusculaR xs

maiuscula :: String -> String
maiuscula x = map toUpper x 


--Ex 1(c)
--funcao que duplica os elementos de uma lista (recurssao e map)
dobraR :: Num a => [a] -> [a] 
dobraR [] = []
dobraR (x:xs) = 2*x : dobraR xs

dobra :: Num a => [a] -> [a] 
dobra x = map (*2) x


--Ex 1(d)
--funcao que converte uma lista de horas em segundos (recurssao e map)
hora_em_segR :: [Float] -> [Float]
hora_em_segR [] = []
hora_em_segR (x:xs) = x*3600 : hora_em_segR xs

hora_em_seg :: [Float] -> [Float]
hora_em_seg x = map (*3600) x 



--Ex 7(a)
--funcao que dado uma lista devolve os pares desse lista (recurssao e filter)
paresR :: [Int] -> [Int] 
paresR [] = []
paresR (x:xs)
 |even x = x : paresR xs
 |otherwise = paresR xs
 
pares :: [Int] -> [Int]
pares x = filter even x 


--Ex 7(b)
--funcao que deixa apenas as letras na String (recurssao e filter)
alfaR :: String -> String
alfaR [] = []
alfaR (x:xs) 
 |isAlpha x = x: alfaR xs
 |otherwise = alfaR xs 
 
alfa :: String -> String
alfa x = filter isAlpha x


--Ex 7(c)
--funcao que remove um caracter de uma String (recurssao e filter)
remove_charR :: Char -> String -> String
remove_charR _ [] = []
remove_charR y (x:xs)
 |y==x = remove_charR y xs
 |otherwise = x : remove_charR y xs

remove_char :: Char -> String -> String
remove_char a x = filter (a /=) x


--Ex 7(d)
--funcao que remove todos os valores menores ou iguais a uma variavel em uma lista (recurssao e filter)
acimaR :: Int -> [Int] -> [Int]
acimaR _ [] = []
acimaR y (x:xs)
 |y>=x = acimaR y xs
 |otherwise = x: acimaR y xs
 
acima :: Int -> [Int] -> [Int]
acima y x = filter (y<) x


--Ex 7(e)
--funcao que devolve uma listas com as tuplas que tem os elementos diferentes (recurssao e filter)
desiguaisR :: Eq t => [(t,t)] -> [(t,t)]
desiguaisR [] = []
desiguaisR (x:xs)
 |fst x == snd x = desiguaisR xs
 |otherwise = x: desiguaisR xs

desiguais :: Eq t => [(t,t)] -> [(t,t)]
desiguais a = filter (\(x,y) -> x /= y) a



--Ex 8(a)
--funcao que dado uma lista devolve o produto dos seus elementos (recurssao e foldr)
produtoR :: Num a => [a] -> a
produtoR [] = 1
produtoR (x:xs) = x * produtoR xs

produto :: Num a => [a] -> a
produto x = foldr (*) 1 x


--Ex 8(b)
--funcao que faz o e logico e devolve True ou False (recurssao e foldr)
e_logicoR :: [Bool] -> Bool
e_logicoR [] = True 
e_logicoR (x:xs) = x && e_logicoR xs

e_logico :: [Bool] -> Bool
e_logico x = foldr (&&) True x


--Ex 8(c)
--funcao que concatena uma lista de Stirngs (recurssao e foldr)
concatenaR :: [String] -> String
concatenaR [] = ""
concatenaR (x:xs) = x ++ concatenaR xs

concatena :: [String] -> String
concatena x = foldr (++) "" x 


--Ex 8(d)
--funao que dado um numero e uma lista devolve o maior elemente entre eles(precisou colocar o Ord para funcionar) 
maiorR :: (Num a, Ord a) => a -> [a] -> a
maiorR y [] = y
maiorR y (x:xs) 
 |y>x = maiorR y xs
 |otherwise = maiorR x xs
 
maior :: (Num a, Ord a) => a -> [a] -> a
maior a x = foldr max a x

