#include<stdio.h>
#include<math.h>
int main(){
	int n,i,fact=1,sign=-1;
	float sum,x;
	printf("enter any nim: ");
	scanf("%d",&n);
	printf("angle");
	scanf("%f",&x);
	x=(x*3.14)/180;
	printf("angle in rad: %f",x);
	for(i=2;i<=n;i+=2)
	{
		fact=fact*i*(i-1);
		sum=sum+sign*pow(x,i)/fact;
		sign=-sign;
	
	}
	printf("\n sum:%f",sum);
}
