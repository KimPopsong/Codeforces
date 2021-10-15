string = list(input().split('+'))

string.sort()

for i in range(len(string) - 1):
	print(string[i], '+', sep = '', end = '')
print(string[-1])
