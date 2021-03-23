-- Aluno: Victor Hugo Martins Alves

--Ex 1
ls1 :: [Int]
ls1 = [3 ,1 ,4 ,1 ,5]

ls2 :: [Int]
ls2 = [1 ,6 ,1 ,8 ,0]

{-
a)ls1 > ( tail ls2) -> False 
O primeiro elemento de ls1 ( 3)  é menor que 6,  que é o primeiro elemento de tail[1,6,1,8,0] que gera [6,1,8,0]
b)( tail ls1) ++ ls2 -> [1,4,1,5,1,6,1,8,0]
c)head ( tail ( tail ls1 )) -> 4 
O primeiro elememto da cauda da cauda de ls1
d)fst ( head ls1 , tail ls2) -> 3 
O primeiro da tupa que e o primeiro de ls1
e)3 ++ ls1 -> erro so junta listas
f)snd ( head ls1 , tail ls2) ->	[6,1,8,0]
g)"1,2,3" ++ ls1 ->	erro so junta listas
h)( head ( tail ls2), tail ls1) -> (6,[1,4,1,5])
i)head ls1 ++ ls1 -> erro so junta listas
j)ls2 ++ [1..7] -> [1,6,1,8,0,1,2,3,4,5,6,7]
k)[9] ++ ls1 ++ ls2 -> [9,3,1,4,1,5,1,6,1,8,0]
-}

--Ex 2
terceiro :: [Int] -> Int
terceiro ls = head (tail (tail ls))

--Ex 3
ultimo :: [Char] -> Char
ultimo str = head (reverse str)

inicio :: [Char] -> [Char]
inicio str = reverse (tail (reverse str))

--Ex 4
primeiras :: [Char] -> [Char] -> (Char, Char) 
primeiras a b = (head a, head b)

--Ex 5
{-
1:[2 ,3 ,4] -> [1,2,3,4]
1:2:3:4:[] -> [1,2,3,4]
[1 ,2 ,3]:[4..7] -> erro
1:[ ’a’,’b ’] -> erro
"a":" bCc " -> erro
’a ’:’b’ -> erro
’a ’:"b" -> "ab"
[1 ,4 ,7] ++ 4:[5:[]] -> erro
[True , True :[]] -> erro
True :[ True , False ] -> [True,True,False]
-}