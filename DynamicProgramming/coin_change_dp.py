def min_coins(coins,amount):
    dp=[9999]*(amount+1)
    dp[0]=0
    for p in range(1,amount+1):
        for coin in coins:
            if(p>=coin):
                dp[p]=min(dp[p],dp[p-coin]+1)

    return dp[amount]
coins=[1,2,5]
amount=11
c=min_coins(coins,amount)
print(1)