def merged(left,right):
    i=0
    j=0
    m=[]
    while(i<len(left)) and(j<len(right)):
        if(left[i]<right[j]):
            m.append(left[i])
            i=i+1
        else:
            m.append(right[j])
            j=j+1
    d=m+left[i:]+right[j:]
    return d
def merge(l):
    if(len(l)==1):
        return l
    else:
        m=len(l)//2
        left=merge(l[:m])
        right=merge(l[m:])
    return merged(left,right)

l=[60,40,30,50,10,20]
print("Before sort:",l)
m=merge(l)
print("After sort:",m)