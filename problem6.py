# Find the difference between the sum of the squares of the first one hundred natural numbers
# and the square of the sum.

import time
start = time.time()

sum_of_squares = 0
sum = 0
for i in range(1, 101):
    sum_of_squares += i ** 2
    sum += i

print(sum ** 2 - sum_of_squares)

print("time taken to solve:", time.time() - start, "seconds!!")
