s=input()
x=input()

d={}

for p in s:
    if p not in d:
        d[p]=1
    else:
        d[p]=d[p]+1
m=max(d.values())
l=[]

for p,q in d.items():
    if(q==m):
        l.append(p)
l.sort()
r=''
for p in s:
    if(p==l[0]):
        r=r+x
    else:
        r=r+p
print(r)