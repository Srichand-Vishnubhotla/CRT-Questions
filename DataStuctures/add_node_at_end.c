#include<stdio.h>
#include<stdlib.h>

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

void insert_at_end()
{  
    struct node *n1;     
    int val;
    temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
    n1=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&val);
    n1->data=val;
    temp->next=n1;
    n1->next=NULL;
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
    insert_at_end();
    display();
}