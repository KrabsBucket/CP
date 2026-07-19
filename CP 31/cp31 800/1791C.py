t = int(input())

for _ in range (t):
    n = int(input())
    s = input()
    a = []
    for i in s:
        a.append(int(i))

    b = a[::-1]
    r = [x + y for x,y in zip(a, b)]

    if all (x==r[0] for x in a ) or len(a) == 0:
        print(len(a))

    else:

        q = 0
        for i in r:
            if i == 1:
                q += 1

            else:
                break

        if len(r) == q:
            print(0)
        else:
            print(len( a[q:-q -1] )+ 1)

