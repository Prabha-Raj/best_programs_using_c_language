#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=9;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			printf("%i ",j);
		}
		printf("\n");
	}
	getch();
	
}
