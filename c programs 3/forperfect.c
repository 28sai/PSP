#include<stdio.h>
int main(){
	int n,i,s=0;
	printf("enter any num: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s+=i;
		}
	}
	if(s==n)
	{
		printf("it is pn");
	}
	else
	{
		printf("it is not");
	}
}
