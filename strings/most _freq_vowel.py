s=input()
v="aeiou"
d={}
for p in s:
    if p in v:
        if p not in d:
            d[p]=1
        else:
            d[p]=d[p]+1
m=max(d.values())
for p,q in d.items():
    if(q==m):
        print(p)
        break