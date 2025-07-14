#include<stdio.h>
void ins(int arr[],int n)
{
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
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
    ins(a,size);
    printf("The elements after sorting:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }


}