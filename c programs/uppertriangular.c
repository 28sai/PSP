#include<stdio.h>
int main(){
 	int i,j,r,c,a[3][3];
 	printf("rows and cols:  ");
 	scanf("%d%d",&i,&j);
 	printf("\n elements \n");
 	for(r=0;r<i;r++)
  	{
   		for(c=0;c<j;c++)
    	{
      		scanf("%d ",&a[r][c]);
    	}
  	}
     
 	for(r=0;r<i;r++)
  	{
  		printf("\n");
   		for(c=0;c<j;c++)
    	{
    		if(c>=r)
    		{
    			printf("%d \t",a[r][c]);
			}
			else
			{
				printf("0  ");
			}
   	 	}
  }
}

