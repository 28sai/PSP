#include<stdio.h>
int cosxser(){
	int i,n,x,t=1,sum=1;
	printf("enter the num: ");
	scanf("%d",&n);
	printf("enter tha angle: ");
	scanf("%d",&x);
	x=(x*3.14)/180;
	for(i=1;i<=n;i++)
	{
		t=t*(-i)*x*x/(2*i*(2*i-1));
		sum=sum+t;
	}
	printf("teh value of cosx is: %d",sum);
}
int main(){
	cosxser();
}
