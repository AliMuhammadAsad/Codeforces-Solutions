t = int(input())
for _ in range(t):
    n = int(input())
    idx = 0; q = 0
    for i in range(1, n + 1):
        a, b = map(int, input().split())
        if b > q and a <= 10: 
            q = b; idx = i
    print(idx)