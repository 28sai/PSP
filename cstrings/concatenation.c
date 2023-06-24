#include<stdio.h>
#include<string.h>
int main(){
	char x[100],y[100];
	printf("entrer ur name: ");
	gets(x);
	gets(y);
	strcat(x,y);
	printf("sttring after concatenation %s",x);
}
