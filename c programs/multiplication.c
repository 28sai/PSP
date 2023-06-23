#include<stdio.h>
int main(){
	int i,a,n;
	printf("enter nums: ");
	scanf("%d",&n);
	i=1;
	while(i<10)
	{
		i++;
		printf("%d*%d=%d \n",n,i,n*i);
	}
}
