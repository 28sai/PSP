#include<stdio.h>
int avg(int a,int b, int c, int d, int e)
{
	int avg,s;
	printf("enter marks: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	s=a+b+c+d+e;
	avg=s/5;
	printf("the sum is %d",s);
	printf("avg is %d",avg);
	
}
void main(){
	int a,b,c,d,e;
	avg(a,b,c,d,e);
}
