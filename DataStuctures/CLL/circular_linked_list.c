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
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&value);
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
            new->next=head;
        }
    }
}

void display()
{
    struct node *temp=head;
    // printf("%d ",temp->data);
    // temp=temp->next;
    while(temp)
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
    display();
}