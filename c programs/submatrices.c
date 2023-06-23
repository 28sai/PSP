#include<stdio.h> 
int main(){
 	int i,j,r,c,a[3][3],b[3][3],x[3][3];
 	printf("r and c: ");
 	scanf("%d%d",&r,&c);
 	printf("\elements\n");
 	for(i=0;i<r;i++)
  	{
   		for(j=0;j<c;j++)
    	{
      		scanf("%d",&a[i][j]);
    	}
  	}
 	printf("elements");
 	for(i=0;i<r;i++)
  	{
   		for(j=0;j<c;j++)
    	{
      		scanf("%d",&b[i][j]);
    	}
  	}
  		for(i=0;i<r;i++)
  	{
  		for(j=0;j<c;j++)
  		{
  			x[i][j]=a[i][j]-b[i][j];
		  }
	  }
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  		printf("%d",x[i][j]);
		  }
	  }
}
