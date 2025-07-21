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

    def delete(self,data):
        if(self.data is None):
            print("Empty")
        elif(data<self.data):
            if(self.left):
                self.left=self.left.delete(data)
        elif (data>self.data):
            if(self.right):
                self.right=self.right.delete(data)
        else:
            if(self.left is None):
                temp=self.right
                self=None
                return temp
            elif(self.right is None):
                temp=self.right
                self=None
                return temp
            else:
                temp=self.right.minimum()
                self.data=temp.data
                self.right.delete(temp.data)
        return self
    def minimum(self):
        curr=self
        while(curr.left):
            curr=curr.left
        return curr

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


n1=Node(27)    
n1.insert(14)
n1.insert(35)
##n1.insert(10)
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
n1.delete(27)
level(n1)


