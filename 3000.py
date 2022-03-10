pwd = 'cqlmdrstfxyzbanopuvweghijk'
alpha = 'abcdefghijklmnopqrstuvwxyz'

ans = []

s = input()

for ele in s:
    ans.append(pwd[alpha.index(ele)])

print(*ans, sep='')
