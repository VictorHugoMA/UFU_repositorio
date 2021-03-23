--Ex 1

--Maximo Divisor Comum
mdc :: (Int, Int) -> Int
mdc (m, n)
 | n == 0 = m
 | otherwise = mdc (n, mod m n)

--Minimo Multiplo Comum
mmc :: (Int,Int) -> Int
mmc (a,b)
 | a == b = a
 | otherwise = div (a*b) (mdc (a, b))


-- variacao sem tupla
mdc_ ::Int->Int->Int
mdc_ x y 
 | y == 0 = x 
 | otherwise = mdc_ y (mod x y)
        
mmc_:: Int->Int->Int
mmc_ x y 
 | y == x = x 
 | otherwise = div (x * y) (mdc_ x y)
 

--Ex 2
--MDC de tres numeros utilizando a funcao mdc de 2
mdc3 :: (Int, Int, Int) -> Int
mdc3 (a,b,c) = mdc(mdc(a,b), c )


--Ex 3
--soma de 1 ate n 
soma :: Int -> Int
soma n  
 | n == 0 = 0
 | otherwise = n + soma (n-1)
 
 
--Ex 4
--soma de n1 ate n2 contando os limites
somaN12 :: Int -> Int -> Int
somaN12 n1 n2 
 | n1>n2 = 0
 | otherwise = n1 + somaN12 (n1+1) n2
 

somaT :: Int -> Int -> Int
somaT n1 n2
 |n1 == n2 = n1
 |otherwise = n1 + (somaT (n1+1) n2)
 

--soma n1 ate n2 sem contar os limites
soma_entre :: Int -> Int -> Int 
soma_entre n1 n2
 |n1 == n2 = 0
 |otherwise = (somaT (n1 + 1) n2) - n2
  
--Ex 5
--
multiplo :: Int -> Int -> Int
multiplo n1 n2 
 | (mod n1 n2) == 0 = n1
 | otherwise = 0

intervalo :: Int -> Int -> Int -> Int
intervalo n1 n2 n3
 | n1 == n2 = multiplo n1 n3
 | otherwise = (multiplo n1 n3) + (intervalo (n1+1) n2 n3)




--Ex 6


--Ex 11
--CP
ackermann :: (Integer,Integer) -> Integer
ackermann (0,y) = y+1
ackermann (x,0) = ackermann(x-1,1)
ackermann (x,y) = ackermann(x-1,ackermann(x,y-1))

--com guardas
ack :: (Int, Int) -> Int
ack (m,n)
 | m == 0 = n+1
 | m>0 && n == 0 = ack(m-1,1)
 | m>0 && n>0 = ack(m-1,ack(m,n-1))







 
 
