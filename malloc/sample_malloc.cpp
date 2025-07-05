#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int *ptr=(int*)malloc(s*sizeof(int));
    for(int i=0;i<s;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    for(int i=0;i<s;i++)
    {
        cin>>*(ptr+i);
    }
    for(int i=0;i<s;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
}