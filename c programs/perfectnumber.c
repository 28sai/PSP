#include<stdio.h>    
int main()  
{  
int n,rem,s=0,i,x;  
printf("number:");  
scanf("%d",&n); 
x=n;
for(i=1;i<n;i++)  
         {  
            rem=n%i; 
		    if(rem==0)  
           {  
               s=s+i;  
           }  
        }  
		if(s==x)  
      		printf(" %d is a Perfect Number",s); 
      	else  
            printf("\n %d is not a Perfect Number",s);
}
