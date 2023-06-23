#include<stdio.h>
	int power(int a,int b){
		int x;
		x=pow(a,b);
		printf("%d",x);
	}
int main(){
	int x,y;
	printf("enter two nums: ");
	scanf("%d%d",&x,&y);
	printf("x^y is: ");
	power(x,y);
}
