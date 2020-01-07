# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?

# STATUS - CORRECT SOLUTION

import math
import time

start = time.time()

number = 600851475143
upper_limit = int(math.sqrt(number)) + 1
# first we have to find all prime numbers up to upper limit

seive_list = [True] * (upper_limit + 1)

for i in range(2, len(seive_list) + 1):
    # print(i)
    j = 2
    temp = j * i
    while temp < upper_limit:
        seive_list[temp] = False
        j += 1
        temp = j * i

print("done with seive calculation")

# now we have to check in these prime numbers which is the highest factor of the number
for i in range(upper_limit, 1, -1):
    if seive_list[i] and number % i == 0:
        print(i)
        break

print("time taken to solve:", time.time() - start, "seconds!!")
