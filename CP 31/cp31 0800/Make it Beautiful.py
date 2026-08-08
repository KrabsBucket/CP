t = int(input())
for _ in range(t):
    n = int(input())
    arry = list(map(int, input().split()))
    arrys = arry.copy()
    arrys.remove(max(arrys))
    arrys.remove(min(arrys))
    f = []
    if all(x == arry[0] for x in arry):
        print('NO')

    else:
        f.append(max(arry))
        f.append(min(arry))
        f += arrys
        print('YES')
        print(*f)




