t = int(input())
for _ in range(t):
    n = int(input())
    arry = list(map(int, input().split()))
    
    if all(x!= 0 for x in arry):
        print(0)
        continue

    m = 0
    c = 0

    for i in arry:
        if i == 0:
            c+=1
            m = max(c ,m)

        else:
            c = 0

    print(m)