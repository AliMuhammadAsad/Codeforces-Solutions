def stringcheck(string: str):
    s1 = "AB"; s2 = "BA"
    if s1 in string and s2 in string:
        s1_i = string.find(s1); s2_i = string.find(s2)
        print(f"S1: {s1_i}, S2: {s2_i}")
        if abs(s1_i - s2_i) > 1:
            return "YES"
        return "NO"

s = input()

print(stringcheck(s))