#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,1,2};
    int freq[100]={0};
    int count_duplicate=0;
    int count_unique=0;
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
    for(int i=0;i<100;i++)
    {
        if(freq[i]>1)
        {
            printf("Duplicate elements:%d\n",i);
            count_duplicate++;

        }
        else if(freq[i]>0 && freq[i]<2)
        {
            printf("Unique elemets:%d\n",i);
            count_unique++;
        }
    }
    printf("Count of duplicate:%d\n",count_duplicate);
    printf("Count of unique:%d",count_unique);

}