#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    char name[10];
    int empid;
    int salary;
}s1;
int main()
{
    strcpy(s1.name,"Srichand");
    s1.empid=2202;
    s1.salary=100000;

    cout<<s1.name<<endl;
    cout<<s1.empid<<endl;
    cout<<s1.salary<<endl;
}