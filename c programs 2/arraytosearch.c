#include<stdio.h>
int main(){
	int i,a[5],n,limit;
	printf("enter the limit: ");
	scanf("%d",&limit);
	printf("enter the elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		}	
		printf("to serach eneter any num: ");
		for(i=0;i<5;i++)
		{
			scanf("%d",&n);
			if(a[i]=n)
			{
				printf("element is there");
			}
			else
			{
				printf("not there");
			}
		}
}
