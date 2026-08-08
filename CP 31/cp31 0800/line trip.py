t = int(input())

for _ in range(t):
    n, x = map(int, input().split())
    fuelpoints = list(map(int, input().split()))
    fuelpoints.sort()
    k = 0
    f = fuelpoints[0]

    
    for i in range(1, len(fuelpoints)):
        k = max(k, fuelpoints[i] - fuelpoints[i-1])

    e = 2* (x - fuelpoints[-1])


    print(max(e , k, f))
    


