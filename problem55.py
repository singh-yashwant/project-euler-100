def is_lychrel(n):
	cur = n
	rev = n[::-1]
	for i in range(50):
		n = str(int(cur) + int(rev))
		cur = n
		rev = n[::-1]
		if cur == rev:
			return 0
	return 1

count = 0
for n in range(1, 10001):
	count += is_lychrel(str(n))
print(count)
