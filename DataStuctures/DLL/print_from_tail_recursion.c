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

void reverse(struct node *tail)
{
   if(tail!=NULL)
   {
    printf("%d ",tail->data);
    reverse(tail->prev);
   }
}

void dis(struct node *head)
{
    if(head)
    {   
        dis(head->next);
        printf("%d ",head->data);
    }
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
    reverse(tail);
    //*display();//
    printf("\n");
    dis(head);
    
}