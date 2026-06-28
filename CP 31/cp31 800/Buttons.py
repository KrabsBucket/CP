t = int(input())

for _ in range(t):
    n = list(map(int, input().split()))
    a = n[0]
    b = n[1]  
    c = n[2]

    if a > b + c :
        print('First')

    elif b > a + c:
        print('Second')

    else:
        if (c%2 == 0 and a > b) or (c%2 == 1 and a >= b):
            print('First')

        else:
            print('Second')