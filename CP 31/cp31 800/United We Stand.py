#My solution for the problem "United We Stand" 
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    b = []
    c = []
    s = set(a)
    ''' if len(s) == 1:
        print(-1)
        
    else:
        a.sort()
        for i in a:
            if i == a[0]:    #I kinda cheated for this i was
                b.append(i)   # trying to find the mid element
                               #but hey first one does it                
            else:
                c.append(i)

        else:
            print(len(b), len(c))
            print(*b)
            print(*c)'''


#GPT CODE

    found = False
    for i in range(1, n):
        b = a[:i]
        c = a[i:]
        valid = True
        for x in b:
            for y in c:
                if x%y == 0
                    valid = False
                    break

            if not valid:
                break

        if valid:
            print(len(b), len(c))
            print(*b)
            print(*c)
            found = True
            break   
    if not found:
        print(-1)
    
                    
