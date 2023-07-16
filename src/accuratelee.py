t = int(input())

def foo(s: str, i:int):
    while(s[i + 2] == 0):
        pass
    return s

while(t > 0):
    n = int(input())
    s = input()
    i = 0
    while(True):
        if(s[i] == 1 and s[i + 1] == 0):
            s = foo(s, i)
        i += 1
        if(i == len(s)):
            break
    print(s)
    t -= 1