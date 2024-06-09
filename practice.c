#include<stdio.h>
#include<conio.h>
int main()
{
    int num,flag,rem,half,i,j;
    printf("Enter a number for chaking : ");
    scanf("%i",&num);
    for(j=1;j<num;j++)
    {
         flag=0;
        half=j/2;
        for(i=2  ;i<=half;i++)
        {
            rem=j%i;
            if(rem==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%i,\t",j);
        }
        // else
    // {
        // printf("Non Prime No.");
    // }

    }
    getch();
    return 0;
}