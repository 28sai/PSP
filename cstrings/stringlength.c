#include<stdio.h>
int main(){
	char name[100];
	int l=0;
	printf("enter ur name: ");
	gets(name);
	while(name[l]!='\0')
	{
		l++;
	}
	printf("the length is %d",l);
}
