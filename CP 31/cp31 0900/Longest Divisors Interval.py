t = int(input())
for _ in range(t):
    n = int(input())
    max_length = 0
    current_length = 0
    m = n**0.5
    for i in range(1, 100):
            if n % i == 0:
                current_length += 1
            else:
                max_length= max(max_length, current_length)
                current_length = 0


    print(max_length)
