def find_all_rotations(s):
	rotations = []
	digits = len(s)
	for i in range(digits):
		rotations.append(int(s))
		last = int(s) % 10
		s = str(last) + s[:-1]
	return rotations
	
def is_rotating_prime(n):
	rotations = find_all_rotations(str(n))
	n_prime = 0
	for x in rotations:
		if is_prime[x]:
			n_prime += 1
	if n_prime == len(rotations):
		return 1 
	return 0
	
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
	
count = 0
for i in range(1, 1000001):
	if is_rotating_prime(i):
		print(i)
		count += 1
print(count)
