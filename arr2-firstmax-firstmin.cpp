#include<iostream>
#include<algorithm>
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
    sort(arr,arr+n);
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[n-2]<<endl;
    cout<<arr[n-1]<<endl;
}