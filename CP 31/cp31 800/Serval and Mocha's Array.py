def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def gcd_of_array(x):
    g = x[0]
    for i in range(1, len(x)):
        g = gcd(g, x[i])
    return g

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split())) 
    success = False
    if gcd_of_array(a) > 2:
        pass
    
    
    else:
        for i in a:
            for j in a:
                if gcd(j, i) <= 2:
                    success = True
                    break

    print('YES' if success else 'NO')


