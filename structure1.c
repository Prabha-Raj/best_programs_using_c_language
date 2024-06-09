#include<stdio.h>
#include<conio.h>
struct details
{
    char name[20];
    char status[10];
    char collagename[30];
    char address[50];
    char division[10];
    long int rollno;
    int marks;
    int persentage;
};
int main()
{
    struct details student[10];
    int num,i;
    printf("How many details of students input in this structure : ");
    scanf("%i",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter name of students :- ");
        scanf("%s",&student[i].name);
        printf("Enter address :- ");
        scanf("%s",&student[i].address);
        printf("Enter collage name :- ");
        scanf("%s",&student[i].collagename);
        printf("Enter Roll no. :- ");
        scanf("%ld",&student[i].rollno);
        printf("Enter Marks  :- ");
        scanf("%i",&student[i].marks);
        printf("Enter Persentage  :- ");
        scanf("%i",&student[i].persentage);
        printf("Enter division  :- ");
        scanf("%s",&student[i].division);
        printf("Enter status  :- ");
        scanf("%s",&student[i].status);
    }
    printf("\n\nYour output Are.....\n\n\n");
    for(i=0;i<num;i++)
    {
          printf("\nEnter name  :- %s ",student[i].name);
          printf("\nEnter address :- %s",student[i].address);
          printf("\nEnter coleagename  :- %s ",student[i].collagename);
          printf("\nEnter rollno  :- %ld ",student[i].rollno);
          printf("\nEnter marks  :- %i ",student[i].marks);
          printf("\nEnter persentage  :- %i",student[i].persentage);
          printf("\nEnter division  :- %s ",student[i].division);
          printf("\nEnter status  :- %s ",student[i].status);
    }
    getch();
    return 0;
}