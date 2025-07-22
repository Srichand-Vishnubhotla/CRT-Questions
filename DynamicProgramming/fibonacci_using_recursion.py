def fib(n):
    if(n<=1):
        return n
    else:
        return(fib(n-1)+fib(n-2))

print(fib(5))

## Time complexity is o^n