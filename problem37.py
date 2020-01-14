def is_truncable_prime(n):
	if not is_prime[n]:
		return False
	temp1 = str(n)
	temp2 = str(n)
	while len(temp1) > 0:
		if not is_prime[int(temp1)]:
			return False
		temp1 = temp1[:-1]
	while len(temp2) > 0:
		if not is_prime[int(temp2)]:
			return False
		temp2 = temp2[1:]
	return True

is_prime = {}
is_prime[1] = False
for i in range(2, 1000001):
	is_prime[i] = True

for i in range(2, 1000001):
	if is_prime[i]:
		for j in range(2, 1000001):
			index = i * j
			if index > 1000000:
				break
			else:
				is_prime[index] = False
sum = 0
for i in range(10, 1000000):
	if is_truncable_prime(i):
		sum += i
		print(i)
print(sum)

#print(is_truncable_prime(29))
#print(is_prime[29])
