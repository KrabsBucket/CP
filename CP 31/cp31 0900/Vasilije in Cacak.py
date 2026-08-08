t = int(input())
for _ in range(t):
    n, k, x = map(int, input().split())
    if x > k*n:
        print('NO')
        continue
    min = k*(k+1)/2
    max = k*n - k*(k-1)/2

    if min <= x <= max:
        print('YES')      
    else:
        print('NO')