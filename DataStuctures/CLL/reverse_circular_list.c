#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head,*tail;

void insert()
{
    struct node *new;
    int value;
    for(int i=1;i<5;i++)
    {
        printf("Enter the data:");
        scanf("%d",&value);
        new=(struct node*)malloc(sizeof(struct node));
        new->data=value;
        new->next=NULL;

        if(head==NULL)
        {
            head=new;
            tail=new;
            tail->next=head;
        }
        else
        {
            tail->next=new;
            tail=new;
            tail->next=head;
        }
    }
}

void reverse()
{
    struct node *prev,*curr,*next1;
    prev=tail;
    curr=head;
    while(curr!=NULL)
    {   
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
        if(curr==head)
        {
            break;
        }
    }
    head=prev;
    tail=curr;
}

void display()
{
    struct node *temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    if(temp==head)
    {
        break;
    }
}
printf("%d",temp->data);
}

void main()
{
    insert();
    reverse();
    display();
}