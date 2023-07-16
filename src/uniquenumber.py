t = int(input())

def digits(num):
    if(num <= 9): return num
    if(num > 45): return -1
    digits = []
    for i in range(9, 0, -1):
        if num >= i:
            digits.append(i)
            num -= i
    if num != 0: return -1
    else:
        digits.reverse()
        s = str()
        for i in digits:
            s += str(i)
        return int(s)

while(t > 0):
    num = int(input())
    print(digits(num))
    t -= 1