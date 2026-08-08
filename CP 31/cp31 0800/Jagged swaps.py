t = int(input())

for _ in range(t):
    
    n = int(input())    
    arr = list(map(int,input().split()))

    arrys = sorted(arr)

    if arr == arrys:
        print('YES')
        continue

    elif arr[0] == min(arr):
        print('YES')

    else:
        print('NO')

    # if arrys == list(range(min(arr), min(arr)+n)):
    #     for _ in range(n):
        
    #         for i in range(n-2):
    #             if (arr[i] < arr[i+1]) and (arr[i +2] < arr[i+1]):
    #                 arr[i+1], arr[i+2] = arr[i+2], arr[i+1]

    #     if arr == arrys:
    #         print('YES')

    #     else:
    #         print("NO")
    
    # else:
    #     print('Not valid permutation')
