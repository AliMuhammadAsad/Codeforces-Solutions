def weakestrows(mat, k):
    weak = {}
    for i in range(len(mat)):
        strength = sum(mat[i])
        weak[i] = strength
    weak = dict(sorted(weak.items(), key = lambda x: x[1]))
    weak = list(weak.keys())
    lst = []
    for i in range(k):
        lst.append(weak[i])
    return lst

mat = [[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]]
k = 3
print(weakestrows(mat, k))
mat1 = [[1,0,0,0],
 [1,1,1,1],
 [1,0,0,0],
 [1,0,0,0]]
k1 = 2
print(weakestrows(mat1, k1))