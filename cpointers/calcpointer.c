#include<stdio.h>
int main(){
	char op;
	int *p,*q,a,b;
	p=&a;
	q=&b;
	printf("enter any operator: ");
	scanf("%c",&op);
	printf("enter two nums: ");
	scanf("%d%d",&a,&b);
	switch(op){
		case '+':
			printf("%d+%d=%d",*p,*q,*p+*q);
			break;
		case '-':
			printf("%d-%d=%d",*p,*q,*p-*q);
			break;
		case '*':
			printf("%d*%d=%d",*p,*q,(*p)*(*q));
			break;
		case '/':
			printf("%d+%d=%d",*p,*q,(*p)/(*q));
			break;
	}
}
