#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char *str;
    fp=fopen("Ram.txt","a");
    if(fp==NULL)    
    {
        printf("Can't  open file ");
        printf("\n\tPress any key to exit...");

    }
        printf("Enter any text...");
        scanf("%s",str);
        fputs(str,fp);
        fputs("\n",fp);
        fclose(fp);
        printf("\n\nPress any key to exit....");
    return 0;
}