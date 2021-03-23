inc :: Int -> Int
inc x = x + 1

square :: Int -> Int
square x = x * x

average' :: Float -> Float -> Float
average' a b = (a + b)/2.0

retangulo :: Float -> Float -> Float
retangulo b h = b*h

quadrado :: Float -> Float
quadrado l = l*l

triangulo :: Float -> Float -> Float
triangulo b h = (b*h)/2.0

trapezio :: Float -> Float -> Float -> Float
trapezio b1 b2 h = ((b1+b2)*h)/2.0

circulo :: Float -> Float
circulo r = pi * (r*r)

coroa :: Float -> Float -> Float
coroa cR cr = pi*(cR*cR) - pi*(cr*cr)

cuboV :: Float -> Float
cuboV a = a*a*a 

paralelepipedoV :: Float -> Float -> Float -> Float
paralelepipedoV c l h = c*l*h

piramideV :: Float -> Float -> Float
piramideV ab h = (1.0/3.0)*ab*h

esferaV :: Float -> Float
esferaV r = 4.0/3.0 * pi * (r^3)

hipotenusa :: Float -> Float -> Float
hipotenusa co ca = sqrt(co*co + ca*ca)

ponto :: Float -> Float -> Float
ponto x y = sqrt((0-x)^2+(0-y)^2) -- num negativo coloca parenteses

dpontos :: Float -> Float -> Float -> Float -> Float
dpontos xa ya xb yb = sqrt((yb-xa)^2+(yb-ya)^2) 

num_quad :: Int -> Int
num_quad num = num^2

num_cub :: Float -> Float
num_cub num = num^3

num_quarta :: Int -> Int
num_quarta num = (num_quad num)*(num_quad num)

segHora :: Float -> Float
segHora seg = seg/3600

segMin :: Float -> Float
segMin seg = seg/60

tempFC :: Float -> Float
tempFC temp = (temp-32)*5/9

tempKC :: Float -> Float
tempKC temp = temp - 273

tempFK :: Float -> Float
tempFK temp = (temp-32)*5/9 + 273

velKhMs :: Float -> Float
velKhMs vel = vel/3.6

logico1 :: Bool -> Bool -> Bool
logico1 p q = (p || q) && not(p && q)

logico2 :: Bool -> Bool -> Bool -> Bool
logico2 p q r = (p || q) && r

logico3 :: Bool -> Bool -> Bool -> Bool
logico3 p q r = (p && q) || not(p && r)

logico4 :: Bool -> Bool -> Bool -> Bool -> Bool
logico4 p q r s = p || (q && r) || not s

logico5 :: Bool -> Bool -> Bool -> Bool -> Bool
logico5 p q r s = not(p || q) && (r || s) && not r


