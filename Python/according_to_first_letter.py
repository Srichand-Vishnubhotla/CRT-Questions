l=[]
n=int(input())
for i in range(n):
    l.append(input())

l.sort(key=lambda l:l[0])
print(l)