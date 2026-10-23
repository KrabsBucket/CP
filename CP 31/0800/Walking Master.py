t = int(input())

for _ in range(t):
    a, b, c, d = map(int, input().split())
    r = d - b
    l = a -c + r

    if l<0 or r<0 :
        print(-1)

    else:
        print(r + l)

