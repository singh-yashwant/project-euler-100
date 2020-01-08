# STATUS - CORRECT SOLUTION


def find_sum_of_multiples_of(a, b, n):
    sum = 0
    for i in range(1, n):
        if i % a == 0 or i % b == 0:
            sum += i
    return sum

print(find_sum_of_multiples_of(3, 5, 1000))
