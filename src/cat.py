t = int(input())

def foo():
    n = int(input())
    s = input(); s = s.lower()
    if 'm' not in s or 'e' not in s or 'o' not in s or 'w' not in s:
        return "NO"
    if(s == 'meow'):
        return "YES"
    for i in range(len(s) - 1):
        if(s[i] == s[i + 1]):
            continue
        elif(s[i] == 'm' and s[i + 1] == 'e'):
            continue
        elif(s[i] == 'e' and s[i+ 1] == 'o'):
            continue
        elif(s[i] == 'o' and s[i+ 1] == 'w'):
            continue
        else:
            return "NO"
    return "YES"

while(t > 0):
    print(foo())
    t -= 1