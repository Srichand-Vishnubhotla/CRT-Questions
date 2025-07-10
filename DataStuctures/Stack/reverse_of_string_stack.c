#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
char stack[size];
int top=-1;

void push(char ch)
{   
        if(top==size-1)
    {
        printf("Stack is full");
        printf("\n");
    }
    else
    {
        top=top+1;
        stack[top]=ch;
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

char pop()
{   
    char ch;
    if(top==-1)
    {
       return '\0';
    }
    else
    {
        ch= stack[top];
        top--;
        return ch;
    }
    
}


void main()
{
    char s[size];
    int i;
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        push(s[i]);
    }

    while(top!=-1)
    {
        printf("%c",pop());
    }
    
    
}
