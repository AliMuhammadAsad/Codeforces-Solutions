n, k = map(int, input().split())
lst = input().split(" ")

count = 0
for i in range(len(lst)):
    for j in range(i+1, len(lst)):
        for f in range(j+1, len(lst)):
            if(int(lst[j]) / int(lst[i]) == k and int(lst[f]) / int(lst[j]) == k):
                count += 1         

print(count)