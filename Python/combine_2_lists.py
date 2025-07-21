l1=['A','B','C','D']
l2=[11,5,3,2]

l=list(zip(l1,l2))##combine 2 lists 
print(l)
l.sort(key=lambda l:l[1],reverse=True)##ascending order
print(l)
l.sort(key=lambda x:x[1])
print(l)##ascending order
m=max(p[1] for p in l)
print(m)
n=min(p[1] for p in l)
print(n)
