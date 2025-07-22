def fib(n):
    dp=[0]*(n+1)
    dp[0]=1
    dp[1]=1
    for p in range(2,n+1):
        dp[p]=dp[p-1]+dp[p-2]
    return dp[n]

print(fib(6))