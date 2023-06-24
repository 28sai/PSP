#include<Stdio.h>
int main(){
	int i,sum=0,avg;
	int a[5]={1,2,3,4,5};
	for(i=0;i<=5;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/5;
	printf("sum is%d",sum);
	printf("avg= %d",avg);
}
