#include<stdio.h>
int create(int size);
int display(int size);
int array[50];
int main()
{
    int size;
    printf("Enter Size of array : ");
    scanf("%i",&size);
    create(size);
    display(size);
}
int create(int size)
{
    printf("Enter all element : \n");
    for(int i=0; i<size; i++)
    {
        printf("array[%i] =\t",i);
        scanf("%i",&array[i]);
    }
}
int display(int size)
{
    printf("all elements of array are....\n");
    for(int i=0; i<size; i++)
    {
        printf("%i  ",array[i]);
    }
}