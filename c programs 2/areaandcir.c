//area and circumference
#include<stdio.h>
int main(){
	int a,cir,r;
	printf("enter radius: ");
	scanf("%d",&r);
	a=3.14*r*r;
	cir=2*3.14*r;
	printf("area is %d",a);
	printf("\ncircum is %d",cir);
}
