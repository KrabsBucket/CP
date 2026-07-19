t = int(input())
for _ in range(t):
    n = int(input())
    arry = list(map(int, input().split()))
    m = 0
    if n ==1:
        print(0)

    else:
        for i in range(n-1):
            if arry[i]%2 == arry[i+1]%2:
                m +=1


        print(m)