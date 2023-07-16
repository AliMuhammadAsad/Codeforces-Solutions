n = int(input()); s = ""
while(n > 0):
    s = input()
    if(len(s) <= 10): print(s)
    else:
        out = s[0]; count = len(s) - 2
        out = out + str(count)
        out = out + s[-1]
        print(out)
    n -= 1