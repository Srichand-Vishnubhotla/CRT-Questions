def lss(l):
    incl=l[0]
    excl=0
    for p in range(1,len(l)):
        incl1=max(incl,l[p]+excl)
        excl1=max(incl,excl)
        incl=incl1
        excl=excl1
    return max(incl,excl)
l=[4,1,1,4,2,1]
m=lss(l)
print(m)