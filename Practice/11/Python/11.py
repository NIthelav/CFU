base = int(input())
pow = int(input())

res = 1
for _ in range(pow):
    res *= base

print(res)