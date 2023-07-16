t = int(input())

def poschecker(a:int, b:int, k:int):
    if (a == b) and (k % 2 == 0):
        return 0
    elif (a == b) and (k % 2 == 1):
        return a
    else:
        if k % 2 == 0:
            pos = (a * int(k / 2)) - (b * int(k / 2)); return pos
        else:
            pos = (a * (int(k / 2) + 1)) - (b * int(k / 2)); return pos

for i in range(t):
    a, b, k = map(int, input().split())
    print(poschecker(a, b, k))