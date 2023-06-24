#include<stdio.h>
#include<string.h>
int main(){
	char x[100],y[100];
	int c;
	printf("entr ur name: ");
	gets(x);
	printf("enter ur 2nd name: ");
	gets(y);
	c=strcmp(x,y);
	if(c>0)
	{
		printf("%s is big",x);
	}
	else if(c<0)
	{
		printf("%s is big",y);
	}
	else
	{
		printf("both are same");
	}
}
