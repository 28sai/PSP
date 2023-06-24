#include<stdio.h>
#include<string.h>
int main(){
	char x[100],y[100];
	printf("enetr ur name: ");
	gets(x);
	strcpy(y,x);
	printf("string copied %s",y);
}
