#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        arr2[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {   
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
             {
            arr2[i]=arr[j];
            break;
                }
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i];
    }
}