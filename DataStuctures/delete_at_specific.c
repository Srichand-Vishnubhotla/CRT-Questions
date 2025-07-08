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
        }
        else
        {
            tail->next=new;
            tail=new;
        }
    }
}
void delete_at_beginning()
{
    head=head->next;
}
void delete_at_specific()
{
    struct node *temp=head;
    int pos;
    scanf("%d",&pos);
    if(pos==1)
    {
        delete_at_beginning();
    }
    else
    {
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
}

void display()
{
    struct node *temp=head;
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
    printf("\n");
    delete_at_specific();
    display();
}