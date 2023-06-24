//fibonacci
#include<stdio.h>
int main(){
	int a=1,b=2,c,n,i;
	printf("enter any num:");
	scanf("%d",&n);
	printf("\t %d \t %d",a,b);
	
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("\t %d \t",c);
		a=b;
		b=c;
	}
}
