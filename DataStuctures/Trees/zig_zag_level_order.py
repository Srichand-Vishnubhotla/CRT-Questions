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

def level(root):
    h=height(root)
    for p in range(1,h+1):
        current(root,p)

def current(root,l):
    if(root is None):
        return 0
    elif(l==1):
        print(root.data,end=" ")
    else:
        current(root.left,l-1)
        current(root.right,l-1)

def zigzag(root):
    h=height(root)
    f=True
    for p in range(1,h+1):
        current1(root,p,f)
        f=not f
def current1(root,l,f):
        if (root is None):
            return 0
        elif(l==1):
            print(root.data,end=" ")
        else:
            if(f):
                current1(root.left,l-1,f)
                current1(root.right,l-1,f)
            else:
                current1(root.right,l-1,f)
                current1(root.left,l-1,f)

n1=Node(27)    
n1.insert(14)
n1.insert(35)
n1.insert(10)
n1.insert(19)
n1.insert(31)
n1.insert(42)
h=height(n1)
inorder(n1)
print("\n")
preorder(n1)
print("\n")
postorder(n1)
print("\n")
print("The height of the tree is:",h)
print("\n")
level(n1)
print("\n")
zigzag(n1)


