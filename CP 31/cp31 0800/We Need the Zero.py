t = int(input())
for _ in range(t):
    n = int(input())
    arry = list(map(int, input().split()))
    r = 0
    m = 0
    if n%2 == 1:
        for i in arry:
            r = r ^ i

        print(r)

    else:
        for i in arry:
            m = m ^ i

        if m == 0:
            print(3)

        else:
            print(-1)