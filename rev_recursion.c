#include<stdio.h>

int rev(int n,int s)
{
    if(n==0)
    return s;
    return rev(n/10,(s*10+n%10));
}
int main()
{
    printf("reversed=%d",rev(144,0));
}