d1, d2, d3 ,s = map(int, input().split())

d = d1 + d2 + d3

if s or d < 2:
    print('SURVIVED')
else:
    print('DEAD')