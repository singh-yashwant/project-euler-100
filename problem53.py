factorial_dict = {}
factorial_dict[0] = 1
for i in range(1, 101):
	factorial_dict[i] = i * factorial_dict[i-1]

def n_c_r(n, r):
	return (factorial_dict[n] / factorial_dict[r])/factorial_dict[n-r]
	
count = 0
for n in range(1, 101):
	for r in range(1, n+1):
		if(n_c_r(n, r) > 1000000):
			count += 1
print(count)
