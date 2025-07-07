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
void display()
{
    temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void displayr(struct node *head)
{
    
    if(head)
    {
    printf("%d ",head->data);
    displayr(head->next);
    }
}
void main()
{
    insert();
    // display();
    displayr(head);
}