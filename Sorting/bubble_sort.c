#include<Stdio.h>

void bs(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {   
        int temp;
        for(int j=0;j<n-(i+1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    bs(a,size);
    printf("The elements after sorting:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }


}