t = int(input())
for _ in range(t):
    idx = None
    s = ""
    for i in range(8):
        line = input()
        if idx == None:
            for j in range(8):
                if line[j].isalpha(): idx = j; s += line[j]
        else:
            if line[idx].isalpha(): s += line[idx]
    print(s)