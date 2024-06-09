#include<stdio.h>
#include<conio.h>
int main()
{
	int choice,count;
	char ch,ch1;
//	printf("Enter Roll No. : ");
//	scanf("%i",&rollno);
	while(choice<=2)
	{
		printf("\n1.\t\t\tSquare\n\n");
		printf("2.\t\t\tTable\n\n");
		printf("Enter your choice : ");
		scanf("%i",&choice);
		
		switch(choice)
		{
			case 1:
			{
				int num;
				printf("\n\nEnter a number for square : ");
				scanf("%i",&num);
				printf("\nsqure =  %i",num*num);
				break;
			}
			case 2:
			{	
				int num1,num2;
				printf("\n\nEnter a number for Table : ");
				scanf("%i",&count);
				for(num1=1;num1<=10;num1++)
				{
					num2=count*num1;
					printf("%i X %i\t=\t%i\n",count,num1,num2);
				}
			}	
		}
	}
	
}
