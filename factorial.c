#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num;
    long int fact=1;
    printf("Enter a intiger number for factorial : ");
    scanf("%d",&num);
    printf("your entered number is  %i\n",num);
    for(i=1; i<num; num--)
    {
        fact=fact*num;
    }
    printf("Factorial of %i = %ld",num,fact);
}