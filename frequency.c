#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,1,2};
    int freq[100]={0};
    for(int i=0;i<6;i++)
    {
        freq[arr[i]]=freq[arr[i]]+1;
    }
    for(int i=0;i<100;i++)
    {
        if(freq[i]>0)
        {
            printf("%d %d \n",i,freq[i]);
        }
    }

}