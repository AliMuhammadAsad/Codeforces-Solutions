from functools import lru_cache

@lru_cache
def foo(s1, s2):
    count = 0
    total = len(s1) + len(s2)
    if(len(s1) == len(s2)):
        for i in range(len(s1)):
            if s1[i:] == s2[i:]:
                return count
            else:
                count+=2
    elif(len(s1) < len(s2)):
        count = len(s2) - len(s1)
        s2 = s2[len(s2) - len(s1):]
        for i in range(len(s1)):
            if s1[i:] == s2[i:]:
                return count
            else:
                count+=2
    elif(len(s2) < len(s1)):
        count = len(s1) - len(s2)
        s1 = s1[len(s1) - len(s2):]
        for i in range(len(s1)):
            if s1[i:] == s2[i:]:
                return count
            else:
                count+=2
    return total

s1 = input(); s2 = input()
print(foo(s1, s2))