def maximumWealth(accounts):
    highest = 0
    for i in range(len(accounts)):
        total = sum(accounts[i])
        if total >= highest: highest = total
    return highest

print(maximumWealth([[1, 2, 3], [3, 2, 1]]))
print(maximumWealth([[1, 5], [7, 3], [3, 5]]))
print(maximumWealth([[2, 8, 7], [7, 1, 3], [1, 9, 5]]))
