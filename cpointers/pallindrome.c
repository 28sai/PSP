#include<stdio.h>
int main(){
	int n,rem,rev=0,*p,*q,*r,x,*s;
	p=&n;
	q=&rem;
	r=&rev;
	s=&x;
	*s=*p;
	printf("enter any num: ");
	scanf("%d",&n);
	while(*p!=0)
	{
		*q=*p%10;
		*r=*r*10+(*q);
		*p=*p/10;
	}
	if(*r==*s)
	{
		printf("\n it si pallindrome");
	}
	else
	{
		printf("\n it is not");
		}	
}
