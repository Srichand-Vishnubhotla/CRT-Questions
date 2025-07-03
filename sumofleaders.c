#include<stdio.h>
int main()
{
    int a[10],size,i,j,s=0,flag;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    s=s+a[size-1];
    for(i=0;i<size-1;i++)
    {
        flag=1;
        for(j=i;j<size;j++)
        {
            if(a[j]>a[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}