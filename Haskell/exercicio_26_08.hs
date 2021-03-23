qIguais :: (Int, Int, Int) -> Int
qIguais (x, y, z)
 | x == y && y==z = 3
 | x == y || x == z || y == z = 2
 | otherwise = 0


menor2 :: (Float, Float) -> Float
menor2 (x, y)
 | x < y = x
 | otherwise = y


menor3 :: (Float, Float, Float) -> Float
menor3 (x, y, z)
 | x < y && x < z = x
 | y < z = y
 |otherwise = z
 
menorInt :: (Int, Int, Int) -> Int
menorInt (x, y, z)
 | x < y && x < z = x
 | y < z = y
 |otherwise = z
 
maior3 :: (Int, Int, Int) -> Int
maior3 (x, y, z)
 | x > y && x > z = x
 | y > z = y
 |otherwise = z
 

f1 :: (Int, Int, Int) -> (Int, Int)
f1 (x,y,z)
 |x > y && x > z = (x, (menorInt (x, y, z)))
 |y > x  && y > z = (y ,(menorInt (x, y, z)))
 |otherwise = (z, (menorInt (x, y, z)))


numRaiz :: (Int, Int, Int) -> Int
numRaiz (a, b, c)
 | (b^2) > (4*a*c) = 2
 | (b^2) == (4*a*c) = 1
 | (b^2) < (4*a*c) = 0
 

datas :: (Int, Int, Int) -> (Int, Int, Int) -> [Char]
datas (a1, m1, d1) (a2, m2, d2)
 | a1<a2 = "Primeira data ocorreu antes da segunda"
 | a2<a1 = "Segunda data ocorreu antes da primeira"
 | m1<m2 = "Primeira data ocorreu antes da segunda"
 | m2<m1 = "Segunda data ocorreu antes da primeira"
 | d1<d2 = "Primeira data ocorreu antes da segunda"
 | d2<d1 = "Segunda data ocorreu antes da primeira"
 
 
ordena2 :: Int -> Int -> (Int, Int)
ordena2 x y
 | x<y = (x,y)
 | otherwise = (y,x) 
 
par :: Int -> Bool
par a
 | mod a 2 == 0 = True
 | otherwise = False
 
impar :: Int -> Bool
impar a
 | mod a 2 /= 0 = True
 | otherwise = False
