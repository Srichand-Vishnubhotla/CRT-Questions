#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 4
int queue[MAX_SIZE];
int front,rear,ele;
int front=-1;
int rear=-1;

void enqueue()
{
    if(rear==MAX_SIZE-1)
    {
        printf("Queue is full");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=rear+1;
        printf("Enter the element");
        scanf("%d",&ele);
        queue[rear]=ele;
    }
}

void dequeue()
{
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else if(front!=rear)
    {
        printf("The deleted element is %d",queue[front]);
        front+=1;
    }
    else
    {
        printf("the deleted element is %d",queue[front]);
        front=-1;
        rear=-1;
    }
}
void peek()
{
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d",queue[front]);
    }
}
void display()
{
    if(front==-1)
    {
        printf("the queue is empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
    }
}

int main()
{
    int operation;
    while(1)
    {
        printf("Enter the operation that you want to perform:");
        scanf("%d",&operation);
        switch(operation)
    {
        case 1:enqueue(); break;
        case 2:dequeue();break;
        case 3:display();break;
        case 4:peek();break;
        case 5:exit(0);break;
        default:printf("Invalid operation");
    }
    }
    
}