#include<stdio.h>
int pallindrome(){
	int n,sum=0,rem;
	printf("enter any num: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n/=10;
	}
	printf("pallindrome is = %d",sum);
}
int main()
{
	pallindrome();
}
