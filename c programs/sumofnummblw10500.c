//11th question
#include<stdio.h>
int main(){
	int s=0,i;
	for(i=10;i<=500;i++)
	{
		if(i%3==0&&i%5==0)
		{
			printf("%d\n",i);
			s=s+i;
		}
		
	}
	printf("the sum is %d",s);
}
