t = int(input())

while(t > 0):
    n, c, q = map(int, input().split())
    s = input()
    d = {}
    for i in range(c):
        l, r = map(int, input().split())
        s = s + s[l - 1:r]
        d[i] = s
    for i in range(q):
        k = int(input())
        print(d[i][k - 1])
    t -= 1