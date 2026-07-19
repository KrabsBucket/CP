t = int(input())
for _ in range(t):
    n = int(input())
    arry = list(map(int, input().split()))
    xor = 0
    if all(x == 0 for x in arry):
        print(0)
        continue

    for _ in arry:
        xor ^= _

    if xor == 0:
        print(1)
        print(f'{1} {n}')

    elif n % 2 == 0:
        print(2)
        print(f'{1} {n}')
        print(f'{1} {n}')


    else:
        if arry[-1] == 0:
            print(2)
            print(f'{1} {n-1}')
            print(f'{1} {n-1}')
        else:
            print(4)
            print(f'{1} {n-1}')
            print(f'{1} {n-1}')
            print(f'{n-1} {n}')
            print(f'{n-1} {n}')

        
