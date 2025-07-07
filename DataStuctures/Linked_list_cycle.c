#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *next;
}*new,*temp,*head,*tail;

void insert()
{
    int val;
    for(int i=1;i<=4;i++)
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&val);
        new->data=val;
        new->next=NULL;

        if(head==NULL)
        {
            head=new;
            tail=new;
        }
        else
        {
            tail->next=new;
            tail=new;
        }

    }
}
bool hasCycle() {
    struct node *slow,*fast;
    slow=head,fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    {
        return true;
    }
    }
    return false;
}
void display()
{
    temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
    insert();
    display();
    bool cycle=hasCycle();
    if(cycle)
    {
        printf("There is a cycle");
    }
    else
    {
        printf("There is no cycle");
    }
    
}