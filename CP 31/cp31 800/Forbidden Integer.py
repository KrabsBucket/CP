t = int(input())

for _ in range(t):
    n,  k, x = map(int,  input().split())
    m = 0
    t = 0
    s = 0
    a = []
    b = []
    c = []
    if x != 1:
        print('YES')

        while m < n:
            a.append(1)
            m += 1
        print(m)        
        print(*a)


    elif x ==1 and k ==1:
        print("NO")

    else:
    
        if n%2 ==1 and k < 3:
            print('NO')

        elif n%2 == 0 and k >= 2:
            print('YES')

            while s < n:
                c.append(2)
                s += 2
            print(s//2)
            print(*c)

        else:
            k = n-3
            print('YES')

            while t < n-3:
                b.append(2)
                t += 2
            print(t//2 +1)
            b.append(3)        
            print(*b)

