#include<stdio.h>
#include<conio.h>
int main()
{
	int i=3,term1=0,term2=1,num,nextterm;
	printf("Einter number of fibonacci serease : ");
	scanf("%i",&num);
	printf("fibonacci serise is ..\n\n\t\t");
	printf("%i, %i, ",term1,term2);
	while(num>=i)
	{
		nextterm=term1+term2;
		printf("%i, ",nextterm);
		term1=term2;
		term2=nextterm;
		i++;
	}
	return 1;
	
}
