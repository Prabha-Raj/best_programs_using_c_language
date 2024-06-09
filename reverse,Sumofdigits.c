#include<stdio.h>
#include<conio.h>
int main()
{
    long int sum,rev,num,rem;
    sum=0;
    rev=0;
    printf("Enter any number of more than one digit : ");
    scanf("%ld",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Sum of all digits are ==>  %ld\n",sum);
    printf("Reverse ==> %ld\n",rev);
    getch();
    return 0;
}
