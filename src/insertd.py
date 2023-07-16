t = int(input())
lst = []
for i in range(t):
    n, d = map(int, input().split())
    s = input()
    if d == 0:
        lst.append(str(s) + '0')
        continue
    for i in range(n):
        if int(s[i]) < d:
            s = s[:i] + str(d) + s[i:]
            break
    else:
        s = s + str(d)
    lst.append(s)

for i in lst:
    print(i)