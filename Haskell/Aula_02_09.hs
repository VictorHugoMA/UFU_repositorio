notLogico :: Bool -> Bool
notLogico a 
 | a == True = False
 | otherwise = True
 
eLogico :: (Bool, Bool) -> Bool
eLogico (a,b)
 | a == True && b == True = True
 | otherwise = False
 
 