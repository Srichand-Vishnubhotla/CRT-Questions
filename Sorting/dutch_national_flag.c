#include<stdio.h>

void main()
{   
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int c0=0,c1=0,c2=0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c0+=1;
        }
        else if(arr[i]==1)
        {
            c1+=1;
        }
        else
        {
            c2+=1;
        }
    }
    for(int i=0;i<c0;i++)
    {
        arr[i]=0;
        temp++;
    }
    for(int i=0;i<c1;i++)
    {   
        arr[temp]=1;
        temp++;
    }
    for(int i=0;i<c2;i++)
    {   
        arr[temp]=2;
        temp++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}