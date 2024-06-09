
#include<stdio.h>
void main()
{
	int count,num,rem,i,j,k,n;
	printf("\n  1).\t\tEnter that number where are print prime no. : ");
	scanf("%i",&n);
	printf("\n\n  2).\t\tAll Prime Numbers are out of Reng that you have given : \n\n\n");
	for(num=1;num<=n;num++)
	{
		count=0;
		k=1;
		i=2;
		j=num/i;
		while(k<=j)
		{
			rem=num%j;
			if(rem==0)
			{
				count++;
				//printf("%4i",count); //---->for printing Non Prime Numbers. 
				break;
			}
			k++;	
		}
		if(count==0)
		{
			printf("%4i",num); // ----> for printint Prime Numbers.
		}
	}
	
}
