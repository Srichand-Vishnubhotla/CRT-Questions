#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
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
        new->prev=NULL;
        new->next=NULL;

        if(head==NULL)
        {
            head=new;
            tail=new;
        }
        else
        {
            new->prev=tail;
            tail->next=new;
            tail=new;
        }
    }
}
void insert_at_pos()
{
    struct node *temp;
    struct node *new1;
    temp=head;
    int pos;
    scanf("%d",&pos);
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    int value;
    printf("Enter the value");
    scanf("%d",&value);
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=value;
    new1->prev=temp;
    new1->next=temp->next;
    temp->next=new1;
    new1->next->prev=new1;
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
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
    insert_at_pos();
    display();
}