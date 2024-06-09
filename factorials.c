#include<stdio.h>
#include<conio.h>
int main()
{
    long int num,fact=1,i;
    printf("Enter a number for factorial : ");
    scanf("%ld",&num);
    if(num<0)
    {
        printf("Factorial is not define for negative numbers.");
    }
    else
    {
        if(num==0)
        {
            printf("Factorial of %ld = %ld ",num,fact);
        }
        else
        {
            for(i=1;num>=i;i++)
            {
                fact=fact*i;
            }
            printf("Factorial of %d = %ld",num,fact);
        }
    }
     //  printf("Factorial of %d = %ld",num,fact);
    return 0;
    getch();
}