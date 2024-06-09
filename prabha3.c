#include <stdio.h>  
int main()  
{  
    int ct=0,n=1,i=1,j=1;  
    while(n<10)  
    {  
    	ct=0;
    	i=1;
        j=n/2;    
        while(i<=j)  
        {  
            if(n/i==0)  
            {
            	ct++;
            }
            i++;   
            break;
        }  
        
        if(ct==0)  
        {  
            printf("%d ",n);    
        }  
        n++;  
	}
}  

