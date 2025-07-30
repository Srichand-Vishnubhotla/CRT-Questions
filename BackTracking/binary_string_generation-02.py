def gb(n,c=""):
    if(len(c)==n):
        print(c)
        return
    gb(n,c+"0")
    gb(n,c+"1")
gb(4)
