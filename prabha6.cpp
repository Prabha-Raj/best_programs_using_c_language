
// Break and Continue function .


#include<stdio.h>
#include<conio.h>
int main()
{
	int num,square;
	char  ans='y';
	
	while(ans=='y'||ans=='h'||ans=='g')
	{
		//printf("%i\n",a);
		printf("Enter your number for square : ");
		scanf("%i",&num);
		if(num>50)
		{	
			continue;
			//break;
		}
		square=num*num;
		printf("%i\n",square);
		printf("\nDo you want repeat ?  = ");
		scanf("%s",&ans);
	}
	printf("\n\tOK\n");
}
