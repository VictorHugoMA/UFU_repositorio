-- n!
fatorial :: Int -> Int
fatorial n
 | n == 0 = 1
 | n>0 = n * fatorial (n-1)
 | n<0 = error "dever ser um numero maior ou igual a 0"
 
 
fatoraCP :: Int -> Int
fatoraCP 0 = 1
fatoraCP n = n * fatoraCP (n-1)

-- soma dos n primeiros números inteiros maiores que 0
somaN :: Int -> Int
somaN n
 | n == 0 = 0
 | otherwise = n + somaN (n-1)
 
 
--Maximo Divisor Comum
mdc :: (Int, Int) -> Int
mdc (m, n)
 | n == 0 = m
 | otherwise = mdc (n, mod m n)


--SOMA de dois numeros sem usar +-
somaT m n
 | n == 0 = m
 | otherwise = somaT (succ m) (pred n)