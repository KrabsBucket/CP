t = int(input())

for _ in range(t):
    score = 0
    grid = []
    
    for i in range(10):
        row = input().strip()
        grid.append(row)

|}
]
    for i in range(10):
        for j in range(10):
            if grid[i][j] == 'X':
                layer = min(i , j , 9 - i, 9 - j) + 1
                score += layer

    print(score)