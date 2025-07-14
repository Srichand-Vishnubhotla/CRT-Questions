def balanced(l):
    c=0
    for p in l:
        f=1
        if(len(p)%2==0):
            f=0
        
        else:
            m=len(p)//2
            mi=p[m]
            fh=p[:m]
            sh=p[m+1:]
            f1=fh.count(mi)
            s1=sh.count(mi)
            if(f1!=s1):
                f=0
        if(f==1):
            c=c+1
    return c
n=int(input())
l=[]
for p in range(n):
    s=input()
    l.append(s)
c=balanced(l)
print(c)
