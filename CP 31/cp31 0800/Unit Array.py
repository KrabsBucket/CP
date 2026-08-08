t = int(input())
for _ in range(t):
    n = int(input())
    arry = list(map(int, input().split()))
    a = 0

    while sum(arry)<0 or arry.count(-1)%2 ==1:
        l = arry.index(min(arry))
        arry[l] *= -1
        a +=1
        

    print(a)
