#include<stdio.h>
int evenodd(int n)
{
	printf("enter any num: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
void main()
{
	int n,x;
	
	x=evenodd(n);
	if(x==1)
	{
		printf("evn");
	}
	else
	{
		printf("odd");
	}
}
