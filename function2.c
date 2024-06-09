#include<stdio.h>
#include<conio.h>
int sum(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%i %i",&a,&b);
    printf("Sum = %i\n",sum(a,b));
    printf("Sub = %i",sub(a,b));
    getch();
    return 0;
}