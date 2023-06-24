#include<stdio.h>
int main(){
	int values[5],i;
	printf("enter the 5 vslue: ");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&values[i]);
		
	}
	printf("displaying intergers: ");
	for(i=1;i<=5;i++)
	{
		printf("%d \n",values[i]);
	}
}
