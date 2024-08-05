from collections import Counter
t = int(input())
for _ in range(t):
    a = input()
    b = input()
    c = len(a)
    
    dic1 = dict(Counter(a))
    dic2 = dict(Counter(b))
    # print(dic1,dic2)
    
    for i in b:
        if i not in a:
            c+=1
        else:
            c+= max((dic2[i] - dic1[i]),0)
    print(c)