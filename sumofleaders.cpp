#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    int sum=arr[6];
    int max=arr[6];
    for(int i=5;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            sum+=arr[i];
        }
    }
    cout<<sum;
    return 0;

}