#include<iostream>
using namespace std;
int main()
{
    int a[10],size,i,p1,p2,t;
    cout<<("Enter the size");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    p1=0;
    p2=size-1;
    while(p1<p2)
    {
        t=a[p1];
        a[p1]=a[p2];
        a[p2]=t;
        p1+=1;
        p2-=1;
    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }

}