#include<stdio.h>
int main(){
	char name[100];
	int l=0,c=0;
	printf("enter ur name: ");
	gets(name);
	while(name[l]!='\0')
	{
		if(name[l]=='a'||name[l]=='e'||name[l]=='i'||name[l]=='o'||name[l]=='u')
		{
			c++;
		}
		l++;
	}
	printf("the vowels are %d",c);
	printf("the length is %d",l);
	printf("the consoants are %d",l-c);
}
