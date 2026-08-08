t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    if '...' in s:
        print('2')

    else:
        print(s.count('.'))

        '''
for _ in range(t):
    n = int(input())

    s = input()
    k = 0
    i = 0
    while i < n:
        if s[i:i+3]== '...':
            print('2')       
            break

        elif s[i] == '.':
            k += 1
        i += 1
    else:
        print(k)
'''
