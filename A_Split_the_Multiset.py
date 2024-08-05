t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    l =[n]
    c=0
    i = 0
    while len(set(l)) > 1 or (l and l[0] > 1):
        # print (i,l)
        # i+=1
        num = l[0] 
        if num <= k:
            c+=1 
        else:
            l.append(num-k)
            l.append(k)
            c+=1
        l.pop(0)
    print(c)