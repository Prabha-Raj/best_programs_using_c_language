// WAP to delete an element from the spefified index in the array.

#include<stdio.h>
#include<conio.h>
#define size 20
void main()
{
    int array[size],position,numofelement;
    printf("Enter The Number of elements array : ");
    scanf("%d",&numofelement);
    printf("\nEnter %d elements :\n ",numofelement);
    for(int i=0;i<numofelement;i++)
    {
        printf("Array[%d] =\t",i);
        scanf("%d",&array[i]);
    }
    printf("\nEnter the location where you wish to delete element \n ");
    scanf("%d",&position);
    if(position>numofelement)
    {
        printf("\nDeletion is not posible\n");
    }
    else if(position<0)
    {
        printf("Deletion is not posible\n");
    }
    else 
    {
        for(int i=position-1;i<numofelement;i++)
        {
            array[i]=array[i+1];
        }
    }
    printf("\n Resultant array is \n");
    for(int i=0;i<numofelement-1;i++)
    {
        printf("array[%d] =\t%d\n",i,array[i]);
    }
    getch();
}

