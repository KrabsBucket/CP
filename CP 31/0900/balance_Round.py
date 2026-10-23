t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arry = list(map(int, input().split()))
    ans = []
    r = []
    max_length = 0
    arry.sort()

    for i in range(n-1):
        if arry[i+1] - arry[i] > k:
            ans.append(i)

    if len(ans) == 0:
        print(0)
    else:
        r.append(arry[:ans[0]+1])
        r.append(arry[ans[-1]+1:])
        for i in range(len(ans)-1):
            r.append(arry[ans[i]+1:ans[i+1]+1])

        for i in r:
            max_length = max(max_length, len(i))

        print(n - max_length)
