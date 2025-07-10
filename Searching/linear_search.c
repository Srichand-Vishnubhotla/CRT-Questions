#include<stdio.h>

int ls(int a[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
     return -1;
}

void main()
{
    int a[10],size,key,s;
    printf("Enter the size:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {   
        printf("Enter the element %d:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    s=ls(a,size,key);

    if(s==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at index %d",s);
    }
}
