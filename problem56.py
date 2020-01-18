max_sum = 0
for i in range(1, 101):
	for j in range(1, 101):
		max_sum = max(max_sum, sum([int(x) for x in str(i ** j)]))
print(max_sum)
