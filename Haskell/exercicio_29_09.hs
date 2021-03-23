--Ex 1
segundo :: [a] -> a
segundo xs = head ( tail xs)

trocar :: (a,b) -> (b,a)
trocar (x,y) = (y,x)

--parear x y = (x, y)

dobro :: Num a =>  a -> a
dobro x = 2*x 

palindromo :: Eq a => [a] -> Bool
palindromo xs = reverse xs == xs


--Ex 5

--c
somatorio_impares :: Integral t => [t] -> t
somatorio_impares [] = 0
somatorio_impares (x:xs) 
 | mod x 2 /= 0 = x + somatorio_impares xs
 | otherwise = somatorio_impares xs
 
somatorio_impares' :: Integral t => [t] -> t
somatorio_impares' b = sum [x | x <- b , odd x]
