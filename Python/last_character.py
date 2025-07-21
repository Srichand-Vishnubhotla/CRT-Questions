l=[]
n=int(input())
for i in range(n):
    l.append(input())

l.sort(key=lambda l:len(l),reverse=True)

print(l)