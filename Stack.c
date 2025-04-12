#include<stdio.h>
#include<stdlib.h>
#define size 10
void push();
void pop();
void display();
int stack[size],choice,value,top=-1;
int main()
{
    printf("Enter the following choice:\n");
    printf("1.push\n2.Pop\n3.Display\n4.Exit\n");
while (1)
{
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        printf("Exiting the program\n");
        exit(0);
        default:printf("Please enter the correct choice:\n");
    }
}
}
void push()
{
    if(top==size-1)
    {
        printf("The stack is in overflow condition\n");
    }
    else
    {
        printf("Enter the value to push:");
        scanf("%d",&value);
        stack[++top]=value;
    }
    printf("The pushed value is %d",value);
}
void pop()
{
    if(top==-1)
    {
        printf("The stack is in underflow condition\n");
    }
    else
    {
        printf("The poped value is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("The stack is empty cannot display the value\n");
    }
    else
    {
    printf("The value inside the stack are:\n");
    for(int i=top;i>0;i--)
    {
        printf("%d\t",stack[i]);
    }
    }
}
