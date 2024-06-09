#include<stdio.h>
#include<conio.h>
int main()
{
    int a,*b;
    b=&a;
    a=8;
    printf("Value of a = %i\n",a);
    printf("Value of b = %i\n",*b);
    a=a+10;
    printf("Value of a after adding 10 in a = %i\n",a);
    printf("Value of b after adding 10 in a = %i\n",*b);
    *b=*b-4;
    printf("Value of a after subtraction 4 in b = %i\n",a);
    printf("Value of b after subtraction 4 in b = %i\n",*b);


}