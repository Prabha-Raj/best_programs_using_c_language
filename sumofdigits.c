#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem,sum;
    sum=0;
    printf("Enter any more then one digits number :  ");
    scanf("%i",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum = %i",sum);
    getch();
    return 0;
}