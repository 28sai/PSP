#include<stdio.h>
int main(){
	int n,r,rev,*p,*q,*t;
	p=&n;
	q=&r;
	t=&rev;
	
	printf("enter any num: ");
	scanf("%d",&n);
	while(*p!=0)
	{
		*q=*p%10;
		*t=*t*(10)+*q;
		*p=*p/10;
	}
	printf("the rev num is %d",*t);
}
