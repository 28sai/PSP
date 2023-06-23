#include<stdio.h>
int main()
{
	int r,i,j=1,s=0;
	printf("enter rows: ");
	scanf("%d",&r);
	
    for(i=1;i<=r;i++)
	{
		printf("%d %d %d\n",i,i*i,i*i*i);
	  }
}
