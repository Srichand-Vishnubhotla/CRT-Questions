#include<stdio.h>

void sel(int arr[],int n)
{
    int mi,temp;
    for(int i=0;i<n;i++)
    {   
        mi=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mi])
            {
                mi=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[mi];
        arr[mi]=temp;
    }
}

void main()
{
    int a[]={5,3,8,6,7,2};
    int size=sizeof(a)/sizeof(a[0]);
    printf("The elements before sorting:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    sel(a,size);
    printf("The elements after sorting:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }


}