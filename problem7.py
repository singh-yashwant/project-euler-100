# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
# What is the 10 001st prime number?

import time
import math
start = time.time()

# function to check if a number is prime
def is_prime(x):
    for i in range(2, int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True

# list to insert 10001 prime numbers
primes = []
counter = 0

# calculating the primes
i = 1
while counter <= 10001:
    if is_prime(i):
        primes.append(i)
        counter += 1
    i += 1


print(primes[-1])
print("time taken to solve:", time.time() - start, "seconds!!")
