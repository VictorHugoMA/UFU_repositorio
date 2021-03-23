modiv :: (Int, Int) -> (Int, Int)
modiv (a,b) = (div a b, mod a b)

seg :: (Int, Int, Int) -> Int
seg (h, m, s) = h*60*60 + m*60 + s

horario :: (Int) -> (Int, Int, Int)
horario (a) = (div a 3600, div (mod a 3600) 60, mod (mod a 3600) 60)