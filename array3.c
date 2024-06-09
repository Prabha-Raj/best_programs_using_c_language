// WPA to insert element in an array.

#include<stdio.h>
#include<conio.h>
#define MAXSIZE 50
int main()
{
    int array[MAXSIZE],i,n;
    printf("\nEnter Size of array : ");
    scanf("%d",&n);
    printf("\nEnter %d element in array : \n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter a element =\t",i);
        scanf("%d",&array[i]);
    }
    printf("\n\n All elements in array are : ");
    for(i=0;i<n;i++)
    {
        printf("array[%d] =\t%d\n",i,array[i]);
    }
    getch();
}