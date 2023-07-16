t = int(input())
while(t > 0):
    n = int(input())
    candies = input()
    candies = candies.split()
    # print(candies)
    for i in range(len(candies)):
        candies[i] = int(candies[i])
    eaten = 0; least = min(candies)
    for candy in candies:
        if candy > least:
            eaten += candy - least
    print(eaten)
    t -= 1