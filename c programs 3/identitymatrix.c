#include<stdio.h>
int main(){
 	int i,j,r,c,a[3][3],x=1;
 	printf("r and c ");
 	scanf("%d%d",&r,&c);
 	printf("elements");
 	for(i=0;i<r;i++)
  	{
   		for(j=0;j<c;j++)
    	{
      		scanf("%d",&a[i][j]);
    	}
  	}
 	for(i=0;i<r;i++)
  	{
   		for(j=0;j<c; j++)
    	{
    		if(a[i][j]!=1&&a[j][i]!=0)
    		{
    			x=0;
    			break;
			}
   	 	}
  	}
  	if(x==1)
  	{
  		printf("iden ");
	}
	else
	{
		printf("not iden");
	}
}
