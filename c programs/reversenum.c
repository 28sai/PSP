#include<stdio.h>
int reverse(int n){
	int r,s=0;
	printf("enter any num: ");
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
	s=(s*10)+r;
	n=n/10;
}	
printf("%d",s);
}
int main(){
	int n;
	reverse(n);
}
