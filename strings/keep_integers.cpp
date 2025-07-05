#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string:";
    getline(cin,s1);
    int n=s1.length();
    int p1=0;
    int p2=n-1;
    char temp;
    while(p1<p2)
    {   
        if(isdigit(s1[p1]))
        {
            p1++;
        }
        else if(isdigit(s1[p2]))
        {
            p2--;
        }
        else
        {       
                temp=s1[p1];
                s1[p1]=s1[p2];
                s1[p2]=temp;
                p1++;
                p2--;
        }
       
           
    }
    cout<<s1;

    }
