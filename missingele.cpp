#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int diff=1;
    for(int i=0;i<n;i++)
    {
        if(abs(arr[i]-arr[i+1])!=diff)
        {
            cout<<arr[i]+1;
            break;
        }
    }

}