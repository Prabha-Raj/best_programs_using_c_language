#include<stdio.h>
#include<conio.h>
int call_by_refrence(int *x);
int main()
{
    int a=22;
    printf("value of a = %i before calling funtion\n",a);
    printf("value of a = %i after calling funtion\n",call_by_refrence(&a));
    getch();
    return 0;
}
int call_by_refrence(int *x)
{
    return *x+8;
}