#include<Stdio.h>
int main(){
	int i,n,fact=1;
	printf("enter nay num: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;	
	}
	printf("factorial is %d",fact);
}
