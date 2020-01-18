i = 2;
while(True):
	if(sorted(str(2 * i)) == sorted(str(i)) and sorted(str(3 * i)) == sorted(str(i)) and 
	sorted(str(4 * i)) == sorted(str(i)) and sorted(str(5 * i)) == sorted(str(i)) and 
	sorted(str(6 * i)) == sorted(str(i))):
		print(i)
		break	
	i += 1
