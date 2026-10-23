t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = []

    for _ in a:
        b.append(n-_+1)
    print(*b)
        