t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    xk, yk = map(int, input().split())
    xq, yq = map(int, input().split())
    m = 0
    offsets = {(a, b), (a, -b), (-a, b), (-a, -b), 
           (b, a), (b, -a), (-b, a), (-b, -a)}
    
    positionsK = set((xk+dx, yk+dy) for dx, dy in offsets)

    for x,y in positionsK:
        dx = abs(xq-x)
        dy = abs(yq-y)
        if (dx == a and dy == b) or (dx ==b and dy == a):
            m+=1

    print(m)