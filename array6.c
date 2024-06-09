#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
int top=-1,stack[MAX];
void p();
void p();
void d();
int main ()
{
    p();
    // int ch;
    // while(1)
    // {
    //     printf("\n\tstack menu\n");
    //     printf("\n\n1.push\n2.pop\n3.display\n4.exit");
    //     printf("\nEnter your choise(1 to 4");
    //     scanf("%d",&ch);
        // switch(ch)
        // {
        //     case 1:
        //     p();
        //     break;
        //     case 2:
        //     p();
        //     break;
        //     case 3:
        //     d();
        //     break;
        //     case 4:
        //     exit(0);
        //     break;
        //     default:
        //     printf("\nWrong choice");
        // }
    // }
}
void p()
{
    int val;
    if(top==MAX-1)
    {
        printf("\nstack is full");
    }
    else
    {
        printf("\nEnter element to push ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
// void pop()
// {
//     if(top==-1)
//     {
//         printf("\nstack is empty");
//     }
//     else
//     {
//         printf("\ndeleted element is %d ",stack[top]);
//         top=top-1;
//     }
// }
// void display()
// {
//     int i;
//     if(top==-1)
//     {
//         printf("\n stack is empty");
//     }
//     else
//     {
//         printf("\n stack is ....\n");
//         for(i=top;i>=0;--i)
//         {
//             printf("%d\n",stack[i]);
//         }
//     }
// }