t = int(input())

for _ in range(t):
    n = int(input())
    arry = list(map(int,  input().split()))

    e = sum(arry)

    print(-1 * e)