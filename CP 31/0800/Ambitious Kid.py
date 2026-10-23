n = int(input())
arry = list(map(int, input().split()))
arrys = []
for _ in arry:
    arrys.append(abs(_))
e = min(arrys)
print(e)