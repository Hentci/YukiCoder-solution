x, y = map(int, input().split())

mn = min(x, y)
mx = max(x, y)

if x == y:
    print(x * 2)
elif x == 0 and y == 0:
    print(0)
elif x == 0 or y == 0:
    print(mx * 2 - 1)
else:
    print((mx - mn) * 2 + mn * 2 - 1) 