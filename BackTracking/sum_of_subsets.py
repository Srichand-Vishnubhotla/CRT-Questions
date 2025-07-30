def sum_of_subsets(l,target):
    result=[]
    def bt(start,path,total):
        if(total==target):
            result.append(path[:])
            print(result)
            return
        if(total>target):
            return
        for i in range(start,len(l)):
            path.append(l[i])
            bt(i+1,path,total+l[i])
            path.pop()
    bt(0,[],0)
    return result

l=[10,20,30,40]
target=50
r=sum_of_subsets(l,target)
print(r)
