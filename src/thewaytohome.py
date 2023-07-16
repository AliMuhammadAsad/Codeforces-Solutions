n, d = map(int, input().split())
s = input(); lst = []
for i in s:
    lst.append(i)
jumps = 0; flag = False
for i in range(1, len(lst)):
    for j in range(d, 0, -1):
        if i + d == len(lst) - 1:
        if lst[i + d] == '1':
            jumps += d; break
        