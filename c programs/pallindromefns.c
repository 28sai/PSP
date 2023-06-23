#include<Stdio.h>
int main()
{
	int n;
	printf("enter num: ");
	scanf("%d",&n);
	palindrome(n);
}
int palindrome(int n)
{
	int x,r=0,d;
	x=n;
	while(n>0)
	{
		d=n%10;
		r=(r*10)+d;
		n/=10;
	}
	if(r==x)
	{
		printf("pallindome");
	}
	else
	{
		printf("not pallindrome");
	}
}
