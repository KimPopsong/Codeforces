import sys

x = 0

for _ in range(int(sys.stdin.readline().rstrip())):
    command = sys.stdin.readline().rstrip()

    for i in range(3):
        if command[i] == '+':
            x += 1
            break

        elif command[i] == '-':
            x -= 1
            break

print(x)
