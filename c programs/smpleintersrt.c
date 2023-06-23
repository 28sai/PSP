//simple interest
#include<stdio.h>
int main(){
	int p,r,t,si;
	printf("values: ");
	scanf("%d%d%d",&p,&r,&t);
	si=(p*r*t)/100;
	printf("the si is : %d",si);
}
