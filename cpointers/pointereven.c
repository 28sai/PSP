#include<stdio.h>
int main(){
	int n,*p;
	p=&n;
	printf("enter any num: ");
	scanf("%d",&n);
	if(*p%2==0)
	{
		printf("%d is even",*p);
	}
	else
	{
		printf("%d is odd",*p);
	}
}
