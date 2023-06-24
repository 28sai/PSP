#include<stdio.h>
int sum(int a, int b)
{
	printf("ennter teo nums; ");
	scanf("%d%d",&a,&b);
	return a+b;
}
void main()
{
	int a,b,result;
	result=sum(a,b);
	printf("%d",result);
}
