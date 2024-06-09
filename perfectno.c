#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum,i;
    printf("Enter any number : ");
    scanf("%i",&num);
    sum=0;
    for(i=1;num>i;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    {
        printf("It's Perfect Number ");     // 1 to 10,000 only four numbers are Perfect Number that are   6,   28 ,    496,    8128
    }
    else
    {
        printf("It's not a Perfect Number ");
    }
    getch();
    return 0;
}