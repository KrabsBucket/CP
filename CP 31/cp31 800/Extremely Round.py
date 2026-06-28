t = int(input())
for _ in range(t):
    n = input()
    m = -1
    for i in n:
        m+=1
    k = int(n)
    if m == 0:
        print(n)
    else:
        q = k//10**m
        print(9*m + q)