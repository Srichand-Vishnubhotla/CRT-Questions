#include<iostream>
using namespace std;

int main()
{
    int a[3][3];
    int r, c;
    for(r = 0; r < 3; r++)
    {
        for(c = 0; c < 3; c++)
        {
            cin >> a[r][c];
        }
    }
    for(r = 0; r < 3; r++)
    {
        for(c = 0; c < 3; c++)
        {
            if(r < c)
            {
                cout << "0 ";
            }
            else
            {
                cout << a[r][c] << " ";
            }
        }
        cout << "\n"; 
    }

    return 0;
}
