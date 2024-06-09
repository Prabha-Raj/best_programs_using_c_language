#include<stdio.h>
#include<conio.h>
int main()
{
    int Marks[100],num,i,sum,largest=0;
    printf("How many Marks do you want to input :  ");
    scanf("%i",&num);
    for(i=0;i<num;i++)
    {
        printf("Mark = ",i);
        scanf("%i",&Marks[i]);
    }
    printf("Your Marks are ...\n\n");
    for(i=0;i<num;i++)
    {
        printf("Marks[%i] = %i\n",i,Marks[i]);
        sum=sum+Marks[i];
        if(largest<Marks[i])
        {
            largest=Marks[i];
        }
    }
    printf("\nYour total Marks are ===> %i\n",sum);
    printf("Your Largest Marks are ==> %i",largest);
    getch();
    return 0;
}