#include<stdio.h>
main()
{
	int i,j,k,l,m;
		//printf("Enter a number ");
		//scanf("%i",&i);
	for(i=1;i<=100;i++)
	{
		j=i/2;
		k=2;
		l=0;
		while(k<=j)
		{
			m=i%k;
			if(m==0)
			{
				l=1;
				break;
			}
			k++;
		}
		if(l==0)
		{
			printf(" %2i",i);
		}
		
	}
		
}

