#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,num,flag,n;
    printf("Einter your number for checking prime no.  : ");
    scanf("%i",&n);

    for(num=1;num<=n;num++)
    {
        flag=0;
        j=num/2;
        for(i=2;i<=j;i++)
        {
            k=num%i;
            if(k==0)
            {
                flag=1;
                break;
            }
        }      
        if(flag==0)
        {
            printf("%i,  ",num);
        }  
    }
    getch();
    return 0;
}
    