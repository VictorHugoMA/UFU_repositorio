--Ex1
--primeira versão
separa :: [ Int ] -> [ Int ]
separa (p:s:r) = (s:r)

{-
--segunda versão
separab :: [ Int ] -> [ Int ]
separab (p:s:r) = (r:s:p)

--terceira versão
separac :: [ Int ] -> [ Int ]
separac (p:r) = r
-}

--Ex2

--c
somatorio_impares :: [Int] -> Int
somatorio_impares [] = 0
somatorio_impares (x:xs) 
 | mod x 2 == 0 = somatorio_impares xs
 | mod x 2 /= 0 = x + somatorio_impares xs

--d
--Soma dos quadrados dos elementos da lista
soma_quadrados :: [Int] -> Int
soma_quadrados [] = 0
soma_quadrados (x:xs) = x*x + soma_quadrados xs


--g
n_esimo :: Int -> [a] -> a
n_esimo 0 (x:_) = x
n_esimo n (_:xs) = n_esimo (n-1) xs

--n
-- funcao que devolve o maior da lista (dois tipos)
maior :: [Int] -> Int
maior [x] = x
maior (x:xs) = max x (maior xs)

maior' :: (Ord a) => [a] -> a  
maior' [] = error "maior de lista vazia"  
maior' [x] = x  
maior' (x:xs)  
    | x > mcau = x  
    | otherwise = mcau  
    where mcau = maior' xs 


--s
--Eq permite comparacao de igualdade
pertence :: Eq a => a -> [a] -> Bool
pertence _ [] = False
pertence n (x:xs)
 | x == n = True
 | otherwise = pertence n xs
 
 
--p
impares :: [Int] -> Bool
impares [] = True
impares (x:xs)
 | mod x 2 == 0 = False
 | otherwise = impares xs
 
--t
remover_todos :: Int -> [Int] -> [Int]
remover_todos _ [] = []
remover_todos n (x:xs)
 | n == x = remover_todos n xs
 | otherwise = x : remover_todos n xs
 
 
--4
--a
{-
maius [x] = (toUpper x)
maius (x:xs) = toUpper x : maius xs
-}

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

{-
diferenca entre : e ++
: junta um elemento a uma lista
++ junta duas listas 
-}
