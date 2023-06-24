#include<stdio.h>
void swap(){
	int x,a,b;
	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);
	x=a;
	a=b;
	b=x;
	printf("a is %d and b is %d",a,b);
}
int main(){
	 swap();
}
