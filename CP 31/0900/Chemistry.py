t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    s = input()
    freq = {}

    for ch in s:
        if ch in freq:
            freq[ch] += 1
        else:
            freq[ch] = 1
    odd = []
    even = []
    for i in freq.values():
        if i%2 == 0:
            even.append(i)
        else:
            odd.append(i)

    r = k - len(odd)
    if (n-k)%2 == 0 and r%2== 0 and r>=0 :
        print('YES')

    elif (n-k)%2 == 1 and r>= -1 and r%2 ==1:
        print('YES')

    else:
        print('NO')
        

    





