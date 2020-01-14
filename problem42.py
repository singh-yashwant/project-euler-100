file = open("problem42_data.txt", 'r')
val = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

max_word_len = 0

contents = file.read().split(',')
n_non_triange_words = 0

for word in contents:
	max_word_len = max(len(word) - 1, max_word_len)

triangle_no_set = []
for i in range(1, 99999):
	triangle_no_set.append((i * (i + 1)) // 2)
	if (i * (i + 1)) // 2 > max_word_len * 26:
		break
triangle_no_set = set(triangle_no_set)

for word in contents:
	word = word[1:-1]
	value = 0
	
	for letter in word:
		value += (val.index(letter) + 1)
		
	if value in triangle_no_set:
		n_non_triange_words += 1
		
print(n_non_triange_words)
file.close()

