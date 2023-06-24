//43
#include<stdio.h>
int arm(int n){
	int rem,arm=0,x;
	printf("enter any num:");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		arm=arm+(rem*rem*rem);
		n=n/10;
	}
	if(arm==x)
	{
		printf("it is armstrong");
	}
	else
	{
		printf("it is not");
	}
}
void main(){
	int n;
	
	arm(n);
}
