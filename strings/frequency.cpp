#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string:";
    getline(cin,s1);
    int f[256]={0};
    for(int i=0;i<s1.length();i++)
    {
        f[s1[i]]=f[s1[i]]+1;
    }
     for(int i=0;i<256;i++)
    {
        if(f[i]>0)
        {
            cout<<char(i)<<":"<<f[i]<<endl;
        }
    }
}