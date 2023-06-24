#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("enter any num: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
			count++;
		}
		
		
	}
	printf("count is :%d",count);
}
