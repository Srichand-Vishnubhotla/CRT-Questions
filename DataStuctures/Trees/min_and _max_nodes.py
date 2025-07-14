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

def findmin(root):
    if(root is None):
        return 0
    else:
        while(root.left):
            root=root.left
    print(root.data)

def findmax(root):
    if(root is None):
        return 0
    else:
        while(root.right):
            root=root.right
    print(root.data)

n1=Node(27)    
n1.insert(14)
n1.insert(35)
n1.insert(10)
n1.insert(19)
n1.insert(31)
n1.insert(42)
findmin(n1)
findmax(n1)