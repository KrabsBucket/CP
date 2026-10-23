t = int(input())

for _ in range(t):
    n , k = map(int, input().split())
    arry = list(map(int,input().split()))


    if k in arry:
        print("YES")

    else:
        print('NO')




