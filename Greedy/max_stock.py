s=[10,7,19]
amount=45
stock=[]
for p in range(len(s)):
    stock.append((s[p],p+1))
stock.sort()

count=0
for stocks in stock:
    price,limit=stocks
    d=amount//price
    if(d>=limit):
        amount=amount-(price*limit)
        count+=limit
    else:
        amount=amount-(price*d)
        count+=d
print(count)
