//bitwise operators
#include<stdio.h>
int main(){
	int a,b;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	printf("\nand %d",a&&b);
	printf("\nor %d",a||b);
	printf("\nxor %d",a^b);
	printf("\nls %d",a<<b);
	printf("\nrs %d",a>>b);
}
