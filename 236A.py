alphabet = [False] * 26

string = input()

for i in range(len(string)):
	alphabet[ord(string[i]) - 97] = True

if alphabet.count(True) % 2:
	print('IGNORE HIM!')
	
else:
	print('CHAT WITH HER!')
