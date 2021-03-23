--Head
cab :: [Int] -> Int
cab (x:_) = x

--Tail
cau :: [Int] -> [Int]
cau (_:xs) = xs

--Verifica se a lista e vazia
vazia :: [Int] -> Bool
vazia [] = True
vazia (x:xs) = False

--Produto dos elementos de uma lista 
produto :: Num a => [a] -> a
produto [] = 1
produto (x:xs) = x * produto xs

produto' :: Num a => [a] -> a
produto' [x] = x
produto' (x:xs) = x * produto xs

--Soma dos elementos de uma lista
soma :: Num a => [a] -> a
soma [] = 0
soma (x:xs) = x + soma xs

--Comprimento de uma lista
comprimento :: [a] -> Int
comprimento [] = 0
comprimento (_:xs) = 1 + comprimento xs

--Reverter uma lista
reverso :: String -> String
reverso [] = []
reverso (x:xs) = reverso xs ++ [x]