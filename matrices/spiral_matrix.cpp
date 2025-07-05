#include<iostream>
using namespace std;
int main()
{
    int a[4][4],top=0,bottom=3,right=3,left=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    while((top<=bottom)&&(left<=right))
    {
         for(int i=left;i<right;i++)
    {
        cout<<a[top][i];
    }
    for(int i=top;i<bottom;i++)
    {
        cout<<a[i][right];
    }
    for(int i=right;i>left;i--)
    {
        cout<<a[bottom][i];
    }
    for(int i=bottom;i>top;i--)
    {
        cout<<a[i][left];
    }
    top++;
    left++;
    right--;
    bottom--;
    }
   
}