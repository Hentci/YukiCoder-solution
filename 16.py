mod = 1000003
x, N = map(int, input().split())
arr = list(map(int, input().split()))

ans = 0
for ele in arr:
    ans += pow(x, ele, mod)

print(ans % mod)