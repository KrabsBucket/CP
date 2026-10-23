t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    m = 0
    s = []
    success = False
    if all( x ==1 for x in a):
        print(1)

    else:
        for i in range(n):
            if a[i] == 2:
                m+=1
                s.append(i)

        if m%2 == 0:
            l = m//2 - 1
            print(s[l]+1)

        else:
            print(-1)


    