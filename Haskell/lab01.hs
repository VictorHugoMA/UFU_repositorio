dobro :: Int -> Int
dobro a = 2*a

quadruplo :: Int -> Int
quadruplo b = 2*(dobro b)

soma2 :: Int -> Int -> Int
soma2 x y = x+y

soma4 :: Int -> Int -> Int -> Int -> Int
soma4 x y z b = (soma2 x y) + (soma2 z b)

misterio :: Int -> Int -> Int -> Int -> Int
misterio x y z w = soma2 (soma2 x y) (soma2 z w) -- soma4 utilizando apenas soma2


hipotenusa :: Float -> Float -> Float
hipotenusa co ca = sqrt(co*co + ca*ca)

{- 
comentario em bloco
-}
maiusculo :: Char -> Bool
maiusculo letra = letra >= 'A' && letra <= 'Z'