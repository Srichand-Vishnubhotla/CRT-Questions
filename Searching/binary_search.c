#include<stdio.h>

int bs(int a[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}

void main()
{
    int arr[10],key,s,size;
    printf("Enter the size:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter the element %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    s=bs(arr,size,key);

    if(s==-1)
    {
        printf("Element is not found");
    }
    else
    {
        printf("Element found at index %d",s);
    }

}