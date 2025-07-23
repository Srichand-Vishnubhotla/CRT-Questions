def lcs(s1,s2):
    m=len(s1)
    n=len(s2)
    dp=[[0]*(n+1) for p in range(m+1)]
    max_index=0
    for i in range(m):
        for j in range(n):
            if(s1[i]==s2[j]):
                dp[i+1][j+1]=dp[i][j]+1
                max_index=max(max_index,dp[i+1][j+1])
    return max_index

s1="abcdaf"
s2="gbcdf"
m=lcs(s1,s2)
print(m)