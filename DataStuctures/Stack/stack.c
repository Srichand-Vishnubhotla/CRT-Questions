#include<stdio.h>
#include<stdlib.h>
#define size 4
int stack[size];
int top=-1;
int ele;

void push()
{
    if(top==size-1)
    {
        printf("Stack is full");
        printf("\n");
    }
    else
    {
        printf("Enter the element:");
        scanf("%d",&ele);
        top=top+1;
        stack[top]=ele;
    }
}

void display()
{
    if(top==-1)
    {
        printf("The stack is empty");
        printf("\n");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d \n",stack[i]);
        }
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("The deleted element is %d",stack[top]);
        printf("\n");
        top-=1;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("The top most element is %d:",stack[top]);
    }
}

void main()
{
    int operation;
    while(1)
    {
        printf("Enter the operation that you want to perform:");
        scanf("%d",&operation);
        switch(operation)
    {
        case 1:push(); break;
        case 2:pop();break;
        case 3:display();break;
        case 4:peek();break;
        case 5:exit(0);break;
        default:printf("Invalid operation");
    }
    }
    
}
