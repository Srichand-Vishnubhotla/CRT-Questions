#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*new,*temp,*head,*tail,*n1;

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

void insert_at_beginning()
{   
    int val;
    n1=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&val);
        n1->data=val;
        if(head==NULL)
        {
            head=n1;
            return;
        }
        n1->next=head;
        head=n1;
}
void insert_at_pos()
{
    int pos,val;
    struct node *n2;
    printf("Enter the position:");
    scanf("%d",&pos);
    temp=head;
    if(pos==1)
    {
        insert_at_beginning();
    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&val);
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        n2=(struct node *)malloc(sizeof(struct node));
        n2->data=val;
        n2->next=temp->next;
        temp->next=n2;

    }
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
    printf("\n");
    insert_at_pos();
    display();
}