#include<stdio.h>
int main(){
	int i,rows,j;
	printf("rows: ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
