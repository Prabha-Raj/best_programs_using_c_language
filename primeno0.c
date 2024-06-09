#include<stdio.h>
#include<conio.h>
int main()
{
    int num,flag,rem,half,i;
    printf("Einter any number for chaking prime and Non prime no. : ");
    scanf("%i",&num);
    flag=0;
    half=num/2;
    for(i=2;half>=i;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Prime No.");
    }
    else
    {
        printf("Non Prime No.");
    }
    getch();
    return 0;
}