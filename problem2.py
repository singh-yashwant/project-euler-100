# STATUS - CORRECT SOLUTION

fib_a = 1
fib_b = 2

even_value_sum = 0

while True:
    temp = fib_a
    fib_a = fib_b
    if fib_b > 4000000:
        break
    # print(fib_b)
    if fib_b % 2 == 0:
        even_value_sum += fib_b
    fib_b += temp

print(even_value_sum)
