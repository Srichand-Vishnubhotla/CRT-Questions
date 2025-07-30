class TrieNode:
    def __init__(self):
        self.children=[None]*26
        self.isEndword=False

def insert(root,key):
    curr=root
    for p in key:
        index=ord(p)-ord('a')
        if curr.children[index] is None:
            new_node=TrieNode()
            curr.children[index]=new_node
            curr=curr.children[index]
    
    curr.isEndword=True

def search(root,key):
    curr=root
    for p in key:
        index=ord(p)-ord('a')
        if curr.children[index] is None:
            return False
        curr=curr.children[index]
    return curr.isEndword

def prefix(root,key):
    curr=root
    for p in key:
        index=ord(p)-ord('a')
        if curr.children[index] is None:
            return False
        
        curr=curr.children[index]

    return True


root=TrieNode()
s=["vizag","bharath","gitam","hyd"]

for p in s:
    insert(root,p)

print(search(root,"hyd"))
print(search(root,"python"))
print(prefix(root,"bh"))
print(prefix(root,"cb"))