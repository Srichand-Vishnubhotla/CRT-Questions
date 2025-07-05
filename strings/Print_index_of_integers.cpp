#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string:";
    getline(cin,s1);
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='0' && s1[i]<='9')
        {
            cout<<i;
        }
    }

}