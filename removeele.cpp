#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100]; 

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos;
    cout << "Pos" << endl;
    cin >> pos;
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}
