/*with argument without return*/
#include<stdio.h>
int sum(int a, int b)
{
	printf("enter values: ");
	scanf("%d%d",&a,&b);
	printf("sum is %d",a+b);
}
void main()
{
	int a,b;
	sum(a,b);
}
