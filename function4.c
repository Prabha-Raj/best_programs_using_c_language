#include<stdio.h>
#include<conio.h>
// void square(int a);
// void cube(int a);
int main()
{
    void square(int a);
    void cube(int a);
    int a;
    printf("Enter a number square & cube : ");
    scanf("%i",&a);
    square(a);
    cube(a);
    return 0;
    getch();

}
void square(int a)
{
    printf("Squre of %i = %i\n",a,a*a);
}
void cube(int a)
{
    printf("Cube of %i = %i\n",a,a*a*a);
}