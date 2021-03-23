--Ex 15
esferaV :: Float -> Float
esferaV r = 4.0/3.0 * pi * (r^3)

--Ex 16
hipotenusa :: Float -> Float -> Float
hipotenusa co ca = sqrt(co*co + ca*ca)

--Ex 18
dpontos :: Float -> Float -> Float -> Float -> Float
dpontos xa ya xb yb = sqrt((xb-xa)^2+(yb-ya)^2)

num_quad :: Int -> Int
num_quad num = num^2

--Ex 20
num_quarta :: Int -> Int
num_quarta num = (num_quad num)*(num_quad num)

--Ex 27
logico1 :: Bool -> Bool -> Bool
logico1 p q = (p || q) && not(p && q)
