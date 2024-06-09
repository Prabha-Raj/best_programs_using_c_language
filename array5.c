// WAP to perform push, pop and display operations on a stack.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
void push();
void pop();
void display();
int top=-1,stack[MAX];
int main()
{
    int choice;
    while(1)
    {
        printf("\n\tstack menu \t\n");
        printf("\n\n\t1.\t--->>>\tpush");
        printf("\n\t2.\t--->>>\tpop");
        printf("\n\t3.\t--->>>\tdisplay");
        printf("\n\t4.\t--->>>\texit");
        printf("\n\nEnter your choice ( 1 to 4 )");
        scanf("%i",choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            default :
            {
                printf("Wrong choice");
                break;
            }
        }
    }
    // Creating push() function.
    void push()
    {
        int value;
        if(top==MAX-1)
        {
            printf("\n Stack is Full (overflow)");
        }
        else
        {
            printf("Enter element to in stack : ");
            scanf("%i",&value);
            top = top+1;
            stack[top] = value;
        }
    }
    // creating pop() function.
    void pop()
    {
        if(top==-1)
        {
            printf("\nStack is Empty (underflow)");
        }
        else
        {
            printf("\n Deleted element is %i ",stack[top]);
            top = top-1;
        }
    }
    // Creating display() function
    void display()
    {
        if(top==-1)
        {
            printf("\nstack is empty");
        }
        else
        {
            printf("\nelement of stack are....\n");
            for(int i=top;i>=0;--i)
            {
                printf("%i\n\t",stack[i]);
            }
        }
    }
    // getch();
    // exit(0);
}