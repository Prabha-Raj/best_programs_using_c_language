#include<stdio.h>
#include<conio.h>
int fact(int x)
{
    if(x==1)
    {
        return x;
    }
    else
    {
        return x*fact(x-1);
    }
}
int main()
{
    int  num;
    printf("Enter any number for factorial : ");
    scanf("%i",&num);
    printf("Factorial of %i = %i\n",num,fact(num));
    getch();
    return 0;
}
