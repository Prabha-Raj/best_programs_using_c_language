#include<stdio.h>
#include<conio.h>
int main()
{
    int rev,rem,num;
    rev=0;
    printf("Enter ane number of more than one digit : ");
    scanf("%i",&num);
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse => %i ",rev);
    getch();
    return 0;
}