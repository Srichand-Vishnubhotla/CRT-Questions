#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*new,*temp,*head,*tail,*prev,*curr,*next1;

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
void reverse()
{
    prev=NULL;
    curr=head;
    while(curr)
    {
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
    head=prev;
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
    reverse();
    printf("\n");
    display();
}