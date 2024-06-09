#include<stdio.h>
#include<conio.h>
int main()
{
    long  int rev,num,rem,Palindromeno;
    printf("Enter any Number of more than one digits : ");
    scanf("%ld",&num);
    Palindromeno=num;
    rev=0;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==Palindromeno)
    {
        printf("\nIt's Palindrome No.");
    }
    else
    {
        printf("\nIt's not a Palindrome No.");
    }
    getch();
    return  0;
}