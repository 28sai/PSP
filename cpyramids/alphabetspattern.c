#include<stdio.h>
int main(){
	int i,rows,j;
	printf("rows: ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
}
