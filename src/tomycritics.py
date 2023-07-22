t = int(input())
while t > 0:
    a, b, c = map(int, input().split())
    print("YES" if((a + b >= 10) or (a + c >= 10) or (b + c) >= 10) else "NO")
    t -= 1