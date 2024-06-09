#include<stdio.h>
#include<conio.h>
int square(int a);
int cube(int a);
int main()
{
    // int square(int a);
    // int cube(int a);
    int a,b;
    printf("Enter a number square & cube : ");
    scanf("%i",&a);
    printf("Square of %i = %i\n",a,square(a));
    printf("Cube of %i = %i\n",a,cube(a));
    return 0;
    getch();

}
int square(int a)
{
    return a*a;
}
int cube(int a)
{
    return a*a*a;
}