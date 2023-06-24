#include<stdio.h>
void fibonacci()
{
	int a=1,b=2,c,n,i;
	printf("enter any num: ");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		
	}
}
	int main(){
		fibonacci();
	}

