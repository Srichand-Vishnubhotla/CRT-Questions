l=[]
print("Enter the no of strings:")
n=int(input())
for i in range (n):
    l.append(input())

l.sort(key=len)

print(l)