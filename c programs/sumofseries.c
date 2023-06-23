#include<stdio.h>
int main(){
	int i,n;
	float x,sum=1,t=1,d;
	printf("enter any num: ");
	scanf("%d",&x);
	printf("no of terms: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		d=(2*i)*(2*i-1);
		t= (-t)*x*x/d;
		sum=sum+t;
	}
	printf("no of terms=%d\n",n);
	printf("the sum is =%f\n",sum);
	printf("the value of x is=%f\n",x);
}
