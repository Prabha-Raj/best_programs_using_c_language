#include<stdio.h>
#include<conio.h>
int Sum(int arr[], int n)
{
    int i,s=0;
    for(i=0;i<n;i++);
    {
        s=s+arr[i];
    }
    return s;
}
int main()
{
    int Marks[100],num,i,sum=0,largest=0;
    printf("How many Marks do you want to input :  ");
    scanf("%i",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter Marks = ",i);
        scanf("%i",&Marks[i]);
    }
    printf("\nYour Marks are ...\n");
    for(i=0;i<num;i++)
    {
        printf("Marks[%i] = %i\n",i,Marks[i]);
        // sum=sum+Marks[i];
        // if(largest<Marks[i])
        // {
        //     largest=Marks[i];
        // }
    }
    sum=Sum(Marks,num);
    printf("\nYour total Marks are ===> %i\n",sum);
    // printf("Your Largest Marks are ==> %i",largest);
    getch();
    return 0;
}