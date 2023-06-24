#include<stdio.h>
int main(){
	int marks[10],i,n,sum=0,avg;
	printf("enter no of elements: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d",i+1);
		scanf("%d",marks[i]);
		sum=sum+marks[i];
		
	}
	avg=sum/n;
	printf("sum of arrays is %d",sum);
	printf("avg is %d:",avg);
}
