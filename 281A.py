string = input()

if string[0].islower():
	string = string.replace(string[0], chr(ord(string[0]) - 32), 1)

print(string)
