t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = []
    cse = False
    for j in range(1, n):
        if a[j-1] > a[j]:
            print(0)
            cse = True
            break
    if not cse:
        for i in range(n-1):
            b.append(a[i+1] - a[i])
        k = min(b)

        print(k//2 + 1)