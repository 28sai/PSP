#include<stdio.h>
int main(){
	int i,j,r;
	printf("enter rows: ");
	scanf("%d",&r);
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}
