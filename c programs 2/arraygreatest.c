#include<stdio.h>
int main(){
	int a[20],i,n,min,max;
	printf("enter num of elemts: ");
	scanf("%d",&n);
	printf("elements in array:");	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);	
}
		
			min=max=a[0];
			for(i=1;i<=n;i++)
			{
			
			if(max>a[i])
			{
				printf("max is %d",a[i]);
			}
			if(min>a[i])
			{
				printf("min is %d",a[i]);
			}
		}
	}
	
	

