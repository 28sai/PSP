#include<stdio.h>
int main(){
	int a[10],*p,n,i;
	p=a;
	printf("enter the size of an array: ");
	scanf("%d",&n);
	printf("enter array elemts: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("the array elemts are: ");
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}
