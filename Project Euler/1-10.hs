-- Run this on ghci

import Data.Char(digitToInt)
import qualified Data.Set as S

-- Problem 1 : Multiples of 3 or 5

sumMultiple :: Int -> Int
sumMultiple 0 = 0
sumMultiple n = if ((mod n 3) == 0 || (mod n 5) == 0) then n + sumMultiple (n - 1)
                else sumMultiple (n - 1)

-- Problem 2 : Even Fibonacci numbers

fib :: Int -> Int -> [Int]
fib a b = case a < 4000000 of True -> a:fib b (a + b)
                              False -> []

evenFib = sum $ filter even $ fib 1 2

-- Problem 3 : Largest prime factor

lgPriFac n s
   | n == 1 = s
   | (isPrime s) && (mod n s) == 0 = lgPriFac (div n s) s
   | otherwise = lgPriFac n (s + 1) 

-- Problem 4 : Largest palindrome product

lgPal :: Int -> Int -> Int -> Int
lgPal 999 999 m = m
lgPal x 999 m = lgPal (x + 1) 100 m
lgPal x y m = if ((max (x * y) m) == x * y) && 
                 ((show $ x * y) == reverse (show $ x * y)) 
                 then lgPal x (y + 1) (x * y)
              else lgPal x (y + 1) m

-- Problem 5 :: Smallest multiple

smMult :: Integral a => a -> a -> a
smMult x y = case x == y of True -> x
                            _    -> lcm y (smMult x (y - 1))

-- Problem 6 : Sum square difference

sumSqr x = sum $ map (^2) [1..x]

sqrSum x = (^2) $ sum [1..x] 

sumSqrDiff x = sqrSum x - sumSqr x

-- Problem 7 : 10001st prime
-- Highly unoptimized solution

nthPrime n s count = case n == (-3) of True -> s
                                       _    -> if (isPrime count) then nthPrime (n - 1) count (count + 1) else nthPrime n s (count + 1)

isPrime k = if k > 1 then null [ x | x <- [2..k - 1], k `mod` x == 0] else False

-- Problem 8 : Largest product in a series

thousand = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450"

prodAdj [] = 1
prodAdj (x:xs) = digitToInt (x) * prodAdj xs

adjacent 988 lg = lg
adjacent d lg = adjacent (d + 1) (max (prodAdj (take 13 (drop d thousand))) lg)

-- Problem 9 : Special Pythagorean triplet

triplet :: Integer -> Integer -> Integer
triplet m n = if (a + b + c == 1000) then a * b * c else tripletHelper m n
   where a = m^2 - n^2
         b = 2 * m * n
         c = m^2 + n^2

tripletHelper 1000 n = triplet (n + 2) (n + 1)
tripletHelper m n = triplet (m + 1) n

-- Problem 10 : Summation of primes 
-- (Can't solve this *sigh*)
-- https://www.youtube.com/watch?v=EJqpJ6Bz3GI

primesBelow :: Int -> [Int]
primesBelow n = S.toList $ sieve 3 (S.singleton 2) S.empty
   where 
      sieve i primes _ | i >= n = primes
      sieve i primes nonPrimes | S.member i nonPrimes = sieve (i+2) primes nonPrimes
      sieve i primes nonPrimes = 
         sieve (i+2) (S.insert i primes) $ S.union nonPrimes $ S.fromAscList [3*i, 5*i..n-1]

printPrimesBelow n = sum $ primesBelow n
