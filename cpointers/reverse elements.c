#include<stdio.h>
int main(){
	int a[10],i,n,*p;
	p=a;
	printf("enter the size: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	p=&a[n-1];
	printf("the reverse elemetns are:");
	for(i=0;i<n;i++)
	{
		printf("%d",*p--);
	}
}
