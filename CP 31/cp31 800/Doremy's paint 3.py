def sorte(l):
    freq = {}
    for i in l:
        if i in freq:
            freq[i] += 1 

        else:
            freq[i] = 1
         
    return freq


t = int(input())

for _ in range(t):
    n = int(input())
    arry = list(map(int, input().split()))
    arrys = set(arry)
    arryst = sorte(arry)
    counts = list(arryst.values())


    if n in (1,2):
        print('Yes')
        continue

    elif len(arrys) == 1:
        print('YES')
        continue



    if len(arrys) > 2:
        print('NO')

    else:
        x , y = counts[0], counts[1]
        if abs(x - y) <= 1:
            print('YES')    
        else:
            print('NO')