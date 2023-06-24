#include <stdio.h>
int arms(int n){
    int i,rem,sum,x;
	printf("enter anu num: ");
	scanf("%d",&n);
	x=n;
         while(n!=0){
             rem=n % 10;
             n=n/10;
             sum=sum+(rem*rem*rem);
         }
         if(sum==x){
		 
             printf("%d is armstrong num",x);
    }
    else{
    	printf("not");
	}
}
int main(){
	int n;
	arms(n);
}

