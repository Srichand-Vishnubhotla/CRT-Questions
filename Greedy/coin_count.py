def coin_change(coins,amount):
    coins.sort(reverse=True)
    result=[]
    for coin in coins:
        while amount>=coin:
            result.append(coin)
            amount=amount-coin
    print(result)
    return len(result)

##coins=[1,2,5,10,50,20,500,100,2000]
coins=[1,10,8]
amount=16
c=coin_change(coins,amount)
print(c)