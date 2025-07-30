def gb(n,c=""):
    if(len(c)==n):
        if(c.count('1')==2):
            print(c)
        return
    gb(n,c+"0")
    gb(n,c+"1")
gb(4)
