t = int(input())

for _ in range(t):
    n = int(input())
    arry = list(map(int, input().split()))
    e = 0
    o = 0
    for i in arry:
        if i % 2 == 0:
            e += 1    
        else:
            o += 1
    if o%2 ==0 :
        print('YES')

    else:
        print('NO')

    
    