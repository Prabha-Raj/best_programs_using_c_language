#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int i,j;
	char ch1,ch2='A';
	for(i=1;i<=9;i++){
		ch1='a';
		for(j=1;j<=i;j++){
		//	printf("%3i",j);
		//	printf("$  ");
			printf("%c  ",ch1);
			ch1++;
			ch2++;
		}
		printf("\n");
	}
	getch();
}
