t = int(input())
while(t > 0):
    n = int(input())
    nums = input(); nums = nums.split()
    low = nums.index(min(nums)); high = nums.index(max(nums)); moves = 0
    
    print(moves)
    t -= 1
