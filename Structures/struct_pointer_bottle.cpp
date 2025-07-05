#include<iostream>
using namespace std;
#include<cstring>

struct bottle
{
    char company[15];
    char material[15];
    char color[15];
    int price;
};

int main()
{
    struct bottle b1;
    struct bottle *ptr;
    ptr=&b1;
    cout<<"Enter the company name:";
    cin>>ptr->company;
    cout<<"Enter the material type:";
    cin>>ptr->material;
    cout<<"Enter the color:";
    cin>>ptr->color;
    cout<<"Enter the price of the bottle :";
    cin>>ptr->price;

      cout<<ptr->company<<"\n"<<ptr->material<<"\n"<<ptr->color<<"\n"<<ptr->price;
    return 0;
}