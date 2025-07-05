#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string:";
    getline(cin,s1);
    int a=0,d=0,s=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        if((s1[i]>='a' && s1[i]<='z')||(s1[i]>='A' && s1[i]<='Z'))
        {
            a+=1;
        }
        else if(s1[i]>='0' && s1[i]<='9')
        {
            d+=1;
        }
        else
        {
            s+=1;
        }
    }
    cout<<a<<endl;
    cout<<d<<endl;
    cout<<s<<endl;
}