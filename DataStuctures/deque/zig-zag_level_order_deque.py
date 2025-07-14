from collections import deque
class Node:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None

    def insert(self,data):
        if self.data:
            if(data<self.data):
                if self.left is None:
                    self.left=Node(data)
                else:
                    self.left.insert(data)
            else:
                if self.right is None:
                    self.right=Node(data)
                else:
                    self.right.insert(data)

def inorder(root):
    if(root!=None):
        inorder(root.left)
        print(root.data,end=" ")
        inorder(root.right)

def preorder(root):
    if(root):
        print(root.data,end=" ")
        preorder(root.left)
        preorder(root.right)

def postorder(root):
    if(root):
        preorder(root.left)
        preorder(root.right)
        print(root.data,end=" ")

def height(root):
    if(root is None):
        return 0
    else:
        return 1+max(height(root.left),height(root.right))

def level_q(root):
    if(root is None):
        return 0
    q=deque([root])
    while(q):
        node=q.popleft()
        print(node.data,end=" ")
        if node.left:
            q.append(node.left)
        if node.right:
            q.append(node.right)

def zigzag_q(root):
    if root is None:
        return 0
    r=[]
    q=deque([root])
    lr=True
    while(q):
        level_size=len(q)
        level_nodes=deque()
        for p in range(level_size):
            node=q.popleft()
            if lr:
                level_nodes.append(node.data)
            else:
                level_nodes.appendleft(node.data)
            if node.left:
                q.append(node.left)
            if node.right:
                q.append(node.right)
        lr=not lr 
        r.append(list(level_nodes))
    return r

n1=Node(27)    
n1.insert(14)
n1.insert(35)
n1.insert(10)
n1.insert(19)
n1.insert(31)
n1.insert(42)
h=height(n1)
##inorder(n1)
##print("\n")
##preorder(n1)
##print("\n")
##postorder(n1)
##print("\n")
##print("The height of the tree is:",h)
##print("\n")
##level_q(n1)
##print("\n")
l=zigzag_q(n1)
print(l)

