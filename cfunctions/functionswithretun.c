/*without argument with return*/
#include<stdio.h>
int sum(){
	int a,b;
	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);
	return a+b;
}
void main(){
	int result;
	result =sum();
	printf("%d",result);
}


 
