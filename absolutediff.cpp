#include<iostream>
using namespace std;
int Findcount(int arr[],int length,int num,int diff)
{   
    int count=0;
    
    for(int i=0;i<length;i++)
    {
        if(abs(arr[i]-num)<=diff)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}

int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int num;
    int diff;
    cin>>num;
    cin>>diff;
    Findcount(arr,n,num,diff);
}