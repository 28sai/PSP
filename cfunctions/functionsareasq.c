#include<stdio.h>
int area(){
	int a;
	printf("enter the side: ");
	scanf("%d",&a);
	return a*a;
}
void main(){
	int areaofsq;
	areaofsq=area();
	printf("%d",areaofsq);
}
