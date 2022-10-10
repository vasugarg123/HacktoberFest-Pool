#Remove Bad elements - Codechef 
from collections import Counter
for k in range(int(input())):
    n = int(input())
    res = list(map(int,input().split()))
    mylist=[]
    l= Counter(res)
    m=l.most_common(1)[0][0]
    for i in res:
        if i!=m:
            mylist.append(i)
    print(len(mylist))
    
