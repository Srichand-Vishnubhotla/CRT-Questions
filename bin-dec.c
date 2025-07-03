#include<stdio.h>
void db(int n)
{   
    if(n==0)
    return;
    db(n/2);
    printf("%d",n%2);
}
int main()
{
    db(12);
}