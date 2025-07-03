#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum=%d",sum);
    printf("Average=%f",sum/5.0);

}
