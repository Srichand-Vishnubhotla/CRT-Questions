def rob(l):
    n=len(l)
    dp=[0]*(n+2)
    for p in range(n-1,-1,-1):
        dp[p]=max(l[p]+dp[p+2],dp[p+1])
    return dp[0]

l=[2,7,9,3,1]
print(rob(l))