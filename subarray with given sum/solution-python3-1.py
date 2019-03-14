import sys
# for name in map(str.rstrip, sys.stdin):
t = int(sys.stdin.readline().strip())
i = 0
while i < t:
    params = list(map(int, sys.stdin.readline().strip().split(' ')))
    data   = list(map(int, sys.stdin.readline().strip().split(' '))) 
    start,finish,s = 0, 0, 0
    while finish < len(data):
        #print('while ', start, finish, s)
        if s == params[-1]:
            break
        elif s < params[-1]:
            s += data[finish]
            finish += 1
        else:
            s -= data[start]
            start += 1
    while s > params[-1] and start < len(data):
        s -= data[start]
        start += 1
    if s == params[-1]:
        print(start+1,finish)
    else:
        print('-1')#,start,finish,s)
    i += 1