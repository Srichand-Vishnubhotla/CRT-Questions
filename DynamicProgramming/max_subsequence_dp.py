def sub(l):
    n=len(l)
    dp=[1]*n
    for i in range(1,n):
        for j in range(0,i):
            if(l[j]<l[i]):
                dp[i]=max(dp[i],dp[j]+1)
    return max(dp)

l=[10,9,2,5,3,7,101,18]
m=sub(l)
print(m)