#include<stdio.h>
int main(){
	int n,*p;
	p=&n;
	printf("enter any num: ");
	scanf("%d",&n);
	if(*p%2==0)
	{
		printf("it is even");
	}
	else
	{
		printf("it is odd");
	}
}
