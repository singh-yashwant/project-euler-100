file = open("problem59_data.txt", 'r')
encrypted = [int(x) for x in file.read().split(',')]
#print(encrypted)

msg_len = len(encrypted)
keys = []
key_string = "qwertyuiopasdfghjklzxcvbnm"
for i in range(len(key_string)):
	for j in range(len(key_string)):
		for k in range(len(key_string)):
			keys.append(key_string[i]+ key_string[j] + key_string[k])

decrypted = ""
for x in keys:
	key = [ord(y) for y in x]
	key *= msg_len // 3
	decrypted = ""
	for i in range(msg_len):
		decrypted += chr(encrypted[i] ^ key[i])
	if("the" in decrypted and "as" in decrypted and "his" in decrypted and "that" in decrypted):
		print("password is ", [chr(x) for x in key[:3]])
		print(decrypted)
		print(sum([ord(x) for x in decrypted]))
		break
file.close()
