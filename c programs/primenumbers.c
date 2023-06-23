#include<stdio.h>
int main(){
	int n,i,s,j;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		s=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				s++;
		}
		if(s==2)
			printf("%d",i);
	}
}
