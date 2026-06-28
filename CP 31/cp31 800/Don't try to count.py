t = int(input())

for _ in range(t):
    while True:
        n , m = map(int, input().split())
        x = str(input())
        s = str(input())
        if 1 <= n * m <= 25 and len(x) == n and len(s) == m:
            break
            
        else:
            print('n * m should be [1, 25] and x and s should be length n and s respectively')
    k = 0
    while True:
        if s in x:
            print(k)
            break
        else:            
            x += x
            k += 1
            if len(x) > 50:
                print(-1)
                break