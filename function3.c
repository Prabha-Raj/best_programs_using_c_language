#include<stdio.h>
#include<conio.h>
void sum(int a, int b)
{
    printf("Sum = %i\n",a+b);
}
void sub(int a, int b)
{
    printf("Sub = %i",a-b);
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%i %i",&a,&b);
    sum(a,b);
    sub(a,b);
    getch();
    return 0;
}