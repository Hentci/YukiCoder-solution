t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())
    print((a * pow(10, c, b * 10)) // b % 10)

