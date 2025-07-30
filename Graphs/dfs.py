graph={'0':['1','2'],'1':['0','2','3'],'2':['0','1','4'],'3':['1','4'],'4':['2','3']}
visited=[]
queue=[]

def bfs(node):
    visited.append(node)
    queue.append(node)
    while(queue):
        m=queue.pop()
        print(m,end=" ")
        for p in graph[m]:
            if p not in visited:
                visited.append(p)
                queue.append(p)

bfs('0')
