#include<stdio.h>
int main(){
	int n,i,a[10];
	printf("size");
	scanf("%d",&n);
	printf("elements: ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%2==0)
		{
			printf("even elements are %d\n",a[i]);
		}
		else
		{
			printf("odd elements are:%d \n",a[i]);
		}
	}
	
}
