#include<stdio.h>
#include<conio.h>
main()
 {
	//clrscr();
	int fact=1,num;
	printf("Enter a number for factorial : ");
	scanf("%i",&num);
	
	while(num>0)
	{
		fact=fact*num;
		num--;
	}
	printf("factorial = %i",fact);
	return 0;
}
