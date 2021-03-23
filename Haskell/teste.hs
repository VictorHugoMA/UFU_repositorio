lista :: Int -> [Int]
lista x = x:[]

antes :: Ord t => (t, t) -> Bool
antes (x, y) = x < y

main = putStrLn (1+2)
