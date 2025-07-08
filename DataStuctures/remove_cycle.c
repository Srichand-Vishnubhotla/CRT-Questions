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


void has_cycle()
{
    struct node *slow,*fast;
    slow=head;
    fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            slow=head;
            if(slow==fast)
            {
                while(fast->next!=slow)
                {
                    fast=fast->next;
                }
                fast->next=NULL;
            }
            else
            {
                while(slow->next!=fast->next)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                fast->next=NULL;
            }
        }
    }
}