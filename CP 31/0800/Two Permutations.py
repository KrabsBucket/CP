t = int(input())
for _ in range(t):
    n, a, b = map(int, input().split())
    if n>= a+b+2 or (a==n and b==n):
        print('YES')
    else:
        print('NO')

