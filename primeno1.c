#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem,flag,half,i,j;
    printf("Einter your number for checking prime no.  : ");
    scanf("%i",&num);
    for(i=1;i<=num;i++)
    {
        flag=0;
        half=i/2;
        for(j=2;half>=j;j++)
        {
            rem=i%j;
            if(rem==0)
            {
                flag=1;
                break;
            }
        }      
        if(flag==0)
        {
            printf("%i, ",i);
        }   
    }
    getch();
    return 0;
}
    
