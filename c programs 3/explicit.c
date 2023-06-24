//explicit conversion
#include<stdio.h>
int main(){
	int a,b;
	float c;
	printf("enter values: ");
	scanf("%d%d",&a,&b);
	c=(float)a/(float)b;
	printf("vlue of c is:%f",c);
}
