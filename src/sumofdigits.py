n = input()
lst = []
for i in n: lst.append(i)

def checker(lst:list):
    if len(lst) == 0:
        return 1
    count = 0
    while len(lst) > 1:
        sum = 0
        for i in lst:
            sum += int(i)
        lst.clear()
        sum = str(sum)
        for i in sum:
            lst.append(i)
        count += 1
    return count

print(checker(lst))
