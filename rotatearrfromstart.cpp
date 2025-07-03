#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=key;i<n;i++)
    {
        cout<<arr[i];
    }
    for(int i=0;i<key;i++)
    {
        cout<<arr[i];
    }


}