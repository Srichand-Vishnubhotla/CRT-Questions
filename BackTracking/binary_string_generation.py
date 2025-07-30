def bsg(n):
    def bt(curr):
        if(len(curr)==n):
            print("".join(curr))
            return
        curr.append('0')
        bt(curr)
        curr.pop()
        curr.append('1')
        bt(curr)
        curr.pop()
    bt([])
bsg(4)
