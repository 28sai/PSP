#include<stdio.h>
int noofdig(int n){
	static int c=0;
	if(n!=0){
	c++;
	noofdig(n/10);}
	return c;
}
int main(){
	int n,c;
	printf("enter a num: ");
	scanf("%d",&n);
	c=noofdig(n);
	printf("the no of digs is%d ",c);
}
