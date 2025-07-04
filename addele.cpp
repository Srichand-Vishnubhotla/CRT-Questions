#include <iostream>
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

    int ele;
    cout << "Ele" << endl;
    cin >> ele;
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = ele;
    n++; 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
