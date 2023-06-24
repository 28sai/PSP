#include<stdio.h>
int fibo(int n){
	if(n<=1)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}
int main(){
	int n,i;
	printf("enter any num: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d",fibo(n));
	}
}
