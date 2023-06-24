#include<stdio.h>
int main(){
	char name[100],name2[100];
	int l=0,i=0,j=0;
	printf("enter ur name: ");
	gets(name);
	while(name[i]!='\0')
	{
		l++;
		i++;
	}
	l=l-1;
	while(l>=0)
	{
		name2[j]=name[l];
		j++;
		l--;
	}
	name2[j]='\0';
	puts(name2);
}
