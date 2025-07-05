#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    char name[10];
    int rno;
    int marks;
}s1;
int main()
{
    strcpy(s1.name,"Srichand");
    s1.rno=114;
    s1.marks=99;

    cout<<s1.name<<endl;
    cout<<s1.rno<<endl;
    cout<<s1.marks<<endl;
}