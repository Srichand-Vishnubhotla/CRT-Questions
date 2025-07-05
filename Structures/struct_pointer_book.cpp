#include<iostream>
using namespace std;
#include<cstring>
struct book
{
    char bname[15];
    char author[15];
    int pages;
    int price;
};
int main()
{
    struct book b1;
    struct book *ptr;
    ptr=&b1;
    cout<<"Enter the book name:";
    cin>>ptr->bname;
    cout<<"Enter the author name:";
    cin>>ptr->author;
    cout<<"Enter the number of pages:";
    cin>>ptr->pages;
    cout<<"Enter the price of the book:";
    cin>>ptr->price;

    cout<<ptr->bname<<"\n"<<ptr->author<<"\n"<<ptr->pages<<"\n"<<ptr->price;
    return 0;
}