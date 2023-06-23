#include<stdio.h>
int main(){
	int i,n,rem,rev=0;
	printf("enter any numbrer: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("the reverse of %d is %d",n,rev);
}
