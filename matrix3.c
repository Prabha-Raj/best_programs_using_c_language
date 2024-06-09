#include<stdio.h>
#include<conio.h>
int main()
{
    int row,colomn,matrix[10][10],i,j,sum;
    printf("Please Enter Row & Colomn : ");
    scanf("%i %i",&row,&colomn);
    for(i=0;i<row;i++)
    {
        for(j=0;j<colomn;j++)
        {
            printf("Enter element (%i,%i) = ",i,j);
            scanf("%i",&matrix[i][j]);
        }
    }
    printf("\n your Mtrix is ...\n");
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<colomn;j++)
        {
            printf("%i\t",matrix[i][j]);
            sum=sum+matrix[i][j];
        }
        printf("\t=\t%i\n\n",sum);
    }
    getch();
    return 0;
}