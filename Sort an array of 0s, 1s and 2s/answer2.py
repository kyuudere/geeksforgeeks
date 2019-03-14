import collections
T = int(input())

for _ in range(T):
    N = int(input())
    arr = [int(i) for i in input().split()]
    
    c = collections.Counter(arr)
    arr = [0] * c[0] + [1] * c[1] + [2] * c[2] 
    print(' '.join(str(i) for i in arr))