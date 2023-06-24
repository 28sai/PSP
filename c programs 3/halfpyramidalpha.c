#include<stdio.h>
int main(){
	int i,j,ch;
	for(i=1;i<=5;i++)
	{
		ch='a';
		for(j=1;j<=i;j++)
		{
			printf("%c",ch++);
		}
		printf("\n");
	}
}
