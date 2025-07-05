#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int sum=0;
    int sum2=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
            else if(i+j==2)
            {
                sum2+=a[i][j];
            }
        }
    }
    sum=sum+sum2;
    cout<<sum;

}