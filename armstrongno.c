#include<stdio.h>
#include<conio.h>
int main()
{
    long int armstrongno,num,arm,rem;
    printf("Enter any number of more than one digit : ");
    scanf("%ld",&num);
    arm=0;
    armstrongno=num;
    while(num>0)
    {
        rem=num%10;                               
        arm = arm + rem*rem*rem;                // only four numbers are armstrong no. that are  153,  370,  371,  407.
        num=num/10;
    }
    if(arm==armstrongno)
    {
        printf("It's Armstrong Number");
    }
    else
    {
            printf("It's not a Armstrong Number");
    }
    getch();
    return 0;
}