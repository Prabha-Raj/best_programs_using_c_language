#include<stdio.h>
#include<conio.h>
struct ram
{
    char a[10];
    int b;
    char c[4];
    char d[10];

};
int main()
{
    struct ram x[10];
    int i;
    for(i=0;i<2;i++)
    {
        printf("\nEnter namer :-  ");
        scanf("%s",&x[i].a);
        printf("Enter Marks :-  ");
        scanf("%i",&x[i].b);
        printf("Enter division :-  ");
        scanf("%s",&x[i].c);
        printf("Enter City :-  ");
        scanf("%s",&x[i].d);
    }
    printf("\n\nThe out are ...\n");
    for(i=0;i<2;i++)
    {
        printf("\n\nName       =%s",x[i].a);
        printf("\nMarks      =%i",x[i].b);
        printf("\nDivision   =%s",x[i].c);
        printf("\ncity       =%s\n",x[i].d);
    }
    getch();
    return 0;
}