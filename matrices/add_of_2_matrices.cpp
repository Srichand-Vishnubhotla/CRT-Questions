#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],s[2][2],r,c;
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            cin>>a[r][c];
        }
    }
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            cin>>b[r][c];
        }
    }
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            s[r][c]=a[r][c]+b[r][c];
        }
    }
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {   
            
            cout<<s[r][c];
        }
        cout<<"\n";
    }

}