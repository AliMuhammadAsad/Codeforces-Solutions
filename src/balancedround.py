t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    arr.sort()
    ans = 0; i = 0
    while i < n:
        j = i + 1
        while j < n:
            if arr[j] - arr[j - 1] > k: 
                break
            j += 1
        tt = j - i; ans = max(ans, tt); i = j
    print(n - ans)