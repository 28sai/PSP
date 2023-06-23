#include<stdio.h>
int main(){
	int i,s=0;
	printf("the first five natural numbers: ");
	for(i=1;i<=5;i++){
		s=s+(i*i);
		printf("%d",i);
	}
	printf("\nthe sum is %d\n",s);
}
