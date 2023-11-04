n = int(input())
ans = 0
nums = [100, 20, 10, 5, 1]
for i in range(5):
    ans += n // nums[i]
    n %= nums[i]
print(ans)