#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("Ram.txt","r+");
    if(fp==NULL)
    {
        printf("Can't open file ");
        printf("\n\t Press any key to exit...");
        getch();
        exit(0);
    }
    else
    {
        printf("The content of file are ..\n");
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            printf("%c",ch);
            ch=fgetc(fp);
        }
        fclose(fp);
        printf("\n\nPress any key to exit...");
        getch();
    }
}