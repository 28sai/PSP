#include<stdio.h>
int palindrome(int n){
	int i,rem,rev=0,a;
	printf("enter any num: ");
	scanf("%d",&n);
	a=n;
	for(i=0;i<=n;i++)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}

	if(rev==a)
	{
		printf("\n it si pallindrome");
	}
	else
	{
		printf("\n it is not");
		}	
}
int main(){
	int n;
	palindrome(n);
}
