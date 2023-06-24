#include<stdio.h>
int gcd(int x, int y){
	if(y!=0)
	return gcd(y,x%y);
	else
	return x;
}
int main(){
	int x,y,g;
	printf("enter two nums: ");
	scanf("%d%d",&x,&y);
	g=gcd(x,y);
	printf("the gcd of %d and %d is %d",x,y,g);
}
