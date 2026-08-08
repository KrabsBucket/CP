t = int(input())
for _ in range(t):
    a, b, n = map(int, input().split())
    arry = list(map(int, input().split()))
    s = b
    for _ in arry:
        s += min(1+_, a)

    print(s -n)

    
