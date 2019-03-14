for _ in range(t):
    n,k=[int(x) for x in input().split()]
    a=[int(x) for x in input().split()]
    start=0
    s=0
    i=0
    while(s!=k and i<n):
        s+=a[i]
        i+=1
        while s>k:
            s-=a[start]
            start+=1
    if s!=k:
        print(-1)
    else:
        print(start+1,i)
            