#include<stdio.h>
int main(){
	int avg,s=0,i,sub[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter marks: ");
		scanf("%d",&sub[i]);
	}
	for(i=0;i<5;i++)
	{
		s=s+sub[i];
	}
	printf("the sum is %d \n",s);
	avg=s/5;
printf("the avg is %d",avg);
}
