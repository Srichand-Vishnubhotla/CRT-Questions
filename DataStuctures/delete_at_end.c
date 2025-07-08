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
void delete_at_end()
{
    struct node *temp=head;
    struct node *prev=NULL;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
        
    }
        prev->next=NULL;
        tail=prev;
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
    delete_at_end();
    display();
}