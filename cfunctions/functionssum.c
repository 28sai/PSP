#include<stdio.h>
void sum();
void sum(){
	int a,b;
	printf("enter two nums: ");
	scanf("%d%d",&a,&b);
	printf("the sumi is : %d",a+b);
}
int main(){
	sum();
}
