#include<iostream>
using namespace std;

int main()
{
    int a[3][3];
    int r, c;
    int sum=0;
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
            if(r>=c)
            {
                sum+=a[r][c];
            }
            else
            {
                continue;
            }
        }
    }
    cout<<"Sum="<<sum;

    return 0;
}
