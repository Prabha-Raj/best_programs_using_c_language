#include<stdio.h>
#include<conio.h>
int call_by_value(int x);
int main()
{
    int a=9;
    printf("Value of a = %i before calling function\n",a);
    printf("Value of a = %i after calling funtion\n",call_by_value(a));
    getch();
    return 0;
}
int call_by_value(int x)
{
    return x+11;
}